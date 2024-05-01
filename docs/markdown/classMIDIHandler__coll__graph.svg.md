MIDIHandler

Node1

MIDIHandler - midi::SerialMIDI\< Hardware Serial \> midiSerial -
midi::MidiInterface \< midi::SerialMIDI\< HardwareSerial \> \> midi -
byte channel - static byte confirmedChannel + MIDIHandler(HardwareSerial
&serial, EurorackClock &clock, Gates &gates, LEDs &leds) + void begin()
+ void handleMidiMessage() + void setChannel(byte channel) + void
setMode(int mode) + static void handleClock() + static void
handleStart() + static void handleStop() + static void handleContinue()
+ static void handleMode0Note On(byte channel, byte pitch, byte
velocity) + static void handleMode0Note Off(byte channel, byte pitch,
byte velocity) + static void handleMode1Note On(byte channel, byte
pitch, byte velocity) + static void handleMode1Note Off(byte channel,
byte pitch, byte velocity) + static void handleMode2Note On(byte
channel, byte pitch, byte velocity) + static void handleMode2Note
Off(byte channel, byte pitch, byte velocity)

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

Node8

[EurorackClock - HardwareTimer \* timer - float tempo - float
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
long currentTime)](classEurorackClock.html " ")

Node2-\>Node8

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

Node7

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node4-\>Node7

Node5

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node5-\>Node4

Node9

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node5-\>Node9

Node6

[LEDs + int numLeds + LEDs(std::vector\< int \> pins, int numLeds) +
\~LEDs() + void begin() + void setState(int index, bool state) + void
setState(int index, bool state, int intensity) + bool getState(int
index) + void setAllLeds(bool state) + void startBlinking (int index,
unsigned long interval) + void stopBlinking(int index) + void
stopAllBlinking() and 6 more\...](classLEDs.html " ")

Node6-\>Node1

-leds

Node6-\>Node8

-leds

Node7-\>Node6

-leds

Node7-\>Node8

-tempoLed

Node8-\>Node1

-clock

Node8-\>Node8

-instance

Node9-\>Node8

-externalClock -resetButton

Node10

[ClockState + unsigned long lastTickTime + unsigned long tickInterval +
bool isRunning + ClockState()](structClockState.html " ")

Node10-\>Node8

-clockState

[](classMIDIHandler__coll__graph_org.svg)
