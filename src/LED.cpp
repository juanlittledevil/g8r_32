#include "LED.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Constructor
LED::LED(int pin) : OutputPin(pin) {
    // Initialization code here if needed
}

// Destructor
LED::~LED() {
    // Cleanup code here if needed
}

// void LED::setState(bool state) {
//     int scaledIntensity = state ? map(this->intensity, 0, 255, 0, 255) : 0;
//     this->setDutyCycle(scaledIntensity);
// }

// bool LED::getState() {
//     // Return true if duty cycle is not 0, false otherwise
//     return this->getDutyCycle() != 0 == HIGH
// }

void LED::setIntensity(int intensity) {
    this->intensity = intensity;
}

void LED::startBlinking(unsigned long interval) {
    this->blinkStartTime = millis();
    this->blinkInterval = interval;
    this->isBlinking = true;
}

void LED::stopBlinking() {
    this->isBlinking = false;
    this->intensity = 255;
}

void LED::updateBlinking() {
    if (this->isBlinking && millis() - this->blinkStartTime >= this->blinkInterval) {
        this->blinkStartTime = millis();
        this->setState(!getState()); // Toggle LED state
    }
}

void LED::trigger(unsigned long currentTime, bool inverted) {
    if (!inverted) {
        setState(HIGH);
    } else {
        setState(LOW);
    }
    this->inverted = inverted;
    triggeredTime = currentTime;
}

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