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
      pressCount(0),
      lastTurnTime(0),
      speed(1)
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
    const int maxInterval = 200; // ms
    const int maxIncrement = 25; // Change this to match your desired increment

    int curStateCLK = encCLK.getState();
    if (curStateCLK != prevStateCLK) {
        prevStateCLK = curStateCLK;
        if (encDT.getState() != curStateCLK) {
            counter++;
            if (counter >= stepsPerDetent) {
                counter = 0;
                unsigned long currentTime = millis();
                unsigned long timeDifference = currentTime - lastTurnTime;
                lastTurnTime = currentTime;
                speed = (timeDifference < maxInterval) ? maxIncrement : 1; // Adjust this value as needed
                return CCW;
            }
        } else {
            counter++;
            if (counter >= stepsPerDetent) {
                counter = 0;
                unsigned long currentTime = millis();
                unsigned long timeDifference = currentTime - lastTurnTime;
                lastTurnTime = currentTime;
                speed = (timeDifference < maxInterval) ? maxIncrement : 1; // And here
                return CW;
            }
        }
    }
    return NONE;
}

Encoder::ButtonState Encoder::readButton() {
    static unsigned long lastDebounceTime = 0; // the last time the button pin was toggled
    static ButtonState lastButtonState = OPEN; // the last button state
    static const int debounceDelay = 20; // debounce time in milliseconds


    ButtonState reading = (encButton.getState() == LOW) ? PRESSED : OPEN;

    // If the button state has changed, reset the debouncing timer
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay) {
        // If the button state has changed and the debounce period has passed, update the button state
        if (reading != buttonState) {
            buttonState = reading;

            if (buttonState == PRESSED) {
                unsigned long now = millis();
                if (now - lastButtonPress < DOUBLE_PRESS_INTERVAL) {
                    pressCount++;
                } else {
                    pressCount = 1;
                }
                lastButtonPress = now;
            }
        }
    }

    lastButtonState = reading;
    return buttonState;
}

int Encoder::readSpeed() {
    return speed;
}

bool Encoder::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

bool Encoder::isButtonDoublePressed() {
    return pressCount >= 2;
}