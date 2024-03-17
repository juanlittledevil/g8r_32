#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include "LEDs.h"

class LedController {
public:
    LedController(LEDs& leds);
    void turnAllOn();
    void turnAllOff();
    void blinkSlow(int ledIndex);
    void blinkFast(int ledIndex);
    void blinkFaster(int ledIndex);
    void stopBlinking(int ledIndex);
    void resetInverted();
    void resetInverted(int ledIndex);
    int getNumLeds();
    void update();
    void clearAndResetLEDs();
    void clearLEDs();



private:
    LEDs& leds;
    int numLeds;
};

#endif // LED_CONTROLLER_H