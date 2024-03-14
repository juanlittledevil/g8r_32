#include "SPDTSwitch.h"
#include "Pin.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

#include <Arduino.h>
#endif


SPDTSwitch::SPDTSwitch(int pinA, int pinB) : pinA(InputPin(pinA, true)), pinB(InputPin(pinB, true)) {
    // Initialization code here if needed
}
void SPDTSwitch::begin() {
    pinA.begin();
    pinB.begin();
}

SwitchState SPDTSwitch::read() {
    #ifdef DEBUG
    Serial.println("Reading switch state");
    #endif
    bool stateA = pinA.getState();
    bool stateB = pinB.getState();
    if (stateA && stateB) {
        #ifdef DEBUG
        DEBUG_PRINT("Switch state: BOTH");
        #endif
        return NEUTRAL;
    } else if (stateA) {
        #ifdef DEBUG
        DEBUG_PRINT("Switch state: A");
        #endif
        return STATE_A;
    } else if (stateB) {
        #ifdef DEBUG
        DEBUG_PRINT("Switch state: B");
        #endif
        return STATE_B;
    } else {
        #ifdef DEBUG
        DEBUG_PRINT("Switch state: NEUTRAL");
        #endif
        return NEUTRAL;
    }
}