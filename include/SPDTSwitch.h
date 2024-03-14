#ifndef SPDT_SWITCH_H
#define SPDT_SWITCH_H

#include "Pin.h"

enum SwitchState {
    NEUTRAL,
    STATE_A,
    STATE_B
};

class SPDTSwitch {
    private:
        InputPin pinA;
        InputPin pinB;

    public:
        SPDTSwitch(int pinA, int pinB);
        void begin();
        SwitchState read();
};

#endif