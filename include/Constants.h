/**
 * @file Constants.h
 * @brief This file contains the constants used throughout the application.
 * I adopted this approach to make the main.cpp file cleaner and easier to read.
 * This file is included in main.cpp and MIDIHandler.cpp among others.
 * There are probably other items to add here, but I'm starting with the musical intervals and PPQN.
 * These are meant to be constants, so they are declared as extern here and defined in Constants.cpp.
 */
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <vector>

// Musical intervals lookup table
extern std::vector<int> musicalIntervals;
extern const int musicalIntervalsSize;
extern unsigned char internalPPQN;

enum PairMode {
    NORMAL,
    INVERT,
    RISE_FALL
};

enum InputGroup {
    GROUP_TWO,
    GROUP_ALL
};

// Other Logic mode could be IMPLY and NIMPLY (however we probably won't use those here.)
const unsigned char numLogicModes = 8; // The nubmer of modes in the enum.
enum LogicMode {
    AND,
    OR,
    XOR,
    NAND,
    NOR,
    XNOR,
    IMPLY,
    NIMPLY
};

#endif // CONSTANTS_H