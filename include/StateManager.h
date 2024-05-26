/**
 * @file StateManager.h
 * @brief This file contains the StateManager class, which is used to manage the application state. It is used to save and read the application state from EEPROM.
 */
#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <EEPROM.h>
#include <Arduino.h>
#include <vector>
#include "AppState.h"
#include "Constants.h"

/**
 * @brief The StateManager class is used to manage the application state. It is used to save and read the application state from EEPROM.
 * It uses the AppState struct to hold the state of the application while the application is running. The state is saved to EEPROM when the app is in mode selection mode.
 * 
 */
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
    void setMidiLearnNote(int gate, int channel, int note);
    std::pair<int, int> getMidiLearnNote(int gate);

private:
    AppState state;
};

#endif // STATE_MANAGER_H