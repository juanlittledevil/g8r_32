// Gates.cpp
#include "Gates.h"
#include "Debug.h"
#include <vector>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Constructor
Gates::Gates(std::vector<int> pins, int numGates) {
    this->numGates = numGates;
    gateArray = new Gate[numGates];
    gateCounters = new int[numGates];
    for (int i = 0; i < numGates; i++) {
        gateArray[i] = Gate(pins[i]);
        gateCounters[i] = 0; // Fix: Add missing declaration of 'gateCounters'
    }
}

// Destructor
Gates::~Gates() {
    delete[] gateArray; // Deallocate memory for the gate array
    delete[] gateCounters; // Deallocate memory for the gate counters
}

void Gates::begin() {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].begin();
    }
}

void Gates::setState(int gateIndex, bool state) {
    if (gateIndex >= 0 && gateIndex < numGates) {
        gateArray[gateIndex].setState(state);
    }
}

bool Gates::getState(int gateIndex) {
    if (gateIndex >= 0 && gateIndex < numGates) {
        return gateArray[gateIndex].getState();
    }
    return false;
}

// Method to turn on a specific gate
void Gates::turnOnGate(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setState(HIGH); // Turn on the gate at the specified index
    }
}

// Method to turn off a specific gate
void Gates::turnOffGate(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setState(LOW); // Turn off the gate at the specified index
    }
}

// Method to turn on or off all gates
void Gates::setALLGates(bool state) {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].setState(state); // Set the state of the gate
    }
}

// Method to trigger a specific gate
void Gates::trigger(int index, unsigned long currentTime) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].trigger(currentTime); // Trigger the gate at the specified index
    }
}

// Method to set the division of a specific gate
void Gates::setDivision(int index, int division) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        gateArray[index].setDivision(division); // Set the division of the gate
    }
}

// Method to get the division of a specific gate
int Gates::getDivision(int index) {
    if (index >= 0 && index < numGates) { // Check if the index is within bounds
        return gateArray[index].getDivision(); // Get the division of the gate
    }
    return -1; // Return -1 if the index is out of bounds
}

// Method to update the state of all gates
void Gates::update(unsigned long currentTime) {
    for (int i = 0; i < numGates; i++) {
        gateArray[i].update(currentTime); // Update the state of the gate
    }
}

void Gates::setSelectedGate(int index) {
    selectedGate = index;
}

int Gates::getSelectedGate() {
    return selectedGate;
}