Debug.cpp Debug.h Arduino.h Debug.h Arduino.h src/Debug.cpp

\#include\"Debug.h\" \#include\<Arduino.h\>
voidDebug::print(constchar\*file,intline,constchar\*func,constString&message){
if(isEnabled){ Serial.print(file); Serial.print(\":\");
Serial.print(line); Serial.print(\"\"); Serial.print(func);
Serial.print(\"-\"); Serial.println(message); } }
boolDebug::isEnabled=false;
