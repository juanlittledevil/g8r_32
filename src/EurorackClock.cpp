#include "EurorackClock.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

const int LED_ON_DURATION = 10; 
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

void EurorackClock::updateTempoLed(unsigned long currentTime) {
    int ledOnDuration = LED_ON_DURATION; // Duration in milliseconds that the LED should stay on

    // If the LED is on and it's been on for the duration
    if (this->tempoLed.getState() == HIGH && currentTime - ledOnTime >= ledOnDuration) {
        // Turn the LED off
        this->tempoLed.setState(LOW);
    }
}

void EurorackClock::updateFlashPulseCount() {
    if (!resetTriggered) {
        flashPulseCount++;
    }
    handleResetTrigger();
    decideFlash();
}

void EurorackClock::handleResetTrigger() {
    if (resetTriggered) {
        tempoLed.setState(LOW);
        resetTriggered = false;
        flashPulseCount = 0;
        timeToFlash = true;
    }
}

void EurorackClock::decideFlash() {
    int updateCount = isMidiClock ? 24 : this->ppqn;

    if (flashPulseCount >= updateCount) {
        timeToFlash = true;
        flashPulseCount = 0;
    }
}

void EurorackClock::handleExternalClock() {
    int clockState = externalClock.getState();
    unsigned long currentTime = millis();

    if (clockState == HIGH && lastClockState == LOW && this->isExternalTempo && (currentTime - lastMidiClockTime > MIDI_CLOCK_TIMEOUT)) {
        isMidiClock = false;
        triggerClockPulse();
    }

    lastClockState = clockState;
}

void EurorackClock::handleMidiClock() {
    unsigned long currentTime = millis();

    if (this->isExternalTempo) {
        // Handle MIDI clock
        lastMidiClockTime = currentTime;
        isMidiClock = true;

        // Trigger clock pulse
        triggerClockPulse();
    }
}

void EurorackClock::setPPQN(int ppqn) {
    this->ppqn = ppqn;
}

void EurorackClock::setExternalTempo(bool isExternalTempo = false) {
    this->isExternalTempo = isExternalTempo;
    if (!isExternalTempo) {
        isMidiClock = false;
        // Manually reset necessary state variables
        lastClockState = LOW;
        lastClockTime = 0;
        tickCount = 0;    }
}

// This method get called from the main loop.
// It checks if the clock is running and if it's time to trigger the clock.
void EurorackClock::tick() {
    unsigned long currentTime = millis();
    gates.update(currentTime);
    if (shouldTriggerClockPulse()) {
        triggerClockPulse();
    }
    updateTempoLed(currentTime);
}

bool EurorackClock::shouldTriggerClockPulse() {
    bool shouldTrigger = !this->isExternalTempo && clockState.isRunning && micros() - clockState.lastTickTime >= clockState.tickInterval;
    return shouldTrigger;
}

void EurorackClock::triggerTempoLed(unsigned long currentTime) {
    // If the LED is off and enough time has passed since the last flash
    if (this->tempoLed.getState() == LOW) {
        // Turn the LED on
        this->tempoLed.setState(HIGH);
        // Update the time the LED was turned on
        ledOnTime = currentTime;
        timeToFlash = false;
    }
}

// EurorackClock.cpp
void EurorackClock::triggerClockPulse() {
    clockState.lastTickTime = micros();
    unsigned long currentTime = millis();
    updateFlashPulseCount();
    for (int i = 0; i < gates.numGates; i++) {
        if (flashPulseCount % gates.getDivision(i) == 0) {
            gates.trigger(i, currentTime);
        }
    }
    if (isMidiClock) { // Check if a MIDI clock signal is being used
        if (flashPulseCount % 24 == 0) { // Use the MIDI clock standard of 24 PPQN
            triggerTempoLed(currentTime);
            timeToFlash = true;
        }
    } else {
        if (flashPulseCount % ppqn == 0) {
            triggerTempoLed(currentTime);
            timeToFlash = true;
        }
    }
}


void EurorackClock::reset() {
    if (isExternalTempo) {
        resetTriggered = true;
        handleResetTrigger();
        unsigned long currentTime = millis();
        // Trigger the events immediately
        for (int i = 0; i < gates.numGates; i++) {
            gates.trigger(i, currentTime);
        }
        triggerTempoLed(currentTime);
        // Reset the timers
        clockState.lastTickTime = micros();
        flashPulseCount = 0;
        gates.update(currentTime);
    }
}