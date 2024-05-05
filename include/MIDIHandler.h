/**
 * @file MIDIHandler.h
 * @brief This file contains the MIDIHandler class, which is used to handle MIDI messages.
 * This of this as the interface between the app and the MIDI library. It is responsible for handling MIDI messages
 * and routing them to the appropriate functions.
 * 
 * TODO: This class is a bit of a mess and could use some refactoring. I would like to move callback functions to 
 * the modes so it is easier to understand the flow of the program. But again, it works so it's fine for now.
 */
#ifndef MIDIHANDLER_H
#define MIDIHANDLER_H

#include <MIDI.h>
#include "EurorackClock.h"
#include "Gates.h"
#include "LEDs.h"

/**
 * @brief This class is used as an interface between our app and the MIDI library.
 * 
 */
class MIDIHandler {
public:
    MIDIHandler(HardwareSerial& serial, EurorackClock& clock, Gates& gates, LEDs& leds);
    void begin();
    void handleMidiMessage();
    void setChannel(byte channel);
    int getChannel();
    void setMode(int mode);

    // Declare static functions to handle MIDI messages
    static void handleClock();
    static void handleStart();
    static void handleStop();
    static void handleContinue();
    static void handleMode0NoteOn(byte channel, byte pitch, byte velocity);
    static void handleMode0NoteOff(byte channel, byte pitch, byte velocity);
    static void handleMode1NoteOn(byte channel, byte pitch, byte velocity);
    static void handleMode1NoteOff(byte channel, byte pitch, byte velocity);
    static void handleMode2NoteOn(byte channel, byte pitch, byte velocity);
    static void handleMode2NoteOff(byte channel, byte pitch, byte velocity);


private:
    // Declare a static instance of the MIDIHandler class
    static MIDIHandler* instance; 
    midi::SerialMIDI<HardwareSerial> midiSerial;
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>> midi;
    EurorackClock& clock;
    byte channel = 10; 
    Gates& gates;
    LEDs& leds;
    static byte confirmedChannel;

};

#endif // MIDIHANDLER_H