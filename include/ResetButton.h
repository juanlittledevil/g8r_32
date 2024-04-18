#ifndef RESETBUTTON_H
#define RESETBUTTON_H

#include "Pin.h"
#include <Arduino.h>
#include "Debug.h"
#include "Constants.h"

class ResetButton {
public:
    ResetButton(int pin);
    bool begin();

    enum ButtonState { OPEN, PRESSED };

    ButtonState readButton();
    bool isButtonLongPressed();
    bool isButtonDoublePressed();
    bool isButtonSinglePressed();

private:
    int pin;
    InputPin resetButton;
    ButtonState buttonState;
    unsigned long lastButtonPress;
    int pressCount;

    static const unsigned long DOUBLE_PRESS_INTERVAL = 500; // ms
    static const unsigned long LONG_PRESS_INTERVAL = 1000; // ms
};

#endif // RESETBUTTON_H