/**
 * @file ModeMidiLearn.cpp
 * @brief This file contains the implementation of the ModeMidiLearn class, which is used to manage the second mode of the Eurorack module.
 * 
 */
#include "ModeMidiLearn.h"
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief This is the instance of the ModeMidiLearn class. It is used to access the ModeMidiLearn class from the static MIDI callback function.
 * 
 */
ModeMidiLearn* ModeMidiLearn::instance = nullptr;

ModeMidiLearn::ModeMidiLearn(StateManager& stateManager,
    Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton,
    int tempoLedPin)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
        resetButton(resetButton),
        tempoLedPin(tempoLedPin) {
    // Set the instance of the ModeMidiLearn class
    instance = this;
}

/**
 * @brief This function is used to setup the current mode object. Setup and teardown methods are meant to be called when Mode selector
 * switches modes. This is where you can put code that should only run once when the mode is switched to.
 * 
 */
void ModeMidiLearn::setup() {
    // Initialization code here if needed
    gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.
    ledController.clearAndResetLEDs();
    loadMidiLearnNotes(); // Load the MIDI learn notes from the state manager
    midi.setHandleNoteOn(handleNoteOn);
    numLeds = ledController.getNumLeds();
    /// This is where you'd read the eeprom for the ModeMidiLearn settings. However, we don't have any settings for ModeMidiLearn yet.
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object.
 * 
 */
void ModeMidiLearn::teardown() {
    // Cleanup code here if needed
    ledController.clearAndResetLEDs();
    midi.setHandleNoteOn(nullptr);
}

/**
 * @brief This function is used to update the current mode object. The update method is meant to be called every loop iteration.
 * This is where you can put code that should run every loop iteration.
 */
void ModeMidiLearn::update() {
    // Update code here
    handleMidiMessage();

    // Handle button presses
    handleButton(encoder.readButton());
    handleResetButton(resetButton.readButton());

    digitalWrite(tempoLedPin, LOW);

    // Update LEDs based on learning state
    if (isInLearningMode) {
        // Turn off all LEDs
        ledController.clearAndResetLEDs();

        // Turn the tempo LED on
        digitalWrite(tempoLedPin, HIGH);

        // Turn on the LED for the current learning gate
        if (currentLearningGate < numLeds) {
            ledController.setState(currentLearningGate, true);
        }
    }
}

/**
 * @brief Handle MIDI messages. This function is called by the update method.
 * 
 */
void ModeMidiLearn::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    ledController.update(currentTime);
}

/**
 * @brief Static callback function for handling MIDI Note On messages.
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
void ModeMidiLearn::handleNoteOn(byte channel, byte pitch, byte velocity) {
    if (instance->isInLearningMode) {
        instance->stateManager.setMidiLearnNote(instance->currentLearningGate, pitch, channel);
        instance->currentLearningGate++;
        if (instance->currentLearningGate >= instance->numLeds) {
            instance->isInLearningMode = false;
        }
        instance->loadMidiLearnNotes();
    } else {
        // Not in learning mode, check if the note and channel match any gate
        for (int i = 0; i < instance->numLeds; i++) {
            unsigned long currentTime = millis();
            auto [note, ch] = instance->midiLearnNotes[i];
            if (note == pitch && ch == channel) {
                // Trigger the gate
                instance->gates.trigger(i, currentTime);
                if (!instance->isInSelection) {
                    instance->ledController.trigger(i, currentTime);
                }
                break;
            }
        }
    }
}

/**
 * @brief This block of code is used to handle button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void ModeMidiLearn::handleButton(Encoder::ButtonState buttonState) {
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
void ModeMidiLearn::handleResetButton(ResetButton::ButtonState buttonState) {
    resetButton.readButton();

    // Handle reset button presses
    if (resetButton.isButtonLongPressed()) {
        this->handleResetLongPress();
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
    }
}

/**
 * @brief Handle the single press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleSinglePress() {
    // Handle single press
}

/**
 * @brief This function is used to handle the double press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleDoublePress() {
    // Handle double press
}

/**
 * @brief This function is used to handle the long press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleLongPress() {
    // Handle long press
}

/**
 * @brief This function is used to handle the press released event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handlePressReleased() {
    // Handle press released
}

/**
 * @brief This function is used to handle the encoder rotation event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleSelectionStates() {
    // Handle selection states
}

/**
 * @brief This function is used to handle the reset single press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleResetSinglePress() {
    // Handle reset single press
}

/**
 * @brief This function is used to handle the reset double press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleResetDoublePress() {
    // Handle reset double press
}

/**
 * @brief This function is used to handle the reset long press event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleResetLongPress() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Reset long press");
    }
    // Handle reset long press
    isInLearningMode = true;
    currentLearningGate = 0;
}

/**
 * @brief This function is used to handle the reset press released event. How in this mode we don't use it.
 * 
 */
void ModeMidiLearn::handleResetPressReleased() {
    // Handle reset press released
}

/**
 * @brief Update midiLearnNotes from stateManager.
 * 
 */
void ModeMidiLearn::loadMidiLearnNotes() {
    midiLearnNotes.clear();
    for (int i = 0; i < numLeds; i++) {
        auto [note, channel] = stateManager.getMidiLearnNote(i);
        midiLearnNotes.push_back(std::make_pair(note, channel));
    }
}