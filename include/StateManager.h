#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <EEPROM.h>
#include <Arduino.h>
#include <vector>
#include "AppState.h"
#include "Constants.h"

class StateManager {
public:
    StateManager();
    void initializeEEPROM();
    void saveAppState();
    void readAppState();
    int getMode();
    void setMode(int newMode);
    void setGateDivision(int gate, int division);
    int getGateDivision(int gate);
    void setMode1MIDIChannel(int channel);
    int getMode1MIDIChannel();

private:
    AppState state;
};

#endif // STATE_MANAGER_H