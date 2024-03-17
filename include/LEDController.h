#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include "LEDs.h"

class LEDController {
public:
    LEDController(LEDs& leds);
    void turnAllOn();
    void turnAllOff();
    void blinkSlow(int ledIndex);
    void blinkFast(int ledIndex);
    void blinkFaster(int ledIndex);
    void stopBlinking(int ledIndex);
    void stopAllBlinking();
    void resetInverted();
    void resetInverted(int ledIndex);
    int getNumLeds();
    void update();
    void clearAndResetLEDs();
    void clearLEDs();
    void updateBlinking();
    void setState(int ledIndex, bool state);


private:
    LEDs& leds;
    int numLeds;
};

#endif // LED_CONTROLLER_H