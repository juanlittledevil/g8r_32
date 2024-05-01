ModeSelector.h vector LEDController.h Encoder.h Mode.h ResetButton.h
src/EurorackClock.cpp src/main.cpp src/MIDIHandler.cpp
src/ModeSelector.cpp include/ModeSelector.h Mode.h LEDController.h LED.h
Encoder.h Debug.h Pin.h vector ResetButton.h LEDs.h Arduino.h
Constants.h src/ModeSelector.cpp include/ModeSelector.h
src/MIDIHandler.cpp src/main.cpp src/EurorackClock.cpp ModeSelector

\#ifndefMODE\_SELECTOR\_H \#defineMODE\_SELECTOR\_H \#include\<vector\>
\#include\"LEDController.h\"//IncludetheLEDControllerheader
\#include\"Encoder.h\" \#include\"Mode.h\" \#include\"ResetButton.h\"
//ModeSelectorSingleton. classModeSelector{ public:
staticModeSelector&getInstance(); intgetMode()const;
voidsetMode(intnewMode); voidhandleLongPress();
voidhandleEncoderRotation(); voidhandleModeSelectionPress();
voidhandleButtonPress();
voidsetLedController(LEDController&ledController);
voidsetEncoder(Encoder&encoder); voidsetCurrentMode(Mode\*&currentMode);
boolisInModeSelection(); Mode\*getCurrentMode();
voidaddMode(Mode\*mode); voidupdate(); private:
ModeSelector();//Constructorisprivate
ModeSelector(ModeSelectorconst&);//Don\'tImplement
voidoperator=(ModeSelectorconst&);//Don\'timplement
std::vector\<Mode\*\>modes; Mode\*nullMode=nullptr; Mode\*&currentMode;
intmode; intinModeSelection=false;
LEDController\*ledController;//AddapointertoLEDController
Encoder\*encoder;//AddapointertoEncoder ResetButton\*resetButton;
boolisInSelection; boolinChannelSelection; boolsinglePressHandled;
booldoublePressHandled; boollongPressHandled;
size\_ttotalModes=modes.size(); intpreviousMode=-1; intnumLeds; };
\#endif//MODE\_SELECTOR\_H
