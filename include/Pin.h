/**
 * @file Pin.h
 * @brief This file contains the pin base class and its derived classes for input, output, and PWM pins.
 */
#ifndef PIN_H
#define PIN_H

#ifdef ARDUINO_ARCH_STM32
#include <HardwareTimer.h>
#endif

/**
 * @brief This class represents a pin on the microcontroller.
 * 
 */
class Pin {
protected:
    int pin; // Pin number
    bool state; // Current state of the pin

public:
    Pin(int pin = -1); // Constructor
    ~Pin(); // Destructor
};

/**
 * @brief This class represents an input pin on the microcontroller.
 * 
 */
class InputPin : public Pin {
public:
    InputPin(int pin); // Default constructor
    InputPin(int pin, bool internalPullup, bool internalPulldown); // Overloaded constructor
    virtual void begin(); // Initialize the pin
    virtual bool getState(); // Get the state of the pin

private:
    bool useInternalPullup; // Flag to indicate whether to use internal pull-up resistor
    bool useInternalPulldown;
};

/**
 * @brief This class represents an analog input pin on the microcontroller.
 * 
 */
class AnalogInputPin : public Pin {
public:
    AnalogInputPin(int pin); // Constructor
    void begin(); // Initialize the pin
    int read(); // Read analog value from the pin
};

/**
 * @brief This class represents an output pin on the microcontroller.
 * 
 */
class OutputPin : public Pin {
public:
    OutputPin(int pin = -1); // Constructor
    virtual void begin(); // Initialize the pin
    virtual void setState(bool state); // Set the state of the pin
    virtual bool getState(); // Get the state of the pin
};

/**
 * @brief This class represents a PWM output pin on the microcontroller.
 * 
 */
class PWMPin : public OutputPin {
public:
    PWMPin(int pin = -1); // Constructor
    virtual void begin(); // Initialize the pin
    void setDutyCycle(int dutyCycle); // Set the duty cycle of the pin
    int getDutyCycle(); // Get the duty cycle of the pin

private:
    int dutyCycle; // Duty cycle of the PWM pin
    HardwareTimer* timer; // Timer for PWM output
};

#endif // PIN_H
