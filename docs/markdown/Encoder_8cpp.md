Encoder.cpp Encoder.h Debug.h Arduino.h Encoder.h Debug.h Pin.h
Arduino.h src/Encoder.cpp DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"Encoder.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
Encoder::Encoder(intclkPin,intdtPin,intbuttonPin)
:encCLK(clkPin,true,false), encDT(dtPin,true,false),
encButton(buttonPin,true,false), prevStateCLK(encCLK.getState()),
buttonState(OPEN), lastButtonPress(0), pressCount(0), lastTurnTime(0),
speed(1) { //Nothingtodohere } voidEncoder::begin(){ encCLK.begin();
encDT.begin(); encButton.begin(); }
Encoder::DirectionEncoder::readEncoder(){ staticintcounter=0;
constintstepsPerDetent=2;//Changethistomatchyourencoder\'sresolution
constintmaxInterval=300;//ms
constintmaxIncrement=25;//Changethistomatchyourdesiredincrement
intcurStateCLK=encCLK.getState(); if(curStateCLK!=prevStateCLK){
prevStateCLK=curStateCLK; if(encDT.getState()!=curStateCLK){ counter++;
if(counter\>=stepsPerDetent){ counter=0;
unsignedlongcurrentTime=millis();
unsignedlongtimeDifference=currentTime-lastTurnTime;
lastTurnTime=currentTime;
speed=(timeDifference\<maxInterval)?maxIncrement:1;//Adjustthisvalueasneeded
returnCCW; } }else{ counter++; if(counter\>=stepsPerDetent){ counter=0;
unsignedlongcurrentTime=millis();
unsignedlongtimeDifference=currentTime-lastTurnTime;
lastTurnTime=currentTime;
speed=(timeDifference\<maxInterval)?maxIncrement:1;//Andhere returnCW; }
} } returnNONE; } Encoder::ButtonStateEncoder::readButton(){
staticunsignedlonglastDebounceTime=0;//thelasttimethebuttonpinwastoggled
staticButtonStatelastButtonState=OPEN;//thelastbuttonstate
staticconstintdebounceDelay=40;//debouncetimeinmilliseconds
ButtonStatereading=(encButton.getState()==LOW)?PRESSED:OPEN;
//Ifthebuttonstatehaschanged,resetthedebouncingtimer
if(reading!=lastButtonState){ lastDebounceTime=millis(); }
if((millis()-lastDebounceTime)\>debounceDelay){
//Ifthebuttonstatehaschangedandthedebounceperiodhaspassed,updatethebuttonstate
if(reading!=buttonState){ buttonState=reading; if(buttonState==PRESSED){
unsignedlongnow=millis();
if(now-lastButtonPress\<DOUBLE\_PRESS\_INTERVAL){ pressCount++; }else{
pressCount=1; } lastButtonPress=now; } } } lastButtonState=reading;
returnbuttonState; } intEncoder::readSpeed(){ returnspeed; }
boolEncoder::isButtonLongPressed(){
returnbuttonState==PRESSED&&millis()-lastButtonPress\>LONG\_PRESS\_INTERVAL;
} boolEncoder::isButtonDoublePressed(){ returnpressCount\>=2; }
boolEncoder::isButtonSinglePressed(){
if(pressCount==1&&millis()-lastButtonPress\>=DOUBLE\_PRESS\_INTERVAL){
pressCount=0; returntrue; } returnfalse; }
intEncoder::handleEncoderDirection(intcurrentValue,intmaxValue,Directiondirection){
if(direction==Encoder::CW){ if(currentValue\<maxValue-1){
returncurrentValue+1; } }elseif(direction==Encoder::CCW){
if(currentValue\>0){ returncurrentValue-1; } } returncurrentValue; }
