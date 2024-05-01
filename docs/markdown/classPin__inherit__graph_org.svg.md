Pin

Node1

Pin \# int pin \# bool state + Pin(int pin=-1) + \~Pin()

Node2

[AnalogInputPin + AnalogInputPin(int pin) + void begin() + int
read()](classAnalogInputPin.html " ")

Node1-\>Node2

Node3

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node1-\>Node3

Node4

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node1-\>Node4

Node5

[Gate - int gateOnDuration - unsigned long triggeredTime - int division
+ Gate(int pin=-1) + \~Gate() + void trigger(unsigned long currentTime)
+ void update(unsigned long currentTime) + void setDivision(int
divition) + int getDivision() + void setGateOnDuration (int
duration)](classGate.html " ")

Node4-\>Node5

Node6

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node4-\>Node6

Node7

[PWMPin - int dutyCycle - HardwareTimer \* timer + PWMPin(int pin=-1) +
virtual void begin() + void setDutyCycle(int dutyCycle) + int
getDutyCycle()](classPWMPin.html " ")

Node4-\>Node7
