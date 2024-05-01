LEDs.h LED.h vector src/LEDs.cpp src/main.cpp include/EurorackClock.h
include/Gates.h include/LEDController.h include/MIDIHandler.h LED.h
Pin.h vector include/LEDs.h src/Mode1.cpp src/ModeSelector.cpp
src/Mode0.cpp include/Mode0.h include/ModeSelector.h include/Gates.h
src/Gates.cpp src/Mode2.cpp include/Mode1.h include/LEDController.h
src/MIDIHandler.cpp src/main.cpp src/LEDController.cpp include/Mode2.h
include/EurorackClock.h include/LEDs.h src/EurorackClock.cpp
src/LEDs.cpp include/MIDIHandler.h LEDs

\#ifndefLEDS\_H \#defineLEDS\_H \#include\"LED.h\" \#include\<vector\>
classLEDs{ public:
LEDs(std::vector\<int\>pins,intnumLeds);//Constructordeclaration
\~LEDs();//Destructordeclaration voidbegin();
voidsetState(intindex,boolstate);
voidsetState(intindex,boolstate,intintensity); boolgetState(intindex);
voidsetAllLeds(boolstate); //voidblinkFast(intindex);
//voidblinkFast2(intindex); //voidblinkSlow(intindex);
voidstartBlinking(intindex,unsignedlonginterval);
voidstopBlinking(intindex); voidstopAllBlinking(); voidupdateBlinking();
voidsetIntensity(intindex,intintensity);
voidsetAllintensity(intintensity); voidupdate(unsignedlongcurrentTime);
voidtrigger(intindex,unsignedlongcurrentTime,boolinverted=false);
voidresetInverted(intindex); intnumLeds;//NumberofLEDs private:
LED\*leds;//PointertoanarrayofLEDobjects }; \#endif
