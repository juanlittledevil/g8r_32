Gate

Node1

Gate - int gateOnDuration - unsigned long triggeredTime - int division +
Gate(int pin=-1) + \~Gate() + void trigger(unsigned long currentTime) +
void update(unsigned long currentTime) + void setDivision(int divition)
+ int getDivision() + void setGateOnDuration (int duration)

Node2

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node2-\>Node1

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2

[](classGate__coll__graph_org.svg)
