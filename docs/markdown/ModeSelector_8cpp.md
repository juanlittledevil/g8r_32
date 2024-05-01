ModeSelector.cpp ModeSelector.h Arduino.h Debug.h src/ModeSelector.cpp
ModeSelector.h Mode.h LEDController.h LED.h Encoder.h Debug.h Pin.h
vector ResetButton.h LEDs.h Arduino.h Constants.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"ModeSelector.h\" \#include\<Arduino.h\> \#include\"Debug.h\"
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
ModeSelector&ModeSelector::getInstance(){
staticModeSelectorinstance;//Guaranteedtobedestroyed,instantiatedonfirstuse.
returninstance; } voidModeSelector::update(){ handleButtonPress();
handleEncoderRotation(); } intModeSelector::getMode()const{ returnmode;
} voidModeSelector::setMode(intnewMode){
if(newMode\>=0&&newMode\<modes.size()){ mode=newMode;
currentMode=modes\[newMode\]; } } voidModeSelector::handleLongPress(){
//Togglemodeselectionstate inModeSelection=!inModeSelection;
if(inModeSelection){ //Entermodeselectionstate //\...
ledController-\>clearAndResetLEDs(); inModeSelection=true;
isInSelection=true; singlePressHandled=true;
ledController-\>clearAndResetLEDs();
ledController-\>setState(getMode(),true); }else{
//Exitmodeselectionstate //\... } }
voidModeSelector::handleModeSelectionPress(){
ledController-\>clearLEDs(); //ResetthemodefortheLEDsifnotinmode0
if(getMode()!=0){ ledController-\>resetInverted(); }
inModeSelection=false; isInSelection=false;
previousMode=-1;//Resetthepreviousmode }
voidModeSelector::handleButtonPress(){
//Readtheencoderandhandlebuttonpresses encoder-\>readButton();
if(encoder-\>isButtonLongPressed()){//Handlelongpress //\...
if(!longPressHandled){ handleLongPress(); longPressHandled=true; }
}elseif(encoder-\>readButton()==Encoder::PRESSED){//Handlesinglepress
//\... //fornowdonothing\.... longPressHandled=false;
if(!inModeSelection){return;} } }
voidModeSelector::handleEncoderRotation(){ if(!inModeSelection){ return;
} Encoder::Directiondirection=encoder-\>readEncoder();
if(direction==Encoder::CW){ setMode(getMode()+1);
}elseif(direction==Encoder::CCW){ setMode(getMode()-1); }
//LightuptheLEDcorrespondingtothecurrentmode
ledController-\>clearAndResetLEDs();
ledController-\>setState(getMode(),true); }
boolModeSelector::isInModeSelection(){ returninModeSelection; }
voidModeSelector::setLedController(LEDController&ledController){
this-\>ledController=&ledController; }
voidModeSelector::setEncoder(Encoder&encoder){ this-\>encoder=&encoder;
} voidModeSelector::setCurrentMode(Mode\*&currentMode){
this-\>currentMode=currentMode; } voidModeSelector::addMode(Mode\*mode){
modes.push\_back(mode); totalModes=modes.size(); }
Mode\*ModeSelector::getCurrentMode(){ returncurrentMode; }
ModeSelector::ModeSelector() :mode(0),
currentMode(nullMode){}//Initializesmodeto0
