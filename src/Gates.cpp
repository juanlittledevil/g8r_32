/**
 * @file Gates.cpp
 * @brief This file contains the implementation of the Gates class, which is used to manage the gates of the Eurorack module.
 * 
 */
#include "Gates.h"
#include "Debug.h"
#include <vector>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief Construct a new Gates:: Gates object
 * 
 * @param pins 
 * @param numGates 
 */
Gates::Gates(std::vector<int> pins, int numGates) {
    this->numGates = numGates;
    gateArray = new Gate[numGates];
    gateCounters = new int[numGates];
    for (int i = 0; i < numGates; i++) {
        gateArray[i] = Gate(pins[i]);
        gateCounters[i] = 0; // Fix: Add missing declaration of 'gateCounters'
    }
}

/**
 * @brief Destroy the Gates:: Gates object
 * 
 */
Gates::~Gates() {
    delete[] gateArray; // Deallocate memory for the gate array
    delete[] gateCounters; // Deallocate memory for the gate counters
}

/**
 * @brief This is intended to be called in the setup() function of the main sketch.
 * It mainly initializes the pins for the gates as outputs.
 */
void Gates::begin() {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].begin();
    }
}

/**
 * @brief This function is used to set the state of a specific gate. State is either HIGH or LOW.
 * 
 * @param gateIndex 
 * @param state 
 */
void Gates::setState(int gateIndex, bool state) {
    if (gateIndex >= 0 && gateIndex < numGates) {
        gateArray[gateIndex].setState(state);
    }
}

/**
 * @brief This function is used to get the state of a specific gate.
 * 
 * @param gateIndex 
 * @return state of the gate as a boolean
 */
bool Gates::getState(int gateIndex) {
    if (gateIndex >= 0 && gateIndex < numGates) {
        return gateArray[gateIndex].getState();
    }
    return false;
}

/**
 * @brief This function is used to turn on a specific gate.
 * 
 * @param index 
 */
void Gates::turnOnGate(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setState(HIGH); // Turn on the gate at the specified index
    }
}

/**
 * @brief This function is used to turn off a specific gate.
 * 
 * @param index 
 */
void Gates::turnOffGate(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setState(LOW); // Turn off the gate at the specified index
    }
}

/**
 * @brief This function is sets the satet of all gates.
 * 
 * @param state 
 */
void Gates::setALLGates(bool state) {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].setState(state); // Set the state of the gate
    }
}

/**
 * @brief This function is used to start a trigger signal on a specific gate.
 * The gate will automatically turn off after the gateOnDuration has passed. Which is why the currentTime is needed.
 * 
 * @param index 
 * @param currentTime 
 */
void Gates::trigger(int index, unsigned long currentTime) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].trigger(currentTime); // Trigger the gate at the specified index
    }
}

/**
 * @brief This method is used to se the division of a specific gate.
 * 
 * @param index 
 * @param division 
 */
void Gates::setDivision(int index, int division) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setDivision(division); // Set the division of the gate
    }
}

/**
 * @brief This function returns the division of a specific gate.
 * 
 * @param index 
 * @return int 
 */
int Gates::getDivision(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        return gateArray[index].getDivision(); // Get the division of the gate
    }
    return -1; // Return -1 if the index is out of bounds
}

/**
 * @brief This is used to update the state of the gates. It is meant to be called in every loop iteration.
 * It is needed in order to evaluate if the gate should be turned off.
 * 
 * @param currentTime 
 */
void Gates::update(unsigned long currentTime) {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].update(currentTime); // Update the state of the gate
    }
}

/**
 * @brief This is a helper function used when working with a specific gate.
 * 
 * @param index 
 */
void Gates::setSelectedGate(int index) {
    selectedGate = index;
}

/**
 * @brief returns the selected gate.
 * 
 * @return int 
 */
int Gates::getSelectedGate() {
    return selectedGate;
}

/**
 * @brief Sets the duration of the gate being on when sending trigger signals.
 * 
 * @param index 
 * @param duration 
 */
void Gates::setGateOnDuration(int index, int duration) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setGateOnDuration(duration); // Set the gate on duration
    }
}