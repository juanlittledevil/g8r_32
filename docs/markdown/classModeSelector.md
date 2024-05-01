ModeSelector ModeSelector.h std::vector\< Mode \* \>
std::vector\<Mode\*\> ModeSelector::modes modes Mode \* Mode\*
ModeSelector::nullMode nullMode = nullptr Mode \*& Mode\*&
ModeSelector::currentMode currentMode int int ModeSelector::mode mode
int int ModeSelector::inModeSelection inModeSelection = false
LEDController \* LEDController\* ModeSelector::ledController
ledController Encoder \* Encoder\* ModeSelector::encoder encoder
ResetButton \* ResetButton\* ModeSelector::resetButton resetButton bool
bool ModeSelector::isInSelection isInSelection bool bool
ModeSelector::inChannelSelection inChannelSelection bool bool
ModeSelector::singlePressHandled singlePressHandled bool bool
ModeSelector::doublePressHandled doublePressHandled bool bool
ModeSelector::longPressHandled longPressHandled size\_t size\_t
ModeSelector::totalModes totalModes = modes.size() int int
ModeSelector::previousMode previousMode = -1 int int
ModeSelector::numLeds numLeds ModeSelector & ModeSelector &
ModeSelector::getInstance () getInstance int int ModeSelector::getMode
() const getMode void void ModeSelector::setMode (int newMode) setMode
int newMode void void ModeSelector::handleLongPress () handleLongPress
void void ModeSelector::handleEncoderRotation () handleEncoderRotation
void void ModeSelector::handleModeSelectionPress ()
handleModeSelectionPress void void ModeSelector::handleButtonPress ()
handleButtonPress void void ModeSelector::setLedController
(LEDController &ledController) setLedController LEDController &
ledController void void ModeSelector::setEncoder (Encoder &encoder)
setEncoder Encoder & encoder void void ModeSelector::setCurrentMode
(Mode \*&currentMode) setCurrentMode Mode \*& currentMode bool bool
ModeSelector::isInModeSelection () isInModeSelection Mode \* Mode \*
ModeSelector::getCurrentMode () getCurrentMode void void
ModeSelector::addMode (Mode \*mode) addMode Mode \* mode void void
ModeSelector::update () update ModeSelector::ModeSelector ()
ModeSelector ModeSelector::ModeSelector (ModeSelector const &)
ModeSelector ModeSelector const & void void ModeSelector::operator=
(ModeSelector const &) operator= ModeSelector const & OutputPin Pin
Encoder -encButton -encCLK -encDT LEDs -leds InputPin Mode LED
ResetButton -resetButton ModeSelector -encoder -currentMode -nullMode
-resetButton -ledController LEDController -leds ModeSelectoraddMode
ModeSelectorcurrentMode ModeSelectordoublePressHandled
ModeSelectorencoder ModeSelectorgetCurrentMode ModeSelectorgetInstance
ModeSelectorgetMode ModeSelectorhandleButtonPress
ModeSelectorhandleEncoderRotation ModeSelectorhandleLongPress
ModeSelectorhandleModeSelectionPress ModeSelectorinChannelSelection
ModeSelectorinModeSelection ModeSelectorisInModeSelection
ModeSelectorisInSelection ModeSelectorledController
ModeSelectorlongPressHandled ModeSelectormode ModeSelectormodes
ModeSelectorModeSelector ModeSelectorModeSelector ModeSelectornullMode
ModeSelectornumLeds ModeSelectoroperator= ModeSelectorpreviousMode
ModeSelectorresetButton ModeSelectorsetCurrentMode
ModeSelectorsetEncoder ModeSelectorsetLedController ModeSelectorsetMode
ModeSelectorsinglePressHandled ModeSelectortotalModes ModeSelectorupdate
