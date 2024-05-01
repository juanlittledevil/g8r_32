Gate.h Pin.h Constants.h src/Gate.cpp include/Gates.h Pin.h vector
Constants.h include/Gate.h src/Mode1.cpp src/Mode0.cpp include/Mode0.h
include/Gates.h src/Gates.cpp src/Mode2.cpp include/Mode1.h
src/MIDIHandler.cpp src/main.cpp include/Mode2.h include/EurorackClock.h
src/EurorackClock.cpp include/Gate.h src/Gate.cpp include/MIDIHandler.h
Gate

\#ifndefGATE\_H \#defineGATE\_H \#include\"Pin.h\"
\#include\"Constants.h\" classGate:publicOutputPin{ public:
Gate(intpin=-1);//Defaultpinsetto-1 \~Gate();//Destructordeclaration
voidtrigger(unsignedlongcurrentTime);
voidupdate(unsignedlongcurrentTime); voidsetDivision(intdivition);
intgetDivision(); voidsetGateOnDuration(intduration); private:
intgateOnDuration=10;//DurationinmillisecondsthattheLEDshouldstayon
unsignedlongtriggeredTime=0; intdivision=internalPPQN; }; \#endif
