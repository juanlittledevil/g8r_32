Gates.h Arduino.h Gate.h LEDs.h vector src/Gates.cpp src/main.cpp
include/EurorackClock.h include/MIDIHandler.h include/Mode0.h
include/Mode1.h include/Mode2.h include/Gates.h LED.h Pin.h vector
LEDs.h Arduino.h Constants.h Gate.h src/Mode1.cpp src/Mode0.cpp
include/Mode0.h include/Gates.h src/Gates.cpp src/Mode2.cpp
include/Mode1.h src/MIDIHandler.cpp src/main.cpp include/Mode2.h
include/EurorackClock.h src/EurorackClock.cpp include/MIDIHandler.h
Gates

//Gates.h \#ifndefGATES\_H \#defineGATES\_H \#include\<Arduino.h\>
\#include\"Gate.h\" \#include\"LEDs.h\" \#include\<vector\> classGates{
public: Gates(std::vector\<int\>pins,intnumGates); \~Gates();
voidbegin(); voidsetState(intgateIndex,boolstate);
boolgetState(intgateIndex); voidturnOnGate(intindex);
voidturnOffGate(intindex); voidsetALLGates(boolstate);
voidupdate(unsignedlongcurrentTime);
voidtrigger(intindex,unsignedlongcurrentTime);
voidsetDivision(intindex,intdivision); intgetDivision(intindex);
intnumGates; int\*gateCounters; voidsetSelectedGate(intgate);
intgetSelectedGate(); voidsetGateOnDuration(intindex,intduration);
private: Gate\*gateArray; intselectedGate; }; \#endif
