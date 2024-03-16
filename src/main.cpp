#include <UMIDI.h>
#include <Arduino.h>
#include "Gates.h"
#include "ModeSelector.h"
#include "LEDs.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"
#include "Constants.h"

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

const int NUM_MIDI_CHANNELS = 16;
const int NUM_LEDS = 8;

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA;
int encDTPin = ENCODER_PINB;
int encButtonPin = ENCODER_BUTTON;

bool doublePressHandled;
bool selectingTempo = false;
bool inModeSelection = false;
bool singlePressHandled = false;
static int previousMode = -1; // used with blinking in mode selection
static int previousChannel = -1; // used with blinking in channel selection
int intensity = 255; // Default intensity for LEDs
const byte total_modes = 3;
int selectedChannel = 9; // MIDI channels are 0-15
int confirmedChannel = 9; // MIDI channels are 0-15
bool inChannelSelection = false;
bool inDivisionSelection = false;
bool isInSelection = false;
int selectedGate = 0;
int clockDivisions[] = {1, 2, 4, 12, 24, 48};
int numClockDivisions = arraySize(clockDivisions);
int tempoIncrement = 1;
const int minTempo = 20;
const int maxTempo = 340;
bool externalTempo = false;
unsigned long lastFlashTime = 0;
static int divisionIndex = 4;

const int musicalIntervals[] = {1, 2, 4, 8, 16, 32, 3, 6, 12, 24, 48};
const int musicalIntervalsSize = arraySize(musicalIntervals);

int total_pages = 16 / leds.numLeds; // Calculate total pages based on number of LEDs
int min_intensity = 64; // Set minimum intensity to 25% (64 out of 255)
int intensity_step = (255 - min_intensity) / (total_pages - 1); // Calculate intensity step

// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN, TEMPO_LED, gates, leds);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(RX_PIN, TX_PIN, clock, gates, leds);

// Create an instance of the Encoder class
Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin);

// Function declarations
void handleLongPress();
void handleDoublePress();
void handleSinglePress();
void handleChannelSelection();
void handleModeSelection();
int handleCyclingSelectionDirection(int currentValue, int maxValue, Encoder::Direction direction);
int handleEncoderDirection(int currentValue, int maxValue, Encoder::Direction direction);
int handleModeSelectionDirection(int currentMode, int totalModes, Encoder::Direction direction);
void setLEDState(int ledIndex, bool state, bool blinkFast = false, bool blinkSlow = false);
void handleEncoderMode0();
void handleTempoSelection();



void setup() {
    // Enable debugging
    Debug::isEnabled = true;

    // Initialize serial communication
    Serial.begin(9600);

    // Set the mode to 0
    ModeSelector::getInstance().setMode(1);

    // Initialize the MIDIHandler
    midiHandler.begin();

    // Set the MIDIHandler to listen to all channels
    midiHandler.setChannel(-1);

    // Start the clock and set the tempo
    clock.setup();
    clock.start();
    clock.setTempo(120.0, 4); // Set the tempo to 120 BPM with internal 4 PPQN

    delay(1000);

    leds.begin(); // Initialize LED pins
    gates.begin(); // Initialize gate pins
    encoder.begin(); // Initialize encoder pins

    gates.setSelectedGate(selectedGate);
    
    if (Debug::isEnabled) {
        DEBUG_PRINT("Finished setup() function");
    }
}

void loop() {
    // Read the encoder and handle button presses
    encoder.readButton();
    if (encoder.isButtonLongPressed()) { // Check if the button is long pressed
        handleLongPress();
    } else if (encoder.isButtonDoublePressed()) { // Check if the button is double pressed
        if (!doublePressHandled) {
            handleDoublePress();
            doublePressHandled = true; // Set the flag to true when a double press is handled
        }
    } else if (encoder.readButton() == Encoder::PRESSED) { // Check if the button is single pressed
        handleSinglePress();
        singlePressHandled = true; // Set the flag to true when a single press is handled
    } else if (encoder.readButton() == Encoder::OPEN) { // Check if the button is released
        doublePressHandled = false; // Reset the flag when the button is released
        singlePressHandled = false; // Reset the flag when the button is released
    }

    // Handle the selection states.
    if (selectingTempo) {
        handleTempoSelection();
    } else if (inChannelSelection) {
        handleChannelSelection();
    } else if (inModeSelection) {
        handleModeSelection();
    } else {
        // Handle the mode-specific functionality
        // leds.stopAllBlinking();
        if (ModeSelector::getInstance().getMode() != previousMode) {
            previousMode = ModeSelector::getInstance().getMode();
            midiHandler.setMode(ModeSelector::getInstance().getMode());
        }
        switch (ModeSelector::getInstance().getMode()) {
            case 0:
                handleEncoderMode0();
                break;
            case 1:
                midiHandler.setChannel(confirmedChannel);
                break;
            case 2:
                break;
            // Add more cases as needed
        }
    }

    // Handle incoming MIDI messages
    midiHandler.handleMidiMessage();

    leds.updateBlinking();

    // Handle clock pulses
    if (ModeSelector::getInstance().getMode() == 0) {
        clock.handleExternalClock();
        clock.tick();
    }
}

// Enconder Handlers
void handleLongPress() {
    // Enter mode selection state on long press
    leds.stopAllBlinking();
    leds.setAllLeds(false);
    inModeSelection = true;
    isInSelection = true;
    singlePressHandled = true;
    leds.blinkSlow(ModeSelector::getInstance().getMode());
}

void handleDoublePress() {
    // Enter tempo selection mode on double press
    if (!doublePressHandled) {
        if (ModeSelector::getInstance().getMode() == 0) {
            if (selectingTempo) {
                // Exit tempo selection mode on double press
                selectingTempo = false;
            } else if (!inChannelSelection && !inModeSelection) {
                // Enter tempo selection mode on double press
                selectingTempo = true;
            }
            doublePressHandled = true;
        }
    }
}

void handleModeSelectionPress() {
    inModeSelection = false;
    isInSelection = false;
    previousMode = -1; // Reset the previous mode
}

void handleDivisionSelectionPress() {
    inDivisionSelection = !inDivisionSelection; // Toggle division selection mode
}

void handleChannelSelectionPress() {
    if (!singlePressHandled) {
        // Exit channel selection state on button press
        if (inChannelSelection) {
            confirmedChannel = selectedChannel;
            previousChannel = -1; // Reset the previous channel
            leds.stopAllBlinking();
            leds.setAllLeds(false);

            Debug::isEnabled = true;
            DEBUG_PRINT("Channel: " + String(selectedChannel));
            Debug::isEnabled = false;

            inChannelSelection = false;
            isInSelection = false;

        // Enter channel selection state on button press
        } else {
            inChannelSelection = true;
            isInSelection = true;
            int led_index = selectedChannel % leds.numLeds;

            // Calculate current page and LED index within the page
            int current_page = selectedChannel / leds.numLeds;


            // Reset the mode for the LEDs if not in mode 0
            if (ModeSelector::getInstance().getMode() != 0) {
                for (int i = 0; i < leds.numLeds; i++) {
                    leds.resetInverted(i);
                }
            }

            if (selectedChannel < 8) {
                leds.blinkFast(led_index); // Blink the LED corresponding to the selected channel
            } else {
                leds.blinkFast2(led_index); // Blink the LED corresponding to the selected channel
            }

            Debug::isEnabled = true;
            DEBUG_PRINT("Channel: " + String(selectedChannel));
            Debug::isEnabled = false;
        }
        singlePressHandled = true;
    }
}

void handleSinglePress() {
    if (inModeSelection) {
        handleModeSelectionPress();
    } else {
        // Code to handle a single button press when not in mode selection state
        if (ModeSelector::getInstance().getMode() == 0) {
            handleDivisionSelectionPress();
        } else if (ModeSelector::getInstance().getMode() == 1) {
            handleChannelSelectionPress();
        }
    }
}

int handleCyclingSelectionDirection(int currentValue, int maxValue, Encoder::Direction direction) {
    if (direction == Encoder::CW) {
        return (currentValue + 1) % maxValue;
    } else if (direction == Encoder::CCW) {
        return (currentValue + maxValue - 1) % maxValue;
    }
    return currentValue;
}

void handleChannelSelection() {
    if (inModeSelection) { return; }

    Encoder::Direction direction = encoder.readEncoder();
    selectedChannel = handleEncoderDirection(selectedChannel, NUM_MIDI_CHANNELS, direction);

    // Calculate current page and LED index within the page
    int current_page = selectedChannel / leds.numLeds;
    int led_index = selectedChannel % leds.numLeds;

    if (selectedChannel != previousChannel) {
        for (int i = 0; i < leds.numLeds; i++) { // Loop over LEDs, not channels
            if (i == led_index) {
                // setLEDState(i, true, selectedChannel < NUM_LEDS);
                if (selectedChannel < 8) {
                    leds.blinkFast(led_index); // Blink the LED corresponding to the selected channel
                } else {
                    leds.blinkFast2(led_index); // Blink the LED corresponding to the selected channel
                }
            } else {
                leds.stopBlinking(i);
            }
        }
        previousChannel = selectedChannel; // Update the previous mode
    }
}

void handleModeSelection() {
    // Handle mode selection
    Encoder::Direction direction = encoder.readEncoder();
    int currentMode = ModeSelector::getInstance().getMode();
    currentMode = handleCyclingSelectionDirection(currentMode, total_modes, direction);
    ModeSelector::getInstance().setMode(currentMode);

    // if (Debug::isEnabled) {
    //     DEBUG_PRINT("Mode: " + String(ModeSelector::getInstance().getMode()));
    // }

    // Only blink the LED if the mode has changed
    if (ModeSelector::getInstance().getMode() != previousMode) {
        for (int i = 0; i < total_modes; i++) {
            if (i == ModeSelector::getInstance().getMode()) {
                setLEDState(i, true, false, true);
            } else {
                setLEDState(i, false);
            }
        }
    }
}

int handleEncoderDirection(int currentValue, int maxValue, Encoder::Direction direction) {
    if (direction == Encoder::CW) {
        if (currentValue < maxValue - 1) {
            return currentValue + 1;
        }
    } else if (direction == Encoder::CCW) {
        if (currentValue > 0) {
            return currentValue - 1;
        }
    }
    return currentValue;
}

int handleModeSelectionDirection(int currentMode, int totalModes, Encoder::Direction direction) {
    if (direction == Encoder::CW) {
        return (currentMode + 1) % totalModes;
    } else if (direction == Encoder::CCW) {
        return (currentMode + totalModes - 1) % totalModes;
    }
    return currentMode;
}

void setLEDState(int ledIndex, bool state, bool blinkFast, bool blinkSlow) {
    // If not in channel selection mode, stop blinking the LED
    // if (!inChannelSelection) { leds.stopBlinking(ledIndex); }
    leds.stopBlinking(ledIndex);

    leds.setState(ledIndex, state);

    // If in channel selection mode, blink the LED
    if (blinkFast) {
        leds.blinkFast(ledIndex);
    } else if (blinkSlow) {
        leds.blinkSlow(ledIndex);
    }
}

void handleEncoderMode0() {
    Encoder::Direction direction = encoder.readEncoder();
    if (inDivisionSelection) {
        // Handle division selection
        divisionIndex = handleEncoderDirection(divisionIndex, musicalIntervalsSize, direction); // Changed here
        int division = musicalIntervals[divisionIndex];
        gates.setDivision(selectedGate, division);
        gates.setSelectedGate(selectedGate);
    } else {
        // Handle gate selection
        selectedGate = handleEncoderDirection(selectedGate, numPins, direction);
        gates.setSelectedGate(selectedGate);
    }
}

void handleTempoSelection() {
    // Handle tempo selection
    Encoder::Direction direction = encoder.readEncoder();
    int tempoIncrement = encoder.readSpeed();
    int currentTempo = clock.getTempo();
    if (direction == Encoder::CW) {
        if (externalTempo) {
            // Exit external tempo mode and increase the tempo
            externalTempo = false;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode disabled");
            }
        } else if (currentTempo + tempoIncrement <= maxTempo) {
            clock.setTempo(currentTempo + tempoIncrement, 4);
        }
    } else if (direction == Encoder::CCW) {
        if (currentTempo - tempoIncrement < minTempo) {
            // Enter external tempo mode when the tempo reaches the minimum
            externalTempo = true;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode enabled");
            }
        } else {
            clock.setTempo(currentTempo - tempoIncrement, 4);
        }
    }
    clock.setExternalTempo(externalTempo);
}
