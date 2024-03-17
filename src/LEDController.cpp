// LEDController.cpp

#include "LEDController.h"

LEDController::LEDController(LEDs& leds) : leds(leds) {
    turnAllOff();
}

void LEDController::turnAllOn() {
    leds.setAllLeds(true);
}

void LEDController::turnAllOff() {
    leds.setAllLeds(false);
}

void LEDController::blinkSlow(int ledIndex) {
    leds.startBlinking(ledIndex, 500);
}

void LEDController::blinkFast(int ledIndex) {
    leds.startBlinking(ledIndex, 200);
}

void LEDController::stopBlinking(int ledIndex) {
    leds.stopBlinking(ledIndex);
}

void LEDController::stopAllBlinking() {
    leds.stopAllBlinking();
}

void LEDController::blinkFaster(int ledIndex) {
    leds.startBlinking(ledIndex, 100);
}

void LEDController::setState(int ledIndex, bool state) {
    leds.setState(ledIndex, state);
}

void LEDController::resetInverted() {
    for (int i = 0; i < leds.numLeds; i++) {
        leds.resetInverted(i);
    }
}

void LEDController::resetInverted(int ledIndex) {
    leds.resetInverted(ledIndex);
}

int LEDController::getNumLeds() {
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

void LEDController::updateBlinking() {
    leds.updateBlinking();
}