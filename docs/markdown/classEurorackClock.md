EurorackClock EurorackClock.h ClockState ClockState
EurorackClock::clockState clockState HardwareTimer \* HardwareTimer\*
EurorackClock::timer timer LED LED EurorackClock::tempoLed tempoLed
InputPin InputPin EurorackClock::externalClock externalClock InputPin
InputPin EurorackClock::resetButton resetButton Gates & Gates&
EurorackClock::gates gates LEDs & LEDs& EurorackClock::leds leds float
float EurorackClock::tempo tempo float float EurorackClock::lastTickTime
lastTickTime float float EurorackClock::tickInterval tickInterval float
float EurorackClock::lastExternalTickTime lastExternalTickTime unsigned
long unsigned long EurorackClock::lastMidiClockTime lastMidiClockTime
int int EurorackClock::ledOnDuration ledOnDuration =
LONG\_LED\_ON\_DURATION unsigned long unsigned long
EurorackClock::ledOnTime ledOnTime = 0 int int EurorackClock::clockPin
clockPin int int EurorackClock::resetPin resetPin int int
EurorackClock::ppqn ppqn bool bool EurorackClock::isRunning isRunning
bool bool EurorackClock::isExternalTempo isExternalTempo bool bool
EurorackClock::isMidiClock isMidiClock bool bool
EurorackClock::timeToFlash timeToFlash bool bool
EurorackClock::resetTriggered resetTriggered float float
EurorackClock::externalTempo externalTempo int int
EurorackClock::lastClockState lastClockState unsigned long unsigned long
EurorackClock::lastClockTime lastClockTime int int
EurorackClock::tickCount tickCount EurorackClock \* EurorackClock \*
EurorackClock::instance instance = nullptr float float
EurorackClock::lastFlashTime lastFlashTime = 0 int int
EurorackClock::flashPulseCount flashPulseCount = 0 const unsigned long
const unsigned long EurorackClock::MIDI\_CLOCK\_TIMEOUT
MIDI\_CLOCK\_TIMEOUT = 1000 const int const int
EurorackClock::LED\_ON\_DURATION LED\_ON\_DURATION = 10 const int const
int EurorackClock::LONG\_LED\_ON\_DURATION LONG\_LED\_ON\_DURATION = 50
const int const int EurorackClock::MIDI\_CLOCK\_PULSE\_COUNT
MIDI\_CLOCK\_PULSE\_COUNT = 24 EurorackClock::EurorackClock (int
clockPin, int resetPin, int tempoLedPin, Gates &gates, LEDs &leds)
EurorackClock int clockPin int resetPin int tempoLedPin Gates & gates
LEDs & leds void void EurorackClock::setup () setup void void
EurorackClock::start () start void void EurorackClock::stop () stop void
void EurorackClock::reset () reset void void EurorackClock::reset (int
selectedGate) reset int selectedGate void void EurorackClock::tick ()
tick void void EurorackClock::setTempo (float newTempo, int ppqn)
setTempo float newTempo int ppqn int int EurorackClock::getTempo ()
const getTempo void void EurorackClock::flashTempoLed () flashTempoLed
void void EurorackClock::handleExternalClock () handleExternalClock void
void EurorackClock::handleMidiClock () handleMidiClock void void
EurorackClock::setPPQN (int ppqn) setPPQN int ppqn void void
EurorackClock::setExternalTempo (bool isExternalTempo) setExternalTempo
bool isExternalTempo void void EurorackClock::toggleLedOnDuration (bool
selectingTempo) toggleLedOnDuration bool selectingTempo void static void
EurorackClock::interruptHandler () interruptHandler void static void
EurorackClock::resetInterruptHandler () resetInterruptHandler void void
EurorackClock::updateTempoLed (unsigned long currentTime) updateTempoLed
unsigned long currentTime void void EurorackClock::updateFlashPulseCount
() updateFlashPulseCount bool bool
EurorackClock::shouldTriggerClockPulse () shouldTriggerClockPulse void
void EurorackClock::triggerClockPulse () triggerClockPulse void void
EurorackClock::handleResetTrigger () handleResetTrigger void void
EurorackClock::decideFlash () decideFlash void void
EurorackClock::triggerTempoLed (unsigned long currentTime)
triggerTempoLed unsigned long currentTime void void
EurorackClock::triggerGates (unsigned long currentTime) triggerGates
unsigned long currentTime void void EurorackClock::handleTempoLed
(unsigned long currentTime) handleTempoLed unsigned long currentTime
OutputPin ClockState Pin LEDs -leds EurorackClock -gates -externalClock
-resetButton -leds -tempoLed -clockState -instance InputPin LED Gates
-gateArray Gate EurorackClockclockPin EurorackClockclockState
EurorackClockdecideFlash EurorackClockEurorackClock
EurorackClockexternalClock EurorackClockexternalTempo
EurorackClockflashPulseCount EurorackClockflashTempoLed
EurorackClockgates EurorackClockgetTempo
EurorackClockhandleExternalClock EurorackClockhandleMidiClock
EurorackClockhandleResetTrigger EurorackClockhandleTempoLed
EurorackClockinstance EurorackClockinterruptHandler
EurorackClockisExternalTempo EurorackClockisMidiClock
EurorackClockisRunning EurorackClocklastClockState
EurorackClocklastClockTime EurorackClocklastExternalTickTime
EurorackClocklastFlashTime EurorackClocklastMidiClockTime
EurorackClocklastTickTime EurorackClockLED\_ON\_DURATION
EurorackClockledOnDuration EurorackClockledOnTime EurorackClockleds
EurorackClockLONG\_LED\_ON\_DURATION
EurorackClockMIDI\_CLOCK\_PULSE\_COUNT EurorackClockMIDI\_CLOCK\_TIMEOUT
EurorackClockppqn EurorackClockreset EurorackClockreset
EurorackClockresetButton EurorackClockresetInterruptHandler
EurorackClockresetPin EurorackClockresetTriggered
EurorackClocksetExternalTempo EurorackClocksetPPQN EurorackClocksetTempo
EurorackClocksetup EurorackClockshouldTriggerClockPulse
EurorackClockstart EurorackClockstop EurorackClocktempo
EurorackClocktempoLed EurorackClocktick EurorackClocktickCount
EurorackClocktickInterval EurorackClocktimer EurorackClocktimeToFlash
EurorackClocktoggleLedOnDuration EurorackClocktriggerClockPulse
EurorackClocktriggerGates EurorackClocktriggerTempoLed
EurorackClockupdateFlashPulseCount EurorackClockupdateTempoLed
