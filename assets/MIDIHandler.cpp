/**
 * @file MIDIHandler.cpp
 * @brief This file contains the implementation of the MIDIHandler class, which is used to handle MIDI messages.
 * 
 */
#include "MIDIHandler.h"
#include "Debug.h"
#include <Arduino.h>
#include "ModeSelector.h"

#define DEBUG_PRINT(message) { \
    Debug::print(__FILE__, __LINE__, __func__, String(message)); \
    Serial.flush(); \
}

/// @brief  Whether the module is in selection mode
extern bool isInSelection;

/// Initialize the static instance of the MIDIHandler class
MIDIHandler* MIDIHandler::instance = nullptr;

/// @brief This configures the default MIDI channel, it is set to 9 by default. However, this can be changed by the user at runtime.
byte MIDIHandler::confirmedChannel = 9; // Default MIDI channel 0 - 15

/// Constructor for the MIDIHandler class
MIDIHandler::MIDIHandler(HardwareSerial& serial, EurorackClock& clock, Gates& gates, LEDs& leds)
    : midiSerial(serial), midi(midiSerial), clock(clock), gates(gates), leds(leds) {
    instance = this;
}

/**
 * @brief This function is used to initialize the MIDIHandler. It is intended to be called in the setup() function of the main sketch.
 * The values here aren't too important as they get overwritten by the ModeSelector when the mode is set.
 */
void MIDIHandler::begin() {
    midi.begin(MIDI_CHANNEL_OMNI);
    midi.setHandleClock(handleClock);
    midi.setHandleStart(nullptr);
    midi.setHandleStop(nullptr);
    midi.setHandleContinue(handleContinue);
    midi.setHandleNoteOn(handleMode0NoteOn);
    midi.setHandleNoteOff(handleMode0NoteOff);
}

/**
 * @brief This function is used to handle MIDI messages. It is intended to be called every loop cycle of the main sketch.
 * We call this function from the update() method of each mode.
 */
void MIDIHandler::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    leds.update(currentTime);
}

/**
 * @brief This function is used to handle MIDI clock messages.
 * 
 */
void MIDIHandler::handleClock() {
    instance->clock.handleMidiClock();
}

/**
 * @brief This function is used to handle MIDI start messages.
 * 
 */
void MIDIHandler::handleStart() {
    instance->clock.start();
}

/**
 * @brief This function is used to handle MIDI stop messages.
 * 
 */
void MIDIHandler::handleStop() {
    instance->clock.stop();
}

/**
 * @brief This function is used to handle MIDI continue messages.
 * 
 */
void MIDIHandler::handleContinue() {
    instance->clock.start();
}

/**
 * @brief This static function is used to handle MIDI note on messages for mode 0. Which in this case doesn't do anything...
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
void MIDIHandler::handleMode0NoteOn(byte channel, byte pitch, byte velocity) {
    // don't handle notes on mode 0
}

/**
 * @brief This static function is used to handle MIDI note off messages for mode 0. Which in this case doesn't do anything...
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
void MIDIHandler::handleMode0NoteOff(byte channel, byte pitch, byte velocity) {
    // don't handle notes on mode 0
}

/**
 * @brief This static function is used to handle MIDI note on messages for mode 1.
 * TODO: I would love to figure a way to handle this from mode 0. But I wasn't able to find a way to do it.
 * without exposing MIDI directly to the mode which I felt should be handled by the MIDIHandler.
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
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

/**
 * @brief This static function is used to handle MIDI note off messages for mode 1. But since we only use triggers
 * we don't need to do anything here.
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
void MIDIHandler::handleMode1NoteOff(byte channel, byte pitch, byte velocity) {
    // Not used in mode1, we only use triggers...
}

/**
 * @brief This static function is used to handle MIDI note on messages for mode 2.
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
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

/**
 * @brief This static function is used to handle MIDI note off messages for mode 2. But since we only use triggers
 * we don't need to do anything here.
 * 
 * @param channel 
 * @param pitch 
 * @param velocity 
 */
void MIDIHandler::handleMode2NoteOff(byte channel, byte pitch, byte velocity) {
    // Unused in mode 2, we only trigger notes here...
}

/**
 * @brief This function is used to set the mode of the MIDIHandler. When the mode is set,
 * the MIDIHandler will set the callbacks for the MIDI messages accordingly.
 * TODO: I would love to figoure out a way to have the call back functions managed in the modes,
 * but still retain this functionality here. I think that would make mode development easier.
 * 
 * @param mode 
 */
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