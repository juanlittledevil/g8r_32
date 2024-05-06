/**
 * @file Encoder.cpp
 * @brief This file contains the implementation of the Encoder class which manages the physical encoder and button inputs.
 */
#include "Encoder.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Encoder::Encoder(int clkPin, int dtPin, int buttonPin) 
    : encCLK(clkPin, true, false), 
      encDT(dtPin, true, false), 
      encButton(buttonPin, true, false), 
      prevStateCLK(encCLK.getState()), 
      buttonState(OPEN), 
      lastButtonPress(0), 
      pressCount(0),
      lastTurnTime(0),
      speed(1)
{
    // Nothing to do here
}

/**
 * @brief This is intended to be called in the setup() function of the main sketch.
 * 
 */
void Encoder::begin() {
    encCLK.begin();
    encDT.begin();
    encButton.begin();
}

/**
 * @brief Read the encoder and return the direction of the turn.
 * It uses some constants to determine the speed of the turn.
 * 
 * TODO: I should probably move the constants to the constructor and make them configurable.
 * 
 * @return Encoder::Direction 
 */
Encoder::Direction Encoder::readEncoder() {
    static int counter = 0;
    const int stepsPerDetent = 2; // Change this to match your encoder's resolution
    const int maxInterval = 300; // ms
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

/**
 * @brief This is used to read the state of the button. It also handles debouncing and double-click detection.
 * 
 * @return Encoder::ButtonState 
 */
Encoder::ButtonState Encoder::readButton() {
    static unsigned long lastDebounceTime = 0; // the last time the button pin was toggled
    static ButtonState lastButtonState = OPEN; // the last button state
    static const int debounceDelay = 40; // debounce time in milliseconds

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

/**
 * @brief Read the speed of the encoder turn.
 * 
 * @return int 
 */
int Encoder::readSpeed() {
    return speed;
}

/**
 * @brief Check if the button has been long pressed.
 * 
 * @return true 
 * @return false 
 */
bool Encoder::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

/**
 * @brief Check if the button has been double pressed.
 * 
 * @return true 
 * @return false 
 */
bool Encoder::isButtonDoublePressed() {
    return pressCount >= 2;
}

/**
 * @brief Check if the button has been single pressed.
 * 
 * @return true 
 * @return false 
 */
bool Encoder::isButtonSinglePressed() {
    if (pressCount == 1 && millis() - lastButtonPress >= DOUBLE_PRESS_INTERVAL) {
        pressCount = 0;
        return true;
    }
    return false;
}

/**
 * @brief This is a helper function to handle the encoder direction.
 * 
 * @param currentValue 
 * @param maxValue 
 * @param direction 
 * @return int 
 */
int Encoder::handleEncoderDirection(int currentValue, int maxValue, Direction direction) {
    if (direction == Encoder::CW) {
        if (currentValue < maxValue - 1) {
            return currentValue + 1;
        }
    } else if (direction == Encoder::CCW) {
        if (currentValue > 0) {
            return currentValue - 1;
        }
    }
    return currentValue;
}