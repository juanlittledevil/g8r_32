ResetButton

Node1

ResetButton - int pin - ButtonState buttonState - unsigned long
lastButton Press - int pressCount - static const unsigned long
DOUBLE\_PRESS\_INTERVAL - static const unsigned long
LONG\_PRESS\_INTERVAL + ResetButton(int pin) + bool begin() +
ButtonState readButton() + bool isButtonLongPressed() + bool
isButtonDoublePressed() + bool isButtonSinglePressed()

Node2

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node2-\>Node1

-resetButton

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2
