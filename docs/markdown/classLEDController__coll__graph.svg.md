LEDController

Node1

LEDController - int numLeds + LEDController(LEDs &leds) + void
turnAllOn() + void turnAllOff() + void blinkSlow(int ledIndex) + void
blinkFast(int ledIndex) + void blinkFaster(int ledIndex) + void
stopBlinking(int ledIndex) + void stopAllBlinking() + void
resetInverted() + void resetInverted (int ledIndex) and 6 more\...

Node2

[LEDs + int numLeds + LEDs(std::vector\< int \> pins, int numLeds) +
\~LEDs() + void begin() + void setState(int index, bool state) + void
setState(int index, bool state, int intensity) + bool getState(int
index) + void setAllLeds(bool state) + void startBlinking (int index,
unsigned long interval) + void stopBlinking(int index) + void
stopAllBlinking() and 6 more\...](classLEDs.html " ")

Node2-\>Node1

-leds

Node3

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node3-\>Node2

-leds

Node4

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node4-\>Node3

Node5

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node5-\>Node4

[](classLEDController__coll__graph_org.svg)
