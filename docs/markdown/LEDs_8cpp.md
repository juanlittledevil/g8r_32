LEDs.cpp LEDs.h Debug.h Arduino.h LED.h Debug.h Pin.h vector LEDs.h
Arduino.h src/LEDs.cpp DEBUG\_PRINT message Debug::print(\_\_FILE\_\_,
\_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"LEDs.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//Constructor LEDs::LEDs(std::vector\<int\>pins,intnumLeds){
this-\>numLeds=numLeds; leds=newLED\[numLeds\];
for(inti=0;i\<numLeds;i++){ leds\[i\]=LED(pins\[i\]); } } //Destructor
LEDs::\~LEDs(){ delete\[\]this-\>leds; } voidLEDs::begin(){
for(inti=0;i\<numLeds;i++){ this-\>leds\[i\].begin(); } }
//MethodtosetthestateofallLEDs voidLEDs::setAllLeds(boolstate){
for(inti=0;i\<numLeds;i++){ this-\>leds\[i\].setState(state); } }
//MethodtosetthestateofaspecificLED
voidLEDs::setState(intindex,boolstate){ if(index\>=0&&index\<numLeds){
this-\>leds\[index\].setState(state); } }
voidLEDs::setIntensity(intindex,intintensity){
if(index\>=0&&index\<numLeds){
this-\>leds\[index\].setIntensity(intensity); } }
voidLEDs::setAllintensity(intintensity){ for(inti=0;i\<numLeds;i++){
this-\>leds\[i\].setIntensity(intensity); } }
//MethodtogetthestateofaspecificLED boolLEDs::getState(intindex){
if(index\>=0&&index\<numLeds){ returnthis-\>leds\[index\].getState(); }
returnfalse; } //voidLEDs::blinkFast(intindex){
//if(index\>=0&&index\<numLeds){
//this-\>leds\[index\].startBlinking(300);//Fastblink:300ms //} //}
//voidLEDs::blinkFast2(intindex){ //if(index\>=0&&index\<numLeds){
//this-\>leds\[index\].startBlinking(100);//Fasterblink:100ms //} //}
//voidLEDs::blinkSlow(intindex){ //if(index\>=0&&index\<numLeds){
//this-\>leds\[index\].startBlinking(600);//Slowblink:800ms //} //}
voidLEDs::startBlinking(intindex,unsignedlonginterval){
if(index\>=0&&index\<numLeds){
this-\>leds\[index\].startBlinking(interval); } }
voidLEDs::updateBlinking(){ for(inti=0;i\<numLeds;i++){
this-\>leds\[i\].updateBlinking(); } } voidLEDs::stopBlinking(intindex){
if(index\>=0&&index\<numLeds){ this-\>leds\[index\].stopBlinking(); } }
voidLEDs::stopAllBlinking(){ for(inti=0;i\<numLeds;i++){
this-\>leds\[i\].stopBlinking(); } } //Methodtotriggeraspecificled
voidLEDs::trigger(intindex,unsignedlongcurrentTime,boolinverted){
if(index\>=0&&index\<numLeds){//Checkiftheindexiswithinbounds
this-\>leds\[index\].trigger(currentTime,inverted);//Triggerthegateatthespecifiedindex
} } voidLEDs::update(unsignedlongcurrentTime){
for(inti=0;i\<numLeds;i++){
this-\>leds\[i\].update(currentTime);//Updatethestateofthegate } }
voidLEDs::resetInverted(intindex){
if(index\>=0&&index\<numLeds){//Checkiftheindexiswithinbounds
this-\>leds\[index\].resetIvernted();//Resettheinvertedstateofthegateatthespecifiedindex
} }
