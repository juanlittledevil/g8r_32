#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

#include <HardwareTimer.h>
#include "LED.h"

class EurorackClock {
public:
    EurorackClock(int clockPin, int resetPin, int tempoLedPin);
    void start();
    void stop();
    static void interruptHandler() {
        instance->clock();
    }
    void clock();
    void reset();
    void tick();
    void setTempo(int newTempo, int ppqn);
    int getTempo() const; 
    void configureLed();
    void flashTempoLed();

private:
    int tempo; // Tempo in BPM
    unsigned long lastTickTime; // time of the last tick in milliseconds
    unsigned long tickInterval; // interval between ticks in milliseconds
    int clockPin;
    int resetPin;
    bool isRunning;
    HardwareTimer* timer;
    static EurorackClock* instance;
    LED tempoLed;
};

#endif // EURORACKCLOCK_H