Mode0.h Mode.h Encoder.h Gates.h LEDController.h EurorackClock.h
MIDIHandler.h Constants.h ResetButton.h InputHandler.h vector
src/main.cpp src/Mode0.cpp MIDI.h include/Mode0.h Gates.h Mode.h
LEDController.h HardwareTimer.h LED.h Encoder.h Debug.h InputHandler.h
Pin.h vector EurorackClock.h ResetButton.h LEDs.h Arduino.h Constants.h
Gate.h MIDIHandler.h src/Mode0.cpp include/Mode0.h src/main.cpp Mode0

\#ifndefMODE0\_H \#defineMODE0\_H \#include\"Mode.h\"
\#include\"Encoder.h\" \#include\"Gates.h\" \#include\"LEDController.h\"
\#include\"EurorackClock.h\" \#include\"MIDIHandler.h\"
\#include\"Constants.h\" \#include\"ResetButton.h\"
\#include\"InputHandler.h\" \#include\<vector\> classMode0:publicMode{
public: Mode0(Encoder&encoder, InputHandler&inputHandler, Gates&gates,
LEDController&ledController, MIDIHandler&midiHandler,
ResetButton&resetButton, EurorackClock&clock);
voidhandleSinglePress()override; voidhandleDoublePress()override;
voidhandleLongPress()override; voidhandlePressReleased()override;
voidhandleSelectionStates()override;
voidhandleResetSinglePress()override;
voidhandleResetDoublePress()override;
voidhandleResetLongPress()override;
voidhandleResetPressReleased()override; voidsetup()override;
voidteardown()override; voidupdate()override;
voidsetDivisionPPQN(intppqn); voidsetDefaultDivisionIndex(); private:
voidhandleEncoder(); voidhandleButton(Encoder::ButtonStatebuttonState);
voidhandleResetButton(ResetButton::ButtonStatebuttonState);
voidhandleCVInput(); voidhandleTempoSelection();
LEDController&ledController; Encoder&encoder; ResetButton&resetButton;
Gates&gates; EurorackClock&clock; MIDIHandler&midiHandler;
InputHandler&inputHandler; boolinDivisionSelection=false;
boolexternalTempo=false; boolsinglePressHandled=false;
boolsingleResetPressHandled=false; inttempoIncrement=1;
constintminTempo=20; constintmaxTempo=340; intdivisionIndex=24;
intselectedGate=0; boolselectingTempo=false;
booldoublePressHandled=false; booldoubleResetPressHandled=false; };
\#endif//MODE0\_H
