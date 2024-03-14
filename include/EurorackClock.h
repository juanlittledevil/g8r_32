#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"
#include "Pin.h"
#include "Gates.h"

class EurorackClock {
public:
    EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates& gates);
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

private:
    void updateTempoLed();
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
    HardwareTimer* timer;
    static EurorackClock* instance;
    LED tempoLed;
    InputPin externalClock;
    InputPin resetButton;
    Gates& gates;
};

#endif // EURORACKCLOCK_H