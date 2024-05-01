Mode2 Mode Mode2.h LEDController & LEDController& Mode2::ledController
ledController InputHandler & InputHandler& Mode2::inputHandler
inputHandler Encoder & Encoder& Mode2::encoder encoder ResetButton &
ResetButton& Mode2::resetButton resetButton Gates & Gates& Mode2::gates
gates MIDIHandler & MIDIHandler& Mode2::midiHandler midiHandler bool
bool Mode2::doublePressHandled doublePressHandled = false bool bool
Mode2::isInSelection isInSelection = false bool bool
Mode2::singlePressHandled singlePressHandled = false int int
Mode2::numLeds numLeds = 8 Mode2::Mode2 (Encoder &encoder, InputHandler
&inputHandler, Gates &gates, LEDController &ledController, MIDIHandler
&midiHandler, ResetButton &resetButton) Mode2 Encoder & encoder
InputHandler & inputHandler Gates & gates LEDController & ledController
MIDIHandler & midiHandler ResetButton & resetButton void void
Mode2::handleSinglePress () override handleSinglePress handleSinglePress
void void Mode2::handleDoublePress () override handleDoublePress
handleDoublePress void void Mode2::handleLongPress () override
handleLongPress handleLongPress void void Mode2::handlePressReleased ()
override handlePressReleased handlePressReleased void void
Mode2::handleSelectionStates () override handleSelectionStates
handleSelectionStates void void Mode2::handleResetSinglePress ()
override handleResetSinglePress handleResetSinglePress void void
Mode2::handleResetDoublePress () override handleResetDoublePress
handleResetDoublePress void void Mode2::handleResetLongPress () override
handleResetLongPress handleResetLongPress void void
Mode2::handleResetPressReleased () override handleResetPressReleased
handleResetPressReleased void void Mode2::setup () override setup setup
void void Mode2::teardown () override teardown teardown void void
Mode2::update () override update update void void Mode2::handleEncoder
() handleEncoder void void Mode2::handleButton (Encoder::ButtonState
buttonState) handleButton Encoder::ButtonState buttonState Mode Mode2
OutputPin ClockState Pin Encoder -encButton -encCLK -encDT LEDs -leds
EurorackClock -gates -externalClock -resetButton -leds -tempoLed
-clockState -instance AnalogInputPin InputPin MIDIHandler -gates
-instance -leds -clock Mode InputHandler -cvA -cvB LED Gates -gateArray
ResetButton -resetButton LEDController -leds Gate Mode2 -encoder
-midiHandler -gates -resetButton -inputHandler -ledController
Mode2doublePressHandled Mode2encoder Mode2gates Mode2handleButton
Mode2handleDoublePress Mode2handleEncoder Mode2handleLongPress
Mode2handlePressReleased Mode2handleResetDoublePress
Mode2handleResetLongPress Mode2handleResetPressReleased
Mode2handleResetSinglePress Mode2handleSelectionStates
Mode2handleSinglePress Mode2inputHandler Mode2isInSelection
Mode2ledController Mode2midiHandler Mode2Mode2 Mode2numLeds
Mode2resetButton Mode2setup Mode2singlePressHandled Mode2teardown
Mode2update
