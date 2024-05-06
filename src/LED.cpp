/**
 * @file LED.cpp
 * @brief This file contains the implementation of the LED class, which is used to manage the LEDs of the Eurorack module.
 */
#include "LED.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/// Constructor
LED::LED(int pin) : OutputPin(pin) {
    // Initialization code here if needed
}

/// Destructor
LED::~LED() {
    // Cleanup code here if needed
}

/**
 * @brief Set the intensity of the LED. I'm 99% sure I"m not actually using this but it is here for future use.
 * 
 * @param intensity 
 */
void LED::setIntensity(int intensity) {
    this->intensity = intensity;
}

/**
 * @brief This function is used to start blinking the LED. The LED's blink based on the interval provided.
 * The blinking is then updated in the updateBlinking() function. 
 * 
 * @param interval 
 */
void LED::startBlinking(unsigned long interval) {
    this->blinkStartTime = millis();
    this->blinkInterval = interval;
    this->isBlinking = true;
}

/**
 * @brief This function is used to stop the LED from blinking.
 * 
 */
void LED::stopBlinking() {
    this->isBlinking = false;
    this->intensity = 255;
}

/**
 * @brief This function is used to update the blinking of the LED. It is meant to be called in every loop iteration.
 * 
 */
void LED::updateBlinking() {
    if (this->isBlinking && millis() - this->blinkStartTime >= this->blinkInterval) {
        this->blinkStartTime = millis();
        this->setState(!getState()); // Toggle LED state
    }
}

/**
 * @brief This function is used to trigger the LED. The LED will stay on for ledOnDuration milliseconds.
 * 
 * @param currentTime 
 * @param inverted 
 */
void LED::trigger(unsigned long currentTime, bool inverted) {
    if (!inverted) {
        setState(HIGH);
    } else {
        setState(LOW);
    }
    this->inverted = inverted;
    triggeredTime = currentTime;
}

/**
 * @brief This function is used to update the state of the LED. It is meant to be called in every loop iteration.
 * 
 * @param currentTime 
 */
void LED::update(unsigned long currentTime) {
    // If the LED is not inverted, turn it off after ledOnDuration
    if (!this->inverted) {
        if (getState() == HIGH && currentTime >= triggeredTime + ledOnDuration) {
            setState(LOW);
        }
    // If the LED is inverted, turn it on after invertedLedOnDuration
    } else {
        if (getState() == LOW && currentTime >= triggeredTime + invertedLedOnDuration) {
            setState(HIGH);
        }
    }
}

/**
 * @brief This function is used to reset the inverted state of the LED.
 * The inverted state is used to determine is used to provide a visual feedback when the gate/LED is selected.
 * 
 */
void LED::resetIvernted() {
    this->inverted = false;
}

/**
 * @brief This function is used to set the duration that the LED should stay on.
 * 
 * @param duration 
 */
void LED::setLedOnDuration(int duration) {
    this->ledOnDuration = duration;
}