#include "LEDs.h"

// #define DEBUG 

#ifdef DEBUG
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

