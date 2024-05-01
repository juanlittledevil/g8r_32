Mode1.h Mode.h Encoder.h Gates.h LEDController.h MIDIHandler.h
Constants.h ResetButton.h InputHandler.h src/main.cpp src/Mode1.cpp
MIDI.h Gates.h Mode.h include/Mode1.h LEDController.h HardwareTimer.h
LED.h Encoder.h Debug.h InputHandler.h Pin.h vector EurorackClock.h
ResetButton.h LEDs.h Arduino.h Constants.h Gate.h MIDIHandler.h
src/Mode1.cpp include/Mode1.h src/main.cpp Mode1

\#ifndefMODE1\_H \#defineMODE1\_H \#include\"Mode.h\"
\#include\"Encoder.h\" \#include\"Gates.h\" \#include\"LEDController.h\"
\#include\"MIDIHandler.h\" \#include\"Constants.h\"
\#include\"ResetButton.h\" \#include\"InputHandler.h\"
classMode1:publicMode{ public: Mode1(Encoder&encoder,
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
voidhandleChannelSelection(); voidhandleChannelSelectionPress();
LEDController&ledController; InputHandler&inputHandler; Encoder&encoder;
ResetButton&resetButton; Gates&gates; MIDIHandler&midiHandler;
booldoublePressHandled=false; boolinChannelSelection=false;
boolisInSelection=false; boolsinglePressHandled=false;
intselectedChannel=9;//MIDIchannelsare0-15
intconfirmedChannel=9;//MIDIchannelsare0-15
intpreviousChannel=-1;//usedwithblinkinginchannelselection
constintNUM\_MIDI\_CHANNELS=16; intnumLeds=8; }; \#endif//MODE1\_H
