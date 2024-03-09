#ifndef EURORACKCLOCK_H
#define EURORACKCLOCK_H

class EurorackClock {
public:
    EurorackClock(int clockPin, int resetPin);
    void start();
    void stop();
    void clock();
    void reset();

private:
    int clockPin;
    int resetPin;
    bool isRunning;
};

#endif // EURORACKCLOCK_H