Gates.cpp Gates.h Debug.h vector Gates.h src/Gates.cpp LED.h Debug.h
Pin.h vector LEDs.h Arduino.h Constants.h Gate.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

//Gates.cpp \#include\"Gates.h\" \#include\"Debug.h\"
\#include\<vector\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//Constructor Gates::Gates(std::vector\<int\>pins,intnumGates){
this-\>numGates=numGates; gateArray=newGate\[numGates\];
gateCounters=newint\[numGates\]; for(inti=0;i\<numGates;i++){
gateArray\[i\]=Gate(pins\[i\]);
gateCounters\[i\]=0;//Fix:Addmissingdeclarationof\'gateCounters\' } }
//Destructor Gates::\~Gates(){
delete\[\]gateArray;//Deallocatememoryforthegatearray
delete\[\]gateCounters;//Deallocatememoryforthegatecounters }
voidGates::begin(){ for(inti=0;i\<numGates;i++){ gateArray\[i\].begin();
} } voidGates::setState(intgateIndex,boolstate){
if(gateIndex\>=0&&gateIndex\<numGates){
gateArray\[gateIndex\].setState(state); } }
boolGates::getState(intgateIndex){
if(gateIndex\>=0&&gateIndex\<numGates){
returngateArray\[gateIndex\].getState(); } returnfalse; }
//Methodtoturnonaspecificgate voidGates::turnOnGate(intindex){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
gateArray\[index\].setState(HIGH);//Turnonthegateatthespecifiedindex } }
//Methodtoturnoffaspecificgate voidGates::turnOffGate(intindex){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
gateArray\[index\].setState(LOW);//Turnoffthegateatthespecifiedindex } }
//Methodtoturnonoroffallgates voidGates::setALLGates(boolstate){
for(inti=0;i\<numGates;i++){
gateArray\[i\].setState(state);//Setthestateofthegate } }
//Methodtotriggeraspecificgate
voidGates::trigger(intindex,unsignedlongcurrentTime){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
gateArray\[index\].trigger(currentTime);//Triggerthegateatthespecifiedindex
} } //Methodtosetthedivisionofaspecificgate
voidGates::setDivision(intindex,intdivision){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
gateArray\[index\].setDivision(division);//Setthedivisionofthegate } }
//Methodtogetthedivisionofaspecificgate intGates::getDivision(intindex){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
returngateArray\[index\].getDivision();//Getthedivisionofthegate }
return-1;//Return-1iftheindexisoutofbounds }
//Methodtoupdatethestateofallgates
voidGates::update(unsignedlongcurrentTime){ for(inti=0;i\<numGates;i++){
gateArray\[i\].update(currentTime);//Updatethestateofthegate } }
voidGates::setSelectedGate(intindex){ selectedGate=index; }
intGates::getSelectedGate(){ returnselectedGate; }
//Methodtosetthegateondurationinmsofaspecificgate
voidGates::setGateOnDuration(intindex,intduration){
if(index\>=0&&index\<numGates){//Checkiftheindexiswithinbounds
gateArray\[index\].setGateOnDuration(duration);//Setthegateonduration }
}
