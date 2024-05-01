OutputPin

Node1

OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool getState()

Node3

[Gate - int gateOnDuration - unsigned long triggeredTime - int division
+ Gate(int pin=-1) + \~Gate() + void trigger(unsigned long currentTime)
+ void update(unsigned long currentTime) + void setDivision(int
divition) + int getDivision() + void setGateOnDuration (int
duration)](classGate.html " ")

Node1-\>Node3

Node4

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node1-\>Node4

Node5

[PWMPin - int dutyCycle - HardwareTimer \* timer + PWMPin(int pin=-1) +
virtual void begin() + void setDutyCycle(int dutyCycle) + int
getDutyCycle()](classPWMPin.html " ")

Node1-\>Node5

Node2

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node2-\>Node1
