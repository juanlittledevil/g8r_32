/**
 * @file Mode2.cpp
 * @brief This file contains the implementation of the Mode2 class, which is used to manage the second mode of the Eurorack module.
 * 
 */
#include "Mode2.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Mode2* Mode2::instance = nullptr;

Mode2::Mode2(StateManager& stateManager,
    Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    // MIDIHandler& midiHandler,
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
        // midiHandler(midiHandler),
        resetButton(resetButton) {
    instance = this;
}

/**
 * @brief This function is used to setup the current mode object. Setup and teardown methods are meant to be called when Mode selector
 * switches modes. This is where you can put code that should only run once when the mode is switched to.
 * 
 */
void Mode2::setup() {
    // Initialization code here if needed
    gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.
    ledController.clearAndResetLEDs();
    midi.setHandleNoteOn(handleNoteOn);
    // midiHandler.setMode(2);

    numLeds = ledController.getNumLeds();
    /// This is where you'd read the eeprom for the mode2 settings. However, we don't have any settings for mode2 yet.
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object.
 * 
 */
void Mode2::teardown() {
    // Cleanup code here if needed
    ledController.clearAndResetLEDs();
    midi.setHandleNoteOn(nullptr);
}

/**
 * @brief This function is used to update the current mode object. The update method is meant to be called every loop iteration.
 * This is where you can put code that should run every loop iteration.
 */
void Mode2::update() {
    // Update code here
    handleMidiMessage();
}

void Mode2::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    ledController.update(currentTime);
}

void Mode2::handleNoteOn(byte channel, byte pitch, byte velocity) {
    if (channel >= 9 && channel <= 16) {
        unsigned long currentTime = millis();
        int gate = (channel - 9) % instance->gates.numGates;
        instance->gates.trigger(gate, currentTime);
        if (!instance->isInSelection) {
            // instance->leds.trigger(gate, currentTime);
            instance->ledController.trigger(gate, currentTime);
        }
    }
}

/**
 * @brief Handle the single press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleSinglePress() {
    // Handle single press
}

/**
 * @brief This function is used to handle the double press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleDoublePress() {
    // Handle double press
}

/**
 * @brief This function is used to handle the long press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleLongPress() {
    // Handle long press
}

/**
 * @brief This function is used to handle the press released event. How in this mode we don't use it.
 * 
 */
void Mode2::handlePressReleased() {
    // Handle press released
}

/**
 * @brief This function is used to handle the encoder rotation event. How in this mode we don't use it.
 * 
 */
void Mode2::handleSelectionStates() {
    // Handle selection states
}

/**
 * @brief This function is used to handle the reset single press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleResetSinglePress() {
    // Handle reset single press
}

/**
 * @brief This function is used to handle the reset double press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleResetDoublePress() {
    // Handle reset double press
}

/**
 * @brief This function is used to handle the reset long press event. How in this mode we don't use it.
 * 
 */
void Mode2::handleResetLongPress() {
    // Handle reset long press
}

/**
 * @brief This function is used to handle the reset press released event. How in this mode we don't use it.
 * 
 */
void Mode2::handleResetPressReleased() {
    // Handle reset press released
}
