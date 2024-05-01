LED.h Pin.h src/LED.cpp include/EurorackClock.h include/LEDs.h
include/LED.h Pin.h src/Mode1.cpp src/ModeSelector.cpp src/Mode0.cpp
include/Mode0.h include/ModeSelector.h include/Gates.h src/Gates.cpp
src/Mode2.cpp include/Mode1.h include/LEDController.h include/LED.h
src/MIDIHandler.cpp src/main.cpp src/LEDController.cpp include/Mode2.h
include/EurorackClock.h include/LEDs.h src/EurorackClock.cpp src/LED.cpp
src/LEDs.cpp include/MIDIHandler.h LED

\#ifndefLED\_H \#defineLED\_H \#include\"Pin.h\"
classLED:publicOutputPin{ public: LED(intpin=-1);//Defaultpinsetto-1
\~LED();//Destructordeclaration voidstartBlinking(unsignedlonginterval);
voidstopBlinking(); voidupdateBlinking();
voidsetIntensity(intintensity);
voidtrigger(unsignedlongcurrentTime,boolinverted=false);
voidupdate(unsignedlongcurrentTime); voidresetIvernted();
voidsetLedOnDuration(intduration); private: unsignedlongblinkStartTime;
unsignedlongblinkInterval; intintensity=255; boolisBlinking;
intledOnDuration=25;//DurationinmillisecondsthattheLEDshouldstayon
intinvertedLedOnDuration=40;//DurationinmillisecondsthattheLEDshouldstayon
unsignedlongtriggeredTime=0; boolinverted=false; }; \#endif
