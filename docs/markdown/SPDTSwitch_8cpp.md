SPDTSwitch.cpp SPDTSwitch.h Pin.h Debug.h SPDTSwitch.h
src/SPDTSwitch.cpp Debug.h Pin.h Arduino.h

\#include\"SPDTSwitch.h\" \#include\"Pin.h\" \#include\"Debug.h\"
//Uncommentthelinebelowtoenabledebugging.Commentitouttodisabledebugging
//eachfilehasitsownDEBUGflagformoregranularcontrol.
//\#defineDEBUG1//0fornodebug,1fordebug \#ifdefDEBUG
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
\#include\<Arduino.h\> \#endif
SPDTSwitch::SPDTSwitch(intpinA,intpinB):pinA(InputPin(pinA,true,false)),pinB(InputPin(pinB,true,false)){
//Initializationcodehereifneeded } voidSPDTSwitch::begin(){
pinA.begin(); pinB.begin(); } SwitchStateSPDTSwitch::read(){
\#ifdefDEBUG Serial.println(\"Readingswitchstate\"); \#endif
boolstateA=pinA.getState(); boolstateB=pinB.getState();
if(stateA&&stateB){ \#ifdefDEBUG DEBUG\_PRINT(\"Switchstate:BOTH\");
\#endif returnNEUTRAL; }elseif(stateA){ \#ifdefDEBUG
DEBUG\_PRINT(\"Switchstate:A\"); \#endif returnSTATE\_A;
}elseif(stateB){ \#ifdefDEBUG DEBUG\_PRINT(\"Switchstate:B\"); \#endif
returnSTATE\_B; }else{ \#ifdefDEBUG
DEBUG\_PRINT(\"Switchstate:NEUTRAL\"); \#endif returnNEUTRAL; } }
