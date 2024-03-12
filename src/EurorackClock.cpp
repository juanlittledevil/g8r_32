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

EurorackClock::EurorackClock(int clockPin, int resetPin) 
    : clockPin(clockPin), resetPin(resetPin), tempo(120),
      lastTickTime(0), tickInterval(60000 / tempo), isRunning(false) {
        instance = this;
        timer = new HardwareTimer(TIM2); // Use Timer 2
      }

void EurorackClock::setTempo(int newTempo, int ppqn) {
    tempo = newTempo;
    tickInterval = 60000000 / (tempo * ppqn); // Calculate interval in microseconds
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

void EurorackClock::tick() {
    if (isRunning && micros() - lastTickTime >= tickInterval) {
        lastTickTime = micros();
        clock();
    }
}

int EurorackClock::getTempo() const {
    return tempo;
}

void EurorackClock::clock() {
    // Continue the clock
    // #if DEBUG
    // // DEBUG_PRINT("Received MIDI Clock");
    // #endif
}

void EurorackClock::reset() {
    // Reset the clock
    #if DEBUG
    DEBUG_PRINT("Received MIDI Reset");
    #endif
}