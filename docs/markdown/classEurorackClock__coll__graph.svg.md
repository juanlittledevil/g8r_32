EurorackClock

Node1

EurorackClock - HardwareTimer \* timer - float tempo - float
lastTickTime - float tickInterval - float lastExternalTickTime -
unsigned long lastMidiClockTime - int ledOnDuration - unsigned long
ledOnTime - int clockPin - int resetPin and 10 more\... - static float
lastFlashTime - static int flashPulseCount - static const unsigned long
MIDI\_CLOCK\_TIMEOUT - static const int LED \_ON\_DURATION - static
const int LONG \_LED\_ON\_DURATION - static const int MIDI
\_CLOCK\_PULSE\_COUNT + EurorackClock(int clockPin, int resetPin, int
tempoLedPin, Gates &gates, LEDs &leds) + void setup() + void start() +
void stop() + void reset() + void reset(int selectedGate) + void tick()
+ void setTempo(float newTempo, int ppqn) + int getTempo() const + void
flashTempoLed() + void handleExternalClock() + void handleMidiClock() +
void setPPQN(int ppqn) + void setExternalTempo (bool isExternalTempo) +
void toggleLedOnDuration (bool selectingTempo) + static void
interruptHandler() + static void resetInterrupt Handler() - void
updateTempoLed (unsigned long currentTime) - void
updateFlashPulseCount() - bool shouldTriggerClockPulse() - void
triggerClockPulse() - void handleResetTrigger() - void decideFlash() -
void triggerTempoLed (unsigned long currentTime) - void
triggerGates(unsigned long currentTime) - void handleTempoLed (unsigned
long currentTime)

Node1-\>Node1

-instance

Node2

[Gates + int numGates + int \* gateCounters - int selectedGate +
Gates(std::vector \< int \> pins, int numGates) + \~Gates() + void
begin() + void setState(int gateIndex, bool state) + bool getState(int
gateIndex) + void turnOnGate(int index) + void turnOffGate(int index) +
void setALLGates(bool state) + void update(unsigned long currentTime) +
void trigger(int index, unsigned long currentTime) + void
setDivision(int index, int division) + int getDivision(int index) + void
setSelectedGate (int gate) + int getSelectedGate() + void
setGateOnDuration (int index, int duration)](classGates.html " ")

Node2-\>Node1

-gates

Node3

[Gate - int gateOnDuration - unsigned long triggeredTime - int division
+ Gate(int pin=-1) + \~Gate() + void trigger(unsigned long currentTime)
+ void update(unsigned long currentTime) + void setDivision(int
divition) + int getDivision() + void setGateOnDuration (int
duration)](classGate.html " ")

Node3-\>Node2

-gateArray

Node4

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node4-\>Node3

Node8

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node4-\>Node8

Node5

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node5-\>Node4

Node6

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node5-\>Node6

Node6-\>Node1

-externalClock -resetButton

Node7

[LEDs + int numLeds + LEDs(std::vector\< int \> pins, int numLeds) +
\~LEDs() + void begin() + void setState(int index, bool state) + void
setState(int index, bool state, int intensity) + bool getState(int
index) + void setAllLeds(bool state) + void startBlinking (int index,
unsigned long interval) + void stopBlinking(int index) + void
stopAllBlinking() and 6 more\...](classLEDs.html " ")

Node7-\>Node1

-leds

Node8-\>Node1

-tempoLed

Node8-\>Node7

-leds

Node9

[ClockState + unsigned long lastTickTime + unsigned long tickInterval +
bool isRunning + ClockState()](structClockState.html " ")

Node9-\>Node1

-clockState

[](classEurorackClock__coll__graph_org.svg)
