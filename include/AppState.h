/**
 * @file AppState.h
 */
#ifndef APP_STATE_H
#define APP_STATE_H

#include <array>
#include "Constants.h"

/**
 * @brief This is a global struct that holds the state of the application.
 * It mainly holds items that need to persist after a power cycle. The object is
 * initialized managed by the StateManager class.
 * 
 * The fefault values are set in the StateManager class, in the initializeEEPROM() function.
 * To avoid issues with the EEPROM memory, make sure you initialize all values in the StateManager class.
 * 
 * This object is updated through out the app, however saving to EEPROM is only done when the app is in
 * mode selection mode. It saves when long pressing and also when the mode is successfully changed.
 */
struct GateDivision {
    int gate;
    int division;

    GateDivision() : gate(0), division(0) {}
    GateDivision(int gate, int division) : gate(gate), division(division) {}
};

struct Mode0State {
    std::array<GateDivision, 8> gateDivisions;
};

struct Mode1State {
    int MIDIChannel;
};

struct AppState {
    int mode;
    Mode0State mode0;
    Mode1State mode1;
};

#endif // APP_STATE_H