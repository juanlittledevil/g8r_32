Mode2.cpp Mode2.h Debug.h Arduino.h MIDI.h Gates.h Mode.h src/Mode2.cpp
LEDController.h HardwareTimer.h LED.h Encoder.h Debug.h InputHandler.h
Pin.h vector Mode2.h EurorackClock.h ResetButton.h LEDs.h Arduino.h
Constants.h Gate.h MIDIHandler.h DEBUG\_PRINT message { \\
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message));
\\ Serial.flush(); \\ }

//Mode2.cpp \#include\"Mode2.h\" \#include\"Debug.h\"
\#include\<Arduino.h\> \#defineDEBUG\_PRINT(message){\\
Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message));\\
Serial.flush();\\ } Mode2::Mode2(Encoder&encoder,
InputHandler&inputHandler, Gates&gates, LEDController&ledController,
MIDIHandler&midiHandler, ResetButton&resetButton) :encoder(encoder),
inputHandler(inputHandler), gates(gates), ledController(ledController),
midiHandler(midiHandler), resetButton(resetButton){ }
voidMode2::setup(){ //Initializationcodehereifneeded
midiHandler.setMode(2); numLeds=ledController.getNumLeds(); }
voidMode2::teardown(){ //Cleanupcodehereifneeded
ledController.clearAndResetLEDs(); } voidMode2::update(){
//Updatecodehere midiHandler.handleMidiMessage(); }
voidMode2::handleSinglePress(){ //Handlesinglepress }
voidMode2::handleDoublePress(){ //Handledoublepress }
voidMode2::handleLongPress(){ //Handlelongpress }
voidMode2::handlePressReleased(){ //Handlepressreleased }
voidMode2::handleSelectionStates(){ //Handleselectionstates }
voidMode2::handleResetSinglePress(){ //Handleresetsinglepress }
voidMode2::handleResetDoublePress(){ //Handleresetdoublepress }
voidMode2::handleResetLongPress(){ //Handleresetlongpress }
voidMode2::handleResetPressReleased(){ //Handleresetpressreleased }
