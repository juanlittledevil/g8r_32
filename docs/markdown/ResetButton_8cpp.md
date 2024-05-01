ResetButton.cpp ResetButton.h src/ResetButton.cpp Debug.h Pin.h vector
ResetButton.h Arduino.h Constants.h

//ResetButton.cpp \#include\"ResetButton.h\"
ResetButton::ResetButton(intpin) :pin(pin), resetButton(pin,false,true),
buttonState(OPEN), lastButtonPress(0), pressCount(0){
//Initializationcode } boolResetButton::begin(){
//TODO:ThereappearstobeabugwitheithermyobjectinitializationortheInputPinclass.
//IfwetryandconfigurepinModeheretheapphangs.Butifwecallitdirectlyfromthe
//main.setup()functionitworksfine.Isuspectithastodowithorderofinitialization.
//TheweirdestpartisthattheEncoderclassworksfinewiththesameinitializationpattern.
//Also,ifweadda\'Serial.println(\"Hello,world!\")\'statementafterthepinMode()call,it
//worksfine.IsuspectithastodowiththeSerialobjectbeinginitializedandcausinga
//delay.I\'llneedtoinvestigatethisfurther.
//Fornow,we\'llleavethisemptyandcallpinModefromthemainsetupfunction.
//pinMode(pin,INPUT\_PULLDOWN); //Serial.println(\"Hello,world!\"); }
ResetButton::ButtonStateResetButton::readButton(){
//Codetoreadbuttonstate
staticunsignedlonglastDebounceTime=0;//thelasttimethebuttonpinwastoggled
staticButtonStatelastButtonState=OPEN;//thelastbuttonstate
staticconstintdebounceDelay=40;//debouncetimeinmilliseconds
ButtonStatereading=(resetButton.getState()==HIGH)?PRESSED:OPEN;
//Ifthebuttonstatehaschanged,resetthedebouncingtimer
if(reading!=lastButtonState){ lastDebounceTime=millis(); }
if((millis()-lastDebounceTime)\>debounceDelay){
//Ifthebuttonstatehaschangedandthedebounceperiodhaspassed,updatethebuttonstate
if(reading!=buttonState){ buttonState=reading; if(buttonState==PRESSED){
unsignedlongnow=millis();
if(now-lastButtonPress\<DOUBLE\_PRESS\_INTERVAL){ pressCount++; }else{
pressCount=1; } lastButtonPress=now; } } } lastButtonState=reading;
returnbuttonState; } boolResetButton::isButtonLongPressed(){
returnbuttonState==PRESSED&&millis()-lastButtonPress\>LONG\_PRESS\_INTERVAL;
} boolResetButton::isButtonDoublePressed(){ returnpressCount\>=2; }
boolResetButton::isButtonSinglePressed(){
if(pressCount==1&&millis()-lastButtonPress\>=DOUBLE\_PRESS\_INTERVAL){
pressCount=0; returntrue; } returnfalse; }
