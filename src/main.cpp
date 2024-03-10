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
const byte total_modes = 3;
int selectedGate = 0;
int clockDivisions[numPins];

// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(RX_PIN, TX_PIN, clock);

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

        #if DEBUG
        DEBUG_PRINT("Button was pressed, mode selection confirmed");
        DEBUG_PRINT("Current mode: " + String(mode));
        #endif
    } else {
        // Code to handle a single button press when not in mode selection state
        #if DEBUG
        DEBUG_PRINT("Button was pressed");
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

void handleMidiMode1() {
    if (midiHandler.getMessageType() == MIDIHandler::NOTE_ON) {
        int note = midiHandler.getNote();
        int gate = note % numPins;
        gates.turnOnGate(gate);
        leds.setState(gate, true);
        #if DEBUG
        DEBUG_PRINT("Received MIDI Note On for note " + String(note) + " on gate " + String(gate));
        #endif
    }
    if (midiHandler.getMessageType() == MIDIHandler::NOTE_ON) {
        int note = midiHandler.getNote();
        int gate = note % numPins;
        gates.turnOffGate(gate);
        leds.setState(gate, false);
        #if DEBUG
        DEBUG_PRINT("Received MIDI Note Off for note " + String(note) + " on gate " + String(gate));
        #endif
    }
}

void handleMidiMode2() {
    if (midiHandler.getMessageType() == MIDIHandler::NOTE_ON) {
        int channel = midiHandler.getChannel();
        if (channel >= 9 && channel <= 16) {
            int gate = (channel - 9) % numPins;
            gates.turnOffGate(gate);
            leds.setState(gate, true);
        }
    }

    if (midiHandler.getMessageType() == MIDIHandler::NOTE_OFF) {
        int channel = midiHandler.getChannel();
        if (channel >= 9 && channel <= 16) {
            int gate = (channel - 9) % numPins;
            gates.turnOffGate(gate);
            leds.setState(gate, false);
        }
    }
}

void loop() {
    // Read the encoder and handle button presses
    encoder.readButton();
    if (encoder.isButtonLongPressed()) {
        handleLongPress();
    } else if (encoder.readButton() == Encoder::PRESSED) {
        handleSinglePress();
    }

    if (inModeSelection) {
        handleModeSelection();
    } else {
        switch (mode) {
            case 0:
                handleEncoderMode0();
                break;
            case 1:
                handleMidiMode1();
                break;
            case 2:
                handleMidiMode2();
                break;
            // Add more cases as needed
        }
    }

    // Handle incoming MIDI messages
    midiHandler.handleMidiMessage();
}
