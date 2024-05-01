Pin.cpp Pin.h Arduino.h Debug.h src/Pin.cpp Debug.h Pin.h Arduino.h
DEBUG\_PRINT message Debug::print(\_\_FILE\_\_, \_\_LINE\_\_,
\_\_func\_\_, String(message))

//pin.cpp \#include\"Pin.h\" \#include\<Arduino.h\> \#include\"Debug.h\"
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//Pinclass //Constructor Pin::Pin(intpin){ this-\>pin=pin;
this-\>state=LOW; } //Destructor Pin::\~Pin(){ //Addanycleanupcodehere }
//InputPinclass //Defaultconstructor
InputPin::InputPin(intpin):Pin(pin),useInternalPullup(false),useInternalPulldown(false){
this-\>useInternalPullup=false; this-\>useInternalPulldown=false; }
//Overloadedconstructor
InputPin::InputPin(intpin,boolinternalPullup,boolinternalPulldown)
:Pin(pin), useInternalPullup(internalPullup),
useInternalPulldown(internalPulldown){
this-\>useInternalPullup=internalPullup;
this-\>useInternalPulldown=internalPullup; } //Initializetheinputpin
voidInputPin::begin(){ if(this-\>useInternalPullup){
pinMode(this-\>pin,INPUT\_PULLUP); }elseif(this-\>useInternalPulldown){
pinMode(this-\>pin,INPUT\_PULLDOWN); }else{ pinMode(this-\>pin,INPUT); }
} //Getthestateoftheinputpin boolInputPin::getState(){
this-\>state=digitalRead(this-\>pin); returnthis-\>state; }
//AnalogInputPinclass //Constructor
AnalogInputPin::AnalogInputPin(intpin):Pin(pin){
//Initializationcodehereifneeded } //Initializetheanaloginputpin
voidAnalogInputPin::begin(){ pinMode(this-\>pin,INPUT); }
//Readtheanalogvaluefromthepin intAnalogInputPin::read(){
intvalue=analogRead(this-\>pin); returnvalue; } //OutputPinclass
//Constructor OutputPin::OutputPin(intpin):Pin(pin){
//Initializationcodehereifneeded } //Initializetheoutputpin
voidOutputPin::begin(){ pinMode(this-\>pin,OUTPUT); }
//Setthestateoftheoutputpin voidOutputPin::setState(boolnewState){
this-\>state=newState; digitalWrite(this-\>pin,this-\>state?HIGH:LOW); }
//Getthestateoftheoutputpin boolOutputPin::getState(){
returnthis-\>state; } //PWMPinclass //Constructor
PWMPin::PWMPin(intpin):OutputPin(pin){ //Initializationcodehereifneeded
\#ifdefARDUINO\_ARCH\_STM32
this-\>timer=newHardwareTimer(TIM2);//UseTIM2forallpins \#endif }
//InitializethePWMpin voidPWMPin::begin(){ \#ifdefARDUINO\_ARCH\_STM32
pinMode(this-\>pin,OUTPUT); if(this-\>timer!=nullptr){
this-\>timer-\>setMode(1,TIMER\_OUTPUT\_COMPARE\_PWM1,this-\>pin);
this-\>timer-\>setOverflow(10000,MICROSEC\_FORMAT);//10kHzPWM
this-\>timer-\>setCaptureCompare(1,0,PERCENT\_COMPARE\_FORMAT);//0%dutycycle
this-\>timer-\>resume(); } \#else pinMode(this-\>pin,OUTPUT); \#endif }
//SetthedutycycleofthePWMpin voidPWMPin::setDutyCycle(intdutyCycle){
this-\>dutyCycle=dutyCycle; analogWrite(this-\>pin,this-\>dutyCycle); }
//GetthedutycycleofthePWMpin intPWMPin::getDutyCycle(){
returnthis-\>dutyCycle; }
