// Gates.cpp
#include "Gates.h"
#include "Gate.h"
#include "Config.h"

// #define DEBUG 

#ifdef DEBUG
// Include the Arduino Serial library
#include <Arduino.h>
#endif


// Constructor
Gates::Gates(int pins[], int numGates) {
  this->numGates = numGates;
  gateArray = new Gate[numGates];
  for (int i = 0; i < numGates; i++) {
    gateArray[i] = Gate(pins[i]);
  }
}

// Destructor
Gates::~Gates() {
  delete[] gateArray; // Deallocate memory for the gate array
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