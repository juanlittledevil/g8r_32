Debug.h Arduino.h src/Debug.cpp src/Encoder.cpp src/EurorackClock.cpp
src/Gate.cpp src/Gates.cpp src/InputHandler.cpp src/LED.cpp src/LEDs.cpp
src/main.cpp src/MIDIHandler.cpp src/Mode0.cpp src/Mode1.cpp
src/Mode2.cpp src/ModeSelector.cpp src/Pin.cpp src/SPDTSwitch.cpp
include/ResetButton.h include/Debug.h Arduino.h src/Mode1.cpp
src/ModeSelector.cpp src/Mode0.cpp include/Mode0.h
include/ModeSelector.h src/Pin.cpp src/Gates.cpp src/Mode2.cpp
include/Mode1.h src/SPDTSwitch.cpp src/ResetButton.cpp
src/MIDIHandler.cpp src/main.cpp include/Debug.h include/Mode2.h
include/ResetButton.h src/EurorackClock.cpp src/LED.cpp src/Encoder.cpp
src/InputHandler.cpp src/LEDs.cpp src/Debug.cpp src/Gate.cpp Debug

\#ifndefDEBUG\_H \#defineDEBUG\_H \#include\<Arduino.h\> classDebug{
public:
staticvoidprint(constchar\*file,intline,constchar\*func,constString&message);
staticboolisEnabled; }; \#endif
