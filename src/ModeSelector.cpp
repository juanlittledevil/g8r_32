/**
 * @file ModeSelector.cpp
 * @brief This file contains the implementation of the ModeSelector class, which is used to manage the different modes of the Eurorack module.
 * ModeSelector is a singleton class that is used to manage the different modes of the Eurorack module.
 * It is responsible for handling the mode selection state, button presses, and encoder rotation.
 */
#include "ModeSelector.h"
#include <Arduino.h>
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief Sets the instance of the ModeSelector class.
 * 
 * @return ModeSelector& 
 */
ModeSelector& ModeSelector::getInstance() {
    static ModeSelector instance; // Guaranteed to be destroyed, instantiated on first use.
    return instance;
}

/**
 * @brief Construct a new Mode Selector:: Mode Selector object
 * 
 */
ModeSelector::ModeSelector()
    :   mode(0),
        currentMode(nullMode)   {} // Initializes mode to 0

/**
 * @brief This function is used to update the mode selector. It is intended to be called in the loop() function of the main sketch.
 * 
 */
void ModeSelector::update() {
    handleButtonPress();
    handleEncoderRotation();
}

/**
 * @brief Returns the current mode as an integer.
 * 
 * @return int 
 */
int ModeSelector::getMode() const {
    return mode;
}

/**
 * @brief This function is used to set the current mode.
 * IMPORTANT: The order of the modes in the vector matters. The index of the mode in the vector is the mode number.
 * 
 * @param newMode 
 */
void ModeSelector::setMode(int newMode) {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Setting mode to " + String(newMode));
    }

    if (newMode >= 0 && newMode < modes.size()) {
        mode = newMode;
        currentMode = modes[newMode];

        // Save the current state to EEPROM so it persists.
        stateManager->setMode(newMode);
    }

    if (Debug::isEnabled) {
        DEBUG_PRINT("Mode set to " + String(mode));
    }
}

/**
 * @brief Configures the StateManager for the ModeSelector which is used to save the current mode to EEPROM.
 * 
 * @param stateManager 
 */
void ModeSelector::setStateManager(StateManager& stateManager) {
    this->stateManager = &stateManager;
}

/**
 * @brief Handles the long press of the encoder button. This is how the user enters the mode selection state.
 * IMPORTANT: It is best to avoid using long press for other purposes. I've considered removing long press from the individual modes,
 * if this becomes a problem we can remove it from the modes and make sure it is only used for mode selection.
 * 
 */
void ModeSelector::handleLongPress() {
    // Toggle mode selection state
    inModeSelection = !inModeSelection;
    if (inModeSelection) {
        // Enter mode selection state
        // ...
        ledController->clearAndResetLEDs();
        inModeSelection = true;
        isInSelection = true;
        singlePressHandled = true;
        ledController->clearAndResetLEDs();
        ledController->setState(getMode(), true);

        // Save the current state to EEPROM
        stateManager->saveAppState();
    } else {
        // Exit mode selection state
        // ...
    }
}

/**
 * @brief This function is used to handle the mode selection press. It clars the LEDs and gets them ready for the next mode selection.
 * 
 */
void ModeSelector::handleModeSelectionPress() {
    ledController->clearLEDs();

    // Reset the mode for the LEDs if not in mode 0
    if (getMode() != 0) {
        ledController->resetInverted();
    }

    inModeSelection = false;
    isInSelection = false;
    previousMode = -1; // Reset the previous mode
}

/**
 * @brief This function is used to handle the button press. It reads the encoder and handles button presses.
 * 
 */
void ModeSelector::handleButtonPress() {
    // Read the encoder and handle button presses
    encoder->readButton();

    if (encoder->isButtonLongPressed()) { // Handle long press
        // ...
        if (!longPressHandled) {
            handleLongPress();
            longPressHandled = true;
        }
    } else if (encoder->readButton() == Encoder::PRESSED) { // Handle single press
        // ...
        // for now do nothing....
        longPressHandled = false;
        if (!inModeSelection) { return; }
    }
}

/**
 * @brief This function is used to handle the encoder rotation. It reads the encoder and handles the rotation.
 * The encoder is used to cycle through the different modes displaying the corresponding LED.
 */
void ModeSelector::handleEncoderRotation() {
    if (!inModeSelection) {
        return;
    }

    Encoder::Direction direction = encoder->readEncoder();

    if (direction == Encoder::CW) {
        setMode(getMode() + 1);
    } else if (direction == Encoder::CCW) {
        setMode(getMode() - 1);
    }

    // Light up the LED corresponding to the current mode
    ledController->clearAndResetLEDs();
    ledController->setState(getMode(), true);
}

/**
 * @brief Helper function to check if the mode selection state is active.
 * 
 * @return bool 
 */
bool ModeSelector::isInModeSelection() {
    return inModeSelection;
}

/**
 * @brief This function is used to set the LED controller for the ModeSelector.
 * It is meant to be called by the main sketch to set the LED controller for the ModeSelector in the setup() function.
 * 
 * @param ledController 
 */
void ModeSelector::setLedController(LEDController& ledController) {
    this->ledController = &ledController;
}

/**
 * @brief This function is used to set the encoder for the ModeSelector.
 * It is meant to be called by the main sketch to set the encoder for the ModeSelector in the setup() function.
 * 
 * @param encoder 
 */
void ModeSelector::setEncoder(Encoder& encoder) {
    this->encoder = &encoder;
}

/**
 * @brief This function is used to set the current mode.
 * 
 * @param currentMode 
 */
void ModeSelector::setCurrentMode(Mode*& currentMode) {
    this->currentMode = currentMode;
}

/**
 * @brief This function is used to add a mode to the ModeSelector. This is why the order of the modes in the vector matters.
 * 
 * @param mode 
 */
void ModeSelector::addMode(Mode* mode) {
    modes.push_back(mode);
    totalModes = modes.size();
}

/**
 * @brief This function is used to get the current mode.
 * 
 * @return Mode* 
 */
Mode* ModeSelector::getCurrentMode() {
    return currentMode;
}
