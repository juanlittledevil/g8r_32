// pin.cpp
#include "Pin.h"
#include <Arduino.h>
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Pin class
// Constructor
Pin::Pin(int pin) {
    this->pin = pin;
    this->state = LOW;
}

// Destructor
Pin::~Pin() {
    // Add any cleanup code here
}

// InputPin class
// Default constructor
InputPin::InputPin(int pin) : Pin(pin), useInternalPullup(false), useInternalPulldown(false) {
    this->useInternalPullup = false;
    this->useInternalPulldown = false;
}

// Overloaded constructor
InputPin::InputPin(int pin, bool internalPullup, bool internalPulldown)
:   Pin(pin),
    useInternalPullup(internalPullup),
    useInternalPulldown(internalPulldown) {
        this->useInternalPullup = internalPullup;
        this->useInternalPulldown = internalPullup;
}

// Initialize the input pin
void InputPin::begin() {
    if (this->useInternalPullup) {
        pinMode(this->pin, INPUT_PULLUP);
    } else if (this->useInternalPulldown) {
        pinMode(this->pin, INPUT_PULLDOWN);
    } else {
        pinMode(this->pin, INPUT);
    }
}

// Get the state of the input pin
bool InputPin::getState() {
    this->state = digitalRead(this->pin);
    return this->state;
}

// AnalogInputPin class
// Constructor
AnalogInputPin::AnalogInputPin(int pin) : Pin(pin) {
    // Initialization code here if needed
}

// Initialize the analog input pin
void AnalogInputPin::begin() {
    pinMode(this->pin, INPUT);
}

// Read the analog value from the pin
int AnalogInputPin::read() {
    int value = analogRead(this->pin);
    return value;
}

// OutputPin class
// Constructor
OutputPin::OutputPin(int pin) : Pin(pin) {
  // Initialization code here if needed
}

// Initialize the output pin
void OutputPin::begin() {
  pinMode(this->pin, OUTPUT);
}

// Set the state of the output pin
void OutputPin::setState(bool newState) {
  this->state = newState;
  digitalWrite(this->pin, this->state ? HIGH : LOW);
}

// Get the state of the output pin
bool OutputPin::getState() {
    return this->state;
}

// PWMPin class
// Constructor
PWMPin::PWMPin(int pin) : OutputPin(pin) {
    // Initialization code here if needed
    #ifdef ARDUINO_ARCH_STM32
    this->timer = new HardwareTimer(TIM2);  // Use TIM2 for all pins
    #endif
}

// Initialize the PWM pin
void PWMPin::begin() {
    #ifdef ARDUINO_ARCH_STM32
    pinMode(this->pin, OUTPUT);
    if (this->timer != nullptr) {
        this->timer->setMode(1, TIMER_OUTPUT_COMPARE_PWM1, this->pin);
        this->timer->setOverflow(10000, MICROSEC_FORMAT);  // 10 kHz PWM
        this->timer->setCaptureCompare(1, 0, PERCENT_COMPARE_FORMAT);  // 0% duty cycle
        this->timer->resume();
    }
    #else
    pinMode(this->pin, OUTPUT);
    #endif
}

// Set the duty cycle of the PWM pin
void PWMPin::setDutyCycle(int dutyCycle) {
    this->dutyCycle = dutyCycle;
    analogWrite(this->pin, this->dutyCycle);
}

// Get the duty cycle of the PWM pin
int PWMPin::getDutyCycle() {
    return this->dutyCycle;
}
