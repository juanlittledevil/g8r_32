LEDController.h LEDs.h src/LEDController.cpp src/main.cpp
include/Mode0.h include/Mode1.h include/Mode2.h include/ModeSelector.h
include/LEDController.h LED.h Pin.h vector LEDs.h src/Mode1.cpp
src/ModeSelector.cpp src/Mode0.cpp include/Mode0.h
include/ModeSelector.h src/Mode2.cpp include/Mode1.h
include/LEDController.h src/MIDIHandler.cpp src/main.cpp
src/LEDController.cpp include/Mode2.h src/EurorackClock.cpp
LEDController

\#ifndefLED\_CONTROLLER\_H \#defineLED\_CONTROLLER\_H
\#include\"LEDs.h\" classLEDController{ public:
LEDController(LEDs&leds); voidturnAllOn(); voidturnAllOff();
voidblinkSlow(intledIndex); voidblinkFast(intledIndex);
voidblinkFaster(intledIndex); voidstopBlinking(intledIndex);
voidstopAllBlinking(); voidresetInverted();
voidresetInverted(intledIndex); intgetNumLeds(); voidupdate();
voidclearAndResetLEDs(); voidclearLEDs(); voidupdateBlinking();
voidsetState(intledIndex,boolstate); private: LEDs&leds; intnumLeds; };
\#endif//LED\_CONTROLLER\_H
