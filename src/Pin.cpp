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
    #ifdef DEBUG
    DEBUG_PRINT("Pin " + String(this->pin) + " initialized");
    #endif
}

bool InputPin::getState() {
    this->state = digitalRead(this->pin);
    #ifdef DEBUG
    DEBUG_PRINT("Pin " + String(this->pin) + " read as " + String(this->state));
    #endif
    return this->state;
}

// AnalogInputPin class
AnalogInputPin::AnalogInputPin(int pin) : Pin(pin) {
    // Initialization code here if needed
}

void AnalogInputPin::begin() {
        pinMode(this->pin, INPUT);
        #ifdef DEBUG
        DEBUG_PRINT("Analog input pin " + String(this->pin) + " initialized");
        #endif
}

int AnalogInputPin::read() {
        int value = analogRead(this->pin);
        #ifdef DEBUG
        DEBUG_PRINT("Analog input pin " + String(this->pin) + " read as " + String(value));
        #endif
        return value;
}

// OutputPin class
// Constructor
OutputPin::OutputPin(int pin) : Pin(pin) {
  // Initialization code here if needed
}

void OutputPin::begin() {
  pinMode(this->pin, OUTPUT);
  #ifdef DEBUG
  DEBUG_PRINT("Pin " + String(this->pin) + " initialized");
  #endif
}

void OutputPin::setState(bool newState) {
  this->state = newState;
  digitalWrite(this->pin, this->state ? HIGH : LOW);
  #ifdef DEBUG
  DEBUG_PRINT("Pin " + String(this->pin) + " set to " + String(this->state));
  #endif
}

bool OutputPin::getState() {
    return this->state;
}

// PWMPin class
// Constructor
PWMPin::PWMPin(int pin) : OutputPin(pin) {
    // Initialization code here if needed
}

void PWMPin::setDutyCycle(int dutyCycle) {
    this->dutyCycle = dutyCycle;
    analogWrite(this->pin, this->dutyCycle);
    #ifdef DEBUG
    DEBUG_PRINT("Pin " + String(this->pin) + " set to " + String(this->dutyCycle));
    #endif
}

int PWMPin::getDutyCycle() {
    return this->dutyCycle;
}