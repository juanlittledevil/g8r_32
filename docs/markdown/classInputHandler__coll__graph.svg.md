InputHandler

Node1

InputHandler + InputHandler(int cvAPin, int cvBPin) + void begin() + int
readCVA() + int readCVB()

Node2

[AnalogInputPin + AnalogInputPin(int pin) + void begin() + int
read()](classAnalogInputPin.html " ")

Node2-\>Node1

-cvA -cvB

Node3

[Pin \# int pin \# bool state + Pin(int pin=-1) +
\~Pin()](classPin.html " ")

Node3-\>Node2
