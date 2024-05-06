/**
 * @file EurorackClock.cpp
 * @brief This file contains the implementation of the EurorackClock class, which is used to manage the clock and gates of the Eurorack module.
 */
#include "EurorackClock.h"
#include "Debug.h"
#include <Arduino.h>
#include "ModeSelector.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/// Static variables initialization
float EurorackClock::lastFlashTime = 0;
int EurorackClock::flashPulseCount = 0;
EurorackClock* EurorackClock::instance = nullptr;

/// Constructor
EurorackClock::EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates, LEDs& leds) 
    : clockPin(clockPin),
      resetPin(resetPin),
      tempo(120),
      lastTickTime(0),
      tickInterval(60000 / tempo),
      isRunning(false),
      tempoLed(tempoLedPin),
      externalClock(clockPin, false, true),
      resetButton(resetPin, false, true),
      gates(gates),
      leds(leds) {
        instance = this;
        timer = new HardwareTimer(TIM2); // Use Timer 2
        attachInterrupt(digitalPinToInterrupt(resetPin), EurorackClock::resetInterruptHandler, RISING);
        this->externalTempo = 0;
}

/**
 * @brief This function is used to setup the clock and its components. It is intended to be ran in the setup() function of the main sketch.
 * 
 * TODO: Perhaps this should be called begin() instead of setup() to match the naming convention of the other classes.
 */
void EurorackClock::setup() {
    tempoLed.begin();
    externalClock.begin();
    resetButton.begin();
}

/**
 * @brief This function is used to set the tempo of the clock.
 * 
 * @param newTempo The new tempo to set.
 * @param ppqn The PPQN (Pulses Per Quarter Note) to set.
 */
void EurorackClock::setTempo(float newTempo, int ppqn) {
    tempo = newTempo;
    this->ppqn = ppqn;
    clockState.tickInterval = 60000000.0 / (tempo * ppqn); // Calculate interval in microseconds
    timer->setOverflow(clockState.tickInterval, MICROSEC_FORMAT);
}

/**
 * @brief This function is used to start the clock.
 */
void EurorackClock::start() {
    clockState.isRunning = true;
    timer->attachInterrupt(interruptHandler);
    timer->resume();
}

/**
 * @brief This function is used to stop the clock.
 */
void EurorackClock::stop() {
    clockState.isRunning = false;
    timer->detachInterrupt();
    timer->pause();
}

/**
 * @brief This function is used to toggle the clock.
 */
int EurorackClock::getTempo() const {
    return tempo;
}

/**
 * @brief This function is used to toggle how long the LED flashes for.
 */
void EurorackClock::toggleLedOnDuration(bool selectingTempo) {
    ledOnDuration = !selectingTempo ? LONG_LED_ON_DURATION : LED_ON_DURATION;
}

/**
 * @brief This function is used to flash the tempo LED at the correct interval.
 */
void EurorackClock::updateTempoLed(unsigned long currentTime) {
    // Only update the LED if we're in Mode0 and not in mode selection
    if (ModeSelector::getInstance().getMode() == 0 && !ModeSelector::getInstance().isInModeSelection()) {
        // If the LED is on and it's been on for the duration
        if (this->tempoLed.getState() == HIGH && currentTime - ledOnTime >= ledOnDuration) {
            // Turn the LED off
            this->tempoLed.setState(LOW);
        }
    } else {
        // If we're not in Mode0, turn the LED off
        this->tempoLed.setState(LOW);
    }
}

/**
 * @brief This function determines if we need to send a trigger or reset them.
 * 
 */
void EurorackClock::updateFlashPulseCount() {
    if (!resetTriggered) {
        flashPulseCount++;
    }
    handleResetTrigger();
    decideFlash();
}

/**
 * @brief Handle the trigger signal from a reset pin.
 */
void EurorackClock::handleResetTrigger() {
    if (resetTriggered) {
        tempoLed.setState(LOW);
        resetTriggered = false;
        flashPulseCount = 0;
        timeToFlash = true;
    }
}

/**
 * @brief Check if it's time to flash the LED.
 */
void EurorackClock::decideFlash() {
    int updateCount = isMidiClock ? 24 : this->ppqn;

    if (flashPulseCount >= updateCount) {
        timeToFlash = true;
        flashPulseCount = 0;
    }
}

/**
 * @brief This function is used to handle the external clock.
 * 
 */
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

/**
 * @brief This function is used to handle the MIDI clock.
 * 
 */
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

/**
 * @brief Update the local ppqn value.
 * 
 */
void EurorackClock::setPPQN(int ppqn) {
    this->ppqn = ppqn;
}

/**
 * @brief sets the external tempo mode when the external clock is used.
 * 
 * @param isExternalTempo 
 */
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

/**
 * @brief This is the main tick() function, which is used to update the clock and its components.
 * Don't confuse this with the pulse() function, which is used to trigger a clock pulse.
 */
void EurorackClock::tick() {
    unsigned long currentTime = millis();
    gates.update(currentTime);
    leds.update(currentTime);
    if (shouldTriggerClockPulse()) {
        triggerClockPulse();
    }
    updateTempoLed(currentTime);
}

/**
 * @brief Evaluate if a clock pulse should be triggered.
 * 
 * @return bool shouldTrigger 
 */
bool EurorackClock::shouldTriggerClockPulse() {
    bool shouldTrigger = !this->isExternalTempo && clockState.isRunning && micros() - clockState.lastTickTime >= clockState.tickInterval;
    shouldTrigger = shouldTrigger && ModeSelector::getInstance().getMode() == 0;
    return shouldTrigger;
}

/**
 * @brief Responsible for flashing the tempo LED.
 */
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

/**
 * @brief This triggers on clock pulses. Not to be confused with the tick() function.
 */
void EurorackClock::triggerClockPulse() {
    clockState.lastTickTime = micros();
    unsigned long currentTime = millis();
    updateFlashPulseCount();
    triggerGates(currentTime);
    handleTempoLed(currentTime);
}

/**
 * @brief tigger the gates and LEDs.
 * 
 * @param currentTime 
 */
void EurorackClock::triggerGates(unsigned long currentTime) {
    // Check if mode selection is active
    if (ModeSelector::getInstance().isInModeSelection()) {
        // If mode selection is active, return immediately without triggering the gates and LEDs
        return;
    }

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

/**
 * @brief Used to determine if the tempo LED should be flashed according to the clock pulse and defined PPQN.
 */
void EurorackClock::handleTempoLed(unsigned long currentTime) {
    int pulseCount = isMidiClock ? MIDI_CLOCK_PULSE_COUNT : ppqn;
    if (flashPulseCount % pulseCount == 0) {
        triggerTempoLed(currentTime);
        timeToFlash = true;
    }
}

/**
 * @brief Reset the clock and gates.
 * 
 */
void EurorackClock::reset() {
    resetTriggered = true;
    handleResetTrigger();
    unsigned long currentTime = millis();

    // Trigger the events immediately
    for (int i = 0; i < gates.numGates; i++) {
        gates.trigger(i, currentTime);
        gates.gateCounters[i] = 0;
    }
    triggerTempoLed(currentTime);

    // Reset the timers
    clockState.lastTickTime = micros();
    flashPulseCount = 0;
    gates.update(currentTime);
}

/**
 * @brief Reset the selected gate. Useful for syncing the gates.
 * 
 * @param selectedGate 
 */
void EurorackClock::reset(int selectedGate) {
    unsigned long currentTime = millis();
    gates.trigger(selectedGate, currentTime);
    gates.gateCounters[selectedGate] = 0;
}