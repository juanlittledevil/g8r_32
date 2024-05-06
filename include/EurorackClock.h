/**
 * @file EurorackClock.h
 * @brief This file contains the EurorackClock class, which is used to handle the clock and tempo of the device.
 * This is one of the first classes I wrote for the project, and it has been refactored a few times.
 * It probably could use with a bit more refactoring love, but it works well enough for now.
 */
#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"
#include "Pin.h"
#include "Gates.h"
#include "LEDs.h"
#include "Constants.h"

/**
 * @brief The ClockState struct is used to store the current state of the clock.
 * 
 */
struct ClockState {
    unsigned long lastTickTime; // Time of the last tick
    unsigned long tickInterval; // Interval between ticks
    bool isRunning; // Indicates whether the clock is running

    ClockState() : lastTickTime(0), tickInterval(0), isRunning(false) {}
};

/**
 * @brief The EurorackClock class is used to handle the clock and tempo of the device.
 * It utilizes an interrupt to handle the clock ticks, and can be set to an external tempo.
 */
class EurorackClock {
    ClockState clockState; // Current state of the clock

public:
    EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates, LEDs& leds);
    void setup();
    void start(); // Start the clock
    void stop(); // Stop the clock

    // Static interrupt handler for the clock
    static void interruptHandler() {
        instance->tick();
    }

    // Static reset interrupt handler
    static void resetInterruptHandler() {
        instance->reset();
    }

    void reset(); // Reset the clock
    void reset(int selectedGate);
    void tick(); // Handle a clock tick
    void setTempo(float newTempo, int ppqn);
    int getTempo() const; 
    void flashTempoLed();
    void handleExternalClock();
    void handleMidiClock();
    void setPPQN(int ppqn);
    void setExternalTempo(bool isExternalTempo);
    void toggleLedOnDuration(bool selectingTempo);

private:
    void updateTempoLed(unsigned long currentTime);
    void updateFlashPulseCount();
    bool shouldTriggerClockPulse();
    void triggerClockPulse();
    void handleResetTrigger();
    void decideFlash();
    void triggerTempoLed(unsigned long currentTime);
    void triggerGates(unsigned long currentTime);
    void handleTempoLed(unsigned long currentTime);

    static EurorackClock* instance;
    HardwareTimer* timer;
    LED tempoLed;
    InputPin externalClock;
    InputPin resetButton;
    Gates& gates;
    LEDs& leds;
    float tempo;
    float lastTickTime;
    float tickInterval;
    float lastExternalTickTime;
    static float lastFlashTime;
    static int flashPulseCount;
    unsigned long lastMidiClockTime;
    static const unsigned long MIDI_CLOCK_TIMEOUT = 1000;
    static const int LED_ON_DURATION = 10; 
    static const int LONG_LED_ON_DURATION = 50;
    static const int MIDI_CLOCK_PULSE_COUNT = 24;
    int ledOnDuration = LONG_LED_ON_DURATION; 
    unsigned long ledOnTime = 0;
    int clockPin;
    int resetPin;
    int ppqn;
    bool isRunning;
    bool isExternalTempo;
    bool isMidiClock;
    bool timeToFlash;
    bool resetTriggered;
    float externalTempo;
    int lastClockState;
    unsigned long lastClockTime;
    int tickCount;
};

#endif // EURORACKCLOCK_H
