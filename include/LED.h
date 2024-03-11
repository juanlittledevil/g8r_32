#ifndef LED_H
#define LED_H

#include "Pin.h"

class LED : public PWMPin {
    public:
        LED(int pin = -1); // Default pin set to -1
        ~LED(); // Destructor declaration
        void setState(bool state) override;
        void setState(bool state, int intencity);
        bool getState() override;
        void startBlinking(unsigned long interval);
        void stopBlinking();
        void updateBlinking();
        void updateBlinking(int intencity);

    private:
        unsigned long blinkStartTime;
        unsigned long blinkInterval;
        bool isBlinking;
};

#endif