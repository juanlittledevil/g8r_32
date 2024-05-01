Mode0 Mode Mode0.h LEDController & LEDController& Mode0::ledController
ledController Encoder & Encoder& Mode0::encoder encoder ResetButton &
ResetButton& Mode0::resetButton resetButton Gates & Gates& Mode0::gates
gates EurorackClock & EurorackClock& Mode0::clock clock MIDIHandler &
MIDIHandler& Mode0::midiHandler midiHandler InputHandler & InputHandler&
Mode0::inputHandler inputHandler bool bool Mode0::inDivisionSelection
inDivisionSelection = false bool bool Mode0::externalTempo externalTempo
= false bool bool Mode0::singlePressHandled singlePressHandled = false
bool bool Mode0::singleResetPressHandled singleResetPressHandled = false
int int Mode0::tempoIncrement tempoIncrement = 1 const int const int
Mode0::minTempo minTempo = 20 const int const int Mode0::maxTempo
maxTempo = 340 int int Mode0::divisionIndex divisionIndex = 24 int int
Mode0::selectedGate selectedGate = 0 bool bool Mode0::selectingTempo
selectingTempo = false bool bool Mode0::doublePressHandled
doublePressHandled = false bool bool Mode0::doubleResetPressHandled
doubleResetPressHandled = false Mode0::Mode0 (Encoder &encoder,
InputHandler &inputHandler, Gates &gates, LEDController &ledController,
MIDIHandler &midiHandler, ResetButton &resetButton, EurorackClock
&clock) Mode0 Encoder & encoder InputHandler & inputHandler Gates &
gates LEDController & ledController MIDIHandler & midiHandler
ResetButton & resetButton EurorackClock & clock void void
Mode0::handleSinglePress () override handleSinglePress handleSinglePress
void void Mode0::handleDoublePress () override handleDoublePress
handleDoublePress void void Mode0::handleLongPress () override
handleLongPress handleLongPress void void Mode0::handlePressReleased ()
override handlePressReleased handlePressReleased void void
Mode0::handleSelectionStates () override handleSelectionStates
handleSelectionStates void void Mode0::handleResetSinglePress ()
override handleResetSinglePress handleResetSinglePress void void
Mode0::handleResetDoublePress () override handleResetDoublePress
handleResetDoublePress void void Mode0::handleResetLongPress () override
handleResetLongPress handleResetLongPress void void
Mode0::handleResetPressReleased () override handleResetPressReleased
handleResetPressReleased void void Mode0::setup () override setup setup
void void Mode0::teardown () override teardown teardown void void
Mode0::update () override update update void void Mode0::setDivisionPPQN
(int ppqn) setDivisionPPQN int ppqn void void
Mode0::setDefaultDivisionIndex () setDefaultDivisionIndex void void
Mode0::handleEncoder () handleEncoder void void Mode0::handleButton
(Encoder::ButtonState buttonState) handleButton Encoder::ButtonState
buttonState void void Mode0::handleResetButton (ResetButton::ButtonState
buttonState) handleResetButton ResetButton::ButtonState buttonState void
void Mode0::handleCVInput () handleCVInput void void
Mode0::handleTempoSelection () handleTempoSelection Mode Mode0 OutputPin
ClockState Pin Encoder -encButton -encCLK -encDT LEDs -leds
EurorackClock -gates -externalClock -resetButton -leds -tempoLed
-clockState -instance AnalogInputPin InputPin MIDIHandler -gates
-instance -leds -clock Mode InputHandler -cvA -cvB LED Gates -gateArray
ResetButton -resetButton LEDController -leds Gate Mode0 -encoder
-inputHandler -midiHandler -gates -resetButton -ledController -clock
Mode0clock Mode0divisionIndex Mode0doublePressHandled
Mode0doubleResetPressHandled Mode0encoder Mode0externalTempo Mode0gates
Mode0handleButton Mode0handleCVInput Mode0handleDoublePress
Mode0handleEncoder Mode0handleLongPress Mode0handlePressReleased
Mode0handleResetButton Mode0handleResetDoublePress
Mode0handleResetLongPress Mode0handleResetPressReleased
Mode0handleResetSinglePress Mode0handleSelectionStates
Mode0handleSinglePress Mode0handleTempoSelection
Mode0inDivisionSelection Mode0inputHandler Mode0ledController
Mode0maxTempo Mode0midiHandler Mode0minTempo Mode0Mode0 Mode0resetButton
Mode0selectedGate Mode0selectingTempo Mode0setDefaultDivisionIndex
Mode0setDivisionPPQN Mode0setup Mode0singlePressHandled
Mode0singleResetPressHandled Mode0teardown Mode0tempoIncrement
Mode0update
