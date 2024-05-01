PWMPin

Node1

PWMPin - int dutyCycle - HardwareTimer \* timer + PWMPin(int pin=-1) +
virtual void begin() + void setDutyCycle(int dutyCycle) + int
getDutyCycle()

Node2

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node2-\>Node1

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2
