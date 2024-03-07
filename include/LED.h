#ifndef LED_H
#define LED_H

#include "Pin.h"

class LED : public OutputPin {
    public:
        LED(int pin = -1); // Default pin set to -1
        ~LED(); // Destructor declaration
};

#endif