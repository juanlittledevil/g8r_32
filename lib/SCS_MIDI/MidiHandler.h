#ifndef MIDI_HANDLER_H
#define MIDI_HANDLER_H

#include <Arduino.h> // Include necessary libraries

class MidiHandler {
public:
    MidiHandler(); // Constructor
    ~MidiHandler(); // Destructor

    // Function declarations
    void bingin();
    void setupMidi();
    void sendNoteOn(byte note, byte velocity);
    void sendNoteOff(byte note, byte velocity);
    // Add more function declarations as needed
};

#endif
