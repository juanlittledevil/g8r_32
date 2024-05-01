Mode1.cpp Mode1.h Debug.h Arduino.h src/Mode1.cpp MIDI.h Gates.h Mode.h
Mode1.h LEDController.h HardwareTimer.h LED.h Encoder.h Debug.h
InputHandler.h Pin.h vector EurorackClock.h ResetButton.h LEDs.h
Arduino.h Constants.h Gate.h MIDIHandler.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

//Mode1.cpp \#include\"Mode1.h\" \#include\"Debug.h\"
\#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
Mode1::Mode1(Encoder&encoder, InputHandler&inputHandler, Gates&gates,
LEDController&ledController, MIDIHandler&midiHandler,
ResetButton&resetButton) :encoder(encoder), inputHandler(inputHandler),
gates(gates), ledController(ledController), midiHandler(midiHandler),
resetButton(resetButton){ }
//SetupandteardownmethodsaremeanttobecalledwhenModeselector
//switchesmodes.Thisiswhereyoucanputcodethatshouldonlyrun
//oncewhenthemodeisswitchedto. voidMode1::setup(){
midiHandler.setMode(1); numLeds=ledController.getNumLeds(); }
voidMode1::teardown(){ //Teardowncodegoeshere\...
ledController.clearAndResetLEDs(); }
//Theupdatemethodismeanttobecalledeveryloopiteration.Thisis
//whereyoucanputcodethatshouldruneveryloopiteration.
voidMode1::update(){ //HandleMIDImessages
midiHandler.handleMidiMessage(); //Handlebuttonpresses
handleButton(encoder.readButton()); //Handleselectionstates
handleSelectionStates(); } voidMode1::handleSelectionStates(){
if(inChannelSelection){ handleChannelSelection(); }else{
midiHandler.setChannel(confirmedChannel); } }
voidMode1::handleChannelSelectionPress(){ if(!singlePressHandled){
//Exitchannelselectionstateonbuttonpress if(inChannelSelection){
confirmedChannel=selectedChannel;
previousChannel=-1;//Resetthepreviouschannel ledController.clearLEDs();
gates.setALLGates(false);//Makesurewedon\'tleaveannotesonwhenchangingchannels.
inChannelSelection=false; isInSelection=false;
//Enterchannelselectionstateonbuttonpress }else{
inChannelSelection=true; isInSelection=true;
intled\_index=selectedChannel%numLeds;
//CalculatecurrentpageandLEDindexwithinthepage
intcurrent\_page=selectedChannel/numLeds; if(selectedChannel\<8){
ledController.blinkFast(led\_index);//BlinktheLEDcorrespondingtotheselectedchannel
}else{
ledController.blinkFaster(led\_index);//BlinktheLEDcorrespondingtotheselectedchannel
} } singlePressHandled=true; } } voidMode1::handleChannelSelection(){
Encoder::Directiondirection=encoder.readEncoder();
selectedChannel=encoder.handleEncoderDirection(selectedChannel,NUM\_MIDI\_CHANNELS,direction);
//CalculatecurrentpageandLEDindexwithinthepage
intcurrent\_page=selectedChannel/numLeds;
intled\_index=selectedChannel%numLeds;
if(selectedChannel!=previousChannel){
for(inti=0;i\<numLeds;i++){//LoopoverLEDs,notchannels if(i==led\_index){
if(selectedChannel\<8){
ledController.blinkFast(led\_index);//BlinktheLEDcorrespondingtotheselectedchannel
}else{
ledController.blinkFaster(led\_index);//BlinktheLEDcorrespondingtotheselectedchannel
} }else{ ledController.stopBlinking(i); ledController.setState(i,false);
} } previousChannel=selectedChannel;//Updatethepreviousmode } }
voidMode1::handleButton(Encoder::ButtonStatebuttonState){
//Readtheencoderandhandlebuttonpresses encoder.readButton();
if(encoder.isButtonLongPressed()){ this-\>handleLongPress();
}elseif(encoder.isButtonDoublePressed()&&!doublePressHandled){
this-\>handleDoublePress(); doublePressHandled=true;
}elseif(encoder.readButton()==Encoder::PRESSED&&!singlePressHandled){
this-\>handleSinglePress(); singlePressHandled=true;
}elseif(encoder.readButton()==Encoder::OPEN){
this-\>handlePressReleased(); doublePressHandled=false;
singlePressHandled=false; } } voidMode1::handleLongPress(){
//modeSelector.handleLongPress(); } voidMode1::handleDoublePress(){
//Mode1specificdoublepresshandling } voidMode1::handleSinglePress(){
//Mode1specificsinglepresshandling handleChannelSelectionPress(); }
voidMode1::handlePressReleased(){ //Mode1specificpressreleasedhandling }
voidMode1::handleResetSinglePress(){ }
voidMode1::handleResetDoublePress(){ }
voidMode1::handleResetLongPress(){ }
voidMode1::handleResetPressReleased(){ }
