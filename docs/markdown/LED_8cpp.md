LED.cpp LED.h Debug.h Arduino.h LED.h Debug.h Pin.h Arduino.h
src/LED.cpp DEBUG\_PRINT message Debug::print(\_\_FILE\_\_,
\_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"LED.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//Constructor LED::LED(intpin):OutputPin(pin){
//Initializationcodehereifneeded } //Destructor LED::\~LED(){
//Cleanupcodehereifneeded } voidLED::setIntensity(intintensity){
this-\>intensity=intensity; }
voidLED::startBlinking(unsignedlonginterval){
this-\>blinkStartTime=millis(); this-\>blinkInterval=interval;
this-\>isBlinking=true; } voidLED::stopBlinking(){
this-\>isBlinking=false; this-\>intensity=255;
//DEBUG\_PRINT(\"LEDstoppedblinking!\"); } voidLED::updateBlinking(){
if(this-\>isBlinking&&millis()-this-\>blinkStartTime\>=this-\>blinkInterval){
this-\>blinkStartTime=millis();
this-\>setState(!getState());//ToggleLEDstate } }
voidLED::trigger(unsignedlongcurrentTime,boolinverted){ if(!inverted){
setState(HIGH); }else{ setState(LOW); } this-\>inverted=inverted;
triggeredTime=currentTime; } voidLED::update(unsignedlongcurrentTime){
//IftheLEDisnotinverted,turnitoffafterledOnDuration
if(!this-\>inverted){
if(getState()==HIGH&&currentTime\>=triggeredTime+ledOnDuration){
setState(LOW); } //IftheLEDisinverted,turnitonafterinvertedLedOnDuration
}else{
if(getState()==LOW&&currentTime\>=triggeredTime+invertedLedOnDuration){
setState(HIGH); } } } voidLED::resetIvernted(){ this-\>inverted=false; }
voidLED::setLedOnDuration(intduration){ this-\>ledOnDuration=duration; }
