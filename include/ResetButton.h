#ifndef RESETBUTTON_H
#define RESETBUTTON_H

#include "Pin.h"
#include <Arduino.h>

class ResetButton {
public:
    ResetButton(int pin);
    bool begin();

    enum ButtonState { OPEN, PRESSED };

    ButtonState readButton();
    bool isButtonLongPressed();
    bool isButtonDoublePressed();

private:
    ButtonState buttonState;
    unsigned long lastButtonPress;
    int pressCount;
    InputPin resetButton;

    static const unsigned long DOUBLE_PRESS_INTERVAL = 500; // ms
    static const unsigned long LONG_PRESS_INTERVAL = 1000; // ms
};

#endif // RESETBUTTON_H