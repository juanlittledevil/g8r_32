#include "Pin.h"
#include <Arduino.h>
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
// #define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))
#endif

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
InputPin::InputPin(int pin) : Pin(pin), useInternalPullup(false) {
    this->useInternalPullup = false;
}

// Overloaded constructor
InputPin::InputPin(int pin, bool useInternalPullup) : Pin(pin), useInternalPullup(useInternalPullup) {
    this->useInternalPullup = useInternalPullup;
}

void InputPin::begin() {
    if (this->useInternalPullup) {
        pinMode(this->pin, INPUT_PULLUP);
        delay(10);
    } else {
        pinMode(this->pin, INPUT);
    }
}

bool InputPin::getState() {
    this->state = digitalRead(this->pin);
    return this->state;
}

// AnalogInputPin class
AnalogInputPin::AnalogInputPin(int pin) : Pin(pin) {
    // Initialization code here if needed
}

void AnalogInputPin::begin() {
        pinMode(this->pin, INPUT);
}

int AnalogInputPin::read() {
        int value = analogRead(this->pin);
        return value;
}

// OutputPin class
// Constructor
OutputPin::OutputPin(int pin) : Pin(pin) {
  // Initialization code here if needed
}

void OutputPin::begin() {
  pinMode(this->pin, OUTPUT);
}

void OutputPin::setState(bool newState) {
  this->state = newState;
  digitalWrite(this->pin, this->state ? HIGH : LOW);
}

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

void PWMPin::setDutyCycle(int dutyCycle) {
    this->dutyCycle = dutyCycle;
    analogWrite(this->pin, this->dutyCycle);
}

int PWMPin::getDutyCycle() {
    return this->dutyCycle;
}