Gates

Node1

Gates + int numGates + int \* gateCounters - int selectedGate +
Gates(std::vector \< int \> pins, int numGates) + \~Gates() + void
begin() + void setState(int gateIndex, bool state) + bool getState(int
gateIndex) + void turnOnGate(int index) + void turnOffGate(int index) +
void setALLGates(bool state) + void update(unsigned long currentTime) +
void trigger(int index, unsigned long currentTime) + void
setDivision(int index, int division) + int getDivision(int index) + void
setSelectedGate (int gate) + int getSelectedGate() + void
setGateOnDuration (int index, int duration)

Node2

[Gate - int gateOnDuration - unsigned long triggeredTime - int division
+ Gate(int pin=-1) + \~Gate() + void trigger(unsigned long currentTime)
+ void update(unsigned long currentTime) + void setDivision(int
divition) + int getDivision() + void setGateOnDuration (int
duration)](classGate.html " ")

Node2-\>Node1

-gateArray

Node3

[OutputPin + OutputPin(int pin=-1) + virtual void begin() + virtual void
setState (bool state) + virtual bool
getState()](classOutputPin.html " ")

Node3-\>Node2

Node4

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node4-\>Node3
