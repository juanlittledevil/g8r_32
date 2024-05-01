EurorackClock.h HardwareTimer.h LED.h Pin.h Gates.h LEDs.h Constants.h
src/EurorackClock.cpp src/main.cpp include/MIDIHandler.h include/Mode0.h
Gates.h HardwareTimer.h LED.h Pin.h vector include/EurorackClock.h
LEDs.h Arduino.h Constants.h Gate.h src/Mode1.cpp src/Mode0.cpp
include/Mode0.h src/Mode2.cpp include/Mode1.h src/MIDIHandler.cpp
src/main.cpp include/Mode2.h include/EurorackClock.h
src/EurorackClock.cpp include/MIDIHandler.h ClockState EurorackClock

\#ifndefEURORACKCLOCK\_H \#defineEURORACKCLOCK\_H
\#include\<HardwareTimer.h\> \#include\"LED.h\" \#include\"Pin.h\"
\#include\"Gates.h\" \#include\"LEDs.h\" \#include\"Constants.h\"
//Definethestateoftheclock structClockState{
unsignedlonglastTickTime;//Timeofthelasttick
unsignedlongtickInterval;//Intervalbetweenticks
boolisRunning;//Indicateswhethertheclockisrunning
ClockState():lastTickTime(0),tickInterval(0),isRunning(false){} };
//ClassdeclarationforEurorackClock classEurorackClock{
ClockStateclockState;//Currentstateoftheclock public: //Constructor
EurorackClock(intclockPin,intresetPin,inttempoLedPin,Gates&gates,LEDs&leds);
//Setupfunctiontoinitializetheclock voidsetup(); //Starttheclock
voidstart(); //Stoptheclock voidstop();
//Staticinterrupthandlerfortheclock staticvoidinterruptHandler(){
instance-\>tick(); } //Staticresetinterrupthandler
staticvoidresetInterruptHandler(){ instance-\>reset(); } //Resettheclock
voidreset(); voidreset(intselectedGate); //Maintickfunction voidtick();
//Setthetempooftheclock voidsetTempo(floatnewTempo,intppqn);
//Getthecurrenttempo intgetTempo()const; //FlashthetempoLED
voidflashTempoLed(); //Handletheexternalclockinput
voidhandleExternalClock(); //HandletheMIDIclockinput
voidhandleMidiClock(); //SetthePPQN(PulsesPerQuarterNote)
voidsetPPQN(intppqn); //Setwhethertheclockisusingexternaltempo
voidsetExternalTempo(boolisExternalTempo);
//Toggletheledondurationforthetemposelection
voidtoggleLedOnDuration(boolselectingTempo); private: //Helperfunctions
voidupdateTempoLed(unsignedlongcurrentTime);
voidupdateFlashPulseCount(); boolshouldTriggerClockPulse();
voidtriggerClockPulse(); voidhandleResetTrigger(); voiddecideFlash();
voidtriggerTempoLed(unsignedlongcurrentTime);
voidtriggerGates(unsignedlongcurrentTime);
voidhandleTempoLed(unsignedlongcurrentTime); //Membervariables
staticEurorackClock\*instance; HardwareTimer\*timer; LEDtempoLed;
InputPinexternalClock; InputPinresetButton; Gates&gates; LEDs&leds;
floattempo; floatlastTickTime; floattickInterval;
floatlastExternalTickTime; staticfloatlastFlashTime;
staticintflashPulseCount; unsignedlonglastMidiClockTime;
staticconstunsignedlongMIDI\_CLOCK\_TIMEOUT=1000;
staticconstintLED\_ON\_DURATION=10;
staticconstintLONG\_LED\_ON\_DURATION=50;
staticconstintMIDI\_CLOCK\_PULSE\_COUNT=24;
intledOnDuration=LONG\_LED\_ON\_DURATION; unsignedlongledOnTime=0;
intclockPin; intresetPin; intppqn; boolisRunning; boolisExternalTempo;
boolisMidiClock; booltimeToFlash; boolresetTriggered;
floatexternalTempo; intlastClockState; unsignedlonglastClockTime;
inttickCount; }; \#endif//EURORACKCLOCK\_H
