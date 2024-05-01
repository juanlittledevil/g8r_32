Mode2.h Mode.h LEDController.h Encoder.h Gates.h MIDIHandler.h
Constants.h InputHandler.h ResetButton.h src/main.cpp src/Mode2.cpp
MIDI.h Gates.h Mode.h LEDController.h HardwareTimer.h LED.h Encoder.h
Debug.h InputHandler.h Pin.h vector include/Mode2.h EurorackClock.h
ResetButton.h LEDs.h Arduino.h Constants.h Gate.h MIDIHandler.h
src/Mode2.cpp src/main.cpp include/Mode2.h Mode2

\#ifndefMODE2\_H \#defineMODE2\_H \#include\"Mode.h\"
\#include\"LEDController.h\" \#include\"Encoder.h\" \#include\"Gates.h\"
\#include\"MIDIHandler.h\" \#include\"Constants.h\"
\#include\"InputHandler.h\" \#include\"ResetButton.h\"
classMode2:publicMode{ public: Mode2(Encoder&encoder,
InputHandler&inputHandler, Gates&gates, LEDController&ledController,
MIDIHandler&midiHandler, ResetButton&resetButton);
voidhandleSinglePress()override; voidhandleDoublePress()override;
voidhandleLongPress()override; voidhandlePressReleased()override;
voidhandleSelectionStates()override;
voidhandleResetSinglePress()override;
voidhandleResetDoublePress()override;
voidhandleResetLongPress()override;
voidhandleResetPressReleased()override; voidsetup()override;
voidteardown()override; voidupdate()override; private:
voidhandleEncoder(); voidhandleButton(Encoder::ButtonStatebuttonState);
LEDController&ledController; InputHandler&inputHandler; Encoder&encoder;
ResetButton&resetButton; Gates&gates; MIDIHandler&midiHandler;
booldoublePressHandled=false; boolisInSelection=false;
boolsinglePressHandled=false; intnumLeds=8; }; \#endif//MODE2\_H
