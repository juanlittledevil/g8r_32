#ifndef LEDS_H
#define LEDS_H

#include "LED.h"

class LEDs {
    public:
        LEDs(int* pins, int numLeds); // Constructor declaration
        ~LEDs(); // Destructor declaration
        void begin();
        void setState(int index, bool state);
        void setState(int index, bool state, int intensity);
        bool getState(int index);
        void setAllLeds(bool state);
        void blinkFast(int index);
        void blinkFast2(int index);
        void blinkSlow(int index);
        void stopBlinking(int index);
        void stopAllBlinking();
        void updateBlinking();
        void setIntensity(int index, int intensity);
        void setAllintensity(int intensity);
        void update(unsigned long currentTime);
        void trigger(int index, unsigned long currentTime);
        // void updateBlinking(int intensity);
        int numLeds; // Number of LEDs

    private:
        LED* leds; // Pointer to an array of LED objects
};

#endif