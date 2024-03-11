#include <UMIDI.h>
#include <Arduino.h>
#include "Gates.h"
#include "LEDs.h"
// #include "SpdtSwitch.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))
#endif

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
// #define SWITCH_PINA PB0
// #define SWITCH_PINB PB1
#define ENCODER_PINA PB13
#define ENCODER_PINB PB14
#define ENCODER_BUTTON PB12
#define CLOCK_PIN PB15
#define RESET_PIN PA8

// Function to calculate the size of an array
template<typename T, size_t N>
constexpr size_t arraySize(T(&)[N]) {
    return N;
}

// Define the pins for the gates
int pins[] = {PA15, PB3, PB4, PB5}; // Example pins
// constexpr int numPins = sizeof(pins) / sizeof(pins[0]); // Calculate the number of pins
constexpr int numPins = arraySize(pins);
Gates gates = Gates(pins, numPins); // Create an instance of Gates

// Define the pins for the LEDs
int ledPins[] = {PB6, PB7, PB8, PB9}; // Placeholder pin numbers for LEDs
int numLedPins = arraySize(ledPins);
LEDs leds = LEDs(ledPins, numLedPins); // Create an instance of LEDs

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA;
int encDTPin = ENCODER_PINB;
int encButtonPin = ENCODER_BUTTON;

// Defulat mode
int mode = 0;
bool inModeSelection = false;
static int previousMode = -1; // used with blinking in mode selection
const byte total_modes = 3;
int selectedChannel = 9; // MIDI channels are 0-15
bool inChannelSelection = false;
bool isInSelection = false;
int selectedGate = 0;
int clockDivisions[numPins];

// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(RX_PIN, TX_PIN, clock, gates, leds);

// // Create an instance of the SPDTSwitch class
// SPDTSwitch mySwitch(SWITCH_PINA,SWITCH_PINB);

// Create an instance of the Encoder class
Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin);


void setup() {
    // Initialize serial communication
    Serial.begin(9600);

    // Initialize the clock
    for (int i = 0; i < numPins; i++) {
        clockDivisions[i] = 1;
    }

    // Initialize the MIDIHandler
    midiHandler.begin();

    // Set the MIDIHandler to listen to all channels
    midiHandler.setChannel(-1);

    delay(1000);

    leds.begin(); // Initialize LED pins
    gates.begin(); // Initialize gate pins
    // mySwitch.begin(); // Initialize switch pins
    encoder.begin(); // Initialize encoder pins

    #if DEBUG
    DEBUG_PRINT("Finished setup() function");
    #endif
}

// SwitchState lastState = NEUTRAL;

// Enconder Handlers
void handleLongPress() {
    // Enter mode selection state on long press
    inModeSelection = true;
    isInSelection = true;
    #if DEBUG
    DEBUG_PRINT("Button was long pressed, entered mode selection state");
    #endif
}

void handleDoublePress() {
    // Code to handle a double button press
    #if DEBUG
    DEBUG_PRINT("Button was double pressed");
    #endif
}

void handleSinglePress() {
    if (inModeSelection) {
        // Confirm mode selection on single press
        inModeSelection = false;
        isInSelection = false;
        previousMode = -1; // Reset the previous mode
        #if DEBUG
        DEBUG_PRINT("Button was pressed, mode selection confirmed");
        DEBUG_PRINT("Current mode: " + String(mode));
        #endif
    } else {
        // Code to handle a single button press when not in mode selection state
        if (mode == 1) {
            if (inChannelSelection) {
                inChannelSelection = false;
                isInSelection = false;
                #if DEBUG
                DEBUG_PRINT("Button was pressed, channel selection confirmed");
                DEBUG_PRINT("Current channel: " + String(selectedChannel));
                #endif
            } else {
                inChannelSelection = true;
                isInSelection = true;
                #if DEBUG
                DEBUG_PRINT("Button was pressed, entered channel selection state");
                #endif
            }
        }
        #if DEBUG
        DEBUG_PRINT("Button was pressed");
        #endif
    }
}

void handleChannelSelection() {
    Encoder::Direction direction = encoder.readEncoder();
    if (direction == Encoder::CW) {
        selectedChannel = (selectedChannel + 1) % 16; // MIDI channels are 0-15
        #if DEBUG
        DEBUG_PRINT("Encoder turned clockwise " + String(selectedChannel));
        #endif
    } else if (direction == Encoder::CCW) {
        selectedChannel = (selectedChannel + 15) % 16;
        #if DEBUG
        DEBUG_PRINT("Encoder turned counter-clockwise " + String(selectedChannel));
        #endif
    }
}

void handleModeSelection() {
    // Handle mode selection
    Encoder::Direction direction = encoder.readEncoder();
    if (direction == Encoder::CW) {
        mode = (mode + 1) % total_modes;
        #if DEBUG
        DEBUG_PRINT("Encoder turned clockwise " + String(mode));
        #endif
    } else if (direction == Encoder::CCW) {
        mode = (mode + total_modes - 1) % total_modes;
        #if DEBUG
        DEBUG_PRINT("Encoder turned counter-clockwise " + String(mode));
        #endif
    }

    // Only blink the LED if the mode has changed
    if (mode != previousMode) {
        for (int i = 0; i < total_modes; i++) {
            if (i == mode) {
                leds.blinkSlow(i); // This will only be called once when the mode changes
            } else {
                leds.stopBlinking(i);
                leds.setState(i, false);
            }
        }
        previousMode = mode; // Update the previous mode
    }
}

void handleEncoderMode0() {
    Encoder::Direction direction = encoder.readEncoder();
    if (direction == Encoder::CW) {
        selectedGate = (selectedGate + 1) % numPins;
    } else if (direction == Encoder::CCW) {
        selectedGate = (selectedGate + numPins - 1) % numPins;
    }
    if (encoder.readButton() == Encoder::PRESSED) {
        // Increase the clock division for the selected gate
        clockDivisions[selectedGate]++;
    }
}

void loop() {
    static int previousMode = -1;
    static int previousChannel = -1;

    // Read the encoder and handle button presses
    encoder.readButton();
    if (encoder.isButtonLongPressed()) {
        handleLongPress();
    } else if (encoder.readButton() == Encoder::PRESSED) {
        handleSinglePress();
    }

    if (inChannelSelection) {
        handleChannelSelection();
    }

    if (inModeSelection) {
        handleModeSelection();
        leds.updateBlinking();
    } else {
        leds.stopAllBlinking();
        if (mode != previousMode) {
            previousMode = mode;
            midiHandler.setMode(mode);
        }
        switch (mode) {
            case 0:
                handleEncoderMode0();
                break;
            case 1:
                if (!inChannelSelection) {
                    if (selectedChannel != previousChannel) {
                        previousChannel = selectedChannel;
                        midiHandler.setChannel(selectedChannel);
                    }
                }
                break;
            case 2:
                break;
            // Add more cases as needed
        }
    }

    // Handle incoming MIDI messages
    midiHandler.handleMidiMessage();
}
