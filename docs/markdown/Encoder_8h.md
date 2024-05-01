Encoder.h Pin.h src/Encoder.cpp src/main.cpp include/Mode0.h
include/Mode1.h include/Mode2.h include/ModeSelector.h include/Encoder.h
Pin.h src/Mode1.cpp src/ModeSelector.cpp src/Mode0.cpp include/Mode0.h
include/ModeSelector.h src/Mode2.cpp include/Mode1.h src/MIDIHandler.cpp
src/main.cpp include/Encoder.h include/Mode2.h src/EurorackClock.cpp
src/Encoder.cpp Encoder

\#ifndefENCODER\_H \#defineENCODER\_H \#include\"Pin.h\" classEncoder{
public: Encoder(intencCLK,intencDT,intencButton);
enumDirection{NONE,CW,CCW}; enumButtonState{OPEN,PRESSED}; voidbegin();
DirectionreadEncoder(); ButtonStatereadButton();
inthandleEncoderDirection(intcurrentValue,intmaxValue,Directiondirection);
boolisButtonLongPressed(); boolisButtonDoublePressed();
boolisButtonSinglePressed(); intreadSpeed(); private: InputPinencCLK;
InputPinencDT; InputPinencButton; intprevStateCLK;
ButtonStatebuttonState; unsignedlonglastButtonPress; intpressCount;
unsignedlonglastTurnTime; intspeed;
staticconstunsignedlongDOUBLE\_PRESS\_INTERVAL=500;//ms
staticconstunsignedlongLONG\_PRESS\_INTERVAL=1000;//ms };
\#endif//ENCODER\_H
