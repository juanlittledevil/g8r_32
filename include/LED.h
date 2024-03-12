#ifndef LED_H
#define LED_H

#include "Pin.h"

class LED : public OutputPin {
    public:
        LED(int pin = -1); // Default pin set to -1
        ~LED(); // Destructor declaration
        // void setState(bool state) override;
        // void setState(bool state, int intensity);
        // bool getState() override;
        void startBlinking(unsigned long interval);
        void stopBlinking();
        void updateBlinking();
        void setIntensity(int intensity);
        // void updateBlinking(int intensity);

    private:
        unsigned long blinkStartTime;
        unsigned long blinkInterval;
        int intensity = 255;
        bool isBlinking;
};

#endif