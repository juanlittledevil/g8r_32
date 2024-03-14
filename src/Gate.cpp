#include "Gate.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif


// Constructor
Gate::Gate(int pin) : OutputPin(pin) {
    // Initialization code
    division = 4;
    tickCount = 0;
}

// Destructor
Gate::~Gate() {
    // Cleanup code here if needed
}

// Set the division for the gate
void Gate::setDivision(int newDivision) {
    division = newDivision;
}

// trigger the gate from clock tick.
void Gate::trigger() {
    // Increment the tick count
    tickCount++;

    // Only trigger the gate if the tick count is a multiple of the division
    if (tickCount % division == 0) {
        // Turn on the gate
        setState(HIGH);
        triggeredTime = millis();
    }

    // Reset the tick count if it's equal to the division
    if (tickCount == division) {
        tickCount = 0;
    }
}

void Gate::update() {
    // Check if it's time to turn off the gate
    if (millis() >= triggeredTime + gateOnDuration) {
        setState(LOW);
    }
}

void Gate::resetTrigger() {
    setState(LOW);
    tickCount = 0;
}