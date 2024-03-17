// LEDController.cpp

#include "LEDController.h"

LedController::LedController(LEDs& leds) : leds(leds) {
    turnAllOff();
}

void LedController::turnAllOn() {
    leds.setAllLeds(true);
}

void LedController::turnAllOff() {
    leds.setAllLeds(false);
}

void LedController::blinkSlow(int ledIndex) {
    leds.startBlinking(ledIndex, 500);
}

void LedController::blinkFast(int ledIndex) {
    leds.startBlinking(ledIndex, 200);
}

void LedController::stopBlinking(int ledIndex) {
    leds.stopBlinking(ledIndex);
}

void LedController::blinkFaster(int ledIndex) {
    leds.startBlinking(ledIndex, 300);
}

void LedController::resetInverted() {
    for (int i = 0; i < leds.numLeds; i++) {
        leds.resetInverted(i);
    }
}

void LedController::resetInverted(int ledIndex) {
    leds.resetInverted(ledIndex);
}

int LedController::getNumLeds() {
    return leds.numLeds;
}

void LEDController::update() {
    leds.updateBlinking();
}

void LEDController::clearAndResetLEDs() {
    leds.stopAllBlinking();
    leds.setAllLeds(false);
    resetInverted();
}

void LEDController::clearLEDs() {
    leds.stopAllBlinking();
    leds.setAllLeds(false);
}