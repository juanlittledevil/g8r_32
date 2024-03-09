#include "Gate.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

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
