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

private:
    LEDs& leds;
};

#endif // LED_CONTROLLER_H