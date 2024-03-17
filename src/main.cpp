#include <Arduino.h>
#include <UMIDI.h>
#include "Gates.h"
#include "ModeSelector.h"
#include "LEDs.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"
#include "Constants.h"
// #include "Mode0.h"
#include "Mode1.h"
#include "Mode2.h"
#include "LEDController.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Function to calculate the size of an array
template<typename T, size_t N>
constexpr size_t arraySize(T(&)[N]) {
    return N;
}

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
// Define the pins for the encoder
#define ENCODER_PINA PB13
#define ENCODER_PINB PB14
#define ENCODER_BUTTON PB12
// Define the pins for the clock and reset
#define CLOCK_PIN PB15
#define RESET_PIN PA8
// Define the pin for the tempo LED
#define TEMPO_LED PA11
// Define the pins for the gates
int pins[] = {PA15, PB3, PB4, PB5}; // Example pins
// constexpr int numPins = sizeof(pins) / sizeof(pins[0]); // Calculate the number of pins
constexpr int numPins = arraySize(pins);
Gates gates = Gates(pins, numPins); // Create an instance of Gates
// Define the pins for the LEDs
int ledPins[] = {PB6, PB7, PB8, PB9}; // Placeholder pin numbers for LEDs
int numLedPins = arraySize(ledPins);

// Create an instance of LEDs
// Tempo LED is part of EurorackClock class to make this file cleaner.
LEDs leds = LEDs(ledPins, numLedPins); // Create an instance of LEDs

// const int NUM_MIDI_CHANNELS = 16;
const int NUM_LEDS = 8;

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA;
int encDTPin = ENCODER_PINB;
int encButtonPin = ENCODER_BUTTON;

// bool doublePressHandled;
// bool selectingTempo = false;
bool inModeSelection = false;
// bool singlePressHandled = false;
// static int previousMode = -1; // used with blinking in mode selection
// static int previousChannel = -1; // used with blinking in channel selection
int intensity = 255; // Default intensity for LEDs
// const byte total_modes = 3;
// int selectedChannel = 9; // MIDI channels are 0-15
// int confirmedChannel = 9; // MIDI channels are 0-15
// bool inChannelSelection = false;
// bool inDivisionSelection = false;
bool isInSelection = false; // Used to prevent multiple presses from being handled
// int selectedGate = 0;
// int clockDivisions[] = {1, 2, 4, 12, 24, 48};
// int numClockDivisions = arraySize(clockDivisions);
// int tempoIncrement = 1;
// const int minTempo = 20;
// const int maxTempo = 340;
// bool externalTempo = false;
unsigned long lastFlashTime = 0;
// static int divisionIndex = 4;

const int musicalIntervals[] = {1, 2, 4, 8, 16, 32, 3, 6, 12, 24, 48};
const int musicalIntervalsSize = arraySize(musicalIntervals);

int total_pages = 16 / leds.numLeds; // Calculate total pages based on number of LEDs
int min_intensity = 64; // Set minimum intensity to 25% (64 out of 255)
int intensity_step = (255 - min_intensity) / (total_pages - 1); // Calculate intensity step

// Create an instance of the Encoder class
Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin);

// Create an instance of the LEDController class
LEDController ledController(leds);

// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN, TEMPO_LED, gates, leds);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(RX_PIN, TX_PIN, clock, gates, leds);

// Mode Classes and ModeSelector
ModeSelector& modeSelector = ModeSelector::getInstance();
Mode* currentMode = nullptr;
// Mode0 mode0(encoder, gates, ledController, clock, midiHandler);
Mode1 mode1(encoder, gates, ledController, midiHandler);
Mode2 mode2(encoder, gates, ledController, midiHandler);


// Function declarations
void handleLongPress();
void handleDoublePress();
void handleSinglePress();
void handleChannelSelection();
void handleModeSelection();
int handleCyclingSelectionDirection(int currentValue, int maxValue, Encoder::Direction direction);
int handleModeSelectionDirection(int currentMode, int totalModes, Encoder::Direction direction);
void setLEDState(int ledIndex, bool state, bool blinkFast = false, bool blinkSlow = false);
// void handleEncoderMode0();
void handleTempoSelection();
void encoderReadAndHandleButton();
void handleSelectionStates();
void handleModeSpecificFunctionality();
void clockAndTick();


void setup() {
    // Enable debugging
    Debug::isEnabled = true;

    // Initialize serial communication
    Serial.begin(9600);
    Serial.println("Entered setup() function");
    
    // Initialize the MIDIHandler
    midiHandler.begin();

    // Set the MIDIHandler to listen to all channels
    midiHandler.setChannel(-1);

    // Start the clock and set the initial tempo
    clock.setup();
    clock.setTempo(120.0, 4); // Set the tempo to 120 BPM with internal 4 PPQN

    // ------- Set the initial mode -------
    // IMPORTANT: Add the modes to the ModeSelector in order, so that the indices match with the mode numbers.
    // modeSelector.addMode(nullptr);
    modeSelector.addMode(&mode1);
    modeSelector.addMode(&mode2);
    modeSelector.setLedController(ledController);
    modeSelector.setEncoder(encoder);
    modeSelector.setMode(0);
    currentMode = modeSelector.getCurrentMode();
    // // Run the setup function for the default mode
    // // NOTE: ONLY the default mode will execute this. If you have things that need to be set up for other modes,
    // // you will need to call the setup function for those modes here.
    currentMode->setup();

    delay(1000);

    leds.begin(); // Initialize LED pins
    gates.begin(); // Initialize gate pins
    encoder.begin(); // Initialize encoder pins

    // gates.setSelectedGate(selectedGate);
    
    if (Debug::isEnabled) {
        DEBUG_PRINT("Finished setup() function");
    }
}

void loop() {
    // encoderReadAndHandleButton();
    // handleSelectionStates();

    // // Handle mode-specific functionality
    // if (!inModeSelection && !selectingTempo && !inChannelSelection) {
    //     handleModeSpecificFunctionality();
    // }

    ledController.updateBlinking();
    currentMode->update();
}

// void clockAndTick() {
//     // Handle clock pulses
//     if (ModeSelector::getInstance().getMode() == 0) {
//         currentMode->tick();
//     }
// }

// void encoderReadAndHandleButton() {
//     // From here we mainly just care for the long press because the rest is handled in the mode classes.
//     // Read the encoder and handle long button presses only. If you need more interactions
//     // with the encoder specifically for mode selection, do so in the ModeSelector class, but ensure that
//     // you protect the other actions a those are handled in the mode classes.

//     Encoder::ButtonState buttonState = encoder.readButton();
//     ModeSelector::getInstance().handleButtonPress(buttonState);

//     // if (encoder.isButtonLongPressed()) { // Check if the button is long pressed
//     //     handleLongPress();
        
//     //     DEBUG_PRINT("Long press detected" + String(encoder.readButton()));
//     // } else if (encoder.isButtonDoublePressed()) { // Check if the button is double pressed
//     //     if (!doublePressHandled) {
//     //         handleDoublePress();
//     //         doublePressHandled = true; // Set the flag to true when a double press is handled
//     //     }
//     // } else if (encoder.readButton() == Encoder::PRESSED) { // Check if the button is single pressed
//     //     handleSinglePress();
//     //     singlePressHandled = true; // Set the flag to true when a single press is handled
//     // } else if (encoder.readButton() == Encoder::OPEN) { // Check if the button is released
//     //     doublePressHandled = false; // Reset the flag when the button is released
//     //     singlePressHandled = false; // Reset the flag when the button is released
//     // }
// }

// // Enconder Handlers
// // void handleLongPress() {
// //     // Exit mode selection state on long press
// //     if (inModeSelection) {
// //         inModeSelection = false;
// //         return;
// //     }
// //     // Enter mode selection state on long press
// //     leds.stopAllBlinking();
// //     leds.setAllLeds(false);
// //     // Reset the mode for the LEDs if not in mode 0
// //     if (ModeSelector::getInstance().getMode() != 0) {
// //         for (int i = 0; i < leds.numLeds; i++) {
// //             leds.resetInverted(i);
// //         }
// //     }
// //     inModeSelection = true;
// //     isInSelection = true;
// //     inChannelSelection = false;
// //     singlePressHandled = true;
// //     for (int i = 0; i < total_modes; i++) {
// //         if (i == ModeSelector::getInstance().getMode()) {
// //             leds.blinkSlow(i);
// //         } else {
// //             leds.stopBlinking(i);
// //         }
// //     }
// //     // leds.blinkSlow(ModeSelector::getInstance().getMode());
// // }

// void handleLongPress() {
//     // Toggle mode selection state on long press
//     inModeSelection = !inModeSelection;

//     if (inModeSelection) {
//         // Enter mode selection state
//         leds.stopAllBlinking();
//         leds.setAllLeds(false);
//         // Reset the mode for the LEDs if not in mode 0
//         if (ModeSelector::getInstance().getMode() != 0) {
//             ModeSelector::getInstance().setMode(0);
//         }
//     } else {
//         // Exit mode selection state
//         // Add any necessary cleanup code here
//     }
// }

// // void handleDoublePress() {
// //     // Enter tempo selection mode on double press
// //     if (!doublePressHandled) {
// //         if (ModeSelector::getInstance().getMode() == 0) {
// //             if (selectingTempo) {
// //                 // Exit tempo selection mode on double press
// //                 selectingTempo = false;
// //             } else if (!inChannelSelection && !inModeSelection) {
// //                 // Enter tempo selection mode on double press
// //                 selectingTempo = true;
// //             }
// //             doublePressHandled = true;
// //         }
// //     }
// // }

// void handleSelectionStates() {
//     if (selectingTempo) {
//         // handleTempoSelection();
//     } else if (inChannelSelection) {
//         // handleChannelSelection();
//     } else if (inModeSelection) {
//         handleModeSelection();
//     } else {
//         // encoderReadAndHandleButton(); // Call the function to handle encoder and button presses
//     }
// }

// // void handleModeSpecificFunctionality() {
// //     switch (ModeSelector::getInstance().getMode()) {
// //         case 0:
// //             // handleEncoderMode0();
// //             // mode0.handle(); // <----- probably needs to change!!!!!
// //             break;
// //         case 1:
// //             // midiHandler.setChannel(confirmedChannel);
// //             break;
// //         case 2:
// //             // Add logic for mode 2
// //             break;
// //         // Add more cases as needed for additional modes
// //     }
// // }

// // void handleModeSelectionPress() {
// //     leds.stopAllBlinking();
// //     leds.setAllLeds(false);
// //     // Reset the mode for the LEDs if not in mode 0
// //     if (ModeSelector::getInstance().getMode() != 0) {
// //         for (int i = 0; i < leds.numLeds; i++) {
// //             leds.resetInverted(i);
// //         }
// //     }
// //     inModeSelection = false;
// //     isInSelection = false;
// //     previousMode = -1; // Reset the previous mode
// // }

// // void handleDivisionSelectionPress() {
// //     if (inModeSelection) {
// //         inDivisionSelection = false;
// //         return;
// //     }
// //     inDivisionSelection = !inDivisionSelection; // Toggle division selection mode
// // }

// // void handleChannelSelectionPress() {
// //     if (inModeSelection) { return; }
// //     if (!singlePressHandled) {
// //         // Exit channel selection state on button press
// //         if (inChannelSelection) {
// //             confirmedChannel = selectedChannel;
// //             previousChannel = -1; // Reset the previous channel
// //             leds.stopAllBlinking();
// //             leds.setAllLeds(false);
// //             Debug::isEnabled = true;
// //             DEBUG_PRINT("Channel: " + String(selectedChannel));
// //             Debug::isEnabled = false;
// //             inChannelSelection = false;
// //             isInSelection = false;
// //         // Enter channel selection state on button press
// //         } else {
// //             inChannelSelection = true;
// //             isInSelection = true;
// //             int led_index = selectedChannel % leds.numLeds;
// //             // Calculate current page and LED index within the page
// //             int current_page = selectedChannel / leds.numLeds;
// //             // Reset the mode for the LEDs if not in mode 0
// //             if (ModeSelector::getInstance().getMode() != 0) {
// //                 for (int i = 0; i < leds.numLeds; i++) {
// //                     leds.resetInverted(i);
// //                 }
// //             }
// //             if (selectedChannel < 8) {
// //                 leds.blinkFast(led_index); // Blink the LED corresponding to the selected channel
// //             } else {
// //                 leds.blinkFast2(led_index); // Blink the LED corresponding to the selected channel
// //             }
// //             Debug::isEnabled = true;
// //             DEBUG_PRINT("Channel: " + String(selectedChannel));
// //             Debug::isEnabled = false;
// //         }
// //         singlePressHandled = true;
// //     }
// // }

// void handleSinglePress() {
//     if (inModeSelection) {
//         ModeSelector::handleModeSelectionPress();
//         singlePressHandled = true;
//     // } else {
//     //     // Code to handle a single button press when not in mode selection state
//     //     if (ModeSelector::getInstance().getMode() == 0) {
//     //         handleDivisionSelectionPress();
//     //     } else if (ModeSelector::getInstance().getMode() == 1) {
//     //         handleChannelSelectionPress();
//     //     }
//     }
// }

// int handleCyclingSelectionDirection(int currentValue, int maxValue, Encoder::Direction direction) {
//     if (direction == Encoder::CW) {
//         return (currentValue + 1) % maxValue;
//     } else if (direction == Encoder::CCW) {
//         return (currentValue + maxValue - 1) % maxValue;
//     }
//     return currentValue;
// }

// // void handleChannelSelection() {
// //     if (inModeSelection) { return; }
// //     Encoder::Direction direction = encoder.readEncoder();
// //     selectedChannel = encoder.handleEncoderDirection(selectedChannel, NUM_MIDI_CHANNELS, direction);
// //     // Calculate current page and LED index within the page
// //     int current_page = selectedChannel / leds.numLeds;
// //     int led_index = selectedChannel % leds.numLeds;
// //     if (selectedChannel != previousChannel) {
// //         for (int i = 0; i < leds.numLeds; i++) { // Loop over LEDs, not channels
// //             if (i == led_index) {
// //                 // setLEDState(i, true, selectedChannel < NUM_LEDS);
// //                 if (selectedChannel < 8) {
// //                     leds.blinkFast(led_index); // Blink the LED corresponding to the selected channel
// //                 } else {
// //                     leds.blinkFast2(led_index); // Blink the LED corresponding to the selected channel
// //                 }
// //             } else {
// //                 leds.stopBlinking(i);
// //             }
// //         }
// //         previousChannel = selectedChannel; // Update the previous mode
// //     }
// // }

// void handleModeSelection() {
//     // Handle mode selection
//     Encoder::Direction direction = encoder.readEncoder();
//     int currentMode = ModeSelector::getInstance().getMode();
//     currentMode = encoder.handleEncoderDirection(currentMode, total_modes, direction);
//     ModeSelector::getInstance().setMode(currentMode);

//     if (Debug::isEnabled) {
//         DEBUG_PRINT("Mode: " + String(ModeSelector::getInstance().getMode()));
//     }

//     // Only blink the LED if the mode has changed
//     if (ModeSelector::getInstance().getMode() != previousMode) {
//         for (int i = 0; i < total_modes; i++) {
//             if (i == ModeSelector::getInstance().getMode()) {
//                 // setLEDState(i, true, false, true);
//                 leds.blinkSlow(i);
//             } else {
//                 leds.stopBlinking(i);
//                 // setLEDState(i, false);
//             }
//         }
//     }
// }

// int handleModeSelectionDirection(int currentMode, int totalModes, Encoder::Direction direction) {
//     if (direction == Encoder::CW) {
//         return (currentMode + 1) % totalModes;
//     } else if (direction == Encoder::CCW) {
//         return (currentMode + totalModes - 1) % totalModes;
//     }
//     return currentMode;
// }

// void setLEDState(int ledIndex, bool state, bool blinkFast, bool blinkSlow) {
//     // If not in channel selection mode, stop blinking the LED
//     // if (!inChannelSelection) { leds.stopBlinking(ledIndex); }
//     leds.stopBlinking(ledIndex);

//     leds.setState(ledIndex, state);

//     // If in channel selection mode, blink the LED
//     if (blinkFast) {
//         leds.blinkFast(ledIndex);
//     } else if (blinkSlow) {
//         leds.blinkSlow(ledIndex);
//     }
// }

// // void handleEncoderMode0() {
// //     if (inModeSelection) { return; }

// //     Encoder::Direction direction = encoder.readEncoder();
// //     if (inDivisionSelection) {
// //         // Handle division selection
// //         divisionIndex = encoder.handleEncoderDirection(divisionIndex, musicalIntervalsSize, direction); // Changed here
// //         int division = musicalIntervals[divisionIndex];
// //         gates.setDivision(selectedGate, division);
// //         gates.setSelectedGate(selectedGate);
// //     } else {
// //         // Handle gate selection
// //         selectedGate = encoder.handleEncoderDirection(selectedGate, numPins, direction);
// //         gates.setSelectedGate(selectedGate);
// //     }
// // }

// // void handleTempoSelection() {
// //     // Handle tempo selection
// //     Encoder::Direction direction = encoder.readEncoder();
// //     int tempoIncrement = encoder.readSpeed();
// //     int currentTempo = clock.getTempo();
// //     if (direction == Encoder::CW) {
// //         if (externalTempo) {
// //             // Exit external tempo mode and increase the tempo
// //             externalTempo = false;
// //             if (Debug::isEnabled) {
// //                 DEBUG_PRINT("External tempo mode disabled");
// //             }
// //         } else if (currentTempo + tempoIncrement <= maxTempo) {
// //             clock.setTempo(currentTempo + tempoIncrement, 4);
// //         }
// //     } else if (direction == Encoder::CCW) {
// //         if (currentTempo - tempoIncrement < minTempo) {
// //             // Enter external tempo mode when the tempo reaches the minimum
// //             externalTempo = true;
// //             if (Debug::isEnabled) {
// //                 DEBUG_PRINT("External tempo mode enabled");
// //             }
// //         } else {
// //             clock.setTempo(currentTempo - tempoIncrement, 4);
// //         }
// //     }
// //     clock.setExternalTempo(externalTempo);
// // }
