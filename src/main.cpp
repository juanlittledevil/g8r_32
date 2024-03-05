#include <Arduino.h>
#include <UMIDI.h>

// Create an instance of the UMIDI class
UMIDI midi(PA3, PA2);

// Callback function for handling Note On messages
void handleNoteOn(byte channel, byte pitch, byte velocity) {
  Serial.print("Note On - Channel: ");
  Serial.print(channel);
  Serial.print(", Pitch: ");
  Serial.print(pitch);
  Serial.print(", Velocity: ");
  Serial.println(velocity);
}

// Callback function for handling Note Off messages
void handleNoteOff(byte channel, byte pitch, byte velocity) {
  Serial.print("Note Off - Channel: ");
  Serial.print(channel);
  Serial.print(", Pitch: ");
  Serial.print(pitch);
  Serial.print(", Velocity: ");
  Serial.println(velocity);
}

// Callback function for handling Control Change messages
void handleControlChange(byte channel, byte controller, byte value) {
  Serial.print("Control Change - Channel: ");
  Serial.print(channel);
  Serial.print(", Controller: ");
  Serial.print(controller);
  Serial.print(", Value: ");
  Serial.println(value);
}

// Callback function for handling Program Change messages
void handleProgramChange(byte channel, byte program) {
  Serial.print("Program Change - Channel: ");
  Serial.print(channel);
  Serial.print(", Program: ");
  Serial.println(program);
}

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the UMIDI library
  midi.begin();

  // Set callback functions for handling MIDI messages
  midi.setHandleNoteOn(handleNoteOn);
  midi.setHandleNoteOff(handleNoteOff);
  midi.setHandleControlChange(handleControlChange);
  midi.setHandleProgramChange(handleProgramChange);
}

void loop() {
  // Check for incoming MIDI messages
  midi.read();
}
