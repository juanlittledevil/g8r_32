InputHandler.cpp InputHandler.h Debug.h Arduino.h Debug.h InputHandler.h
Pin.h Arduino.h src/InputHandler.cpp DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))

\#include\"InputHandler.h\" \#include\"Debug.h\" \#include\<Arduino.h\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
InputHandler::InputHandler(intcvAPin,intcvBPin)
:cvA(cvAPin),cvB(cvBPin){} voidInputHandler::begin(){ cvA.begin();
cvB.begin(); } intInputHandler::readCVA(){ returncvA.read(); }
intInputHandler::readCVB(){ returncvB.read(); }
