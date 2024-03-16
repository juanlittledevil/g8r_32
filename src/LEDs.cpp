#include "LEDs.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

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
        this->leds[index].startBlinking(300); // Fast blink: 300 ms
    }
}

void LEDs::blinkFast2(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(100); // Faster blink: 100 ms
    }
}

void LEDs::blinkSlow(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(600); // Slow blink: 800 ms
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

// Method to trigger a specific led
void LEDs::trigger(int index, unsigned long currentTime, bool inverted) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].trigger(currentTime, inverted); // Trigger the gate at the specified index
  }
}

void LEDs::update(unsigned long currentTime) {
  for (int i = 0; i < numLeds; i++) {
    this->leds[i].update(currentTime); // Update the state of the gate
  }
}

void LEDs::resetInverted(int index) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].resetIvernted(); // Reset the inverted state of the gate at the specified index
  }
}