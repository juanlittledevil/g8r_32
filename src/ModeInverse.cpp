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
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
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
    loadState();
    ledController.blinkSlower(selectedInput, true); // Blink the selected input
    handleInputs();
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object.
 * 
 */
void ModeInverse::teardown() {
    // Cleanup code here if needed
    // setPairMode(selectedInput, static_cast<PairMode>((pairModes[selectedInput] - 1) % 3));
    int previousIndex = (pairModes[selectedInput] - 1 + 3) % 3;
    stateManager.setPairMode(selectedInput, static_cast<PairMode>(previousIndex));
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
void ModeInverse::update() {
    // Update code here
    handleMidiMessage();
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
 * @brief This function is used to handle the MIDI messages. This is where the MIDI messages are handled.
 * In this mode we only use it to forward messages to the MIDI output. Basically, a soft MIDI thru.
 * 
 * NOTE: If you need more functionality, you will need to implement callback functions. However,
 * those will need to be static functions. This is because the MIDI library requires static functions.
 * Just like the handleNoteOn and handleNoteOff functions in the ModeMidiLearn class. Remember that
 * you'll need to create an instance of this class if you do that. You can use ModeMidiLearn as a reference.
 * 
 */
void ModeInverse::handleMidiMessage() {
    // Handle MIDI messages
    midi.read();  
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

                if (!gates.isMuted(i)) ledController.setInverted(i, currentState); // Set the LED inverted state

                ledController.setState(i + 4, gates.getState(i + 4));

                if (!ledController.isBlinking(i)) {
                    ledController.setState(i, gates.getState(i));
                }

                break;
            case INVERT:
                gates.setState(i, !currentState);
                gates.setState(i + 4, currentState);

                if (!gates.isMuted(i)) ledController.setInverted(i, !currentState); // Set the LED inverted state

                ledController.setState(i + 4, gates.getState(i + 4));
                
                // If the LED is not blinking or pulsing.
                if (!ledController.isBlinking(i)) {
                    ledController.setState(i, gates.getState(i));
                }
                break;
            case RISE_FALL:
                if (currentState && !previousState[i]) {
                    // Rising edge
                    gates.trigger(i, millis());
                    if (!gates.isMuted(i)) ledController.trigger(i, millis());
                } else if (!currentState && previousState[i]) {
                    // Falling edge
                    gates.trigger(i + 4, millis());
                    if (!gates.isMuted(i + 4)) ledController.trigger(i + 4, millis());
                }

                gates.update(millis());
                ledController.update(i + 4, millis());

                if (!ledController.isBlinking(i)) {
                    ledController.update(i, millis());
                }
                break;
        }
        previousState[i] = currentState;
    }
}

/**
 * @brief This function is used to handle the tempo LED. This is where the tempo LED is updated.
 * 
 */
void ModeInverse::handleTempoLed() {
    if (gates.isMuted(selectedInput) || gates.isMuted(selectedInput + 4)) {
        ledController.tempoLed.setState(LOW);
    } else {
        ledController.tempoLed.setState(HIGH);
    }
}

/**
 * @brief This function is used to set the pair mode for the inputs.
 * This is stored in the pairModes array.
 * 
 */
void ModeInverse::setPairMode(int input, PairMode mode) {
    pairModes[input] = mode;
    stateManager.setPairMode(input, mode);
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
    if (!singlePressHandled) {
        // Cycle through the modes
        setPairMode(selectedInput, static_cast<PairMode>((pairModes[selectedInput] + 1) % 3));
        singlePressHandled = true;
    }
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
                ledController.blinkSlower(i, true);
            } else {
                ledController.setState(i, false);
                ledController.stopBlinking(i);
            }
        }
        previousInput = selectedInput;
    }
}

/**
 * @brief This function is used to handle the reset single press event. In this mode, we use it to mute/unmute the selected input pairs.
 * 
 */
void ModeInverse::handleResetSinglePress() {
    if (!singleResetPressHandled) {
        if (Debug::isEnabled) DEBUG_PRINT("Reset single press");
        if (gates.isMuted(selectedInput) || gates.isMuted(selectedInput + 4)) {
            gates.unmute(selectedInput);
            gates.unmute(selectedInput + 4);
        } else {
            ledController.setInverted(selectedInput, false);
            gates.mute(selectedInput);
            gates.mute(selectedInput + 4);
            gates.setState(selectedInput, false);
            gates.setState(selectedInput + 4, false);
        }
        if (Debug::isEnabled) DEBUG_PRINT("Selected input: " + String(selectedInput));
        if (Debug::isEnabled) DEBUG_PRINT("Gate muted: " + String(gates.isMuted(selectedInput)) + " " + String(gates.isMuted(selectedInput + 4)));
    }
}

/**
 * @brief This function is used to handle the reset double press event. How in this mode we don't use it.
 * 
 */
void ModeInverse::handleResetDoublePress() {
    if (!doubleResetPressHandled) {
        if (Debug::isEnabled) DEBUG_PRINT("Reset double press");
        // Unmute all the gates
        gates.unMuteAll();
        if (Debug::isEnabled) DEBUG_PRINT("Selected input: " + String(selectedInput));
        if (Debug::isEnabled) DEBUG_PRINT("Gate muted: " + String(gates.isMuted(selectedInput)) + " " + String(gates.isMuted(selectedInput + 4)));
    }
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

/**
 * @brief This function is used to load the state of the ModeInverse object.
 * 
 */
void ModeInverse::loadState() {
    // Load the state from the EEPROM
    // This is where you'd read the eeprom for the ModeInverse settings. However, we don't have any settings for ModeInverse yet.
    for (int i = 0; i < inputHandler.cvInputs.size(); i++) {
        pairModes[i] = stateManager.getPairMode(i);
    }
    if (Debug::isEnabled) {
        DEBUG_PRINT("Loaded state from EEPROM");
    }
}