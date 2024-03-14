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

const int LED_ON_DURATION = 25; 
const int MIDI_CLOCK_PULSE_COUNT = 24;
float EurorackClock::lastFlashTime = 0;
int EurorackClock::flashPulseCount = 0;

// Static interrupt handler for the clock
EurorackClock* EurorackClock::instance = nullptr;

EurorackClock::EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates) 
    : clockPin(clockPin),
      resetPin(resetPin),
      tempo(120),
      lastTickTime(0),
      tickInterval(60000 / tempo),
      isRunning(false),
      tempoLed(tempoLedPin),
      externalClock(clockPin),
      resetButton(resetPin),
      gates(gates) {
        instance = this;
        timer = new HardwareTimer(TIM2); // Use Timer 2
        attachInterrupt(digitalPinToInterrupt(resetPin), EurorackClock::resetInterruptHandler, RISING);
        this->externalTempo = 0;
}

void EurorackClock::setup() {
    tempoLed.begin();
    externalClock.begin();
}

void EurorackClock::setTempo(float newTempo, int ppqn) {
    tempo = newTempo;
    this->ppqn = ppqn;
    clockState.tickInterval = 60000000.0 / (tempo * ppqn); // Calculate interval in microseconds
    timer->setOverflow(clockState.tickInterval, MICROSEC_FORMAT);
}

void EurorackClock::start() {
    clockState.isRunning = true;
    timer->attachInterrupt(interruptHandler);
    timer->resume();
}

void EurorackClock::stop() {
    clockState.isRunning = false;
    timer->detachInterrupt();
    timer->pause();
}

int EurorackClock::getTempo() const {
    return tempo;
}

void EurorackClock::updateTempoLed() {
    unsigned long currentTime = millis();
    int ledOnDuration = 25; // Duration in milliseconds that the LED should stay on

    if (timeToFlash) {
        // If the LED is off and enough time has passed since the last flash
        if (this->tempoLed.getState() == LOW && currentTime - ledOnTime >= ledOnDuration) {
            // Turn the LED on
            this->tempoLed.setState(HIGH);
            // Update the time the LED was turned on
            ledOnTime = currentTime;
            timeToFlash = false;
        }
    }

    // If the LED is on and it's been on for the duration
    else if (this->tempoLed.getState() == HIGH && currentTime - ledOnTime >= ledOnDuration) {
        // Turn the LED off
        this->tempoLed.setState(LOW);
    }
}


void EurorackClock::updateFlashPulseCount() {
    flashPulseCount++;
    int updateCount = 0;

    if (resetTriggered) {
        tempoLed.setState(LOW);
        resetTriggered = false;
        flashPulseCount = 0;
        timeToFlash = true;
    }

    if (isMidiClock) {
        updateCount = 24;
    } else {
        updateCount = this->ppqn;
    }

    if (flashPulseCount >= updateCount) {
        timeToFlash = true;
        flashPulseCount = 0;
    }
}

void EurorackClock::handleExternalClock() {
    static int lastClockState = LOW;
    static unsigned long lastClockTime = 0;
    // static int tickCount = 0;
    int clockState = externalClock.getState();

    if (clockState == HIGH && lastClockState == LOW && this->isExternalTempo && (millis() - lastMidiClockTime > MIDI_CLOCK_TIMEOUT)) {
        isMidiClock = false;
        gates.triggerGates();
        updateFlashPulseCount();
    }

    lastClockState = clockState;
}

void EurorackClock::handleMidiClock() {
    static int tickCount = 0;
    static unsigned long lastClockTime = 0;

    if (this->isExternalTempo) {
        // Handle MIDI clock
        lastMidiClockTime = millis();
        isMidiClock = true;
        gates.triggerGates();
        updateFlashPulseCount();
    }
}

void EurorackClock::setPPQN(int ppqn) {
    this->ppqn = ppqn;
}

void EurorackClock::setExternalTempo(bool isExternalTempo = false) {
    this->isExternalTempo = isExternalTempo;
    if (!isExternalTempo) {
        isMidiClock = false;
    }
}

// This method get called from the main loop.
// It checks if the clock is running and if it's time to trigger the clock.
void EurorackClock::tick() {
    if (shouldTriggerClockPulse()) {
        triggerClockPulse();
    }
    updateTempoLed();
    gates.update();
}

bool EurorackClock::shouldTriggerClockPulse() {
    return !this->isExternalTempo && clockState.isRunning && micros() - clockState.lastTickTime >= clockState.tickInterval;
}

void EurorackClock::triggerClockPulse() {
    clockState.lastTickTime = micros();
    gates.triggerGates();
    updateFlashPulseCount();
}

void EurorackClock::reset() {
    if (!isExternalTempo) {
        clockState.lastTickTime = micros();
        tick();
    }
    resetTriggered = true;
    gates.resetTriggerGates();
    gates.update();
}