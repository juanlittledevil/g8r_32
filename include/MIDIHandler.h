#ifndef MIDIHANDLER_H
#define MIDIHANDLER_H

#include <MIDI.h>
#include "EurorackClock.h"
#include "Gates.h"
#include "LEDs.h"

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