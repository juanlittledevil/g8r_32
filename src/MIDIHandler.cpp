#include "MIDIHandler.h"
#include "EurorackClock.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif

// Initialize the static instance of the MIDIHandler class
MIDIHandler* MIDIHandler::instance = nullptr;

// Constructor for the MIDIHandler class
MIDIHandler::MIDIHandler(int rxPin, int txPin, EurorackClock& clock) 
    : midi(rxPin, txPin), clock(clock) {
    instance = this;
}

// Begin the MIDIHandler
void MIDIHandler::begin() {
    midi.begin();
    midi.setHandleClock(handleClock);
    midi.setHandleStart(handleStart);
    midi.setHandleStop(handleStop);
    midi.setHandleContinue(handleContinue);
    midi.setHandleNoteOn(handleNoteOn);
    midi.setHandleNoteOff(handleNoteOff);
}

// Handle incoming MIDI messages
void MIDIHandler::handleMidiMessage() {
    midi.read();
}

// Set the MIDI channel
void MIDIHandler::setChannel(int channel) {
    if (channel == -1) {
        this->channel = -1;  // Listen to all channels
    } else {
        this->channel = channel - 1;  // Listen to a specific channel
    }
}

// Static function to handle MIDI clock messages
void MIDIHandler::handleClock() {
    instance->clock.clock();
}

// Static function to handle MIDI start messages
void MIDIHandler::handleStart() {
    instance->clock.start();
}

// Static function to handle MIDI stop messages
void MIDIHandler::handleStop() {
    instance->clock.stop();
}

// Static function to handle MIDI continue messages
void MIDIHandler::handleContinue() {
    instance->clock.start();
}

// Static function to handle MIDI note on messages
void MIDIHandler::handleNoteOn(byte channel, byte pitch, byte velocity) {
    #if DEBUG
    DEBUG_PRINT("Received MIDI Note On for note " + String(pitch) + " n channel " + String(channel) + " with velocity " + String(velocity));
    #endif
}

// Static function to handle MIDI note off messages
void MIDIHandler::handleNoteOff(byte channel, byte pitch, byte velocity) {
    #if DEBUG
    DEBUG_PRINT("Received MIDI Note Off for note " + String(pitch) + " on channel " + String(channel) + " with velocity " + String(velocity));
    #endif
}