#include "SPDTSwitch.h"
#include "Pin.h"

// #define DEBUG

#ifdef DEBUG
// Include the Arduino Serial library
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
        Serial.println("Switch state: BOTH");
        #endif
        return NEUTRAL;
    } else if (stateA) {
        #ifdef DEBUG
        Serial.println("Switch state: A");
        #endif
        return STATE_A;
    } else if (stateB) {
        #ifdef DEBUG
        Serial.println("Switch state: B");
        #endif
        return STATE_B;
    } else {
        #ifdef DEBUG
        Serial.println("Switch state: NEUTRAL");
        #endif
        return NEUTRAL;
    }
}