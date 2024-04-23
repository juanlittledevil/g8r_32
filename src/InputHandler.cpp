#include "InputHandler.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

InputHandler::InputHandler(int cvAPin, int cvBPin) 
        : cvA(cvAPin), cvB(cvBPin) {}

void InputHandler::begin() {
    cvA.begin();
    cvB.begin();
}

int InputHandler::readCVA() {
    return cvA.read();
}

int InputHandler::readCVB() {
    return cvB.read();
}
