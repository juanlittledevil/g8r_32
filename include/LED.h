/**
 * @file LED.h
 * @brief This file contains the LED class, which is used to control the LEDs associated with the gates.
 * This of this like a UI matrix as well. The LEDs are used to indicate the state of the gates, as well as,
 * to provide feedback when selecting modes, gates, etc.
 * 
 * Like the Gate and Gates classes, you should not really interact with this clas directly, but rather through the LEDController class.
 */
#ifndef LED_H
#define LED_H

#include "Pin.h"

/**
 * @brief This class defines what an LED is and how it should behave.
 * 
 */
class LED : public OutputPin {
    public:
        LED(int pin = -1); // Default pin set to -1
        ~LED(); // Destructor declaration
        void startBlinking(unsigned long interval);
        void startPulsing(unsigned long interval, int pulseDuration, bool inverted=false);
        void setInverted(bool inverted);
        bool getInverted();
        void stopPulsing();
        void stopBlinking();
        void updatePulsing();
        void updateBlinking();
        void setIntensity(int intensity);
        void trigger(unsigned long currentTime, bool inverted=false);
        void update(unsigned long currentTime);
        void resetIvernted();
        void setLedOnDuration(int duration);
        bool getIsBlinking();
        bool getIsPulsing();

    private:
        unsigned long blinkStartTime;
        unsigned long blinkInterval;
        bool isBlinking;
        int intensity = 255;
        int ledOnDuration = 25; // Duration in milliseconds that the LED should stay on
        int invertedLedOnDuration = 40; // Duration in milliseconds that the LED should stay on
        unsigned long triggeredTime = 0;
        bool inverted = false;
        int pulseDuration = 0;
        bool isPulsing = false;
};

#endif