#include <UMIDI.h>
#include <Arduino.h>
#include "Gates.h"
#include "LEDs.h"
#include "SpdtSwitch.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))
#endif

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
#define SWITCH_PINA PB0
#define SWITCH_PINB PB1
#define ENCODER_PINA PB13
#define ENCODER_PINB PB14
#define ENCODER_BUTTON PB12
#define CLOCK_PIN PB15
#define RESET_PIN PA8

// Define the pins for the gates
int pins[] = {PA15, PB3, PB4, PB5}; // Example pins
int numPins = sizeof(pins) / sizeof(pins[0]); // Calculate the number of pins
Gates gates = Gates(pins, numPins); // Create an instance of Gates

// Define the pins for the LEDs
int ledPins[] = {PB6, PB7, PB8, PB9}; // Placeholder pin numbers for LEDs
int numLedPins = sizeof(ledPins) / sizeof(ledPins[0]); // Calculate the number of LED pins
LEDs leds = LEDs(ledPins, numLedPins); // Create an instance of LEDs

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA;
int encDTPin = ENCODER_PINB;
int encButtonPin = ENCODER_BUTTON;


// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(RX_PIN, TX_PIN, clock);

// Create an instance of the SPDTSwitch class
SPDTSwitch mySwitch(SWITCH_PINA,SWITCH_PINB);

// Create an instance of the Encoder class
Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin);


void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the MIDIHandler
  midiHandler.begin();

  // Set the MIDIHandler to listen to all channels
  midiHandler.setChannel(-1);

  delay(1000);

  leds.begin(); // Initialize LED pins
  gates.begin(); // Initialize gate pins
  mySwitch.begin(); // Initialize switch pins
  encoder.begin(); // Initialize encoder pins

  #if DEBUG
  DEBUG_PRINT("Finished setup() function");
  #endif
}

SwitchState lastState = NEUTRAL;

// Enconder Handlers
void handleLongPress() {
  // Code to handle a long button press
  #if DEBUG
  DEBUG_PRINT("Button was long pressed");
  #endif
}

void handleDoublePress() {
  // Code to handle a double button press
  #if DEBUG
  DEBUG_PRINT("Button was double pressed");
  #endif
}

void handleSinglePress() {
  // Code to handle a single button press
  #if DEBUG
  DEBUG_PRINT("Button was pressed");
  #endif
}

void loop() {
  static unsigned long lastLedToggleTime = 0;
  static bool ledsOn = false;
  const unsigned long ledToggleInterval = 1000; // Toggle LEDs every 1000 ms

  // Read the encoder and handle button presses
  encoder.readButton();
  if (encoder.isButtonLongPressed()) {
    handleLongPress();
  } else if (encoder.isButtonDoublePressed()) {
    handleDoublePress();
  } else if (encoder.readButton() == Encoder::PRESSED) {
    handleSinglePress();
  }

  Encoder::Direction direction = encoder.readEncoder();
  if (direction == Encoder::CW) {
    #if DEBUG
    DEBUG_PRINT("Encoder rotated clockwise");
    #endif
  } else if (direction == Encoder::CCW) {
    #if DEBUG
    DEBUG_PRINT("Encoder rotated counter-clockwise");
    #endif
  }

  // Handle incoming MIDI messages
  midiHandler.handleMidiMessage();

  // Test LEDs and gates
  unsigned long currentMillis = millis();
  if (currentMillis - lastLedToggleTime >= ledToggleInterval) {
    ledsOn = !ledsOn; // Toggle LED state
    for (int i = 0; i < numLedPins; i++) {
      leds.setState(i, ledsOn ? HIGH : LOW); // Set LED state
      gates.setState(i, ledsOn ? HIGH : LOW); // Set gate state
      #if DEBUG
      DEBUG_PRINT("LED and gate " + String(i) + (ledsOn ? " turned on" : " turned off"));
      #endif
    }
    lastLedToggleTime = currentMillis;
  }

  // Add test for switch state but only print when there is a change
  SwitchState state = mySwitch.read();
  if (state != lastState) {
    #if DEBUG
    DEBUG_PRINT("Switch state changed to " + String(state));
    #endif
    lastState = state;
  }
}