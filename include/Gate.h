/**
 * @file Gate.h
 * @brief This file contains the Gate class, which is used to control the gates.
 */
#ifndef GATE_H
#define GATE_H

#include "Pin.h"
#include "Constants.h"

/**
 * @brief This class defines what a gate is and how it should behave.
 * It inherits from the OutputPin class, which provides the basic functionality for a pin
 * including setting state to HIGH or LOW, getting the current state, etc.
 */
class Gate : public OutputPin {
  public:
    Gate(int pin = -1); // Default pin set to -1
    ~Gate(); // Destructor declaration
    void trigger(unsigned long currentTime);
    void update(unsigned long currentTime);
    void setDivision(int divition);
    int getDivision();
    void setGateOnDuration(int duration);
  
  private:
    int gateOnDuration = 10; // Duration in milliseconds that the LED should stay on
    unsigned long triggeredTime = 0;
    int division = internalPPQN;
};


#endif