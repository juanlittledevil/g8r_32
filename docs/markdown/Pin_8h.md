Pin.h src/Pin.cpp src/SPDTSwitch.cpp include/Encoder.h
include/EurorackClock.h include/Gate.h include/InputHandler.h
include/LED.h include/ResetButton.h include/SPDTSwitch.h src/Mode1.cpp
src/ModeSelector.cpp src/Mode0.cpp include/Mode0.h
include/ModeSelector.h include/SPDTSwitch.h src/Pin.cpp include/Gates.h
src/Gates.cpp src/Mode2.cpp include/Mode1.h src/SPDTSwitch.cpp
include/LEDController.h include/LED.h src/ResetButton.cpp
src/MIDIHandler.cpp src/main.cpp include/Encoder.h src/LEDController.cpp
include/InputHandler.h include/Pin.h include/Mode2.h
include/EurorackClock.h include/ResetButton.h include/LEDs.h
src/EurorackClock.cpp src/LED.cpp src/Encoder.cpp src/InputHandler.cpp
src/LEDs.cpp include/Gate.h src/Gate.cpp include/MIDIHandler.h Pin
InputPin AnalogInputPin OutputPin PWMPin

\#ifndefPIN\_H \#definePIN\_H \#ifdefARDUINO\_ARCH\_STM32
\#include\<HardwareTimer.h\> \#endif //Pinclass classPin{ protected:
intpin;//Pinnumber boolstate;//Currentstateofthepin public:
Pin(intpin=-1);//Constructor \~Pin();//Destructor };
//InputPinclass(inheritsfromPin) classInputPin:publicPin{ public:
InputPin(intpin);//Defaultconstructor
InputPin(intpin,boolinternalPullup,boolinternalPulldown);//Overloadedconstructor
virtualvoidbegin();//Initializethepin
virtualboolgetState();//Getthestateofthepin private:
booluseInternalPullup;//Flagtoindicatewhethertouseinternalpull-upresistor
booluseInternalPulldown; }; //AnalogInputPinclass(inheritsfromPin)
classAnalogInputPin:publicPin{ public:
AnalogInputPin(intpin);//Constructor voidbegin();//Initializethepin
intread();//Readanalogvaluefromthepin };
//OutputPinclass(inheritsfromPin) classOutputPin:publicPin{ public:
OutputPin(intpin=-1);//Constructor virtualvoidbegin();//Initializethepin
virtualvoidsetState(boolstate);//Setthestateofthepin
virtualboolgetState();//Getthestateofthepin };
//PWMPinclass(inheritsfromOutputPin) classPWMPin:publicOutputPin{
public: PWMPin(intpin=-1);//Constructor
virtualvoidbegin();//Initializethepin
voidsetDutyCycle(intdutyCycle);//Setthedutycycleofthepin
intgetDutyCycle();//Getthedutycycleofthepin private:
intdutyCycle;//DutycycleofthePWMpin
HardwareTimer\*timer;//TimerforPWMoutput }; \#endif//PIN\_H
