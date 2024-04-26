#include <Arduino.h>
#include <MIDI.h>
#include "Gates.h"
#include "ModeSelector.h"
#include "LEDs.h"
#include "Debug.h"
#include "Encoder.h"
#include "MIDIHandler.h"
#include "EurorackClock.h"
#include "Constants.h"
#include "Mode0.h"
#include "Mode1.h"
#include "Mode2.h"
#include "LEDController.h"
#include "ResetButton.h"
#include "InputHandler.h"
#include <vector>
#include "AppState.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Define the RX and TX pins for MIDI communication
#define RX_PIN PA3
#define TX_PIN PA2
// Define the pins for the encoder
#define ENCODER_PINA PB13
#define ENCODER_PINB PB14
#define ENCODER_BUTTON PB12
// Define the pins for the clock and reset
#define CLOCK_PIN PB10
#define RESET_PIN PB11
#define RESET_BUTTON PB15
// Define the pin for the tempo LED
#define TEMPO_LED PA8

#define CV_A_PIN PA4
#define CV_B_PIN PA5

// Define the pins for the gates
std::vector<int> pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9}; // Example pins
const int numPins = pins.size();
Gates gates = Gates(pins, numPins); // Create an instance of Gates
// Define the pins for the LEDs
std::vector<int> ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0}; // Placeholder pin numbers for LEDs
int numLedPins = ledPins.size();

// Create an instance of LEDs
// Tempo LED is part of EurorackClock class to make this file cleaner.
LEDs leds = LEDs(ledPins, numLedPins); // Create an instance of LEDs

// Define the pins for the encoder
int encCLKPin = ENCODER_PINA;
int encDTPin = ENCODER_PINB;
int encButtonPin = ENCODER_BUTTON;

bool inModeSelection = false;
int intensity = 255; // Default intensity for LEDs
bool isInSelection = false; // Used to prevent multiple presses from being handled
unsigned long lastFlashTime = 0;

unsigned char internalPPQN = 24; // Pulses per quarter note
// const int musicalIntervals[] = {1, 2, 4, 8, 16, 32, 3, 6, 12, 24, 48};
std::vector<int> musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288, 384, 576, 768, 1152, 1536};
const int musicalIntervalsSize = musicalIntervals.size();

int total_pages = 16 / leds.numLeds; // Calculate total pages based on number of LEDs
int min_intensity = 64; // Set minimum intensity to 25% (64 out of 255)
int intensity_step = (255 - min_intensity) / (total_pages - 1); // Calculate intensity step

// Create an instance of the Encoder class
Encoder encoder = Encoder(encCLKPin, encDTPin, encButtonPin);

// Create an instance of the ResetButton class
ResetButton resetButton = ResetButton(RESET_BUTTON);

// Create an instance of the LEDController class
LEDController ledController(leds);

// Create an instance of the EurorackClock class
EurorackClock clock(CLOCK_PIN, RESET_PIN, TEMPO_LED, gates, leds);

// Create an instance of the MIDIHandler class
MIDIHandler midiHandler(Serial2, clock, gates, leds);

// Create an instance of the InputHandler class
InputHandler inputHandler = InputHandler(CV_A_PIN, CV_B_PIN);

// Create an instance of the AppState struct
AppState state;

// Mode Classes and ModeSelector
ModeSelector& modeSelector = ModeSelector::getInstance();
Mode* currentMode = nullptr;
Mode0 mode0(encoder, inputHandler, gates, ledController, midiHandler, resetButton, clock);
Mode1 mode1(encoder, inputHandler, gates, ledController, midiHandler, resetButton);
Mode2 mode2(encoder, inputHandler, gates, ledController, midiHandler, resetButton);

void setup() {
    delay(1000);

    // Enable debugging
    Debug::isEnabled = true;

    // Initialize serial communication
    if (Debug::isEnabled) {
        Serial.begin(115200);
        DEBUG_PRINT("Entering setup() function");
    }
    // TODO: Unfortunately I'm dealing with a bug that prevents me from initializing the reset button
    // from within the ResetButton class. I have to do it here instead. Opting this route as it is
    // the least intrusive. See notes in class method for more details.
    // resetButton.begin(); //  do not call this function as it will hang the app.
    pinMode(RESET_BUTTON, INPUT_PULLDOWN); // This is the workaround for the bug
    
    // Initialize the MIDIHandler
    // Serial2.begin(31250);
    midiHandler.begin();

    // Set the MIDIHandler to listen to all channels
    midiHandler.setChannel(-1);

    // Start the clock and set the initial tempo
    clock.setup();
    clock.setTempo(120.0, internalPPQN); // Set the tempo to 120 BPM with internal 4 PPQN

    // ------- Set the initial mode -------
    // IMPORTANT: Add the modes to the ModeSelector in order, so that the indices match with the mode numbers.
    modeSelector.addMode(&mode0);
    modeSelector.addMode(&mode1);
    modeSelector.addMode(&mode2);
    modeSelector.setLedController(ledController);
    modeSelector.setEncoder(encoder);
    modeSelector.setAppState(&state);
    modeSelector.readAppState();
    modeSelector.setMode(state.mode);
    currentMode = modeSelector.getCurrentMode();
    // // Run the setup function for the default mode
    // // NOTE: ONLY the default mode will execute this. If you have things that need to be set up for other modes,
    // // you will need to call the setup function for those modes here.
    currentMode->setup();

    delay(1000);

    leds.begin(); // Initialize LED pins
    gates.begin(); // Initialize gate pins
    encoder.begin(); // Initialize encoder pins

    // gates.setSelectedGate(selectedGate);
    
    if (Debug::isEnabled) {
        DEBUG_PRINT("Finished setup() function");
    }
}

void loop() {
    modeSelector.update();
    ledController.updateBlinking();
    if (!modeSelector.isInModeSelection()) {
        currentMode->update();
    } else {
        currentMode->teardown();
        currentMode = modeSelector.getCurrentMode();
        currentMode->setup();
    }
}
