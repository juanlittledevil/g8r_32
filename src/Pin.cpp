/**
 * @file Pin.cpp
 * @brief This file contains the implementation of the Pin class and its derived classes.
 * 
 */
#include "Pin.h"
#include <Arduino.h>
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief Construct a new Pin:: Pin object, which is the base class for all pin.
 * 
 * @param pin 
 */
Pin::Pin(int pin) {
    this->pin = pin;
    this->state = LOW;
}

/**
 * @brief Destroy the Pin:: Pin object
 * 
 */
Pin::~Pin() {
    // Add any cleanup code here
}

/**
 * @brief Construct a new Input Pin:: Input Pin object
 * This constructor initializes the pin and sets the internal pullup and pulldown flags to false. Use this constructor
 * if you do not want to use the internal pullup or pulldown resistors.
 * 
 * @param pin 
 */
InputPin::InputPin(int pin) : Pin(pin), useInternalPullup(false), useInternalPulldown(false) {}

/**
 * @brief Construct a new Input Pin:: Input Pin object
 * This constructor initializes the pin and sets the internal pullup and pulldown flags to the specified values.
 * Use this constructor if you want to use the internal pullup or pulldown resistors.
 * 
 * @param pin 
 * @param internalPullup 
 * @param internalPulldown 
 */
InputPin::InputPin(int pin, bool internalPullup, bool internalPulldown)
:   Pin(pin),
    useInternalPullup(internalPullup),
    useInternalPulldown(internalPulldown) {}

/**
 * @brief This function is used to initialize the input pin. It is intended to be called in the setup() function of the main sketch.
 * However, we don't call it directly, instead we use the begin() function of the derived classes.
 * 
 */
void InputPin::begin() {
    if (this->useInternalPullup) {
        pinMode(this->pin, INPUT_PULLUP);
    } else if (this->useInternalPulldown) {
        pinMode(this->pin, INPUT_PULLDOWN);
    } else {
        pinMode(this->pin, INPUT);
    }
}

/**
 * @brief This function is used to read the state of the input pin.
 * 
 * @return bool 
 */
bool InputPin::getState() {
    this->state = digitalRead(this->pin);
    return this->state;
}

/**
 * @brief This function is used to attach an interrupt to the input pin.
 * 
 * @param callback 
 * @param mode 
 */
void InputPin::attachInterrupt(void (*callback)(), int mode) {
    ::attachInterrupt(digitalPinToInterrupt(this->pin), callback, mode);
}

/**
 * @brief This function is used to detach an interrupt from the input pin.
 * 
 */
void InputPin::detachInterrupt() {
    ::detachInterrupt(digitalPinToInterrupt(this->pin));
}

/**
 * @brief Construct a new Analog Input Pin:: Analog Input Pin object
 * 
 * @param pin 
 */
AnalogInputPin::AnalogInputPin(int pin) : InputPin(pin), useInternalPullup(false), useInternalPulldown(false)  {}

/**
 * @brief Construct a new Analog Input Pin:: Analog Input Pin object
 * This constructor initializes the pin and sets the internal pullup and pulldown flags to the specified values.
 * Use this constructor if you want to use the internal pullup or pulldown resistors.
 * 
 */
AnalogInputPin::AnalogInputPin(int pin, bool internalPullup, bool internalPulldown) 
    :   InputPin(pin),
        useInternalPullup(internalPullup),
        useInternalPulldown(internalPulldown) {}

/**
 * @brief This function is used to initialize the analog input pin. It is intended to be called in the setup() function of the main sketch.
 * 
 */
void AnalogInputPin::begin() {
    InputPin::begin();
}

/**
 * @brief This function is used to read the digital value of the analog input pin.
 * 
 * @return bool 
 */
bool AnalogInputPin::read() {
    bool value = InputPin::getState();
    return value;
}

/**
 * @brief This function is used to read the value of the analog input pin.
 * 
 * @return int 
 */
int AnalogInputPin::readAnalog() {
    int value = analogRead(this->pin);
    return value;
}

/**
 * @brief Construct a new Output Pin:: Output Pin object
 * 
 * @param pin 
 */
OutputPin::OutputPin(int pin) : Pin(pin) {
  // Initialization code here if needed
}

/**
 * @brief This function is used to initialize the output pin. It is intended to be called in the setup() function of the main sketch.
 * 
 */
void OutputPin::begin() {
  pinMode(this->pin, OUTPUT);
}

/**
 * @brief This function is used to set the state of the output pin.
 * Possible states are HIGH or LOW.
 * 
 * @param newState 
 */
void OutputPin::setState(bool newState) {
  this->state = newState;
  digitalWrite(this->pin, this->state ? HIGH : LOW);
}

/**
 * @brief This function is used to get the state of the output pin.
 * 
 * @return bool 
 */
bool OutputPin::getState() {
    return this->state;
}

/**
 * @brief Construct a new PWMPin::PWMPin object. We are using the HardwareTimer library for STM32 boards.
 * 
 * @param pin 
 */
PWMPin::PWMPin(int pin) : OutputPin(pin) {
    // Initialization code here if needed
    #ifdef ARDUINO_ARCH_STM32
    this->timer = new HardwareTimer(TIM2);  // Use TIM2 for all pins
    #endif
}

/**
 * @brief This function is used to initialize the PWM pin. It is intended to be called in the setup() function of the main sketch.
 * 
 */
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

/**
 * @brief This function is used to set the duty cycle of the PWM pin.
 * 
 * @param dutyCycle 
 */
void PWMPin::setDutyCycle(int dutyCycle) {
    this->dutyCycle = dutyCycle;
    analogWrite(this->pin, this->dutyCycle);
}

/**
 * @brief This function is used to get the duty cycle of the PWM pin.
 * 
 * @return int 
 */
int PWMPin::getDutyCycle() {
    return this->dutyCycle;
}
