#ifndef GATE_H
#define GATE_H

#include "Pin.h"

class Gate : public OutputPin {
  public:
    Gate(int pin = -1); // Default pin set to -1
    ~Gate(); // Destructor declaration
    void setDivision(int newDivision);
    void trigger();
  
  private:
    int division;
    int tickCount;
};

#endif