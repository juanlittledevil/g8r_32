#include <UMIDI.h>
#include <Arduino.h>

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2

// Create an instance of the UMIDI class
UMIDI midi(RX_PIN, TX_PIN);

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Initialize MIDI communication using the hardware serial port
  midi.begin();

  // Wait for serial port to initialize
  delay(1000);
  
  // Print a message indicating setup is complete
  Serial.println("Setup complete. Sending MIDI messages...");
}

void loop() {
  // Send a Note On message on channel 1, note C4, velocity 100
  midi.sendNoteOn(1, 60, 100);
  delay(500); // Wait for half a second
  
  // Send a Note Off message on channel 1, note C4, velocity 0
  midi.sendNoteOff(1, 60, 0);
  delay(500); // Wait for half a second
  
  // Send a Control Change message on channel 1, controller 7 (volume), value 127 (maximum)
  midi.sendControlChange(1, 7, 127);
  delay(500); // Wait for half a second
  
  // // Send a Program Change message on channel 1, program number 1
  midi.sendProgramChange(1, 1);
  delay(500); // Wait for half a second
}
