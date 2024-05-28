/**
 * @file ModeLogic.cpp
 * @brief This file contains the implementation of the ModeLogic class, which is used to manage the second mode of the Eurorack module.
 * 
 */
#include "ModeLogic.h"
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
ModeLogic::ModeLogic(StateManager& stateManager,
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
    // Initialization code here if needed
}

/**
 * @brief This function is used to setup the current mode object. Setup and teardown methods are meant to be called when Mode selector
 * switches modes. This is where you can put code that should only run once when the mode is switched to.
 * 
 */
void ModeLogic::setup() {
    // Initialization code here if needed
    gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.
    ledController.clearAndResetLEDs();
    ledController.tempoLed.setState(LOW);
    numLeds = ledController.getNumLeds();
    /// This is where you'd read the eeprom for the ModeLogic settings. However, we don't have any settings for ModeLogic yet.
    loadState();
    handleInputs();
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object.
 * 
 */
void ModeLogic::teardown() {
    // Cleanup code here if needed
    ledController.clearAndResetLEDs();
    ledController.stopAllBlinking(true);
    ledController.setAllInverted(false);
    ledController.turnAllOff();
    gates.setALLGates(false);
}

/**
 * @brief This function is used to update the current mode object. The update method is meant to be called every loop iteration.
 * This is where you can put code that should run every loop iteration.
 */
void ModeLogic::update() {
    // Update code here
    handleInputs();

    // Handle the pair selection
    handleSelectionStates();

    // Handle the tempo LED
    handleTempoLed();

    // Handle button presses
    handleButton(encoder.readButton());
    handleResetButton(resetButton.readButton());
}

/**
 * @brief This function is used to handle the inputs. This is where the magic happens.
 * 
 */
void ModeLogic::handleInputs() {
   // Logic for what happens with the inputs goes here. 
}

/**
 * @brief This function is used to handle the tempo LED. This is where the tempo LED is updated.
 * 
 */
void ModeLogic::handleTempoLed() {
    // Handle the tempo LED
}

/**
 * @brief This block of code is used to handle button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void ModeLogic::handleButton(Encoder::ButtonState buttonState) {
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
void ModeLogic::handleResetButton(ResetButton::ButtonState buttonState) {
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
void ModeLogic::handleSinglePress() {
    if (!singlePressHandled) {
        // Cycle through the modes
    }
}

/**
 * @brief This function is used to handle the double press event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handleDoublePress() {
    // Handle double press
}

/**
 * @brief This function is used to handle the long press event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handleLongPress() {
    // Handle long press
}

/**
 * @brief This function is used to handle the press released event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handlePressReleased() {
    // Handle press released
}

/**
 * @brief This function is used to handle the encoder rotation event.
 * 
 */
void ModeLogic::handleSelectionStates() {
    // Handle selection states
    Encoder::Direction direction = encoder.readEncoder();
    selectedGate = encoder.handleEncoderDirection(selectedGate, gates.numGates, direction); // 4 possible inputs

    if (selectedGate != previousGate) {
 
        previousGate = selectedGate;
    }
}

/**
 * @brief This function is used to handle the reset single press event. In this mode, we use it to mute/unmute the selected input pairs.
 * 
 */
void ModeLogic::handleResetSinglePress() {
    if (!singleResetPressHandled) {
        // Toggle input group.
    }
}

/**
 * @brief This function is used to handle the reset double press event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handleResetDoublePress() {
    if (!doubleResetPressHandled) {
        // Logic here.
    }
}

/**
 * @brief This function is used to handle the reset long press event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handleResetLongPress() {
    if (!longResetPressHandled) {
        // Logic here
    }
}

/**
 * @brief This function is used to handle the reset press released event. How in this mode we don't use it.
 * 
 */
void ModeLogic::handleResetPressReleased() {
    // Handle reset press released
}

/**
 * @brief This function is used to load the state of the ModeLogic object.
 * 
 */
void ModeLogic::loadState() {
    // Load the state from the EEPROM
}