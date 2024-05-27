/**
 * @file InputHandler.h
 * @brief This file contains the InputHandler class, which is used to read the CV inputs. Right now it only reads the CV inputs
 * but it could be expanded to handle other inputs in the future.
 * 
 * TODO: This is one of the last classes I created and would probably be a better home for the Clock and Reset input handling.
 * I might refactor this in the future to include those features, but again the code works now so it's fine for now.
 */
#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "Pin.h"

/**
 * @brief This class is used to read the CV inputs.
 */
class InputHandler {
public:
    InputHandler(unsigned char cvAPin, unsigned char cvBPin, unsigned char resetPin, unsigned char clockPin);
    void begin();
    // I know this is discouraged, but these are simple classes and doing it this way makes the code much cleaner.
    AnalogInputPin cvA;
    AnalogInputPin cvB;
    AnalogInputPin cvC;
    AnalogInputPin cvD;
    AnalogInputPin& reset = cvC;
    AnalogInputPin& clock = cvD;

private:
    unsigned char resetPin;
};

#endif // INPUT_HANDLER_H