Mode1 Mode Mode1.h LEDController & LEDController& Mode1::ledController
ledController InputHandler & InputHandler& Mode1::inputHandler
inputHandler Encoder & Encoder& Mode1::encoder encoder ResetButton &
ResetButton& Mode1::resetButton resetButton Gates & Gates& Mode1::gates
gates MIDIHandler & MIDIHandler& Mode1::midiHandler midiHandler bool
bool Mode1::doublePressHandled doublePressHandled = false bool bool
Mode1::inChannelSelection inChannelSelection = false bool bool
Mode1::isInSelection isInSelection = false bool bool
Mode1::singlePressHandled singlePressHandled = false int int
Mode1::selectedChannel selectedChannel = 9 int int
Mode1::confirmedChannel confirmedChannel = 9 int int
Mode1::previousChannel previousChannel = -1 const int const int
Mode1::NUM\_MIDI\_CHANNELS NUM\_MIDI\_CHANNELS = 16 int int
Mode1::numLeds numLeds = 8 Mode1::Mode1 (Encoder &encoder, InputHandler
&inputHandler, Gates &gates, LEDController &ledController, MIDIHandler
&midiHandler, ResetButton &resetButton) Mode1 Encoder & encoder
InputHandler & inputHandler Gates & gates LEDController & ledController
MIDIHandler & midiHandler ResetButton & resetButton void void
Mode1::handleSinglePress () override handleSinglePress handleSinglePress
void void Mode1::handleDoublePress () override handleDoublePress
handleDoublePress void void Mode1::handleLongPress () override
handleLongPress handleLongPress void void Mode1::handlePressReleased ()
override handlePressReleased handlePressReleased void void
Mode1::handleSelectionStates () override handleSelectionStates
handleSelectionStates void void Mode1::handleResetSinglePress ()
override handleResetSinglePress handleResetSinglePress void void
Mode1::handleResetDoublePress () override handleResetDoublePress
handleResetDoublePress void void Mode1::handleResetLongPress () override
handleResetLongPress handleResetLongPress void void
Mode1::handleResetPressReleased () override handleResetPressReleased
handleResetPressReleased void void Mode1::setup () override setup setup
void void Mode1::teardown () override teardown teardown void void
Mode1::update () override update update void void Mode1::handleEncoder
() handleEncoder void void Mode1::handleButton (Encoder::ButtonState
buttonState) handleButton Encoder::ButtonState buttonState void void
Mode1::handleChannelSelection () handleChannelSelection void void
Mode1::handleChannelSelectionPress () handleChannelSelectionPress Mode
Mode1 OutputPin ClockState Pin Encoder -encButton -encCLK -encDT LEDs
-leds EurorackClock -gates -externalClock -resetButton -leds -tempoLed
-clockState -instance AnalogInputPin InputPin MIDIHandler -gates
-instance -leds -clock Mode InputHandler -cvA -cvB LED Gates -gateArray
ResetButton -resetButton LEDController -leds Gate Mode1 -encoder
-midiHandler -gates -resetButton -inputHandler -ledController
Mode1confirmedChannel Mode1doublePressHandled Mode1encoder Mode1gates
Mode1handleButton Mode1handleChannelSelection
Mode1handleChannelSelectionPress Mode1handleDoublePress
Mode1handleEncoder Mode1handleLongPress Mode1handlePressReleased
Mode1handleResetDoublePress Mode1handleResetLongPress
Mode1handleResetPressReleased Mode1handleResetSinglePress
Mode1handleSelectionStates Mode1handleSinglePress
Mode1inChannelSelection Mode1inputHandler Mode1isInSelection
Mode1ledController Mode1midiHandler Mode1Mode1 Mode1NUM\_MIDI\_CHANNELS
Mode1numLeds Mode1previousChannel Mode1resetButton Mode1selectedChannel
Mode1setup Mode1singlePressHandled Mode1teardown Mode1update
