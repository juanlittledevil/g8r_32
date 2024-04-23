#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "Pin.h"

class InputHandler {
public:
    InputHandler(int cvAPin, int cvBPin);
    void begin();
    int readCVA();
    int readCVB();

private:
    AnalogInputPin cvA;
    AnalogInputPin cvB;
};

#endif // INPUT_HANDLER_H