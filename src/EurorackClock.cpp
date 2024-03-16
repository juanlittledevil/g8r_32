#include "EurorackClock.h"
#include "Debug.h"
#include <Arduino.h>
#include "ModeSelector.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

const int LED_ON_DURATION = 10; 
const int MIDI_CLOCK_PULSE_COUNT = 24;

// Static variables initialization
float EurorackClock::lastFlashTime = 0;
int EurorackClock::flashPulseCount = 0;
EurorackClock* EurorackClock::instance = nullptr;

// Constructor
EurorackClock::EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates, LEDs& leds) 
    : clockPin(clockPin),
      resetPin(resetPin),
      tempo(120),
      lastTickTime(0),
      tickInterval(60000 / tempo),
      isRunning(false),
      tempoLed(tempoLedPin),
      externalClock(clockPin),
      resetButton(resetPin),
      gates(gates),
      leds(leds) {
        instance = this;
        timer = new HardwareTimer(TIM2); // Use Timer 2
        attachInterrupt(digitalPinToInterrupt(resetPin), EurorackClock::resetInterruptHandler, RISING);
        this->externalTempo = 0;
}

// Initialization function
void EurorackClock::setup() {
    tempoLed.begin();
    externalClock.begin();
}

// Set the tempo of the clock
void EurorackClock::setTempo(float newTempo, int ppqn) {
    tempo = newTempo;
    this->ppqn = ppqn;
    clockState.tickInterval = 60000000.0 / (tempo * ppqn); // Calculate interval in microseconds
    timer->setOverflow(clockState.tickInterval, MICROSEC_FORMAT);
}

// Start the clock
void EurorackClock::start() {
    clockState.isRunning = true;
    timer->attachInterrupt(interruptHandler);
    timer->resume();
}

// Stop the clock
void EurorackClock::stop() {
    clockState.isRunning = false;
    timer->detachInterrupt();
    timer->pause();
}

// Get the current tempo
int EurorackClock::getTempo() const {
    return tempo;
}

// Update the tempo LED status
void EurorackClock::updateTempoLed(unsigned long currentTime) {
    int ledOnDuration = LED_ON_DURATION; // Duration in milliseconds that the LED should stay on

    // If the LED is on and it's been on for the duration
    if (this->tempoLed.getState() == HIGH && currentTime - ledOnTime >= ledOnDuration) {
        // Turn the LED off
        this->tempoLed.setState(LOW);
    }
}

// Update the flash pulse count
void EurorackClock::updateFlashPulseCount() {
    if (!resetTriggered) {
        flashPulseCount++;
    }
    handleResetTrigger();
    decideFlash();
}

// Handle the reset trigger
void EurorackClock::handleResetTrigger() {
    if (resetTriggered) {
        tempoLed.setState(LOW);
        resetTriggered = false;
        flashPulseCount = 0;
        timeToFlash = true;
    }
}

// Decide whether it's time to flash
void EurorackClock::decideFlash() {
    int updateCount = isMidiClock ? 24 : this->ppqn;

    if (flashPulseCount >= updateCount) {
        timeToFlash = true;
        flashPulseCount = 0;
    }
}

// Handle the external clock
void EurorackClock::handleExternalClock() {
    if (ModeSelector::getInstance().getMode() == 0) {
        int clockState = externalClock.getState();
        unsigned long currentTime = millis();

        if (clockState == HIGH && lastClockState == LOW && this->isExternalTempo && (currentTime - lastMidiClockTime > MIDI_CLOCK_TIMEOUT)) {
            isMidiClock = false;
            triggerClockPulse();
        }

        lastClockState = clockState;
    }
}

// Handle the MIDI clock
void EurorackClock::handleMidiClock() {
    if (ModeSelector::getInstance().getMode() == 0) {
        unsigned long currentTime = millis();

        if (this->isExternalTempo) {
            // Handle MIDI clock
            lastMidiClockTime = currentTime;
            isMidiClock = true;

            // Trigger clock pulse
            triggerClockPulse();
        }
    }
}

// Set the PPQN (Pulses Per Quarter Note)
void EurorackClock::setPPQN(int ppqn) {
    this->ppqn = ppqn;
}

// Set whether the clock is using external tempo
void EurorackClock::setExternalTempo(bool isExternalTempo) {
    this->isExternalTempo = isExternalTempo;
    if (!isExternalTempo) {
        isMidiClock = false;
        // Manually reset necessary state variables
        lastClockState = LOW;
        lastClockTime = 0;
        tickCount = 0;
    }
}

// Main tick function
void EurorackClock::tick() {
    unsigned long currentTime = millis();
    gates.update(currentTime);
    leds.update(currentTime);
    if (shouldTriggerClockPulse()) {
        triggerClockPulse();
    }
    updateTempoLed(currentTime);
}

// Check if it's time to trigger a clock pulse
bool EurorackClock::shouldTriggerClockPulse() {
    bool shouldTrigger = !this->isExternalTempo && clockState.isRunning && micros() - clockState.lastTickTime >= clockState.tickInterval;
    shouldTrigger = shouldTrigger && ModeSelector::getInstance().getMode() == 0;
    return shouldTrigger;
}

// Trigger the tempo LED
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

// Trigger a clock pulse
void EurorackClock::triggerClockPulse() {
    clockState.lastTickTime = micros();
    unsigned long currentTime = millis();
    updateFlashPulseCount();
    triggerGates(currentTime);
    handleTempoLed(currentTime);
}

// Trigger the gates
void EurorackClock::triggerGates(unsigned long currentTime) {
    for (int i = 0; i < gates.numGates; i++) {
        gates.gateCounters[i]++;
        int division = gates.getDivision(i);
        if (gates.gateCounters[i] % division == 0) {
            gates.gateCounters[i] = 0;
            gates.trigger(i, currentTime);
            if (i == gates.getSelectedGate()) {
                // Trigger the LED inverted.
                leds.trigger(i, currentTime, true);
            } else {
                // Trigger the LED normally.
                leds.trigger(i, currentTime);
            }
        }
    }
}

// Handle the tempo LED
void EurorackClock::handleTempoLed(unsigned long currentTime) {
    int pulseCount = isMidiClock ? MIDI_CLOCK_PULSE_COUNT : ppqn;
    if (flashPulseCount % pulseCount == 0) {
        triggerTempoLed(currentTime);
        timeToFlash = true;
    }
}

// Reset the clock
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
    } else if (!isExternalTempo && ModeSelector::getInstance().getMode() == 0) {
        unsigned long currentTime = millis();
        // Get the currently selected gate
        int selectedGate = gates.getSelectedGate();

        // Reset the counter for the selected gate
        gates.gateCounters[selectedGate] = 0;
        gates.trigger(selectedGate, currentTime);
    }
}
