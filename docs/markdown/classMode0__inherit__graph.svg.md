Mode0

Node1

Mode0 - LEDController & ledController - Encoder & encoder - ResetButton
& resetButton - Gates & gates - EurorackClock & clock - MIDIHandler &
midiHandler - InputHandler & inputHandler - bool inDivisionSelection -
bool externalTempo - bool singlePressHandled and 9 more\... +
Mode0(Encoder &encoder, InputHandler &inputHandler, Gates &gates,
LEDController &ledController, MIDIHandler &midiHandler, ResetButton
&resetButton, EurorackClock &clock) + void handleSinglePress () override
+ void handleDoublePress () override + void handleLongPress () override
+ void handlePressReleased () override + void handleSelectionStates ()
override + void handleResetSinglePress () override + void
handleResetDoublePress () override + void handleResetLongPress ()
override + void handleResetPressReleased () override + void setup()
override + void teardown() override + void update() override + void
setDivisionPPQN (int ppqn) + void setDefaultDivisionIndex() - void
handleEncoder() - void handleButton(Encoder ::ButtonState buttonState) -
void handleResetButton (ResetButton::ButtonState buttonState) - void
handleCVInput() - void handleTempoSelection()

Node2

[Mode + virtual void handleSingle Press()=0 + virtual void handleDouble
Press()=0 + virtual void handleLongPress()=0 + virtual void handlePress
Released()=0 + virtual void handleSelection States()=0 + virtual void
handleReset SinglePress()=0 + virtual void handleReset DoublePress()=0 +
virtual void handleReset LongPress()=0 + virtual void handleReset
PressReleased()=0 + virtual void setup()=0 + virtual void teardown()=0 +
virtual void update()=0](classMode.html " ")

Node2-\>Node1

[](classMode0__inherit__graph_org.svg)
