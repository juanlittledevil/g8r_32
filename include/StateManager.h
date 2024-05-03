#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <EEPROM.h>
#include "AppState.h"

class StateManager {
public:
    StateManager();
    void initializeEEPROM();
    void saveAppState();
    void readAppState();
    int getMode();
    void setMode(int newMode);

private:
    AppState state;
};

#endif // STATE_MANAGER_H