#include "LED.h"
#include "Config.h"

// #define DEBUG 

#ifdef DEBUG
// Include the Arduino Serial library
#include <Arduino.h>
#endif


// Constructor
LED::LED(int pin) : OutputPin(pin) {
  // Initialization code here if needed
}

// Destructor
LED::~LED() {
  // Cleanup code here if needed
}
