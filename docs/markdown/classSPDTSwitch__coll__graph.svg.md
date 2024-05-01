SPDTSwitch

Node1

SPDTSwitch + SPDTSwitch(int pinA, int pinB) + void begin() + SwitchState
read()

Node2

[InputPin - bool useInternalPullup - bool useInternalPulldown +
InputPin(int pin) + InputPin(int pin, bool internalPullup, bool
internalPulldown) + virtual void begin() + virtual bool
getState()](classInputPin.html " ")

Node2-\>Node1

-pinA -pinB

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2
