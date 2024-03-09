#include "LEDs.h"
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
LEDs::LEDs(int pins[], int numLeds) {
    this->numLeds = numLeds;
    leds = new LED[numLeds];
    for(int i = 0; i < numLeds; i++) {
        leds[i] = LED(pins[i]);
    }
}

// Destructor
LEDs::~LEDs() {
    delete[] this->leds;
}

void LEDs::begin() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].begin();
    }
}

void LEDs::setState(int index, bool state) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].setState(state);
    }
}

bool LEDs::getState(int index) {
    if(index >= 0 && index < numLeds) {
        return this->leds[index].getState();
    }
    return false;
}

