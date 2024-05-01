Gate.cpp Gate.h Debug.h Arduino.h Debug.h Pin.h vector Arduino.h
Constants.h Gate.h src/Gate.cpp DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"Gate.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//Constructor Gate::Gate(intpin):OutputPin(pin){ //Initializationcode
division=internalPPQN; } //Destructor Gate::\~Gate(){
//Cleanupcodehereifneeded } //Setthedivisionforthegate
voidGate::setDivision(intnewDivision){ division=newDivision; }
voidGate::trigger(unsignedlongcurrentTime){ setState(HIGH);
triggeredTime=currentTime; } voidGate::update(unsignedlongcurrentTime){
if(getState()==HIGH&&currentTime\>=triggeredTime+gateOnDuration){
setState(LOW); } } intGate::getDivision(){ returnthis-\>division; }
voidGate::setGateOnDuration(intduration){ gateOnDuration=duration; }
