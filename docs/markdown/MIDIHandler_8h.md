MIDIHandler.h MIDI.h EurorackClock.h Gates.h LEDs.h src/main.cpp
src/MIDIHandler.cpp include/Mode0.h include/Mode1.h include/Mode2.h
MIDI.h Gates.h HardwareTimer.h LED.h Pin.h vector EurorackClock.h LEDs.h
Arduino.h Constants.h Gate.h include/MIDIHandler.h src/Mode1.cpp
src/Mode0.cpp include/Mode0.h src/Mode2.cpp include/Mode1.h
src/MIDIHandler.cpp src/main.cpp include/Mode2.h include/MIDIHandler.h
MIDIHandler

\#ifndefMIDIHANDLER\_H \#defineMIDIHANDLER\_H \#include\<MIDI.h\>
\#include\"EurorackClock.h\" \#include\"Gates.h\" \#include\"LEDs.h\"
classMIDIHandler{ public:
MIDIHandler(HardwareSerial&serial,EurorackClock&clock,Gates&gates,LEDs&leds);
voidbegin(); voidhandleMidiMessage(); voidsetChannel(bytechannel);
voidsetMode(intmode); //DeclarestaticfunctionstohandleMIDImessages
staticvoidhandleClock(); staticvoidhandleStart();
staticvoidhandleStop(); staticvoidhandleContinue();
staticvoidhandleMode0NoteOn(bytechannel,bytepitch,bytevelocity);
staticvoidhandleMode0NoteOff(bytechannel,bytepitch,bytevelocity);
staticvoidhandleMode1NoteOn(bytechannel,bytepitch,bytevelocity);
staticvoidhandleMode1NoteOff(bytechannel,bytepitch,bytevelocity);
staticvoidhandleMode2NoteOn(bytechannel,bytepitch,bytevelocity);
staticvoidhandleMode2NoteOff(bytechannel,bytepitch,bytevelocity);
private: //DeclareastaticinstanceoftheMIDIHandlerclass
staticMIDIHandler\*instance;
midi::SerialMIDI\<HardwareSerial\>midiSerial;
midi::MidiInterface\<midi::SerialMIDI\<HardwareSerial\>\>midi;
EurorackClock&clock; bytechannel=10; Gates&gates; LEDs&leds;
staticbyteconfirmedChannel; }; \#endif//MIDIHANDLER\_H
