MIDIHandler MIDIHandler.h MIDIHandler \* MIDIHandler \*
MIDIHandler::instance instance = nullptr byte byte
MIDIHandler::confirmedChannel confirmedChannel = 9 midi::SerialMIDI\<
HardwareSerial \> midi::SerialMIDI\<HardwareSerial\>
MIDIHandler::midiSerial midiSerial midi::MidiInterface\<
midi::SerialMIDI\< HardwareSerial \> \>
midi::MidiInterface\<midi::SerialMIDI\<HardwareSerial\> \>
MIDIHandler::midi midi EurorackClock & EurorackClock& MIDIHandler::clock
clock byte byte MIDIHandler::channel channel = 10 Gates & Gates&
MIDIHandler::gates gates LEDs & LEDs& MIDIHandler::leds leds
MIDIHandler::MIDIHandler (HardwareSerial &serial, EurorackClock &clock,
Gates &gates, LEDs &leds) MIDIHandler HardwareSerial & serial
EurorackClock & clock Gates & gates LEDs & leds void void
MIDIHandler::begin () begin void void MIDIHandler::handleMidiMessage ()
handleMidiMessage void void MIDIHandler::setChannel (byte channel)
setChannel byte channel void void MIDIHandler::setMode (int mode)
setMode int mode void void MIDIHandler::handleClock () handleClock void
void MIDIHandler::handleStart () handleStart void void
MIDIHandler::handleStop () handleStop void void
MIDIHandler::handleContinue () handleContinue void void
MIDIHandler::handleMode0NoteOn (byte channel, byte pitch, byte velocity)
handleMode0NoteOn byte channel byte pitch byte velocity void void
MIDIHandler::handleMode0NoteOff (byte channel, byte pitch, byte
velocity) handleMode0NoteOff byte channel byte pitch byte velocity void
void MIDIHandler::handleMode1NoteOn (byte channel, byte pitch, byte
velocity) handleMode1NoteOn byte channel byte pitch byte velocity void
void MIDIHandler::handleMode1NoteOff (byte channel, byte pitch, byte
velocity) handleMode1NoteOff byte channel byte pitch byte velocity void
void MIDIHandler::handleMode2NoteOn (byte channel, byte pitch, byte
velocity) handleMode2NoteOn byte channel byte pitch byte velocity void
void MIDIHandler::handleMode2NoteOff (byte channel, byte pitch, byte
velocity) handleMode2NoteOff byte channel byte pitch byte velocity
OutputPin ClockState Pin LEDs -leds EurorackClock -gates -externalClock
-resetButton -leds -tempoLed -clockState -instance InputPin MIDIHandler
-gates -instance -leds -clock LED Gates -gateArray Gate MIDIHandlerbegin
MIDIHandlerchannel MIDIHandlerclock MIDIHandlerconfirmedChannel
MIDIHandlergates MIDIHandlerhandleClock MIDIHandlerhandleContinue
MIDIHandlerhandleMidiMessage MIDIHandlerhandleMode0NoteOff
MIDIHandlerhandleMode0NoteOn MIDIHandlerhandleMode1NoteOff
MIDIHandlerhandleMode1NoteOn MIDIHandlerhandleMode2NoteOff
MIDIHandlerhandleMode2NoteOn MIDIHandlerhandleStart
MIDIHandlerhandleStop MIDIHandlerinstance MIDIHandlerleds
MIDIHandlermidi MIDIHandlerMIDIHandler MIDIHandlermidiSerial
MIDIHandlersetChannel MIDIHandlersetMode
