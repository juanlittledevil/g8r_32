#include "MIDIHandler.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif

extern bool isInSelection;

// Initialize the static instance of the MIDIHandler class
MIDIHandler* MIDIHandler::instance = nullptr;

// Constructor for the MIDIHandler class
MIDIHandler::MIDIHandler(int rxPin, int txPin, EurorackClock& clock, Gates& gates, LEDs& leds)
    : midi(rxPin, txPin), clock(clock), gates(gates), leds(leds) {
    instance = this;
}

// Begin the MIDIHandler
void MIDIHandler::begin() {
    midi.begin();
    midi.setHandleClock(handleClock);
    midi.setHandleStart(handleStart);
    midi.setHandleStop(handleStop);
    midi.setHandleContinue(handleContinue);
    midi.setHandleNoteOn(handleMode0NoteOn);
    midi.setHandleNoteOff(handleMode0NoteOff);
}

// In MIDIHandler.cpp
byte MIDIHandler::selectedChannel = 9; // Default MIDI channel 0 - 15

// Handle incoming MIDI messages
void MIDIHandler::handleMidiMessage() {
    midi.read();
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
void MIDIHandler::handleMode0NoteOn(byte channel, byte pitch, byte velocity) {
    #if DEBUG
    DEBUG_PRINT("Received MIDI Note On for note " + String(pitch) + " n channel " + String(channel) + " with velocity " + String(velocity));
    #endif
    // don't handle notes on mode 0
}

// Static function to handle MIDI note off messages
void MIDIHandler::handleMode0NoteOff(byte channel, byte pitch, byte velocity) {
    #if DEBUG
    DEBUG_PRINT("Received MIDI Note Off for note " + String(pitch) + " on channel " + String(channel) + " with velocity " + String(velocity));
    #endif
    // don't handle notes on mode 0
}

// Static function to handle MIDI note on messages for mode 1
void MIDIHandler::handleMode1NoteOn(byte channel, byte pitch, byte velocity) {
    int note = pitch;
    int gate = note % instance->gates.numGates;
    if (channel == selectedChannel) {
        instance->gates.turnOnGate(gate);
        if (!isInSelection) {
            instance->leds.setState(gate, true);
        }
    }
}

// Static function to handle MIDI note off messages for mode 1
void MIDIHandler::handleMode1NoteOff(byte channel, byte pitch, byte velocity) {
    int note = pitch;
    int gate = note % instance->gates.numGates;
    if (channel == selectedChannel) {
        instance->gates.turnOffGate(gate);
        if (!isInSelection) {
            instance->leds.setState(gate, false);
        }
    }
}

// Static function to handle MIDI note on messages for mode 2
void MIDIHandler::handleMode2NoteOn(byte channel, byte pitch, byte velocity) {
    if (channel >= 9 && channel <= 16) {
        int gate = (channel - 9) % instance->gates.numGates;
        instance->gates.turnOnGate(gate);
        if (!isInSelection) {
            instance->leds.setState(gate, true);
        }
    }
}

// Static function to handle MIDI note off messages for mode 2
void MIDIHandler::handleMode2NoteOff(byte channel, byte pitch, byte velocity) {
    if (channel >= 9 && channel <= 16) {
        int gate = (channel - 9) % instance->gates.numGates;
        instance->gates.turnOffGate(gate);
        if (!isInSelection) {
            instance->leds.setState(gate, false);
        }
    }
}

void MIDIHandler::setMode(int mode) {
    instance->gates.setALLGates(false);
    instance->leds.setAllLeds(false);
    if (mode == 0) {
        midi.setHandleNoteOn(handleMode0NoteOn);
        midi.setHandleNoteOff(handleMode0NoteOff);
    } else if (mode == 1) {
        midi.setHandleNoteOn(handleMode1NoteOn);
        midi.setHandleNoteOff(handleMode1NoteOff);
    } else if (mode == 2) {
        midi.setHandleNoteOn(handleMode2NoteOn);
        midi.setHandleNoteOff(handleMode2NoteOff);
    }
}

void MIDIHandler::setChannel(byte channel) {
    selectedChannel = channel;
}
