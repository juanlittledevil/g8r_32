#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"
#include "Pin.h"
#include "Gates.h"

struct ClockState {
    unsigned long lastTickTime;
    unsigned long tickInterval;
    bool isRunning;

    ClockState() : lastTickTime(0), tickInterval(0), isRunning(false) {}
};

class EurorackClock {

ClockState clockState;

public:
    EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates);
    void setup();
    void start();
    void stop();
    static void interruptHandler() {
        instance->tick();
    }
    static void resetInterruptHandler() {
        instance->reset();
    }
    void reset();
    void tick();
    void setTempo(float newTempo, int ppqn);
    int getTempo() const; 
    void flashTempoLed();
    void handleExternalClock();
    void handleMidiClock();
    void setPPQN(int ppqn);
    void setExternalTempo(bool isExternalTempo);

private:
    void updateTempoLed();
    void updateFlashPulseCount();
    bool shouldTriggerClockPulse();
    void triggerClockPulse();

    static EurorackClock* instance;
    HardwareTimer* timer;
    LED tempoLed;
    InputPin externalClock;
    InputPin resetButton;
    Gates& gates;

    float tempo; // Tempo in BPM
    float lastTickTime; // time of the last tick in milliseconds
    float tickInterval; // interval between ticks in milliseconds
    float lastExternalTickTime; // interval between ticks in milliseconds
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
};

#endif // EURORACKCLOCK_H