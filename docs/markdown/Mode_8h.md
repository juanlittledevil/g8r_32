Mode.h include/Mode0.h include/Mode1.h include/Mode2.h
include/ModeSelector.h src/Mode1.cpp src/ModeSelector.cpp src/Mode0.cpp
include/Mode0.h include/ModeSelector.h include/Mode.h src/Mode2.cpp
include/Mode1.h src/MIDIHandler.cpp src/main.cpp include/Mode2.h
src/EurorackClock.cpp Mode

\#ifndefMODE\_H \#defineMODE\_H classMode{ public:
virtualvoidhandleSinglePress()=0; virtualvoidhandleDoublePress()=0;
virtualvoidhandleLongPress()=0; virtualvoidhandlePressReleased()=0;
virtualvoidhandleSelectionStates()=0;
virtualvoidhandleResetSinglePress()=0;
virtualvoidhandleResetDoublePress()=0;
virtualvoidhandleResetLongPress()=0;
virtualvoidhandleResetPressReleased()=0; virtualvoidsetup()=0;
virtualvoidteardown()=0; virtualvoidupdate()=0; }; \#endif//MODE\_H
