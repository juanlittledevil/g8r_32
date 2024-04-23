// Mode2.cpp
#include "Mode2.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) { \
    Debug::print(__FILE__, __LINE__, __func__, String(message)); \
    Serial.flush(); \
}

Mode2::Mode2(Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    MIDIHandler& midiHandler,
    ResetButton& resetButton)
    :   encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midiHandler(midiHandler),
        resetButton(resetButton) {
}

void Mode2::setup() {
    // Initialization code here if needed
    midiHandler.setMode(2);
    numLeds = ledController.getNumLeds();
}

void Mode2::teardown() {
    // Cleanup code here if needed
    ledController.clearAndResetLEDs();
}

void Mode2::update() {
    // Update code here
    midiHandler.handleMidiMessage();
}

void Mode2::handleSinglePress() {
    // Handle single press
}

void Mode2::handleDoublePress() {
    // Handle double press
}

void Mode2::handleLongPress() {
    // Handle long press
}

void Mode2::handlePressReleased() {
    // Handle press released
}

void Mode2::handleSelectionStates() {
    // Handle selection states
}

void Mode2::handleResetSinglePress() {
    // Handle reset single press
}

void Mode2::handleResetDoublePress() {
    // Handle reset double press
}

void Mode2::handleResetLongPress() {
    // Handle reset long press
}

void Mode2::handleResetPressReleased() {
    // Handle reset press released
}
