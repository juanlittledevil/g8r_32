#include "EurorackClock.h"
#include "Debug.h"

// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif

EurorackClock* EurorackClock::instance = nullptr;
float EurorackClock::lastFlashTime = 0;

EurorackClock::EurorackClock(int clockPin, int resetPin, int tempoLedPin) 
    : clockPin(clockPin), resetPin(resetPin), tempo(120), lastTickTime(0),
      tickInterval(60000 / tempo), isRunning(false), tempoLed(tempoLedPin),
      externalClock(clockPin), resetButton(resetPin) {
        instance = this;
        timer = new HardwareTimer(TIM2); // Use Timer 2
        this->externalTempo = 0;
}

void EurorackClock::setup() {
    tempoLed.begin();
    externalClock.begin();
}

void EurorackClock::setTempo(float newTempo, int ppqn) {
    tempo = newTempo;
    this->ppqn = ppqn;
    tickInterval = 60000000.0 / (tempo * ppqn); // Calculate interval in microseconds
    timer->setOverflow(tickInterval, MICROSEC_FORMAT);
}

void EurorackClock::start() {
    isRunning = true;
    timer->attachInterrupt(interruptHandler);
    timer->resume();
}

void EurorackClock::stop() {
    isRunning = false;
    timer->detachInterrupt();
    timer->pause();
}

int EurorackClock::getTempo() const {
    return tempo;
}

void EurorackClock::flashLed() {
    static unsigned long ledOffTime = 0;
    unsigned long currentTime = millis();
    int ledOnDuration = 50; // Duration in milliseconds that the LED should stay on

    if (timeToFlash) {
        this->tempoLed.setState(HIGH);
        lastFlashTime = currentTime;
        ledOffTime = currentTime + ledOnDuration;
        timeToFlash = false;
    }

    if (currentTime >= ledOffTime) {
        this->tempoLed.setState(LOW);
    }
}

void EurorackClock::flashTempoLed() {
    static int pulseCount = 0;
    unsigned long currentTime = millis();
    int quarterNoteDuration;

    if (this->isExternalTempo) {
        quarterNoteDuration = 60000 / this->externalTempo;
    } else {
        quarterNoteDuration = 60000 / this->tempo;
    }

    // Check if the reset button has been pressed
    if (resetButton.getState() == HIGH) {
        timeToFlash = true;
        pulseCount = 0;
    } else if (currentTime - lastFlashTime >= quarterNoteDuration) {
        timeToFlash = true;
        pulseCount = 0;
    }

    pulseCount++;
    if (pulseCount >= this->ppqn) {
        pulseCount = 0;
    }

    flashLed();
}

void EurorackClock::handleExternalClock() {
    static int lastClockState = LOW;
    static unsigned long lastClockTime = 0;
    static int tickCount = 0;
    int clockState = externalClock.getState();

    if (clockState == HIGH && lastClockState == LOW && this->isExternalTempo) {
        unsigned long currentTime = millis();
        lastClockTime = currentTime;
        tickCount++;
        if (resetButton.getState() == HIGH) {
            timeToFlash = true;
            tickCount = 0;
        } else if (tickCount >= this->ppqn) {
            timeToFlash = true;
            tickCount = 0;
            // Update the last external tick time
            lastExternalTickTime = micros();
        }
    }

    lastClockState = clockState;
}

void EurorackClock::setPPQN(int ppqn) {
    this->ppqn = ppqn;
}

void EurorackClock::setExternalTempo(bool isExternalTempo = false) {
    this->isExternalTempo = isExternalTempo;
}

void EurorackClock::tick() {
    if (isRunning && micros() - lastTickTime >= tickInterval) {
        if (isExternalTempo) {
            lastTickTime = lastExternalTickTime;
        } else {
            lastTickTime = micros();
        }
    }
}

void EurorackClock::clock() {
    // Continue the clock
    // #if DEBUG
    // DEBUG_PRINT("Received Clock");
    // #endif
}

void EurorackClock::reset() {
    // Reset the clock
    lastTickTime = micros();
}