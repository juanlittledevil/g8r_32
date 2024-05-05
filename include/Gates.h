/**
 * @file Gates.h
 * @brief This file contains the Gates class, which is used to control the gates in the system.
 * 
 * This is also an early class, and could use some refactoring love. But again, this works so it's fine for now.
 * TODO: We could probably move the division logic out of this, but it doesn't interfere with the other modes so
 * it's fine for now.
 */
#ifndef GATES_H
#define GATES_H

#include <Arduino.h>
#include "Gate.h"
#include "LEDs.h"
#include <vector>

/**
 * @brief This is a collection of gates and thus the main thing we are working with in this project.
 * Very rarely will you need to interact with the Gate class directly, as most of the functionality
 * is handled by the Gates class.
 * 
 */
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
    void setGateOnDuration(int index, int duration);

  private:
    Gate *gateArray;
    int selectedGate;

};

#endif
