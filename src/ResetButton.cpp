// ResetButton.cpp
#include "ResetButton.h"


ResetButton::ResetButton(int pin)
    :   resetButton(pin, false, true),
        buttonState(OPEN),
        lastButtonPress(0),
        pressCount(0) {
    // Initialization code
}

bool ResetButton::begin() {
    resetButton.begin();
}

ResetButton::ButtonState ResetButton::readButton() {
    // Code to read button state
    static unsigned long lastDebounceTime = 0; // the last time the button pin was toggled
    static ButtonState lastButtonState = OPEN; // the last button state
    static const int debounceDelay = 40; // debounce time in milliseconds

    ButtonState reading = (resetButton.getState() == LOW) ? PRESSED : OPEN;

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

bool ResetButton::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

bool ResetButton::isButtonDoublePressed() {
    return pressCount >= 2;
}