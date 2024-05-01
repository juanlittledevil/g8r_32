EurorackClock.cpp EurorackClock.h Debug.h Arduino.h ModeSelector.h
ModeSelector.h Gates.h Mode.h LEDController.h HardwareTimer.h LED.h
Encoder.h Debug.h Pin.h vector EurorackClock.h ResetButton.h LEDs.h
src/EurorackClock.cpp Arduino.h Constants.h Gate.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"EurorackClock.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#include\"ModeSelector.h\"
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//constintLED\_ON\_DURATION=10; //constintLONG\_LED\_ON\_DURATION=25;
//constintMIDI\_CLOCK\_PULSE\_COUNT=24; //Staticvariablesinitialization
floatEurorackClock::lastFlashTime=0;
intEurorackClock::flashPulseCount=0;
EurorackClock\*EurorackClock::instance=nullptr; //Constructor
EurorackClock::EurorackClock(intclockPin,intresetPin,inttempoLedPin,Gates&gates,LEDs&leds)
:clockPin(clockPin), resetPin(resetPin), tempo(120), lastTickTime(0),
tickInterval(60000/tempo), isRunning(false), tempoLed(tempoLedPin),
externalClock(clockPin,false,true), resetButton(resetPin,false,true),
gates(gates), leds(leds){ instance=this;
timer=newHardwareTimer(TIM2);//UseTimer2
attachInterrupt(digitalPinToInterrupt(resetPin),EurorackClock::resetInterruptHandler,RISING);
this-\>externalTempo=0; } //Initializationfunction
voidEurorackClock::setup(){ tempoLed.begin(); externalClock.begin();
resetButton.begin(); } //Setthetempooftheclock
voidEurorackClock::setTempo(floatnewTempo,intppqn){ tempo=newTempo;
this-\>ppqn=ppqn;
clockState.tickInterval=60000000.0/(tempo\*ppqn);//Calculateintervalinmicroseconds
timer-\>setOverflow(clockState.tickInterval,MICROSEC\_FORMAT); }
//Starttheclock voidEurorackClock::start(){ clockState.isRunning=true;
timer-\>attachInterrupt(interruptHandler); timer-\>resume(); }
//Stoptheclock voidEurorackClock::stop(){ clockState.isRunning=false;
timer-\>detachInterrupt(); timer-\>pause(); } //Getthecurrenttempo
intEurorackClock::getTempo()const{ returntempo; }
//Togglethetimetheledstaysonfortemposelection
voidEurorackClock::toggleLedOnDuration(boolselectingTempo){
ledOnDuration=!selectingTempo?LONG\_LED\_ON\_DURATION:LED\_ON\_DURATION;
} //UpdatethetempoLEDstatus
voidEurorackClock::updateTempoLed(unsignedlongcurrentTime){
//OnlyupdatetheLEDifwe\'reinMode0andnotinmodeselection
if(ModeSelector::getInstance().getMode()==0&&!ModeSelector::getInstance().isInModeSelection()){
//IftheLEDisonandit\'sbeenonfortheduration
if(this-\>tempoLed.getState()==HIGH&&currentTime-ledOnTime\>=ledOnDuration){
//TurntheLEDoff this-\>tempoLed.setState(LOW); } }else{
//Ifwe\'renotinMode0,turntheLEDoff this-\>tempoLed.setState(LOW); } }
//Updatetheflashpulsecount voidEurorackClock::updateFlashPulseCount(){
if(!resetTriggered){ flashPulseCount++; } handleResetTrigger();
decideFlash(); } //Handletheresettrigger
voidEurorackClock::handleResetTrigger(){ if(resetTriggered){
tempoLed.setState(LOW); resetTriggered=false; flashPulseCount=0;
timeToFlash=true; } } //Decidewhetherit\'stimetoflash
voidEurorackClock::decideFlash(){
intupdateCount=isMidiClock?24:this-\>ppqn;
if(flashPulseCount\>=updateCount){ timeToFlash=true; flashPulseCount=0;
} } //Handletheexternalclock voidEurorackClock::handleExternalClock(){
if(ModeSelector::getInstance().getMode()==0){
intclockState=externalClock.getState();
unsignedlongcurrentTime=millis();
if(clockState==HIGH&&lastClockState==LOW&&this-\>isExternalTempo&&(currentTime-lastMidiClockTime\>MIDI\_CLOCK\_TIMEOUT)){
isMidiClock=false; triggerClockPulse(); } lastClockState=clockState; } }
//HandletheMIDIclock voidEurorackClock::handleMidiClock(){
if(ModeSelector::getInstance().getMode()==0){
unsignedlongcurrentTime=millis(); if(this-\>isExternalTempo){
//HandleMIDIclock lastMidiClockTime=currentTime; isMidiClock=true;
//Triggerclockpulse triggerClockPulse(); } } }
//SetthePPQN(PulsesPerQuarterNote) voidEurorackClock::setPPQN(intppqn){
this-\>ppqn=ppqn; } //Setwhethertheclockisusingexternaltempo
voidEurorackClock::setExternalTempo(boolisExternalTempo){
this-\>isExternalTempo=isExternalTempo; if(!isExternalTempo){
isMidiClock=false; //Manuallyresetnecessarystatevariables
lastClockState=LOW; lastClockTime=0; tickCount=0; } } //Maintickfunction
voidEurorackClock::tick(){ unsignedlongcurrentTime=millis();
gates.update(currentTime); leds.update(currentTime);
if(shouldTriggerClockPulse()){ triggerClockPulse(); }
updateTempoLed(currentTime); } //Checkifit\'stimetotriggeraclockpulse
boolEurorackClock::shouldTriggerClockPulse(){
boolshouldTrigger=!this-\>isExternalTempo&&clockState.isRunning&&micros()-clockState.lastTickTime\>=clockState.tickInterval;
shouldTrigger=shouldTrigger&&ModeSelector::getInstance().getMode()==0;
returnshouldTrigger; } //TriggerthetempoLED
voidEurorackClock::triggerTempoLed(unsignedlongcurrentTime){
//IftheLEDisoffandenoughtimehaspassedsincethelastflash
if(this-\>tempoLed.getState()==LOW){ //TurntheLEDon
this-\>tempoLed.setState(HIGH); //UpdatethetimetheLEDwasturnedon
ledOnTime=currentTime; timeToFlash=false; } } //Triggeraclockpulse
voidEurorackClock::triggerClockPulse(){
clockState.lastTickTime=micros(); unsignedlongcurrentTime=millis();
updateFlashPulseCount(); triggerGates(currentTime);
handleTempoLed(currentTime); } //Triggerthegates
voidEurorackClock::triggerGates(unsignedlongcurrentTime){
//Checkifmodeselectionisactive
if(ModeSelector::getInstance().isInModeSelection()){
//Ifmodeselectionisactive,returnimmediatelywithouttriggeringthegatesandLEDs
return; } for(inti=0;i\<gates.numGates;i++){ gates.gateCounters\[i\]++;
intdivision=gates.getDivision(i);
if(gates.gateCounters\[i\]%division==0){ gates.gateCounters\[i\]=0;
gates.trigger(i,currentTime); if(i==gates.getSelectedGate()){
//TriggertheLEDinverted. leds.trigger(i,currentTime,true); }else{
//TriggertheLEDnormally. leds.trigger(i,currentTime); } } } }
//HandlethetempoLED
voidEurorackClock::handleTempoLed(unsignedlongcurrentTime){
intpulseCount=isMidiClock?MIDI\_CLOCK\_PULSE\_COUNT:ppqn;
if(flashPulseCount%pulseCount==0){ triggerTempoLed(currentTime);
timeToFlash=true; } } //Resettheclock voidEurorackClock::reset(){
//if(isExternalTempo){ resetTriggered=true; handleResetTrigger();
unsignedlongcurrentTime=millis(); //Triggertheeventsimmediately
for(inti=0;i\<gates.numGates;i++){ gates.trigger(i,currentTime);
gates.gateCounters\[i\]=0; } triggerTempoLed(currentTime);
//Resetthetimers clockState.lastTickTime=micros(); flashPulseCount=0;
gates.update(currentTime);
//}elseif(!isExternalTempo&&ModeSelector::getInstance().getMode()==0){
//unsignedlongcurrentTime=millis(); ////Getthecurrentlyselectedgate
//intselectedGate=gates.getSelectedGate();
////Resetthecounterfortheselectedgate
//gates.gateCounters\[selectedGate\]=0;
//gates.trigger(selectedGate,currentTime); //} }
voidEurorackClock::reset(intselectedGate){
unsignedlongcurrentTime=millis();
gates.trigger(selectedGate,currentTime);
gates.gateCounters\[selectedGate\]=0; }
