#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"
#include "Pin.h"
#include "Gates.h"
#include "LEDs.h"
#include "Constants.h"

// Define the state of the clock
struct ClockState {
    unsigned long lastTickTime; // Time of the last tick
    unsigned long tickInterval; // Interval between ticks
    bool isRunning; // Indicates whether the clock is running

    ClockState() : lastTickTime(0), tickInterval(0), isRunning(false) {}
};

// Class declaration for EurorackClock
class EurorackClock {
    ClockState clockState; // Current state of the clock

public:
    // Constructor
    EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates, LEDs& leds);

    // Setup function to initialize the clock
    void setup();

    // Start the clock
    void start();

    // Stop the clock
    void stop();

    // Static interrupt handler for the clock
    static void interruptHandler() {
        instance->tick();
    }

    // Static reset interrupt handler
    static void resetInterruptHandler() {
        instance->reset();
    }

    // Reset the clock
    void reset();

    // Main tick function
    void tick();

    // Set the tempo of the clock
    void setTempo(float newTempo, int ppqn);

    // Get the current tempo
    int getTempo() const; 

    // Flash the tempo LED
    void flashTempoLed();

    // Handle the external clock input
    void handleExternalClock();

    // Handle the MIDI clock input
    void handleMidiClock();

    // Set the PPQN (Pulses Per Quarter Note)
    void setPPQN(int ppqn);

    // Set whether the clock is using external tempo
    void setExternalTempo(bool isExternalTempo);

private:
    // Helper functions
    void updateTempoLed(unsigned long currentTime);
    void updateFlashPulseCount();
    bool shouldTriggerClockPulse();
    void triggerClockPulse();
    void handleResetTrigger();
    void decideFlash();
    void triggerTempoLed(unsigned long currentTime);
    void triggerGates(unsigned long currentTime);
    void handleTempoLed(unsigned long currentTime);

    // Member variables
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
