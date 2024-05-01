Encoder

Node1

Encoder - int prevStateCLK - ButtonState buttonState - unsigned long
lastButton Press - int pressCount - unsigned long lastTurnTime - int
speed - static const unsigned long DOUBLE\_PRESS\_INTERVAL - static
const unsigned long LONG\_PRESS\_INTERVAL + Encoder(int encCLK, int
encDT, int encButton) + void begin() + Direction readEncoder() +
ButtonState readButton() + int handleEncoderDirection (int currentValue,
int maxValue, Direction direction) + bool isButtonLongPressed() + bool
isButtonDoublePressed() + bool isButtonSinglePressed() + int readSpeed()

Node2

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node2-\>Node1

-encButton -encCLK -encDT

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2

[](classEncoder__coll__graph_org.svg)
