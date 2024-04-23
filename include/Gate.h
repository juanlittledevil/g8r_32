#ifndef GATE_H
#define GATE_H

#include "Pin.h"
#include "Constants.h"

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