// Gates.h
#ifndef GATES_H
#define GATES_H

#include <Arduino.h>
#include "Gate.h"

class Gates {
  private:
    int numGates;
    Gate *gateArray;

  public:
    Gates(int pins[], int numGates);
    ~Gates(); // Destructor declaration
    void begin();
    void setState(int gateIndex, bool state);
    bool getState(int gateIndex);
    void turnOnGate(int index);
    void turnOffGate(int index);
};

#endif
