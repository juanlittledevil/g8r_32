/**
 * @file LEDs.cpp
 * @brief This is the implementation file for the LEDs class, which is used to manage the LEDs of the Eurorack module.
 */
#include "LEDs.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/// Constructor
LEDs::LEDs(std::vector<int> pins, int numLeds) {
    this->numLeds = numLeds;
    leds = new LED[numLeds];
    for(int i = 0; i < numLeds; i++) {
        leds[i] = LED(pins[i]);
    }
}

/// Destructor
LEDs::~LEDs() {
    delete[] this->leds;
}

/**
 * @brief This function is used to initialize the pins for the LEDs as outputs.
 * It is intended to be called in the setup() function of the main sketch.
 * 
 */
void LEDs::begin() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].begin();
    }
}

/**
 * @brief This function is used to set the state of all the LEDs.
 * Possible states are HIGH or LOW.
 * 
 * @param state 
 */
void LEDs::setAllLeds(bool state) {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].setState(state);
    }
}

/**
 * @brief This function is used to set the state of a specific LED.
 * Possible states are HIGH or LOW.
 * 
 * @param index 
 * @param state 
 */
void LEDs::setState(int index, bool state) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].setState(state);
    }
}

/**
 * @brief This function is used to set the intensity of a specific LED.
 * 
 * @param index 
 * @param intensity 
 */
void LEDs::setIntensity(int index, int intensity) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].setIntensity(intensity);
    }
}

/**
 * @brief This function is used to set the intensity of all LEDs.
 * 
 * @param intensity 
 */
void LEDs::setAllintensity(int intensity) {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].setIntensity(intensity);
    }
}

/**
 * @brief This function is used to get the state of a specific LED.
 * 
 * @param index 
 * @return state of the LED as a boolean
 
 */
bool LEDs::getState(int index) {
    if(index >= 0 && index < numLeds) {
        return this->leds[index].getState();
    }
    return false;
}

bool LEDs::getIsBlinking(int index) {
    if(index >= 0 && index < numLeds) {
        return this->leds[index].getIsBlinking();
    }
    return false;
}

/**
 * @brief This function is used to start blinking an LED. The LED's blink based on the interval provided.
 * 
 * @param index 
 * @param interval 
 */
void LEDs::startBlinking(int index, unsigned long interval) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].startBlinking(interval);
    }
}

/**
 * @brief This function is used to update the blinking of the LEDs. It is meant to be called in every loop iteration.
 * 
 */
void LEDs::updateBlinking() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].updateBlinking();
    }
}

/**
 * @brief This function is used stop the LED from blinking.
 * 
 * @param index 
 */
void LEDs::stopBlinking(int index) {
    if(index >= 0 && index < numLeds) {
        this->leds[index].stopBlinking();
    }
}

/**
 * @brief This function is used to stop all LEDs from blinking.
 * 
 */
void LEDs::stopAllBlinking() {
    for(int i = 0; i < numLeds; i++) {
        this->leds[i].stopBlinking();
    }
}

/**
 * @brief This function is used to trigger the LED. The LED will stay on for ledOnDuration milliseconds.
 * 
 * @param index 
 * @param currentTime 
 * @param inverted 
 */
void LEDs::trigger(int index, unsigned long currentTime, bool inverted) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].trigger(currentTime, inverted); // Trigger the gate at the specified index
  }
}

/**
 * @brief This function is used to update the state of the LEDs. It is meant to be called in every loop iteration.
 * 
 * @param currentTime 
 */
void LEDs::update(unsigned long currentTime) {
  for (int i = 0; i < numLeds; i++) {
    this->leds[i].update(currentTime); // Update the state of the gate
  }
}

/**
 * @brief This function is used to update the state of a specific LED. It is meant to be called in every loop iteration.
 * 
 * @param index 
 * @param currentTime 
 */
void LEDs::update(int index, unsigned long currentTime) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].update(currentTime); // Update the state of the gate at the specified index
  }
}

/**
 * @brief This function is used to reset the inverted state of all LEDs.
 * 
 */
void LEDs::resetInverted(int index) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].resetIvernted(); // Reset the inverted state of the gate at the specified index
  }
}

/**
 * @brief This function is used to set the inverted state of a specific LED.
 * 
 * @param index 
 * @param inverted 
 */
void LEDs::setInverted(int index, bool inverted) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].setInverted(inverted); // Set the inverted state of the gate at the specified index
  }
}

/**
 * @brief This function is used to set the inverted state of all LEDs.
 * 
 * @param inverted 
 */
void LEDs::setAllInverted(bool inverted) {
  for (int i = 0; i < numLeds; i++) {
    this->leds[i].setInverted(inverted); // Set the inverted state of all gates
  }
}

/**
 * @brief This function is used to start pulsing an LED. The LED will pulse based on the interval and pulse duration provided.
 * 
 * @param index 
 * @param interval 
 * @param pulseDuration 
 * @param inverted 
 */
void LEDs::startPulsing(int index, unsigned long interval, int pulseDuration, bool inverted) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].startPulsing(interval, pulseDuration, inverted); // Start pulsing the gate at the specified index
  }
}

/**
 * @brief This function is used to stop the LED from pulsing.
 * 
 * @param index 
 */ 
void LEDs::stopPulsing(int index) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    this->leds[index].stopPulsing(); // Stop pulsing the gate at the specified index
  }
}

/**
 * @brief This function is used to stop all LEDs from pulsing.
 * 
 */
void LEDs::stopAllPulsing() {
  for (int i = 0; i < numLeds; i++) {
    this->leds[i].stopPulsing(); // Stop pulsing all gates
  }
}

/**
 * @brief This function is used to update the pulsing of the LEDs. It is meant to be called in every loop iteration.
 * 
 */
void LEDs::updatePulsing() {
  for (int i = 0; i < numLeds; i++) {
    this->leds[i].updatePulsing(); // Update the pulsing of the gate
  }
}

/**
 * @brief THis function is used to get the pulse state of a specific LED.
 * 
 * @return bool 
 */
bool LEDs::getIsPulsing(int index) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    return this->leds[index].getIsPulsing(); // Return the pulsing state of the gate at the specified index
  }
  return false;
}

/**
 * @brief This function is used to get the inverted state of a specific LED.
 * 
 * @param index 
 * @return bool 
 */
bool LEDs::getInverted(int index) {
  if (index >= 0 && index < numLeds) { // Check if the index is within bounds
    return this->leds[index].getInverted(); // Return the inverted state of the gate at the specified index
  }
  return false;
}
