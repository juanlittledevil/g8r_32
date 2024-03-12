#ifndef PIN_H
#define PIN_H

#ifdef ARDUINO_ARCH_STM32
#include <HardwareTimer.h>
#endif

class Pin {
    protected:
        // put attributes shared by all subclasses here
        int pin;
        bool state;

    public:
        Pin(int pin = -1); // Default pin set to -1
        ~Pin(); // Destructor declaration
};

class InputPin : public Pin {
public:
    // Default constructor
    InputPin(int pin);

    // Overloaded constructor
    InputPin(int pin, bool useInternalPullup);

    virtual void begin();
    virtual bool getState();

private:
    bool useInternalPullup;
};

// AnalogInputPin class
class AnalogInputPin : public Pin {
public:
    AnalogInputPin(int pin);
    void begin();
    int read();
};

class OutputPin : public Pin {
    public:
        OutputPin(int pin = -1); // Default pin set to -1
        virtual void begin();
        virtual void setState(bool state);
        virtual bool getState();
};

class PWMPin : public OutputPin {
    public:
        PWMPin(int pin = -1); // Default pin set to -1
        virtual void begin();
        void setDutyCycle(int dutyCycle);
        int getDutyCycle();
    
    private:
        int dutyCycle;
        HardwareTimer* timer;
};

#endif