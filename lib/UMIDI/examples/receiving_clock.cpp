#include <UMIDI.h>
#include <Arduino.h>

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2

// Create an instance of the UMIDI class
UMIDI midi(RX_PIN, TX_PIN);

// Callback function for handling MIDI clock messages
void handleClock() {
  Serial.println("Received MIDI Clock");
}

// Callback function for handling MIDI start messages
void handleStart() {
  Serial.println("Received MIDI Start");
}

// Callback function for handling MIDI stop messages
void handleStop() {
  Serial.println("Received MIDI Stop");
}

// Callback function for handling MIDI continue messages
void handleContinue() {
  Serial.println("Received MIDI Continue");
}

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the UMIDI library
  midi.begin();

  // Set callback functions for handling MIDI messages
  midi.setHandleClock(handleClock);
  midi.setHandleStart(handleStart);
  midi.setHandleStop(handleStop);
  midi.setHandleContinue(handleContinue);

  delay(1000);

  Serial.println("Finished setup() function");
}

void loop() {
  // Check for incoming MIDI messages
  midi.read();
}
