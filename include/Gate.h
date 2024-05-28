/**
 * @file Gate.h
 * @brief This file contains the Gate class, which is used to control the gates.
 * Quick note: This class has a data member to hold a "Mute" state. I purposely left
 * out the implementation of the mute functionality within the gate object. This is because
 * we have more flexibility and less risk of bugs if we handle the mute functionality in the
 * mode classes. See ModeInverse.h for an example of how to mute the gates.
 * 
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
    void setState(bool state) override;
    void trigger(unsigned long currentTime);
    void update(unsigned long currentTime);
    void setDivision(int divition);
    int getDivision();
    void setGateOnDuration(int duration);
    void mute();
    void unmute();
    bool getIsMuted();
  
  private:
    int gateOnDuration = 10; // Duration in milliseconds that the LED should stay on
    unsigned long triggeredTime = 0;
    int division = internalPPQN;
    bool isMuted = false;
};


#endif