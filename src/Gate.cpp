/**
 * @file Gate.cpp
 * @brief This file contains the implementation of the Gate class, which is used to manage the gates of the Eurorack module.
 */
#include "Gate.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))


/// Constructor
Gate::Gate(int pin) : OutputPin(pin) {
    // Initialization code
    division = internalPPQN;
}

/// Destructor
Gate::~Gate() {
    // Cleanup code here if needed
}

/**
 * @brief This function is used to set the division of the gate.
 * 
 * @param newDivision 
 */
void Gate::setDivision(int newDivision) {
    division = newDivision;
}

/**
 * @brief This function is used to execute a trigger signal. It sets the state of the gate to HIGH and records the time of the trigger.
 * Then, the gate will automatically turn off after the gateOnDuration has passed.
 * 
 * @param currentTime 
 */
void Gate::trigger(unsigned long currentTime) {
    setState(HIGH);
    triggeredTime = currentTime;
}

/**
 * @brief This function is used to update the state of the gate.
 * If the gate is currently HIGH and the gateOnDuration has passed, the gate will be turned off.
 * It is meant to be called in every loop iteration.
 * 
 * @param currentTime 
 */
void Gate::update(unsigned long currentTime) {
    if (getState() == HIGH && currentTime >= triggeredTime + gateOnDuration) {
        setState(LOW);
    }
}

/**
 * @brief Returns the division configured for the gate.
 * 
 * @return int 
 */
int Gate::getDivision() {
    return this->division;
}

/**
 * @brief This function is used to set the duration of the gate being on.
 * 
 * @param duration 
 */
void Gate::setGateOnDuration(int duration) {
    gateOnDuration = duration;
}