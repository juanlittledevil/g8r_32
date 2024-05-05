#include "MIDIHandler.h"
#include "Debug.h"
#include <Arduino.h>
#include "ModeSelector.h"

#define DEBUG_PRINT(message) { \
    Debug::print(__FILE__, __LINE__, __func__, String(message)); \
    Serial.flush(); \
}

extern bool isInSelection;

// Initialize the static instance of the MIDIHandler class
MIDIHandler* MIDIHandler::instance = nullptr;

// Constructor for the MIDIHandler class
MIDIHandler::MIDIHandler(HardwareSerial& serial, EurorackClock& clock, Gates& gates, LEDs& leds)
    : midiSerial(serial), midi(midiSerial), clock(clock), gates(gates), leds(leds) {
    instance = this;
}

// Begin the MIDIHandler
void MIDIHandler::begin() {
    midi.begin(MIDI_CHANNEL_OMNI);
    midi.setHandleClock(handleClock);
    midi.setHandleStart(nullptr);
    midi.setHandleStop(nullptr);
    midi.setHandleContinue(handleContinue);
    midi.setHandleNoteOn(handleMode0NoteOn);
    midi.setHandleNoteOff(handleMode0NoteOff);
}

// In MIDIHandler.cpp
byte MIDIHandler::confirmedChannel = 9; // Default MIDI channel 0 - 15

// Handle incoming MIDI messages
void MIDIHandler::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    leds.update(currentTime);
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
    // don't handle notes on mode 0
}

// Static function to handle MIDI note off messages
void MIDIHandler::handleMode0NoteOff(byte channel, byte pitch, byte velocity) {
    // don't handle notes on mode 0
}

// Static function to handle MIDI note on messages for mode 1
void MIDIHandler::handleMode1NoteOn(byte channel, byte pitch, byte velocity) {
    unsigned long currentTime = millis();
    int note = pitch;
    // adjust the note number so C2 is the first note
    int gate = (note - 3) % instance->gates.numGates;
    if (channel == confirmedChannel) {
        instance->gates.trigger(gate, currentTime);
        if (!isInSelection) {
            instance->leds.trigger(gate, currentTime);
        }
    }
}

// Static function to handle MIDI note off messages for mode 1
void MIDIHandler::handleMode1NoteOff(byte channel, byte pitch, byte velocity) {
    // Not used in mode1, we only use triggers...
}

// Static function to handle MIDI note on messages for mode 2
void MIDIHandler::handleMode2NoteOn(byte channel, byte pitch, byte velocity) {
    if (channel >= 9 && channel <= 16) {
        unsigned long currentTime = millis();
        int gate = (channel - 9) % instance->gates.numGates;
        instance->gates.trigger(gate, currentTime);
        if (!isInSelection) {
            instance->leds.trigger(gate, currentTime);
        }
    }
}

// Static function to handle MIDI note off messages for mode 2
void MIDIHandler::handleMode2NoteOff(byte channel, byte pitch, byte velocity) {
    // Unused in mode 2, we only trigger notes here...
}

void MIDIHandler::setMode(int mode) {
    instance->gates.setALLGates(false);
    instance->leds.setAllLeds(false);
    if (mode == 0) {
        midi.setHandleNoteOn(nullptr);
        midi.setHandleNoteOff(nullptr);
        midi.setHandleStart(nullptr);
        midi.setHandleStop(nullptr);
        midi.setHandleClock(handleClock);
    } else if (mode == 1) {
        midi.setHandleNoteOn(handleMode1NoteOn);
        midi.setHandleNoteOff(nullptr);
        midi.setHandleClock(nullptr);
        midi.setHandleStart(nullptr);
        midi.setHandleStop(nullptr);
    } else if (mode == 2) {
        midi.setHandleNoteOn(handleMode2NoteOn);
        midi.setHandleNoteOff(nullptr);
        midi.setHandleClock(nullptr);
        midi.setHandleStart(nullptr);
        midi.setHandleStop(nullptr);
    }
}

/**
 * @brief sets the MIDI channel for the MIDIHandler
 * 
 * @param channel 
 */
void MIDIHandler::setChannel(byte channel) {
    if (confirmedChannel != channel + 1) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Setting MIDI channel to " + String(channel + 1));
        }
        confirmedChannel = channel + 1;
    } else {
        if (Debug::isEnabled) {
            DEBUG_PRINT("MIDI channel already set to " + String(channel + 1));
        }
    }
}

/**
 * @brief gets the MIDI channel for the MIDIHandler
 * 
 * @return int 
 */
int MIDIHandler::getChannel() {
    return confirmedChannel - 1;
}