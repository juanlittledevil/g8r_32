// Gates.h
#ifndef GATES_H
#define GATES_H

#include <Arduino.h>
#include "Gate.h"
#include "LEDs.h"
#include <vector>

class Gates {
  public:
    Gates(std::vector<int> pins, int numGates);
    ~Gates();
    void begin();
    void setState(int gateIndex, bool state);
    bool getState(int gateIndex);
    void turnOnGate(int index);
    void turnOffGate(int index);
    void setALLGates(bool state);
    void update(unsigned long currentTime);
    void trigger(int index, unsigned long currentTime);
    void setDivision(int index, int division);
    int getDivision(int index);
    int numGates;
    int *gateCounters;
    void setSelectedGate(int gate);
    int getSelectedGate(); 

  private:
    Gate *gateArray;
    int selectedGate;

};

#endif
