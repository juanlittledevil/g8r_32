// Mode2.cpp
#include "Mode2.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Mode2::Mode2(Encoder& encoder, Gates& gates, LedController& ledController, MIDIHandler& midiHandler)
    :   encoder(encoder),
        gates(gates),
        ledController(ledController),
        midiHandler(midiHandler) {
}

void Mode2::setup() {
    // Initialization code here if needed
    midiHandler.setMode(1);
    numLeds = ledController.getNumLeds();
}

void Mode2::teardown() {
    // Cleanup code here if needed
}

void Mode2::update() {
    // Update code here
}