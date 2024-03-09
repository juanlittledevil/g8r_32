#include "Encoder.h"
#include "Debug.h"
#include <Arduino.h>

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))
#endif

Encoder::Encoder(int clkPin, int dtPin, int buttonPin) 
    : encCLK(clkPin, true), 
      encDT(dtPin, true), 
      encButton(buttonPin, true), 
      prevStateCLK(encCLK.getState()), 
      buttonState(OPEN), 
      lastButtonPress(0), 
      pressCount(0) 
{
    // Nothing to do here
}

void Encoder::begin() {
    encCLK.begin();
    encDT.begin();
    encButton.begin();
}

Encoder::Direction Encoder::readEncoder() {
    static int counter = 0;
    const int stepsPerDetent = 2; // Change this to match your encoder's resolution

    int curStateCLK = encCLK.getState();
    if (curStateCLK != prevStateCLK) {
        prevStateCLK = curStateCLK;
        if (encDT.getState() != curStateCLK) {
            counter++;
            if (counter >= stepsPerDetent) {
                counter = 0;
                return CCW;
            }
        } else {
            counter++;
            if (counter >= stepsPerDetent) {
                counter = 0;
                return CW;
            }
        }
    }
    return NONE;
}

Encoder::ButtonState Encoder::readButton() {
    if (encButton.getState() == LOW && buttonState == OPEN) { // Button is pressed
        buttonState = PRESSED;
        unsigned long now = millis();
        if (now - lastButtonPress < DOUBLE_PRESS_INTERVAL) {
            pressCount++;
        } else {
            pressCount = 1;
        }
        lastButtonPress = now;
    } else if (encButton.getState() == HIGH && buttonState == PRESSED) { // Button is not pressed
        buttonState = OPEN;
    }
    return buttonState;
}

bool Encoder::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

bool Encoder::isButtonDoublePressed() {
    return pressCount >= 2;
}