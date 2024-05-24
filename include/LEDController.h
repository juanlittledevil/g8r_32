/**
 * @file LEDController.h
 * @brief I originally had the LEDs class handling the LED control, but I ran into issues making coding difficult all the modes
 * needed to interact with the LEDs and maintain some sort of state. To help facilityate state and management of the leds
 * I created this class to handle the LED control and to provide a more user-friendly interface.
 * 
 * TODO: The tempo LED is still handled by the EurorackClock class, which is a bit of a mess. I should move that to this class
 * and refactor the EurorackClock class to be more of a clock manager. But again, it works so it's fine for now.
 */
#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include "LEDs.h"

/**
 * @brief This class is used as the main interface for controlling the LEDs.
 * 
 */
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
    void update(unsigned long currentTime);
    void clearAndResetLEDs();
    void clearLEDs();
    void updateBlinking();
    void setState(int ledIndex, bool state);
    void trigger(int index, unsigned long currentTime, bool inverted=false);


private:
    LEDs& leds;
    int numLeds;
};

#endif // LED_CONTROLLER_H