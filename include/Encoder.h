/**
 * @file Encoder.h
 * @brief This file contains the Encoder class which manages the physical encoder and button inputs.
 */
#ifndef ENCODER_H
#define ENCODER_H

#include "Pin.h"

/**
 * @brief This class is used to read the encoder and button inputs.
 */
class Encoder {
public:
    Encoder(int encCLK, int encDT, int encButton);

    enum Direction { NONE, CW, CCW };
    enum ButtonState { OPEN, PRESSED };

    void begin();
    Direction readEncoder();
    ButtonState readButton();
    int handleEncoderDirection(int currentValue, int maxValue, Direction direction);
    bool isButtonLongPressed();
    bool isButtonDoublePressed();
    bool isButtonSinglePressed();
    int readSpeed();

private:
    InputPin encCLK;
    InputPin encDT;
    InputPin encButton;
    int prevStateCLK;
    ButtonState buttonState;
    unsigned long lastButtonPress;
    int pressCount;
    unsigned long lastTurnTime;
    int speed;
    static const unsigned long DOUBLE_PRESS_INTERVAL = 500; // ms
    static const unsigned long LONG_PRESS_INTERVAL = 1000; // ms
};

#endif // ENCODER_H