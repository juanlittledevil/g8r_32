/**
 * @file LEDController.cpp
 * @brief This file contains the implementation of the LEDController class, which is used to manage the LEDs of the Eurorack module.
 */
#include "LEDController.h"

/**
 * @brief Construct a new LED Controller:: LED Controller object. By default, all LEDs are turned off.
 * 
 * @param leds 
 */
LEDController::LEDController(LEDs& leds) : leds(leds) {
    turnAllOff();
}

/**
 * @brief This function is used to turn all LEDs on.
 * 
 */
void LEDController::turnAllOn() {
    leds.setAllLeds(true);
}

/**
 * @brief This function is used to turn all LEDs off.
 * 
 */
void LEDController::turnAllOff() {
    leds.setAllLeds(false);
}

/**
 * @brief This function is used to start blinking an LED at a slow rate.
 * 
 * @param ledIndex 
 */
void LEDController::blinkSlow(int ledIndex) {
    leds.startBlinking(ledIndex, 500);
}

/**
 * @brief This function is used to start blinking an LED at a fast rate.
 * 
 * @param ledIndex 
 */
void LEDController::blinkFast(int ledIndex) {
    leds.startBlinking(ledIndex, 200);
}

/**
 * @brief This function is used to stop blinking an LED.
 * 
 * @param ledIndex 
 */
void LEDController::stopBlinking(int ledIndex) {
    leds.stopBlinking(ledIndex);
}

/**
 * @brief This function is used to stop all LEDs from blinking.
 * 
 */
void LEDController::stopAllBlinking() {
    leds.stopAllBlinking();
}

/**
 * @brief This function is used to start blinking an LED at a faster rate.
 * 
 * @param ledIndex 
 */
void LEDController::blinkFaster(int ledIndex) {
    leds.startBlinking(ledIndex, 100);
}

/**
 * @brief This function is used to set the state of an LED.
 * 
 * @param ledIndex 
 * @param state 
 */
void LEDController::setState(int ledIndex, bool state) {
    leds.setState(ledIndex, state);
}

/**
 * @brief This function is used to reset the inverted state of all LEDs.
 * 
 */
void LEDController::resetInverted() {
    for (int i = 0; i < leds.numLeds; i++) {
        leds.resetInverted(i);
    }
}

/**
 * @brief This function is used to reset the inverted state of a specific LED.
 * 
 * @param ledIndex 
 */
void LEDController::resetInverted(int ledIndex) {
    leds.resetInverted(ledIndex);
}

/**
 * @brief returns the total number of LEDs in the LED array.
 * 
 * @return int 
 */
int LEDController::getNumLeds() {
    return leds.numLeds;
}

/**
 * @brief This function updates the LEDs. It is meant to be called in every loop iteration.
 * 
 */
void LEDController::update() {
    leds.updateBlinking();
}

/**
 * @brief This function updates the LEDs. It is meant to be called in every loop iteration.
 * 
 * @param currentTime 
 */
void LEDController::update(unsigned long currentTime) {
    leds.update(currentTime);
}

/**
 * @brief Helper function to clear and reset all LEDs.
 * 
 */
void LEDController::clearAndResetLEDs() {
    leds.stopAllBlinking();
    leds.setAllLeds(false);
    resetInverted();
}

/**
 * @brief Helper function to clear all LEDs.
 * 
 */
void LEDController::clearLEDs() {
    leds.stopAllBlinking();
    leds.setAllLeds(false);
}

/**
 * @brief This function is used to update the blinking of the LED. It is meant to be called in every loop iteration.
 * 
 */
void LEDController::updateBlinking() {
    leds.updateBlinking();
}

/**
 * @brief This function is used to trigger an LED. The LED will stay on for ledOnDuration milliseconds.
 * 
 * @param index 
 * @param currentTime 
 * @param inverted 
 */
void LEDController::trigger(int index, unsigned long currentTime, bool inverted) {
    leds.trigger(index, currentTime, inverted);
}