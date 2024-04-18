// ResetButton.cpp
#include "ResetButton.h"


ResetButton::ResetButton(int pin)
    :   pin(pin),
        resetButton(pin, false, true),
        buttonState(OPEN),
        lastButtonPress(0),
        pressCount(0) {
    // Initialization code
}

bool ResetButton::begin() {
    // TODO: There appears to be a bug with either my object initialization or the InputPin class.
    // If we try and configure pinMode here the app hangs. But if we call it directly from the
    // main.setup() function it works fine. I suspect it has to do with order of initialization.
    // The weirdest part is that the Encoder class works fine with the same initialization pattern.
    // Also, if we add a 'Serial.println("Hello, world!")' statement after the pinMode() call, it
    // works fine. I suspect it has to do with the Serial object being initialized and causing a
    // delay. I'll need to investigate this further.
    // For now, we'll leave this empty and call pinMode from the main setup function.
    // pinMode(pin, INPUT_PULLDOWN);
    // Serial.println("Hello, world!");
}

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

bool ResetButton::isButtonLongPressed() {
    return buttonState == PRESSED && millis() - lastButtonPress > LONG_PRESS_INTERVAL;
}

bool ResetButton::isButtonDoublePressed() {
    return pressCount >= 2;
}

bool ResetButton::isButtonSinglePressed() {
    if (pressCount == 1 && millis() - lastButtonPress >= DOUBLE_PRESS_INTERVAL) {
        pressCount = 0;
        return true;
    }
    return false;
}