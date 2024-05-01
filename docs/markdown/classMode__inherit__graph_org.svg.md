Mode

Node1

Mode + virtual void handleSingle Press()=0 + virtual void handleDouble
Press()=0 + virtual void handleLongPress()=0 + virtual void handlePress
Released()=0 + virtual void handleSelection States()=0 + virtual void
handleReset SinglePress()=0 + virtual void handleReset DoublePress()=0 +
virtual void handleReset LongPress()=0 + virtual void handleReset
PressReleased()=0 + virtual void setup()=0 + virtual void teardown()=0 +
virtual void update()=0

Node2

[Mode0 - LEDController & ledController - Encoder & encoder - ResetButton
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
handleCVInput() - void handleTempoSelection()](classMode0.html " ")

Node1-\>Node2

Node3

[Mode1 - LEDController & ledController - InputHandler & inputHandler -
Encoder & encoder - ResetButton & resetButton - Gates & gates -
MIDIHandler & midiHandler - bool doublePressHandled - bool
inChannelSelection - bool isInSelection - bool singlePressHandled - int
selectedChannel - int confirmedChannel - int previousChannel - const int
NUM\_MIDI \_CHANNELS - int numLeds + Mode1(Encoder &encoder,
InputHandler &inputHandler, Gates &gates, LEDController &ledController,
MIDIHandler &midiHandler, ResetButton &resetButton) + void
handleSinglePress () override + void handleDoublePress () override +
void handleLongPress () override + void handlePressReleased () override
+ void handleSelectionStates () override + void handleResetSinglePress
() override + void handleResetDoublePress () override + void
handleResetLongPress () override + void handleResetPressReleased ()
override + void setup() override + void teardown() override + void
update() override - void handleEncoder() - void handleButton(Encoder
::ButtonState buttonState) - void handleChannelSelection() - void
handleChannelSelection Press()](classMode1.html " ")

Node1-\>Node3

Node4

[Mode2 - LEDController & ledController - InputHandler & inputHandler -
Encoder & encoder - ResetButton & resetButton - Gates & gates -
MIDIHandler & midiHandler - bool doublePressHandled - bool isInSelection
- bool singlePressHandled - int numLeds + Mode2(Encoder &encoder,
InputHandler &inputHandler, Gates &gates, LEDController &ledController,
MIDIHandler &midiHandler, ResetButton &resetButton) + void
handleSinglePress () override + void handleDoublePress () override +
void handleLongPress () override + void handlePressReleased () override
+ void handleSelectionStates () override + void handleResetSinglePress
() override + void handleResetDoublePress () override + void
handleResetLongPress () override + void handleResetPressReleased ()
override + void setup() override + void teardown() override + void
update() override - void handleEncoder() - void handleButton(Encoder
::ButtonState buttonState)](classMode2.html " ")

Node1-\>Node4
