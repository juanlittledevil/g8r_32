#include "MIDIHandler.h"
#include "Debug.h"
#include <Arduino.h>
#include "ModeSelector.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

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
byte MIDIHandler::confirmedChannel = 9; // Default MIDI channel 0 - 15

// Handle incoming MIDI messages
void MIDIHandler::handleMidiMessage() {
    midi.read();
}

// Static function to handle MIDI clock messages
void MIDIHandler::handleClock() {
    instance->clock.handleMidiClock();
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
    if (Debug::isEnabled) {
        DEBUG_PRINT("Received MIDI Note On for note " + String(pitch) + " n channel " + String(channel) + " with velocity " + String(velocity));
    }
    // don't handle notes on mode 0
}

// Static function to handle MIDI note off messages
void MIDIHandler::handleMode0NoteOff(byte channel, byte pitch, byte velocity) {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Received MIDI Note Off for note " + String(pitch) + " on channel " + String(channel) + " with velocity " + String(velocity));
    }
    // don't handle notes on mode 0
}

// Static function to handle MIDI note on messages for mode 1
void MIDIHandler::handleMode1NoteOn(byte channel, byte pitch, byte velocity) {
    int note = pitch;
    int gate = note % instance->gates.numGates;
    if (channel == confirmedChannel) {
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
    if (channel == confirmedChannel) {
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
        #ifdef DEBUG
        DEBUG_PRINT("Note on: channel = " + String(channel) + ", gate = " + String(gate));
        #endif
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
        #ifdef DEBUG
        DEBUG_PRINT("Note off: channel = " + String(channel) + ", gate = " + String(gate));
        #endif
        instance->gates.turnOffGate(gate);
        if (!isInSelection) {
            instance->leds.setState(gate, false);
        }
    }
}

void MIDIHandler::setMode(int mode) {
    instance->gates.setALLGates(false);
    instance->leds.setAllLeds(false);
    if (ModeSelector::getInstance().getMode() == 0) {
        midi.setHandleNoteOn(nullptr);
        midi.setHandleNoteOff(nullptr);
        midi.setHandleClock(handleClock);
    } else if (ModeSelector::getInstance().getMode() == 1) {
        midi.setHandleNoteOn(handleMode1NoteOn);
        midi.setHandleNoteOff(handleMode1NoteOff);
        midi.setHandleClock(nullptr);
    } else if (ModeSelector::getInstance().getMode() == 2) {
        midi.setHandleNoteOn(handleMode2NoteOn);
        midi.setHandleNoteOff(handleMode2NoteOff);
        midi.setHandleClock(nullptr);
    }
}

void MIDIHandler::setChannel(byte channel) {
    confirmedChannel = channel;
}
