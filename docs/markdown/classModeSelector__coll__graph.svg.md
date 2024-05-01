ModeSelector

Node1

ModeSelector - std::vector\< Mode \* \> modes - int mode - int
inModeSelection - bool isInSelection - bool inChannelSelection - bool
singlePressHandled - bool doublePressHandled - bool longPressHandled -
size\_t totalModes - int previousMode - int numLeds + int getMode()
const + void setMode(int newMode) + void handleLongPress() + void
handleEncoderRotation() + void handleModeSelection Press() + void
handleButtonPress() + void setLedController (LEDController
&ledController) + void setEncoder(Encoder &encoder) + void
setCurrentMode (Mode \*&currentMode) + bool isInModeSelection() + Mode
\* getCurrentMode() + void addMode(Mode \*mode) + void update() + static
ModeSelector & getInstance() - ModeSelector() -
ModeSelector(ModeSelector const &) - void operator=(ModeSelector const
&)

Node2

[Encoder - int prevStateCLK - ButtonState buttonState - unsigned long
lastButton Press - int pressCount - unsigned long lastTurnTime - int
speed - static const unsigned long DOUBLE\_PRESS\_INTERVAL - static
const unsigned long LONG\_PRESS\_INTERVAL + Encoder(int encCLK, int
encDT, int encButton) + void begin() + Direction readEncoder() +
ButtonState readButton() + int handleEncoderDirection (int currentValue,
int maxValue, Direction direction) + bool isButtonLongPressed() + bool
isButtonDoublePressed() + bool isButtonSinglePressed() + int
readSpeed()](classEncoder.html " ")

Node2-\>Node1

-encoder

Node3

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node3-\>Node2

-encButton -encCLK -encDT

Node6

[ResetButton - int pin - ButtonState buttonState - unsigned long
lastButton Press - int pressCount - static const unsigned long
DOUBLE\_PRESS\_INTERVAL - static const unsigned long
LONG\_PRESS\_INTERVAL + ResetButton(int pin) + bool begin() +
ButtonState readButton() + bool isButtonLongPressed() + bool
isButtonDoublePressed() + bool
isButtonSinglePressed()](classResetButton.html " ")

Node3-\>Node6

-resetButton

Node4

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node4-\>Node3

Node10

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node4-\>Node10

Node5

[Mode + virtual void handleSingle Press()=0 + virtual void handleDouble
Press()=0 + virtual void handleLongPress()=0 + virtual void handlePress
Released()=0 + virtual void handleSelection States()=0 + virtual void
handleReset SinglePress()=0 + virtual void handleReset DoublePress()=0 +
virtual void handleReset LongPress()=0 + virtual void handleReset
PressReleased()=0 + virtual void setup()=0 + virtual void teardown()=0 +
virtual void update()=0](classMode.html " ")

Node5-\>Node1

-currentMode -nullMode

Node6-\>Node1

-resetButton

Node7

[LEDController - int numLeds + LEDController(LEDs &leds) + void
turnAllOn() + void turnAllOff() + void blinkSlow(int ledIndex) + void
blinkFast(int ledIndex) + void blinkFaster(int ledIndex) + void
stopBlinking(int ledIndex) + void stopAllBlinking() + void
resetInverted() + void resetInverted (int ledIndex) and 6
more\...](classLEDController.html " ")

Node7-\>Node1

-ledController

Node8

[LEDs + int numLeds + LEDs(std::vector\< int \> pins, int numLeds) +
\~LEDs() + void begin() + void setState(int index, bool state) + void
setState(int index, bool state, int intensity) + bool getState(int
index) + void setAllLeds(bool state) + void startBlinking (int index,
unsigned long interval) + void stopBlinking(int index) + void
stopAllBlinking() and 6 more\...](classLEDs.html " ")

Node8-\>Node7

-leds

Node9

[LED - unsigned long blinkStartTime - unsigned long blinkInterval - int
intensity - bool isBlinking - int ledOnDuration - int
invertedLedOnDuration - unsigned long triggeredTime - bool inverted +
LED(int pin=-1) + \~LED() + void startBlinking (unsigned long interval)
+ void stopBlinking() + void updateBlinking() + void setIntensity(int
intensity) + void trigger(unsigned long currentTime, bool
inverted=false) + void update(unsigned long currentTime) + void
resetIvernted() + void setLedOnDuration (int
duration)](classLED.html " ")

Node9-\>Node8

-leds

Node10-\>Node9

[](classModeSelector__coll__graph_org.svg)
