#ifndef LED_H
#define LED_H

#include "Pin.h"

class LED : public OutputPin {
    public:
        LED(int pin = -1); // Default pin set to -1
        ~LED(); // Destructor declaration
        void startBlinking(unsigned long interval);
        void stopBlinking();
        void updateBlinking();
        void setIntensity(int intensity);
        void trigger(unsigned long currentTime, bool inverted=false);
        void update(unsigned long currentTime);
        void resetIvernted();
        void setLedOnDuration(int duration);

    private:
        unsigned long blinkStartTime;
        unsigned long blinkInterval;
        int intensity = 255;
        bool isBlinking;
        int ledOnDuration = 25; // Duration in milliseconds that the LED should stay on
        int invertedLedOnDuration = 40; // Duration in milliseconds that the LED should stay on
        unsigned long triggeredTime = 0;
        bool inverted = false;
};

#endif