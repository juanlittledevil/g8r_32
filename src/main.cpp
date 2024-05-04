#include <Arduino.h>
#include <MIDI.h>
#include <vector>
#include "Gates.h"
#include "ModeSelector.h"
#include "LEDs.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"
#include "Constants.h"
#include "Mode0.h"
#include "Mode1.h"
#include "Mode2.h"
#include "LEDController.h"
#include "ResetButton.h"
#include "InputHandler.h"
#include "StateManager.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message)) /// Macro for debug print

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3 /// RX pin for MIDI communication
#define TX_PIN PA2 /// TX pin for MIDI communication
// Define the pins for the encoder
#define ENCODER_PINA PB13 /// Encoder pin A
#define ENCODER_PINB PB14 /// Encoder pin B
#define ENCODER_BUTTON PB12 /// Encoder button pin
// Define the pins for the clock and reset
#define CLOCK_PIN PB10 /// Clock pin
#define RESET_PIN PB11 /// Reset pin
#define RESET_BUTTON PB15 /// Reset button pin
// Define the pin for the tempo LED
#define TEMPO_LED PA8 /// Tempo LED pin

#define CV_A_PIN PA4 /// CV A pin
#define CV_B_PIN PA5 /// CV B pin

// Define the pins for the gates
std::vector<int> pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9}; /// Example pins for gates
const int numPins = pins.size(); /// Number of gate pins
Gates gates = Gates(pins, numPins); /// Create an instance of Gates
// Define the pins for the LEDs
std::vector<int> ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0}; /// Placeholder pin numbers for LEDs
int numLedPins = ledPins.size(); /// Number of LED pins

// Create an instance of LEDs
// Tempo LED is part of EurorackClock class to make this file cleaner.
LEDs leds = LEDs(ledPins, numLedPins); /// Create an instance of LEDs

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA; /// Encoder CLK pin
int encDTPin = ENCODER_PINB; /// Encoder DT pin
int encButtonPin = ENCODER_BUTTON; /// Encoder button pin

bool inModeSelection = false; /// Flag for mode selection
int intensity = 255; /// Default intensity for LEDs
bool isInSelection = false; /// Flag to prevent multiple presses from being handled
unsigned long lastFlashTime = 0; /// Last flash time

unsigned char internalPPQN = 24; /// Pulses per quarter note
// const int musicalIntervals[] = {1, 2, 4, 8, 16, 32, 3, 6, 12, 24, 48};
std::vector<int> musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288, 384, 576, 768, 1152, 1536};
const int musicalIntervalsSize = musicalIntervals.size(); /// Size of musical intervals array

int total_pages = 16 / leds.numLeds; /// Calculate total pages based on number of LEDs
int min_intensity = 64; /// Set minimum intensity to 25% (64 out of 255)
int intensity_step = (255 - min_intensity) / (total_pages - 1); /// Calculate intensity step

StateManager stateManager = StateManager(); /// Instance of the StateManager class used to manage state of the device in EEPROM.

Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin); /// Instance of the Encoder class

ResetButton resetButton = ResetButton(RESET_BUTTON); /// Instance of the ResetButton class

LEDController ledController(leds); /// Instance of the LEDController class

EurorackClock clock(CLOCK_PIN, RESET_PIN, TEMPO_LED, gates, leds); /// Instance of the EurorackClock class

MIDIHandler midiHandler(Serial2, clock, gates, leds); /// Instance of the MIDIHandler class

InputHandler inputHandler = InputHandler(CV_A_PIN, CV_B_PIN); /// Instance of the InputHandler class

ModeSelector& modeSelector = ModeSelector::getInstance(); /// Instance of the ModeSelector class
Mode* currentMode = nullptr; /// Pointer to the current mode
Mode* previousMode = nullptr; /// Pointer to the previous mode
Mode0 mode0(stateManager, encoder, inputHandler, gates, ledController, midiHandler, resetButton, clock); /// Instance of Mode0 class
Mode1 mode1(encoder, inputHandler, gates, ledController, midiHandler, resetButton); /// Instance of Mode1 class
Mode2 mode2(encoder, inputHandler, gates, ledController, midiHandler, resetButton); /// Instance of Mode2 class

/**
 * \brief Setup function for the Arduino sketch.
 *
 * This function is called once when the sketch starts. It is used to initialize variables, input and output pin modes, and start using libraries.
 */
void setup() {
    delay(1000);

    /// Initialize the debug settings
    Debug::isEnabled = true; /// Enable debugging
    Debug::resetEEPROM = false; /// Enable to clear and reset EEPROM.

    if (Debug::isEnabled) {
        Serial.begin(115200); /// Initialize serial communication
        DEBUG_PRINT("Entering setup() function"); /// Print debug message
    }

    // Workaround for bug in ResetButton class
    pinMode(RESET_BUTTON, INPUT_PULLDOWN); /// Set the RESET_BUTTON pin to INPUT_PULLDOWN mode

    midiHandler.begin(); /// Initialize the MIDIHandler

    midiHandler.setChannel(-1); /// Set the MIDIHandler to listen to all channels

    clock.setup(); /// Start the clock
    clock.setTempo(120.0, internalPPQN); /// Set the tempo to 120 BPM with internal 4 PPQN

    // Initialize the state manager
    stateManager.initializeEEPROM(); /// Initialize the EEPROM with default values

    // Add the modes to the ModeSelector in order
    modeSelector.addMode(&mode0); /// Add Mode0 to the ModeSelector
    modeSelector.addMode(&mode1); /// Add Mode1 to the ModeSelector
    modeSelector.addMode(&mode2); /// Add Mode2 to the ModeSelector

    modeSelector.setLedController(ledController); /// Set the LEDController for the ModeSelector
    modeSelector.setEncoder(encoder); /// Set the Encoder for the ModeSelector
    modeSelector.setStateManager(stateManager); /// Set the StateManager for the ModeSelector
    modeSelector.setMode(stateManager.getMode()); /// Set the current mode for the ModeSelector

    currentMode = modeSelector.getCurrentMode(); /// Get the current mode from the ModeSelector

    currentMode->setup(); /// Run the setup function for the current mode

    leds.begin(); /// Initialize LED pins
    gates.begin(); /// Initialize gate pins
    encoder.begin(); /// Initialize encoder pins

    if (Debug::isEnabled) {
        DEBUG_PRINT("Finished setup() function");
        DEBUG_PRINT("EEPROM MODE is: " + String(stateManager.getMode()));
    }
}

/**
 * \brief Main loop function for the Arduino sketch.
 *
 * This function is called repeatedly as long as the Arduino is powered on. It contains the main logic of the sketch.
 */
void loop() {
    modeSelector.update(); /// Update the ModeSelector

    ledController.updateBlinking(); /// Update the LEDController's blinking status

    if (!modeSelector.isInModeSelection()) { /// If not in mode selection
        currentMode->update(); /// Update the current mode
    } else { /// If in mode selection
        previousMode = currentMode; /// Set the previous mode to the current mode
        currentMode = modeSelector.getCurrentMode(); /// Get the new current mode from the ModeSelector

        /// Only run once when the mode is switched to
        if (currentMode != previousMode) {
            previousMode->teardown(); /// Teardown the current mode
            currentMode->setup(); /// Setup the new current mode
            previousMode = currentMode; /// Set the previous mode to the current mode
        }
    }
}
