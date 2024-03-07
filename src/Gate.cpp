#include "Gate.h"
#include "Config.h"

// #define DEBUG 

#ifdef DEBUG
// Include the Arduino Serial library
#include <Arduino.h>
#endif


// Constructor
Gate::Gate(int pin) : OutputPin(pin) {
  // Initialization code here if needed
}

// Destructor
Gate::~Gate() {
  // Cleanup code here if needed
}
