/**
 * @file main.cpp
 * @brief This is the main entrypoint of the G8R application.
 * I'm trying to keep this file as clean as possible, so most of the logic is in the Mode classes.
 */
#include <Arduino.h>
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

/// Debug print macro, used to make debugging easier.
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
// Define the pins for the encoder
#define ENCODER_PINA PB13
#define ENCODER_PINB PB14
#define ENCODER_BUTTON PB12
// Define the pins for the clock and reset
#define CLOCK_PIN PB10
#define RESET_PIN PB11
#define RESET_BUTTON PB15
// Define the pin for the tempo LED
#define TEMPO_LED PA8
// Define the pins for the CV inputs
#define CV_A_PIN PA4
#define CV_B_PIN PA5

// Define the pins for the gates, we have 8 in total
std::vector<int> pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9};
const int numPins = pins.size();
// Define the pins for the LEDs, one for each gate
std::vector<int> ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0};
int numLedPins = ledPins.size();
// Tempo LED is part of EurorackClock class to make this file cleaner.
bool inModeSelection = false; // Flag for handling mode selection
bool isInSelection = false; // Thisi is here so it can be accessed from MIDIHandler.cpp, and set to true in the mode classes.
unsigned char internalPPQN = 24; // Default Pulses per quarter note
std::vector<int> musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288, 384, 576, 768, 1152, 1536};
const int musicalIntervalsSize = musicalIntervals.size(); // Size of musical intervals array

Gates gates = Gates(pins, numPins);
LEDs leds = LEDs(ledPins, numLedPins);
StateManager stateManager = StateManager(); /// Instance of the StateManager class used to manage state of the device in EEPROM.
Encoder encoder = Encoder(ENCODER_PINA, ENCODER_PINB, ENCODER_BUTTON); /// Instance of the Encoder class
ResetButton resetButton = ResetButton(RESET_BUTTON); /// Instance of the ResetButton class
LEDController ledController(leds); /// Instance of the LEDController class
EurorackClock clock(CLOCK_PIN, RESET_PIN, TEMPO_LED, gates, leds); /// Instance of the EurorackClock class
MIDIHandler midiHandler(Serial2, clock, gates, leds); /// Instance of the MIDIHandler class
InputHandler inputHandler = InputHandler(CV_A_PIN, CV_B_PIN); /// Instance of the InputHandler class
ModeSelector& modeSelector = ModeSelector::getInstance(); /// Instance of the ModeSelector class
Mode* currentMode = nullptr; /// Pointer to the current mode
Mode* previousMode = nullptr; /// Pointer to the previous mode
Mode0 mode0(stateManager, encoder, inputHandler, gates, ledController, midiHandler, resetButton, clock); /// Instance of Mode0 class
Mode1 mode1(stateManager, encoder, inputHandler, gates, ledController, midiHandler, resetButton); /// Instance of Mode1 class
Mode2 mode2(stateManager, encoder, inputHandler, gates, ledController, midiHandler, resetButton); /// Instance of Mode2 class

/**
 * \brief Setup function for the Arduino sketch.
 *
 * This function is called once when the sketch starts. It is used to initialize variables, input and output pin modes, and start using libraries.
 */
void setup() {
    delay(1000);

    /// Initialize the debug settings
    Debug::isEnabled = false; // Enable debugging
    Debug::resetEEPROM = false; // Enable to clear and reset EEPROM.

    if (Debug::isEnabled) {
        Serial.begin(115200);
        DEBUG_PRINT("Entering setup() function");
    }

    resetButton.begin(); // Initialize the reset button
    leds.begin(); // Initialize LED pins
    gates.begin(); // Initialize gate pins
    encoder.begin(); // Initialize encoder pins

    // Initialize the MIDIHandler stuffs.
    midiHandler.begin();
    midiHandler.setChannel(-1); // Set the MIDIHandler to listen to all channels

    clock.setup(); // Start the clock
    clock.setTempo(120.0, internalPPQN); // Set the tempo to 120 BPM with internal 4 PPQN

    // Initialize the state manager
    stateManager.initializeEEPROM(); // Initialize the EEPROM with default values

    /**
     * @brief Add the modes to the ModeSelector.
     * IMPORTANT: Make sure to add the modes in order! The MIDIHandler gets past ints representing the index of the mode. If the
     * order is changed, the MIDIHandler will set the wrong callback functions to the modes.
     */
    modeSelector.addMode(&mode0); // Add Mode0 to the ModeSelector
    modeSelector.addMode(&mode1); // Add Mode1 to the ModeSelector
    modeSelector.addMode(&mode2); // Add Mode2 to the ModeSelector
    modeSelector.setLedController(ledController); // Set the LEDController for the ModeSelector
    modeSelector.setEncoder(encoder); // Set the Encoder for the ModeSelector
    modeSelector.setStateManager(stateManager); // Set the StateManager for the ModeSelector
    modeSelector.setMode(stateManager.getMode()); // Set the current mode for the ModeSelector

    /**
     * @brief This gets the current mode from the ModeSelector and sets it as the current mode.
     * It then updates the pointer to the current mode. This way we can switch modes easily at runtime
     * by changing the the pointer to the current mode.
     */
    currentMode = modeSelector.getCurrentMode();
    currentMode->setup(); // Setup the current mode, this also gets run when switching modes.

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
    modeSelector.update(); // Update the ModeSelector
    ledController.updateBlinking(); // Update the LEDController's blinking status

    if (!modeSelector.isInModeSelection()) { // isInModeSelection is updated by the ModeSelector.
        currentMode->update(); // Run the update method of the current mode.

    } else { // If in mode selection
        previousMode = currentMode; // Set the previous mode to the current mode
        currentMode = modeSelector.getCurrentMode(); // Get the new current mode from the ModeSelector

        // Only run once when the mode is switched to...
        if (currentMode != previousMode) {
            previousMode->teardown(); // Teardown the current mode
            currentMode->setup(); // Setup the new current mode
            previousMode = currentMode; // This prevents the setup method from running again.
        }
    }
}
