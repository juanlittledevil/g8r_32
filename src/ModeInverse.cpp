/**
 * @file ModeInverse.cpp
 * @brief This file contains the implementation of the ModeInverse class, which is used to manage the second mode of the Eurorack module.
 * 
 */
#include "ModeInverse.h"
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief Construct a new Mode Inverse:: Mode Inverse object
 * 
 * @param stateManager 
 * @param encoder 
 * @param inputHandler 
 * @param gates 
 * @param ledController 
 * @param midi 
 * @param resetButton 
 */
ModeInverse::ModeInverse(StateManager& stateManager,
    Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    ResetButton& resetButton)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        resetButton(resetButton) {
    // Set the default mode for the input+pairs.
    // Note we only have 4 inputs, so we only need 4 pair modes.
    for (int i = 0; i < inputHandler.cvInputs.size(); i++) {
        previousState[i] = inputHandler.cvInputs[i]->read();
        pairModes[i] = NORMAL; // Default to normal mode.
    }
}

/**
 * @brief This function is used to setup the current mode object. Setup and teardown methods are meant to be called when Mode selector
 * switches modes. This is where you can put code that should only run once when the mode is switched to.
 * 
 */
void ModeInverse::setup() {
    // Initialization code here if needed
    gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.
    ledController.clearAndResetLEDs();
    ledController.tempoLed.setState(LOW);
    numLeds = ledController.getNumLeds();
    /// This is where you'd read the eeprom for the ModeInverse settings. However, we don't have any settings for ModeInverse yet.


    handleInputs();
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object.
 * 
 */
void ModeInverse::teardown() {
    // Cleanup code here if needed
    ledController.clearAndResetLEDs();
}

/**
 * @brief This function is used to update the current mode object. The update method is meant to be called every loop iteration.
 * This is where you can put code that should run every loop iteration.
 */
void ModeInverse::update() {
    // Update code here
    handleInputs();

    // Handle the pair selection
    handleSelectionStates();

    // Handle button presses
    handleButton(encoder.readButton());
    handleResetButton(resetButton.readButton());

    ledController.update();
}

/**
 * @brief This function is used to handle the inputs. This is where the magic happens.
 * 
 */
void ModeInverse::handleInputs() {
    for (int i = 0; i < inputHandler.cvInputs.size(); i++) {
        bool currentState = inputHandler.cvInputs[i]->read();
        // Handle the change in state
        switch (pairModes[i]) {
            case NORMAL:
                gates.setState(i, currentState);
                gates.setState(i + 4, !currentState);
                if (!ledController.isBlinking(i)) {
                    ledController.setState(i, currentState);
                }
                ledController.setState(i + 4, !currentState);
                break;
            case INVERT:
                gates.setState(i, !currentState);
                gates.setState(i + 4, currentState);
                if (!ledController.isBlinking(i)) {
                    ledController.setState(i, !currentState);
                }
                ledController.setState(i + 4, currentState);
                break;
            case RISE_FALL:
                if (currentState && !previousState[i]) {
                    // Rising edge
                    gates.trigger(i, millis());
                    ledController.trigger(i, millis());
                } else if (!currentState && previousState[i]) {
                    // Falling edge
                    gates.trigger(i + 4, millis());
                    ledController.trigger(i + 4, millis());
                }
                break;
        }
        previousState[i] = currentState;
    }
}

/**
 * @brief This function is used to set the pair mode for the inputs.
 * This is stored in the pairModes array.
 * 
 */
void ModeInverse::setPairMode(int input, PairMode mode) {
    pairModes[input] = mode;
}


/**
 * @brief This block of code is used to handle button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void ModeInverse::handleButton(Encoder::ButtonState buttonState) {
    // Read the encoder and handle button presses
    encoder.readButton();

    if (encoder.isButtonLongPressed()) {
        this->handleLongPress();
    } else if (encoder.isButtonDoublePressed()) {
        this->handleDoublePress();
        doublePressHandled = true; 
    } else if (encoder.isButtonSinglePressed() && !singlePressHandled) {
        this->handleSinglePress();
        singlePressHandled = true;
    } else if (encoder.readButton() == Encoder::OPEN) {
        this->handlePressReleased();
        singlePressHandled = false; 
        doublePressHandled = false;
    }
}

/**
 * @brief This block of code is used to handle reset button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void ModeInverse::handleResetButton(ResetButton::ButtonState buttonState) {
    resetButton.readButton();

    // Handle reset button presses
    if (resetButton.isButtonLongPressed()) {
        this->handleResetLongPress();
        longResetPressHandled = true;
    } else if (resetButton.isButtonDoublePressed()) {
        this->handleResetDoublePress();
        doubleResetPressHandled = true; 
    } else if (resetButton.readButton() == ResetButton::PRESSED && !singleResetPressHandled) {
        this->handleResetSinglePress();
        singleResetPressHandled = true;
    } else if (resetButton.readButton() == ResetButton::OPEN) {
        this->handleResetPressReleased();
        singleResetPressHandled = false; 
        doubleResetPressHandled = false;
        longResetPressHandled = false;
    }
}

/**
 * @brief Handle the single press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleSinglePress() {
    // Handle single press
}

/**
 * @brief This function is used to handle the double press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleDoublePress() {
    // Handle double press
}

/**
 * @brief This function is used to handle the long press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleLongPress() {
    // Handle long press
}

/**
 * @brief This function is used to handle the press released event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handlePressReleased() {
    // Handle press released
}

/**
 * @brief This function is used to handle the encoder rotation event.
 * 
 */
void ModeInverse::handleSelectionStates() {
    // Handle selection states
    Encoder::Direction direction = encoder.readEncoder();
    selectedInput = encoder.handleEncoderDirection(selectedInput, 4, direction); // 4 possible inputs

    if (selectedInput != previousInput) {
        for (int i = 0; i < inputHandler.cvInputs.size(); i++) {
            if (i == selectedInput) {
                if (inputHandler.cvInputs[i]->read()) {
                    // If the input is high...
                    ledController.blinkFaster(i);
                } else {
                    // If the input is low...
                    ledController.blinkFast(i);
                }
            } else {
               ledController.stopBlinking(i);
            }
        }
        previousInput = selectedInput;
    }
}

/**
 * @brief This function is used to handle the reset single press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleResetSinglePress() {
    // Handle reset single press
}

/**
 * @brief This function is used to handle the reset double press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleResetDoublePress() {
    // Handle reset double press
}

/**
 * @brief This function is used to handle the reset long press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleResetLongPress() {
    if (!longResetPressHandled) {
        // Logic here
    }
}

/**
 * @brief This function is used to handle the reset press released event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleResetPressReleased() {
    // Handle reset press released
}