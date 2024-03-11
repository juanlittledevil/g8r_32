#include "LED.h"
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
LED::LED(int pin) : PWMPin(pin) {
    // Initialization code here if needed
}

// Destructor
LED::~LED() {
    // Cleanup code here if needed
}

void LED::setState(bool state) {
    // If state is true, set duty cycle to highest value (255 for Arduino)
    // If state is false, set duty cycle to 0
    this->setDutyCycle(state ? 255 : 0);
}

bool LED::getState() {
    // Return true if duty cycle is not 0, false otherwise
    return this->getDutyCycle() != 0;
}

void LED::startBlinking(unsigned long interval) {
    this->blinkStartTime = millis();
    this->blinkInterval = interval;
    this->isBlinking = true;
    #ifdef DEBUG
    DEBUG_PRINT("LED::startBlinking: " + String(this->blinkStartTime) + " " + String(this->blinkInterval));
    #endif
}

void LED::stopBlinking() {
    this->isBlinking = false;
}

void LED::updateBlinking() {
    #ifdef DEBUG
    DEBUG_PRINT("LED::updateBlinking " + String(this->isBlinking) + " " + String(millis() - this->blinkStartTime) + " " + String(this->blinkInterval));
    #endif
    if (this->isBlinking && millis() - this->blinkStartTime >= this->blinkInterval) {
        this->blinkStartTime = millis();
        this->setState(!getState()); // Toggle LED state
        #ifdef DEBUG
        DEBUG_PRINT("LED::updateBlinking: toggling LED state");
        #endif
    }
}