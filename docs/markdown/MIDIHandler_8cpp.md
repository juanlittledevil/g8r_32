MIDIHandler.cpp MIDIHandler.h Debug.h Arduino.h ModeSelector.h MIDI.h
ModeSelector.h Gates.h Mode.h LEDController.h HardwareTimer.h LED.h
src/MIDIHandler.cpp Encoder.h Debug.h Pin.h vector EurorackClock.h
ResetButton.h LEDs.h Arduino.h Constants.h Gate.h MIDIHandler.h
DEBUG\_PRINT message { \\ Debug::print(\_\_FILE\_\_, \_\_LINE\_\_,
\_\_func\_\_, String(message)); \\ Serial.flush(); \\ } bool bool
isInSelection isInSelection

\#include\"MIDIHandler.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#include\"ModeSelector.h\" \#defineDEBUG\_PRINT(message){\\
Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message));\\
Serial.flush();\\ } externboolisInSelection;
//InitializethestaticinstanceoftheMIDIHandlerclass
MIDIHandler\*MIDIHandler::instance=nullptr;
//ConstructorfortheMIDIHandlerclass
MIDIHandler::MIDIHandler(HardwareSerial&serial,EurorackClock&clock,Gates&gates,LEDs&leds)
:midiSerial(serial),midi(midiSerial),clock(clock),gates(gates),leds(leds){
instance=this; } //BegintheMIDIHandler voidMIDIHandler::begin(){
midi.begin(MIDI\_CHANNEL\_OMNI); midi.setHandleClock(handleClock);
midi.setHandleStart(nullptr); midi.setHandleStop(nullptr);
midi.setHandleContinue(handleContinue);
midi.setHandleNoteOn(handleMode0NoteOn);
midi.setHandleNoteOff(handleMode0NoteOff); } //InMIDIHandler.cpp
byteMIDIHandler::confirmedChannel=9;//DefaultMIDIchannel0-15
//HandleincomingMIDImessages voidMIDIHandler::handleMidiMessage(){
unsignedlongcurrentTime=millis(); midi.read();
gates.update(currentTime); leds.update(currentTime); }
//StaticfunctiontohandleMIDIclockmessages
voidMIDIHandler::handleClock(){ instance-\>clock.handleMidiClock(); }
//StaticfunctiontohandleMIDIstartmessages
voidMIDIHandler::handleStart(){ instance-\>clock.start(); }
//StaticfunctiontohandleMIDIstopmessages voidMIDIHandler::handleStop(){
instance-\>clock.stop(); } //StaticfunctiontohandleMIDIcontinuemessages
voidMIDIHandler::handleContinue(){ instance-\>clock.start(); }
//StaticfunctiontohandleMIDInoteonmessages
voidMIDIHandler::handleMode0NoteOn(bytechannel,bytepitch,bytevelocity){
//don\'thandlenotesonmode0 } //StaticfunctiontohandleMIDInoteoffmessages
voidMIDIHandler::handleMode0NoteOff(bytechannel,bytepitch,bytevelocity){
//don\'thandlenotesonmode0 }
//StaticfunctiontohandleMIDInoteonmessagesformode1
voidMIDIHandler::handleMode1NoteOn(bytechannel,bytepitch,bytevelocity){
unsignedlongcurrentTime=millis(); intnote=pitch;
//adjustthenotenumbersoC2isthefirstnote
intgate=(note-3)%instance-\>gates.numGates;
if(channel==confirmedChannel){
instance-\>gates.trigger(gate,currentTime); if(!isInSelection){
instance-\>leds.trigger(gate,currentTime); } } }
//StaticfunctiontohandleMIDInoteoffmessagesformode1
voidMIDIHandler::handleMode1NoteOff(bytechannel,bytepitch,bytevelocity){
//Notusedinmode1,weonlyusetriggers\... }
//StaticfunctiontohandleMIDInoteonmessagesformode2
voidMIDIHandler::handleMode2NoteOn(bytechannel,bytepitch,bytevelocity){
if(channel\>=9&&channel\<=16){ unsignedlongcurrentTime=millis();
intgate=(channel-9)%instance-\>gates.numGates;
instance-\>gates.trigger(gate,currentTime); if(!isInSelection){
instance-\>leds.trigger(gate,currentTime); } } }
//StaticfunctiontohandleMIDInoteoffmessagesformode2
voidMIDIHandler::handleMode2NoteOff(bytechannel,bytepitch,bytevelocity){
//Unusedinmode2,weonlytriggernoteshere\... }
voidMIDIHandler::setMode(intmode){ instance-\>gates.setALLGates(false);
instance-\>leds.setAllLeds(false); if(mode==0){
midi.setHandleNoteOn(nullptr); midi.setHandleNoteOff(nullptr);
midi.setHandleStart(nullptr); midi.setHandleStop(nullptr);
midi.setHandleClock(handleClock); }elseif(mode==1){
midi.setHandleNoteOn(handleMode1NoteOn); midi.setHandleNoteOff(nullptr);
midi.setHandleClock(nullptr); midi.setHandleStart(nullptr);
midi.setHandleStop(nullptr); }elseif(mode==2){
midi.setHandleNoteOn(handleMode2NoteOn); midi.setHandleNoteOff(nullptr);
midi.setHandleClock(nullptr); midi.setHandleStart(nullptr);
midi.setHandleStop(nullptr); } }
voidMIDIHandler::setChannel(bytechannel){ confirmedChannel=channel+1; }
