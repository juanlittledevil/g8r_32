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

// Method to set the state of all LEDs
void LEDs::setAllLeds(bool state) {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].setState(state);
    }
}

// Method to set the state of a specific LED
void LEDs::setState(int index, bool state) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].setState(state);
    }
}

// void LEDs::setState(int index, bool state, int intensity) {
//     if (index >= 0 && index < numLeds) {
//         this->leds[index].setDutyCycle(intensity);
//     }
// }

void LEDs::setIntensity(int index, int intensity) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].setIntensity(intensity);
    }
}

void LEDs::setAllintensity(int intensity) {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].setIntensity(intensity);
    }
}

// Method to get the state of a specific LED
bool LEDs::getState(int index) {
    if(index >= 0 && index < numLeds) {
        return this->leds[index].getState();
    }
    return false;
}

void LEDs::blinkFast(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(200); // Fast blink: 200 ms
    }
}

void LEDs::blinkFast2(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(100); // Faster blink: 100 ms
    }
}

void LEDs::blinkSlow(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(800); // Slow blink: 800 ms
    }
}

void LEDs::updateBlinking() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].updateBlinking();
    }
}

void LEDs::stopBlinking(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].stopBlinking();
    }
}

void LEDs::stopAllBlinking() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].stopBlinking();
    }
}   