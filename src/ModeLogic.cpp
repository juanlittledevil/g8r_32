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
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
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
    ledController.blinkSlower(selectedGate, true); // Blink the selected input
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
void ModeLogic::handleMidiMessage() {
    // Handle MIDI messages
    midi.read();  
}

/**
 * @brief This function is used to handle the inputs. This is where the magic happens.
 * 
 */
void ModeLogic::handleInputs() {
    // Logic for what happens with the inputs goes here. 
    bool cvA = inputHandler.cvInputs[0]->read();
    bool cvB = inputHandler.cvInputs[1]->read();
    bool cvC = inputHandler.cvInputs[2]->read();
    bool cvD = inputHandler.cvInputs[3]->read();

    for (unsigned char i = 0; i < gates.numGates; i++) {
        switch (logicMode[i]) {
            case AND:
                // Do AND logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, cvA && cvB);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, cvC && cvD);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, cvA && cvB && cvC && cvD);
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            case OR:
                // Do OR logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, cvA || cvB);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, cvC || cvD);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, cvA || cvB || cvC || cvD);
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            case XOR:
                // Do XOR logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, cvA ^ cvB);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, cvC ^ cvD);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, cvA ^ cvB ^ cvC ^ cvD);
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            case NAND:
                // Do NAND logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, !(cvA && cvB));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, !(cvC && cvD));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, !(cvA && cvB && cvC && cvD));
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            case NOR:
                // Do NOR logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, !(cvA || cvB));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, !(cvC || cvD));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, !(cvA || cvB || cvC || cvD));
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            case XNOR:
                // Do XNOR logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, !(cvA ^ cvB));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, !(cvC ^ cvD));
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, !(cvA ^ cvB ^ cvC ^ cvD));
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
            default:
                // Do AND logic
                if (inputGroup == GROUP_TWO) {
                    // Do AND logic for two inputs
                    if (i < 4) {
                        gates.setState(i, cvA && cvB);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    } else {
                        gates.setState(i, cvC && cvD);
                        if (!isInSelection) {
                            // If we are not in selection mode, update the LEDs
                            if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                        }
                    }
                } else {
                    // Do AND logic for all inputs
                    gates.setState(i, cvA && cvB && cvC && cvD);
                    if (!isInSelection) {
                        // If we are not in selection mode, update the LEDs
                        if (!ledController.isBlinking(i)) ledController.setState(i, gates.getState(i));
                    }
                }
                break;
       }
   }
}

/**
 * @brief This function is used to handle the tempo LED. This is where the tempo LED is updated.
 * 
 */
void ModeLogic::handleTempoLed() {
    // Handle the tempo LED
    if (inputGroup == GROUP_TWO) {
        ledController.tempoLed.setState(false);
    } else {
        ledController.tempoLed.setState(true);
    }
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
        if (isInSelection) {
            // Exit selection state
            ledController.clearAndResetLEDs();
            ledController.stopAllBlinking(true);
            ledController.blinkSlower(selectedGate, true);

            logicMode[selectedGate] = selectedLogicMode; 
            stateManager.setLogicMode(selectedGate, selectedLogicMode);

            isInSelection = false;
            if (Debug::isEnabled) DEBUG_PRINT("Selected Logic Mode: " + String(selectedLogicMode));
        } else {
            // Enter selection state
            selectedLogicMode = logicMode[selectedGate];
            isInSelection = true;
            updateSelectionDisplay();
            if (Debug::isEnabled) DEBUG_PRINT("Selected Gate: " + String(selectedGate));
        }
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
    if (!isInSelection) {
        selectedGate = encoder.handleEncoderDirection(selectedGate, gates.numGates, direction); // 4 possible inputs
        // if (Debug::isEnabled) DEBUG_PRINT("Selected Gate: " + String(selectedGate));
    } else {
        // selectedLogicMode = encoder.handleEncoderDirection(selectedLogicMode, numLogicModes, direction); // NUM_LOGIC_MODES is the number of logic modes
        selectedLogicMode = static_cast<LogicMode>(encoder.handleEncoderDirection(static_cast<int>(selectedLogicMode), numLogicModes, direction));
    }

    if (selectedGate != previousGate || selectedLogicMode != previousLogicMode) {
        if (isInSelection) {
            updateSelectionDisplay();
        } else {
            for (unsigned char i = 0; i < gates.numGates; i++) {
                if (i == selectedGate) {
                    ledController.blinkSlower(i, true);
                } else {
                    ledController.setState(i, false);
                    ledController.stopBlinking(i);
                }
            }
        }
        previousGate = selectedGate;
        previousLogicMode = selectedLogicMode;
    }
}

/**
 * @brief Update the selection display.
 * 
 */
void ModeLogic::updateSelectionDisplay() {
    // Update the selection display
    ledController.clearAndResetLEDs();
    for (unsigned char i = 0; i < numLogicModes; i++) {
        if (i == selectedLogicMode) {
            ledController.blinkFast(i, true);
            ledController.setInverted(i, true);
        } else {
            ledController.stopBlinking(i);
            ledController.setInverted(i, false);
            ledController.setState(i, true);
        }
    }
}

/**
 * @brief This function is used to handle the reset single press event. In this mode, we use it to mute/unmute the selected input pairs.
 * 
 */
void ModeLogic::handleResetSinglePress() {
    if (!singleResetPressHandled) {
        // Toggle input group.
        if (inputGroup == GROUP_TWO) {
            if (Debug::isEnabled) DEBUG_PRINT("Input Group: ALL");
            inputGroup = GROUP_ALL;
        } else {
            if (Debug::isEnabled) DEBUG_PRINT("Input Group: TWO");
            inputGroup = GROUP_TWO;
        }
        stateManager.setInputGroup(inputGroup);
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
    if (Debug::isEnabled) DEBUG_PRINT("Loading state from EEPROM");
    for (unsigned char i = 0; i < gates.numGates; i++) {
        logicMode[i] = stateManager.getLogicMode(i);
    }
    inputGroup = stateManager.getInputGroup();
    if (Debug::isEnabled) DEBUG_PRINT("Loaded state from EEPROM");
}