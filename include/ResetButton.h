/**
 * @file ResetButton.h
 * @brief This file contains the ResetButton class which manages the physical reset button input.
 * 
 * TODO: This class could probably be combined with the Encoder class to create a more generic Button class as
 * the functionality is very similar. But it works now so it's fine for now.
 */
#ifndef RESETBUTTON_H
#define RESETBUTTON_H

#include "Pin.h"
#include <Arduino.h>
#include "Debug.h"
#include "Constants.h"

/**
 * @brief This class is used to read the reset button input.
 */
class ResetButton {
public:
    ResetButton(int pin);
    void begin();

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