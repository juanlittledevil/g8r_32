#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"
#include "Pin.h"

enum ClockSource {
    INTERNAL,
    EXTERNAL_EURORACK,
    EXTERNAL_MIDI
};

class EurorackClock {
public:
    EurorackClock(int clockPin, int resetPin, int tempoLedPin);
    void start();
    void stop();
    static void interruptHandler() {
        instance->tick();
    }
    static void resetInterruptHandler() {
        instance->reset();
    }
    // void clock();
    void reset();
    void tick();
    void setTempo(float newTempo, int ppqn);
    int getTempo() const; 
    void setup();
    void flashTempoLed();
    void handleExternalClock();
    void handleMidiClock();
    void setPPQN(int ppqn);
    void setExternalTempo(bool isExternalTempo);
    void setClockSource(ClockSource source);

private:
    void flashLed();
    float tempo; // Tempo in BPM
    float lastTickTime; // time of the last tick in milliseconds
    float tickInterval; // interval between ticks in milliseconds
    float lastExternalTickTime; // interval between ticks in milliseconds
    static float lastFlashTime;
    static int flashPulseCount;
    int clockPin;
    int resetPin;
    int ppqn;
    bool isRunning;
    bool isExternalTempo;
    bool timeToFlash;
    float externalTempo;
    HardwareTimer* timer;
    static EurorackClock* instance;
    LED tempoLed;
    InputPin externalClock;
    InputPin resetButton;
    ClockSource clockSource;
};

#endif // EURORACKCLOCK_H