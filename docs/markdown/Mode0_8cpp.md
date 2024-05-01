Mode0.cpp Mode0.h Debug.h Arduino.h MIDI.h src/Mode0.cpp Mode0.h Gates.h
Mode.h LEDController.h HardwareTimer.h LED.h Encoder.h Debug.h
InputHandler.h Pin.h vector EurorackClock.h ResetButton.h LEDs.h
Arduino.h Constants.h Gate.h MIDIHandler.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"Mode0.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
Mode0::Mode0(Encoder&encoder, InputHandler&inputHandler, Gates&gates,
LEDController&ledController, MIDIHandler&midiHandler,
ResetButton&resetButton, EurorackClock&clock) :encoder(encoder),
inputHandler(inputHandler), gates(gates), ledController(ledController),
midiHandler(midiHandler), resetButton(resetButton), clock(clock){
setDefaultDivisionIndex(); }
//SetupandteardownmethodsaremeanttobecalledwhenModeselector
//switchesmodes.Thisiswhereyoucanputcodethatshouldonlyrun
//oncewhenthemodeisswitchedto. voidMode0::setup(){ clock.start();
midiHandler.setMode(0); } voidMode0::teardown(){ clock.stop();
ledController.clearAndResetLEDs(); }
voidMode0::setDefaultDivisionIndex(){
for(inti=0;i\<musicalIntervalsSize;i++){
if(musicalIntervals\[i\]==internalPPQN){ divisionIndex=i; break; } } }
//Theupdatemethodismeanttobecalledeveryloopiteration.Thisis
//whereyoucanputcodethatshouldruneveryloopiteration.
voidMode0::update(){ //HandleMIDImessages
midiHandler.handleMidiMessage(); //Handlebuttonpresses
handleButton(encoder.readButton());
handleResetButton(resetButton.readButton()); handleCVInput();
//Handleselectionstates handleSelectionStates(); //Handleclocktick
clock.handleExternalClock(); clock.tick(); } voidMode0::handleCVInput(){
//HandleCVinput intcvA=inputHandler.readCVA();
intcvB=inputHandler.readCVB(); if(Debug::isEnabled){
DEBUG\_PRINT(\"CVA:\"+String(cvA)+\"CVB:\"+String(cvB)); } }
//Othermode-specificmethods //\... voidMode0::handleEncoder(){
Encoder::Directiondirection=encoder.readEncoder();
if(inDivisionSelection){ //Handledivisionselection
divisionIndex=encoder.handleEncoderDirection(divisionIndex,musicalIntervalsSize,direction);
intdivision=musicalIntervals\[divisionIndex\];
gates.setDivision(selectedGate,division); }else{ //Handlegateselection
selectedGate=encoder.handleEncoderDirection(selectedGate,gates.numGates,direction);
} gates.setSelectedGate(selectedGate); }
voidMode0::handleButton(Encoder::ButtonStatebuttonState){
//Readtheencoderandhandlebuttonpresses encoder.readButton();
if(encoder.isButtonLongPressed()){ this-\>handleLongPress();
}elseif(encoder.isButtonDoublePressed()){ this-\>handleDoublePress();
doublePressHandled=true;
//}elseif(encoder.readButton()==Encoder::PRESSED&&!singlePressHandled){
}elseif(encoder.isButtonSinglePressed()&&!singlePressHandled){
this-\>handleSinglePress(); singlePressHandled=true;
}elseif(encoder.readButton()==Encoder::OPEN){
this-\>handlePressReleased(); singlePressHandled=false;
doublePressHandled=false; } }
voidMode0::handleResetButton(ResetButton::ButtonStatebuttonState){
resetButton.readButton(); //Handleresetbuttonpresses
if(resetButton.isButtonLongPressed()){ this-\>handleResetLongPress();
}elseif(resetButton.isButtonDoublePressed()){
this-\>handleResetDoublePress(); doubleResetPressHandled=true;
}elseif(resetButton.readButton()==Encoder::PRESSED&&!singleResetPressHandled){
//}elseif(resetButton.isButtonSinglePressed()&&!singleResetPressHandled){
this-\>handleResetSinglePress(); singleResetPressHandled=true;
}elseif(resetButton.readButton()==ResetButton::OPEN){
this-\>handleResetPressReleased(); singleResetPressHandled=false;
doubleResetPressHandled=false; } } voidMode0::handleResetSinglePress(){
if(Debug::isEnabled){ DEBUG\_PRINT(\"Resetsinglepress\"); }
clock.reset(selectedGate); } voidMode0::handleResetDoublePress(){
if(!doubleResetPressHandled){ if(Debug::isEnabled){
DEBUG\_PRINT(\"Resetdoublepress\"); } clock.reset(); } }
voidMode0::handleResetLongPress(){ // }
voidMode0::handleResetPressReleased(){ } voidMode0::handleLongPress(){
//LongpressisusedbymodeSelector,sodon\'tusethathere. }
voidMode0::handleDoublePress(){ //Entertemposelectionmodeondoublepress
if(!doublePressHandled){ if(Debug::isEnabled){
DEBUG\_PRINT(\"Doublepress\"); } if(selectingTempo){
//Exittemposelectionmodeondoublepress selectingTempo=false; }else{
//Entertemposelectionmodeondoublepress selectingTempo=true; } } }
voidMode0::handleSinglePress(){ if(Debug::isEnabled){
DEBUG\_PRINT(\"Singlepress\"); } if(inDivisionSelection){
//Updatethedivisionfortheselectedgate
intdivision=musicalIntervals\[divisionIndex\];
gates.setDivision(selectedGate,division); }
//Togglebetweendivisionselectionandgateselection
inDivisionSelection=!inDivisionSelection; }
voidMode0::handlePressReleased(){ //Mode0specificpressreleasedhandling }
voidMode0::handleSelectionStates(){
//Mode0specificselectionstatehandling if(selectingTempo){
handleTempoSelection();
clock.toggleLedOnDuration(true);//ifselectingtempowewanttheLEDtobeonfor10ms
}else{ handleEncoder();
clock.toggleLedOnDuration(false);//ifnotselectingtempowewanttheLEDtobeonfor50ms
} } voidMode0::handleTempoSelection(){ //Handletemposelection
Encoder::Directiondirection=encoder.readEncoder();
inttempoIncrement=encoder.readSpeed(); intcurrentTempo=clock.getTempo();
if(direction==Encoder::CW){ if(externalTempo){
//Exitexternaltempomodeandincreasethetempo externalTempo=false;
if(Debug::isEnabled){ DEBUG\_PRINT(\"Externaltempomodedisabled\"); }
}elseif(currentTempo+tempoIncrement\<=maxTempo){
clock.setTempo(currentTempo+tempoIncrement,internalPPQN); }
}elseif(direction==Encoder::CCW){
if(currentTempo-tempoIncrement\<minTempo){
//Enterexternaltempomodewhenthetemporeachestheminimum
externalTempo=true; if(Debug::isEnabled){
DEBUG\_PRINT(\"Externaltempomodeenabled\"); } }else{
clock.setTempo(currentTempo-tempoIncrement,internalPPQN); } }
clock.setExternalTempo(externalTempo); }
