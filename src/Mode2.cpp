// Mode2.cpp
#include "Mode2.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) { \
    Debug::print(__FILE__, __LINE__, __func__, String(message)); \
    Serial.flush(); \
}

Mode2::Mode2(Encoder& encoder, Gates& gates, LEDController& ledController, MIDIHandler& midiHandler)
    :   encoder(encoder),
        gates(gates),
        ledController(ledController),
        midiHandler(midiHandler) {
}

void Mode2::setup() {
    // Initialization code here if needed
    midiHandler.setMode(2);
    DEBUG_PRINT("Calling midiHandler.setMode(2) from Mode2::setup");
    numLeds = ledController.getNumLeds();

    DEBUG_PRINT("Mode 2 setup");
}

void Mode2::teardown() {
    // Cleanup code here if needed
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

