#ifndef GATE_H
#define GATE_H

#include "Pin.h"

class Gate : public OutputPin {
  public:
    Gate(int pin = -1); // Default pin set to -1
    ~Gate(); // Destructor declaration
    void setDivision(int newDivision);
    void trigger();
    void resetTrigger();
    void update();
  
  private:
    int division;
    int tickCount;
    int gateOnDuration = 10; // Duration in milliseconds that the LED should stay on
    unsigned long triggeredTime = 0;
};

#endif