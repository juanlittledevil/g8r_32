#include "Gate.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))


// Constructor
Gate::Gate(int pin) : OutputPin(pin) {
    // Initialization code
    division = internalPPQN;
}

// Destructor
Gate::~Gate() {
    // Cleanup code here if needed
}

// Set the division for the gate
void Gate::setDivision(int newDivision) {
    division = newDivision;
}

void Gate::trigger(unsigned long currentTime) {
    setState(HIGH);
    triggeredTime = currentTime;
}

void Gate::update(unsigned long currentTime) {
    if (getState() == HIGH && currentTime >= triggeredTime + gateOnDuration) {
        setState(LOW);
    }
}

int Gate::getDivision() {
    return this->division;
}

void Gate::setGateOnDuration(int duration) {
    gateOnDuration = duration;
}