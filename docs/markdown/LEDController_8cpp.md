LEDController.cpp LEDController.h LEDController.h LED.h
src/LEDController.cpp Pin.h vector LEDs.h

//LEDController.cpp \#include\"LEDController.h\"
LEDController::LEDController(LEDs&leds):leds(leds){ turnAllOff(); }
voidLEDController::turnAllOn(){ leds.setAllLeds(true); }
voidLEDController::turnAllOff(){ leds.setAllLeds(false); }
voidLEDController::blinkSlow(intledIndex){
leds.startBlinking(ledIndex,500); }
voidLEDController::blinkFast(intledIndex){
leds.startBlinking(ledIndex,200); }
voidLEDController::stopBlinking(intledIndex){
leds.stopBlinking(ledIndex); } voidLEDController::stopAllBlinking(){
leds.stopAllBlinking(); } voidLEDController::blinkFaster(intledIndex){
leds.startBlinking(ledIndex,100); }
voidLEDController::setState(intledIndex,boolstate){
leds.setState(ledIndex,state); } voidLEDController::resetInverted(){
for(inti=0;i\<leds.numLeds;i++){ leds.resetInverted(i); } }
voidLEDController::resetInverted(intledIndex){
leds.resetInverted(ledIndex); } intLEDController::getNumLeds(){
returnleds.numLeds; } voidLEDController::update(){
leds.updateBlinking(); } voidLEDController::clearAndResetLEDs(){
leds.stopAllBlinking(); leds.setAllLeds(false); resetInverted(); }
voidLEDController::clearLEDs(){ leds.stopAllBlinking();
leds.setAllLeds(false); } voidLEDController::updateBlinking(){
leds.updateBlinking(); }
