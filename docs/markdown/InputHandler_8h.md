InputHandler.h Pin.h src/InputHandler.cpp src/main.cpp include/Mode0.h
include/Mode1.h include/Mode2.h include/InputHandler.h Pin.h
src/Mode1.cpp src/Mode0.cpp include/Mode0.h src/Mode2.cpp
include/Mode1.h src/main.cpp include/InputHandler.h include/Mode2.h
src/InputHandler.cpp InputHandler

\#ifndefINPUT\_HANDLER\_H \#defineINPUT\_HANDLER\_H \#include\"Pin.h\"
classInputHandler{ public: InputHandler(intcvAPin,intcvBPin);
voidbegin(); intreadCVA(); intreadCVB(); private: AnalogInputPincvA;
AnalogInputPincvB; }; \#endif//INPUT\_HANDLER\_H
