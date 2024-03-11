#ifndef LEDS_H
#define LEDS_H

#include "LED.h"

class LEDs {
    public:
        LEDs(int* pins, int numLeds); // Constructor declaration
        ~LEDs(); // Destructor declaration
        void begin();
        void setState(int index, bool state);
        bool getState(int index);
        void setAllLeds(bool state);
        void blinkFast(int index);
        void blinkSlow(int index);
        void stopBlinking(int index);
        void stopAllBlinking();
        void updateBlinking();

    private:
        LED* leds; // Pointer to an array of LED objects
        int numLeds; // Number of LEDs
};

#endif