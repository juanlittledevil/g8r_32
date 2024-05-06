/**
 * @file ResetButton.cpp
 * @brief This file contains the implementation of the ResetButton class, which is used to manage the reset button of the Eurorack module.
 * 
 */
#include "ResetButton.h"

/**
 * @brief Construct a new Reset Button:: Reset Button object
 * 
 * @param pin 
 */
ResetButton::ResetButton(int pin)
    :   pin(pin),
        resetButton(pin, false, true),
        buttonState(OPEN),
        lastButtonPress(0),
        pressCount(0) {
    // Initialization code
}

/**
 * @brief This function is used to initialize the reset button. This is intended to be called in the setup() function of the main sketch.
 * TODO: ResetButton should probably inherit from Pin. When I first wrote this class I had issues with the order of operation of the various
 * objects and the order of initialization. I think I have resolved those issues but I never went back and refactored this class.
 * This is a good candidate for refactoring, but it also works fine so I have not bothered to do it.
 * 
 */
void ResetButton::begin() {
    pinMode(pin, INPUT_PULLDOWN); // Set the pin as input with pulldown resistor
}

/**
 * @brief This function is used to read the state of the reset button.
 * 
 * @return ResetButton::ButtonState 
 */
ResetButton::ButtonState ResetButton::readButton() {
    // Code to read button state
    static unsigned long lastDebounceTime = 0; // the last time the button pin was toggled
    static ButtonState lastButtonState = OPEN; // the last button state
    static const int debounceDelay = 40; // debounce time in milliseconds

    ButtonState reading = (resetButton.getState() == HIGH) ? PRESSED : OPEN;

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
 * @brief This function is used to check if the button has been long pressed.
 * 
 * @return bool 
 */
bool ResetButton::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

/**
 * @brief This function is used to check if the button has been double pressed.
 * 
 * @return bool 
 */
bool ResetButton::isButtonDoublePressed() {
    return pressCount >= 2;
}

/**
 * @brief This function is used to check if the button has been single pressed.
 * 
 * @return bool 
 */
bool ResetButton::isButtonSinglePressed() {
    if (pressCount == 1 && millis() - lastButtonPress >= DOUBLE_PRESS_INTERVAL) {
        pressCount = 0;
        return true;
    }
    return false;
}