ResetButton.h Pin.h Arduino.h Debug.h Constants.h src/main.cpp
src/ResetButton.cpp include/Mode0.h include/Mode1.h include/Mode2.h
include/ModeSelector.h Debug.h Pin.h vector include/ResetButton.h
Arduino.h Constants.h src/Mode1.cpp src/ModeSelector.cpp src/Mode0.cpp
include/Mode0.h include/ModeSelector.h src/Mode2.cpp include/Mode1.h
src/ResetButton.cpp src/MIDIHandler.cpp src/main.cpp include/Mode2.h
include/ResetButton.h src/EurorackClock.cpp ResetButton

\#ifndefRESETBUTTON\_H \#defineRESETBUTTON\_H \#include\"Pin.h\"
\#include\<Arduino.h\> \#include\"Debug.h\" \#include\"Constants.h\"
classResetButton{ public: ResetButton(intpin); boolbegin();
enumButtonState{OPEN,PRESSED}; ButtonStatereadButton();
boolisButtonLongPressed(); boolisButtonDoublePressed();
boolisButtonSinglePressed(); private: intpin; InputPinresetButton;
ButtonStatebuttonState; unsignedlonglastButtonPress; intpressCount;
staticconstunsignedlongDOUBLE\_PRESS\_INTERVAL=500;//ms
staticconstunsignedlongLONG\_PRESS\_INTERVAL=1000;//ms };
\#endif//RESETBUTTON\_H
