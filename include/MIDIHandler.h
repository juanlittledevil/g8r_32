#ifndef MIDIHANDLER_H
#define MIDIHANDLER_H

#include "UMIDI.h"
#include "EurorackClock.h"

class MIDIHandler {
public:
    MIDIHandler(int rxPin, int txPin, EurorackClock& clock);
    void begin();
    void handleMidiMessage();
    void setChannel(int channel);

private:
    UMIDI midi;
    EurorackClock& clock;
    int channel = 10; 

    // Declare a static instance of the MIDIHandler class
    static MIDIHandler* instance; 

    // Declare static functions to handle MIDI messages
    static void handleClock();
    static void handleStart();
    static void handleStop();
    static void handleContinue();
    static void handleNoteOn(byte channel, byte pitch, byte velocity);
    static void handleNoteOff(byte channel, byte pitch, byte velocity);
};

#endif // MIDIHANDLER_H