main.cpp Arduino.h MIDI.h Gates.h ModeSelector.h LEDs.h Debug.h
Encoder.h MIDIHandler.h EurorackClock.h Constants.h Mode0.h Mode1.h
Mode2.h LEDController.h ResetButton.h InputHandler.h vector MIDI.h
Mode0.h ModeSelector.h Gates.h Mode.h Mode1.h LEDController.h
HardwareTimer.h LED.h src/main.cpp Encoder.h Debug.h InputHandler.h
Pin.h vector Mode2.h EurorackClock.h ResetButton.h LEDs.h Arduino.h
Constants.h Gate.h MIDIHandler.h DEBUG\_PRINT message
Debug::print(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))
RX\_PIN PA3 TX\_PIN PA2 ENCODER\_PINA PB13 ENCODER\_PINB PB14
ENCODER\_BUTTON PB12 CLOCK\_PIN PB10 RESET\_PIN PB11 RESET\_BUTTON PB15
TEMPO\_LED PA8 CV\_A\_PIN PA4 CV\_B\_PIN PA5 std::vector\< int \>
std::vector\<int\> pins pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9}
const int const int numPins numPins = pins.size() Gates Gates gates
gates = Gates(pins, numPins) std::vector\< int \> std::vector\<int\>
ledPins ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0} int int
numLedPins numLedPins = ledPins.size() LEDs LEDs leds leds =
LEDs(ledPins, numLedPins) int int encCLKPin encCLKPin = ENCODER\_PINA
int int encDTPin encDTPin = ENCODER\_PINB int int encButtonPin
encButtonPin = ENCODER\_BUTTON bool bool inModeSelection inModeSelection
= false int int intensity intensity = 255 bool bool isInSelection
isInSelection = false unsigned long unsigned long lastFlashTime
lastFlashTime = 0 unsigned char unsigned char internalPPQN internalPPQN
= 24 std::vector\< int \> std::vector\<int\> musicalIntervals
musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96,
128, 144, 192, 288, 384, 576, 768, 1152, 1536} const int const int
musicalIntervalsSize musicalIntervalsSize = musicalIntervals.size() int
int total\_pages total\_pages = 16 / leds.numLeds int int min\_intensity
min\_intensity = 64 int int intensity\_step intensity\_step = (255 -
min\_intensity) / (total\_pages - 1) Encoder Encoder encoder encoder =
Encoder(encCLKPin, encDTPin, encButtonPin) ResetButton ResetButton
resetButton resetButton = ResetButton(RESET\_BUTTON) LEDController
LEDController ledController(leds) (leds) ledController EurorackClock
EurorackClock clock(CLOCK\_PIN, RESET\_PIN, TEMPO\_LED, gates, leds)
(CLOCK\_PIN, RESET\_PIN, TEMPO\_LED, gates, leds) clock MIDIHandler
MIDIHandler midiHandler(Serial2, clock, gates, leds) (Serial2, clock,
gates, leds) midiHandler InputHandler InputHandler inputHandler
inputHandler = InputHandler(CV\_A\_PIN, CV\_B\_PIN) ModeSelector &
ModeSelector& modeSelector modeSelector = ModeSelector::getInstance()
Mode \* Mode\* currentMode currentMode = nullptr Mode0 Mode0
mode0(encoder, inputHandler, gates, ledController, midiHandler,
resetButton, clock) (encoder, inputHandler, gates, ledController,
midiHandler, resetButton, clock) mode0 Mode1 Mode1 mode1(encoder,
inputHandler, gates, ledController, midiHandler, resetButton) (encoder,
inputHandler, gates, ledController, midiHandler, resetButton) mode1
Mode2 Mode2 mode2(encoder, inputHandler, gates, ledController,
midiHandler, resetButton) (encoder, inputHandler, gates, ledController,
midiHandler, resetButton) mode2 void void setup () setup void void loop
() loop

\#include\<Arduino.h\> \#include\<MIDI.h\> \#include\"Gates.h\"
\#include\"ModeSelector.h\" \#include\"LEDs.h\" \#include\"Debug.h\"
\#include\"Encoder.h\" \#include\"MIDIHandler.h\"
\#include\"EurorackClock.h\" \#include\"Constants.h\"
\#include\"Mode0.h\" \#include\"Mode1.h\" \#include\"Mode2.h\"
\#include\"LEDController.h\" \#include\"ResetButton.h\"
\#include\"InputHandler.h\" \#include\<vector\>
\#defineDEBUG\_PRINT(message)Debug::print(\_\_FILE\_\_,\_\_LINE\_\_,\_\_func\_\_,String(message))
//DefinetheRXandTXpinsforMIDIcommunication \#defineRX\_PINPA3
\#defineTX\_PINPA2 //Definethepinsfortheencoder
\#defineENCODER\_PINAPB13 \#defineENCODER\_PINBPB14
\#defineENCODER\_BUTTONPB12 //Definethepinsfortheclockandreset
\#defineCLOCK\_PINPB10 \#defineRESET\_PINPB11 \#defineRESET\_BUTTONPB15
//DefinethepinforthetempoLED \#defineTEMPO\_LEDPA8 \#defineCV\_A\_PINPA4
\#defineCV\_B\_PINPA5 //Definethepinsforthegates
std::vector\<int\>pins={PA15,PB3,PB4,PB5,PB6,PB7,PB8,PB9};//Examplepins
constintnumPins=pins.size();
Gatesgates=Gates(pins,numPins);//CreateaninstanceofGates
//DefinethepinsfortheLEDs
std::vector\<int\>ledPins={PA12,PA11,PB1,PB0,PA7,PA6,PA1,PA0};//PlaceholderpinnumbersforLEDs
intnumLedPins=ledPins.size(); //CreateaninstanceofLEDs
//TempoLEDispartofEurorackClockclasstomakethisfilecleaner.
LEDsleds=LEDs(ledPins,numLedPins);//CreateaninstanceofLEDs
//Definethepinsfortheencoder intencCLKPin=ENCODER\_PINA;
intencDTPin=ENCODER\_PINB; intencButtonPin=ENCODER\_BUTTON;
boolinModeSelection=false; intintensity=255;//DefaultintensityforLEDs
boolisInSelection=false;//Usedtopreventmultiplepressesfrombeinghandled
unsignedlonglastFlashTime=0;
unsignedcharinternalPPQN=24;//Pulsesperquarternote
//constintmusicalIntervals\[\]={1,2,4,8,16,32,3,6,12,24,48};
std::vector\<int\>musicalIntervals={1,2,3,4,6,8,12,16,24,32,48,64,72,96,128,144,192,288,384,576,768,1152,1536};
constintmusicalIntervalsSize=musicalIntervals.size();
inttotal\_pages=16/leds.numLeds;//CalculatetotalpagesbasedonnumberofLEDs
intmin\_intensity=64;//Setminimumintensityto25%(64outof255)
intintensity\_step=(255-min\_intensity)/(total\_pages-1);//Calculateintensitystep
//CreateaninstanceoftheEncoderclass
Encoderencoder=Encoder(encCLKPin,encDTPin,encButtonPin);
//CreateaninstanceoftheResetButtonclass
ResetButtonresetButton=ResetButton(RESET\_BUTTON);
//CreateaninstanceoftheLEDControllerclass
LEDControllerledController(leds);
//CreateaninstanceoftheEurorackClockclass
EurorackClockclock(CLOCK\_PIN,RESET\_PIN,TEMPO\_LED,gates,leds);
//CreateaninstanceoftheMIDIHandlerclass
MIDIHandlermidiHandler(Serial2,clock,gates,leds);
//CreateaninstanceoftheInputHandlerclass
InputHandlerinputHandler=InputHandler(CV\_A\_PIN,CV\_B\_PIN);
//ModeClassesandModeSelector
ModeSelector&modeSelector=ModeSelector::getInstance();
Mode\*currentMode=nullptr;
Mode0mode0(encoder,inputHandler,gates,ledController,midiHandler,resetButton,clock);
Mode1mode1(encoder,inputHandler,gates,ledController,midiHandler,resetButton);
Mode2mode2(encoder,inputHandler,gates,ledController,midiHandler,resetButton);
voidsetup(){ delay(1000); //Enabledebugging Debug::isEnabled=true;
//Initializeserialcommunication if(Debug::isEnabled){
Serial.begin(115200); DEBUG\_PRINT(\"Enteringsetup()function\"); }
//TODO:UnfortunatelyI\'mdealingwithabugthatpreventsmefrominitializingtheresetbutton
//fromwithintheResetButtonclass.Ihavetodoithereinstead.Optingthisrouteasitis
//theleastintrusive.Seenotesinclassmethodformoredetails.
//resetButton.begin();//donotcallthisfunctionasitwillhangtheapp.
pinMode(RESET\_BUTTON,INPUT\_PULLDOWN);//Thisistheworkaroundforthebug
//InitializetheMIDIHandler //Serial2.begin(31250); midiHandler.begin();
//SettheMIDIHandlertolistentoallchannels midiHandler.setChannel(-1);
//Starttheclockandsettheinitialtempo clock.setup();
clock.setTempo(120.0,internalPPQN);//Setthetempoto120BPMwithinternal4PPQN
//\-\-\-\-\-\--Settheinitialmode\-\-\-\-\-\--
//IMPORTANT:AddthemodestotheModeSelectorinorder,sothattheindicesmatchwiththemodenumbers.
modeSelector.addMode(&mode0); modeSelector.addMode(&mode1);
modeSelector.addMode(&mode2);
modeSelector.setLedController(ledController);
modeSelector.setEncoder(encoder); modeSelector.setMode(0);
currentMode=modeSelector.getCurrentMode();
////Runthesetupfunctionforthedefaultmode
////NOTE:ONLYthedefaultmodewillexecutethis.Ifyouhavethingsthatneedtobesetupforothermodes,
////youwillneedtocallthesetupfunctionforthosemodeshere.
currentMode-\>setup(); delay(1000); leds.begin();//InitializeLEDpins
gates.begin();//Initializegatepins
encoder.begin();//Initializeencoderpins
//gates.setSelectedGate(selectedGate); if(Debug::isEnabled){
DEBUG\_PRINT(\"Finishedsetup()function\"); } } voidloop(){
modeSelector.update(); ledController.updateBlinking();
if(!modeSelector.isInModeSelection()){ currentMode-\>update(); }else{
currentMode-\>teardown(); currentMode=modeSelector.getCurrentMode();
currentMode-\>setup(); } }
