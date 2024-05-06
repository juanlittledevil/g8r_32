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
InputHandler::InputHandler(int cvAPin, int cvBPin) 
        : cvA(cvAPin), cvB(cvBPin) {}

/**
 * @brief This is intended to be called in the setup() function of the main sketch.
 * 
 */
void InputHandler::begin() {
    cvA.begin();
    cvB.begin();
}

/**
 * @brief Read the CV input A.
 * 
 * @return int 
 */
int InputHandler::readCVA() {
    return cvA.read();
}

/**
 * @brief Read the CV input B.
 * 
 * @return int 
 */
int InputHandler::readCVB() {
    return cvB.read();
}
