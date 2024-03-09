#include "EurorackClock.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif

EurorackClock::EurorackClock(int clockPin, int resetPin) 
    : clockPin(clockPin), resetPin(resetPin), isRunning(false) {}

void EurorackClock::start() {
    // Start the clock
    isRunning = true;
    #if DEBUG
    DEBUG_PRINT("Received MIDI Start");
    #endif
}

void EurorackClock::stop() {
    // Stop the clock
    isRunning = false;
    #if DEBUG
    DEBUG_PRINT("Received MIDI Stop");
    #endif
}

void EurorackClock::clock() {
    // Continue the clock
    isRunning = true;
    #if DEBUG
    // DEBUG_PRINT("Received MIDI Clock");
    #endif
}

void EurorackClock::reset() {
    // Reset the clock
    #if DEBUG
    DEBUG_PRINT("Received MIDI Reset");
    #endif
}