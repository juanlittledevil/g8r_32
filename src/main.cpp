#include <UMIDI.h>
#include <Arduino.h>
#include "Gates.h"
#include "LEDs.h"
#include "SpdtSwitch.h"
#include "Config.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
#define SWITCH_PINA PB0
#define SWITCH_PINB PB1

// Create an instance of the UMIDI class
UMIDI midi(RX_PIN, TX_PIN);

// Create an instance of the SPDTSwitch class
SPDTSwitch mySwitch(SWITCH_PINA,SWITCH_PINB);

// Callback function for handling MIDI clock messages
void handleClock() {
  #if DEBUG
  Serial.println("Received MIDI Clock");
  #endif
}

// Callback function for handling MIDI start messages
void handleStart() {
  #if DEBUG
  Serial.println("Received MIDI Start");
  #endif
}

// Callback function for handling MIDI stop messages
void handleStop() {
  #if DEBUG
  Serial.println("Received MIDI Stop");
  #endif
}

// Callback function for handling MIDI continue messages
void handleContinue() {
  #if DEBUG
  Serial.println("Received MIDI Continue");
  #endif
}

// Define the pins for the gates
int pins[] = {PA15, PB3, PB4, PB5}; // Example pins
int numPins = sizeof(pins) / sizeof(pins[0]); // Calculate the number of pins
Gates gates = Gates(pins, numPins); // Create an instance of Gates

// Define the pins for the LEDs
int ledPins[] = {PB6, PB7, PB8, PB9}; // Placeholder pin numbers for LEDs
int numLedPins = sizeof(ledPins) / sizeof(ledPins[0]); // Calculate the number of LED pins
LEDs leds = LEDs(ledPins, numLedPins); // Create an instance of LEDs


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

  leds.begin(); // Initialize LED pins
  gates.begin(); // Initialize gate pins
  mySwitch.begin(); // Initialize switch pins

  #if DEBUG
  Serial.println("Finished setup() function");
  #endif
}

SwitchState lastState = NEUTRAL;

void loop() {
  // Check for incoming MIDI messages
  // midi.read();

    // Test LEDs and gates
  for (int i = 0; i < numLedPins; i++) {
    leds.setState(i, HIGH); // Turn on LED
    gates.setState(i, HIGH); // Open gate
    #if DEBUG
    Serial.println("LED and gate " + String(i) + " turned on"); 
    #endif
  }
  delay(1000); // Wait for 1 second

  for (int i = 0; i < numLedPins; i++) {
    leds.setState(i, LOW); // Turn off LED
    gates.setState(i, LOW); // Close gate
    #if DEBUG
    Serial.println("LED and gate " + String(i) + " turned off");
    #endif
  }

  // Add test for swtich state but only print when there is a change
  SwitchState state = mySwitch.read();
  if (state != lastState) {
    Serial.println("MAIN.CPP - Switch state changed to " + String(state));

    lastState = state;
  }

  delay(1000); // Wait for 1 second
}
