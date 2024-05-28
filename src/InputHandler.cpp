/**
 * @file InputHandler.cpp
 * @brief This file contains the implementation of the InputHandler class, which is used to manage the CV inputs of the Eurorack module.
 */
#include "InputHandler.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief Construct a new Input Handler:: Input Handler object
 * 
 * @param cvAPin 
 * @param cvBPin 
 */
InputHandler::InputHandler(unsigned char cvAPin, unsigned char cvBPin, unsigned char resetPin, unsigned char clockPin) 
        :   cvA(cvAPin, false, true),
            cvB(cvBPin, false, true),
            cvC(resetPin, false, true),
            cvD(clockPin, false, true) {
    cvInputs.push_back(&cvA);
    cvInputs.push_back(&cvB);
    cvInputs.push_back(&cvC);
    cvInputs.push_back(&cvD);
}

/**
 * @brief This is intended to be called in the setup() function of the main sketch. It initializes the CV inputs.
 * 
 */
void InputHandler::begin() {
    cvA.begin();
    cvB.begin();
    cvC.begin();
    cvD.begin();
}
