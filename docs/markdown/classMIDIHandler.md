::: {#classMIDIHandler}
:::

[\[classMIDIHandler\]]{#classMIDIHandler label="classMIDIHandler"}

\#include $<$MIDIHandler.h$>$

Collaboration diagram for MIDIHandler:

![image](classMIDIHandler__coll__graph){height="550pt"}

[MIDIHandler](#classMIDIHandler_a111128982faa1b9ab120c93a952bb0c3)
(HardwareSerial &serial, [EurorackClock](#classEurorackClock)
&[clock](#classMIDIHandler_a4d9d86bb2edeedb03de885327a14aaf1),
[Gates](#classGates)
&[gates](#classMIDIHandler_a6e7403817e27f065202890151901ab12),
[LEDs](#classLEDs)
&[leds](#classMIDIHandler_af21335eb5ef193127459c58f068ebca7))

void [begin](#classMIDIHandler_aafab0b47b4d8293f93373cba2aa41129) ()

void
[handleMidiMessage](#classMIDIHandler_a45018066c1aaefbbd668db1339fba882)
()

void [setChannel](#classMIDIHandler_ab4005150c6d9387f8df78dc1d1b17d45)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c))

void [setMode](#classMIDIHandler_a725f296f31f0c3ae7805cbcfe9f5ee90) (int
mode)

static void
[handleClock](#classMIDIHandler_a55a9edcae2619289d0ac93e3c517cde6) ()

static void
[handleStart](#classMIDIHandler_a54da5c6224ba69e13f9abbfa20a106dc) ()

static void
[handleStop](#classMIDIHandler_a1b8c0df6a88955015079015f7d31e5dc) ()

static void
[handleContinue](#classMIDIHandler_a9a363b48740934d0e9e9ca316c7af8ca) ()

static void
[handleMode0NoteOn](#classMIDIHandler_a326ea56e31b41936a1e43c46954bab5b)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

static void
[handleMode0NoteOff](#classMIDIHandler_aa80471de6d0b39a55bc221f02a426644)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

static void
[handleMode1NoteOn](#classMIDIHandler_a49bacf4eaf9110d8a342bdc0cc86ca44)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

static void
[handleMode1NoteOff](#classMIDIHandler_a92e2a2a1d49df9778b02a8a9c3792a11)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

static void
[handleMode2NoteOn](#classMIDIHandler_a19cc82f664b2930415be7297d34b7c03)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

static void
[handleMode2NoteOff](#classMIDIHandler_a1e865329487a6882bea7dbad7041133e)
(byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c),
byte pitch, byte velocity)

midi::SerialMIDI$<$ HardwareSerial $>$
[midiSerial](#classMIDIHandler_aa4b65e5bb6d15ad16f1a81b71ad68032)

midi::MidiInterface$<$ midi::SerialMIDI$<$ HardwareSerial $>$ $>$
[midi](#classMIDIHandler_ae40e99be5a079eed6e440731ae1ef93e)

[EurorackClock](#classEurorackClock) &
[clock](#classMIDIHandler_a4d9d86bb2edeedb03de885327a14aaf1)

byte [channel](#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c) = 10

[Gates](#classGates) &
[gates](#classMIDIHandler_a6e7403817e27f065202890151901ab12)

[LEDs](#classLEDs) &
[leds](#classMIDIHandler_af21335eb5ef193127459c58f068ebca7)

static [MIDIHandler](#classMIDIHandler) $\ast$
[instance](#classMIDIHandler_a3d8701182deb4d7da29d1c3dd636b09d) =
nullptr

static byte
[confirmedChannel](#classMIDIHandler_a721a9b1ff8c56a43ac4bebc320e510ab)
= 9

[\[classMIDIHandler\_a111128982faa1b9ab120c93a952bb0c3\]]{#classMIDIHandler_a111128982faa1b9ab120c93a952bb0c3
label="classMIDIHandler_a111128982faa1b9ab120c93a952bb0c3"}

MIDIHandler::MIDIHandler (

serial,

clock,

gates,

leds

)

[\[classMIDIHandler\_aafab0b47b4d8293f93373cba2aa41129\]]{#classMIDIHandler_aafab0b47b4d8293f93373cba2aa41129
label="classMIDIHandler_aafab0b47b4d8293f93373cba2aa41129"}

void MIDIHandler::begin (

)

[\[classMIDIHandler\_a55a9edcae2619289d0ac93e3c517cde6\]]{#classMIDIHandler_a55a9edcae2619289d0ac93e3c517cde6
label="classMIDIHandler_a55a9edcae2619289d0ac93e3c517cde6"}

void MIDIHandler::handleClock (

)

[\[classMIDIHandler\_a9a363b48740934d0e9e9ca316c7af8ca\]]{#classMIDIHandler_a9a363b48740934d0e9e9ca316c7af8ca
label="classMIDIHandler_a9a363b48740934d0e9e9ca316c7af8ca"}

void MIDIHandler::handleContinue (

)

[\[classMIDIHandler\_a45018066c1aaefbbd668db1339fba882\]]{#classMIDIHandler_a45018066c1aaefbbd668db1339fba882
label="classMIDIHandler_a45018066c1aaefbbd668db1339fba882"}

void MIDIHandler::handleMidiMessage (

)

[\[classMIDIHandler\_aa80471de6d0b39a55bc221f02a426644\]]{#classMIDIHandler_aa80471de6d0b39a55bc221f02a426644
label="classMIDIHandler_aa80471de6d0b39a55bc221f02a426644"}

void MIDIHandler::handleMode0NoteOff (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a326ea56e31b41936a1e43c46954bab5b\]]{#classMIDIHandler_a326ea56e31b41936a1e43c46954bab5b
label="classMIDIHandler_a326ea56e31b41936a1e43c46954bab5b"}

void MIDIHandler::handleMode0NoteOn (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a92e2a2a1d49df9778b02a8a9c3792a11\]]{#classMIDIHandler_a92e2a2a1d49df9778b02a8a9c3792a11
label="classMIDIHandler_a92e2a2a1d49df9778b02a8a9c3792a11"}

void MIDIHandler::handleMode1NoteOff (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a49bacf4eaf9110d8a342bdc0cc86ca44\]]{#classMIDIHandler_a49bacf4eaf9110d8a342bdc0cc86ca44
label="classMIDIHandler_a49bacf4eaf9110d8a342bdc0cc86ca44"}

void MIDIHandler::handleMode1NoteOn (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a1e865329487a6882bea7dbad7041133e\]]{#classMIDIHandler_a1e865329487a6882bea7dbad7041133e
label="classMIDIHandler_a1e865329487a6882bea7dbad7041133e"}

void MIDIHandler::handleMode2NoteOff (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a19cc82f664b2930415be7297d34b7c03\]]{#classMIDIHandler_a19cc82f664b2930415be7297d34b7c03
label="classMIDIHandler_a19cc82f664b2930415be7297d34b7c03"}

void MIDIHandler::handleMode2NoteOn (

channel,

pitch,

velocity

)

[\[classMIDIHandler\_a54da5c6224ba69e13f9abbfa20a106dc\]]{#classMIDIHandler_a54da5c6224ba69e13f9abbfa20a106dc
label="classMIDIHandler_a54da5c6224ba69e13f9abbfa20a106dc"}

void MIDIHandler::handleStart (

)

[\[classMIDIHandler\_a1b8c0df6a88955015079015f7d31e5dc\]]{#classMIDIHandler_a1b8c0df6a88955015079015f7d31e5dc
label="classMIDIHandler_a1b8c0df6a88955015079015f7d31e5dc"}

void MIDIHandler::handleStop (

)

[\[classMIDIHandler\_ab4005150c6d9387f8df78dc1d1b17d45\]]{#classMIDIHandler_ab4005150c6d9387f8df78dc1d1b17d45
label="classMIDIHandler_ab4005150c6d9387f8df78dc1d1b17d45"}

void MIDIHandler::setChannel (

channel

)

[\[classMIDIHandler\_a725f296f31f0c3ae7805cbcfe9f5ee90\]]{#classMIDIHandler_a725f296f31f0c3ae7805cbcfe9f5ee90
label="classMIDIHandler_a725f296f31f0c3ae7805cbcfe9f5ee90"}

void MIDIHandler::setMode (

mode

)

[\[classMIDIHandler\_a5d8146fcf03b33ceca39730c382f989c\]]{#classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c
label="classMIDIHandler_a5d8146fcf03b33ceca39730c382f989c"} byte
MIDIHandler::channel = 10

[\[classMIDIHandler\_a4d9d86bb2edeedb03de885327a14aaf1\]]{#classMIDIHandler_a4d9d86bb2edeedb03de885327a14aaf1
label="classMIDIHandler_a4d9d86bb2edeedb03de885327a14aaf1"}
[EurorackClock](#classEurorackClock)& MIDIHandler::clock

[\[classMIDIHandler\_a721a9b1ff8c56a43ac4bebc320e510ab\]]{#classMIDIHandler_a721a9b1ff8c56a43ac4bebc320e510ab
label="classMIDIHandler_a721a9b1ff8c56a43ac4bebc320e510ab"} byte
MIDIHandler::confirmedChannel = 9,

[\[classMIDIHandler\_a6e7403817e27f065202890151901ab12\]]{#classMIDIHandler_a6e7403817e27f065202890151901ab12
label="classMIDIHandler_a6e7403817e27f065202890151901ab12"}
[Gates](#classGates)& MIDIHandler::gates

[\[classMIDIHandler\_a3d8701182deb4d7da29d1c3dd636b09d\]]{#classMIDIHandler_a3d8701182deb4d7da29d1c3dd636b09d
label="classMIDIHandler_a3d8701182deb4d7da29d1c3dd636b09d"}
[MIDIHandler](#classMIDIHandler) $\ast$ MIDIHandler::instance = nullptr,

[\[classMIDIHandler\_af21335eb5ef193127459c58f068ebca7\]]{#classMIDIHandler_af21335eb5ef193127459c58f068ebca7
label="classMIDIHandler_af21335eb5ef193127459c58f068ebca7"}
[LEDs](#classLEDs)& MIDIHandler::leds

[\[classMIDIHandler\_ae40e99be5a079eed6e440731ae1ef93e\]]{#classMIDIHandler_ae40e99be5a079eed6e440731ae1ef93e
label="classMIDIHandler_ae40e99be5a079eed6e440731ae1ef93e"}
midi::MidiInterface$<$midi::SerialMIDI$<$HardwareSerial$>$ $>$
MIDIHandler::midi

[\[classMIDIHandler\_aa4b65e5bb6d15ad16f1a81b71ad68032\]]{#classMIDIHandler_aa4b65e5bb6d15ad16f1a81b71ad68032
label="classMIDIHandler_aa4b65e5bb6d15ad16f1a81b71ad68032"}
midi::SerialMIDI$<$HardwareSerial$>$ MIDIHandler::midiSerial

The documentation for this class was generated from the following files:

include/[MIDIHandler.h](#MIDIHandler_8h)

src/[MIDIHandler.cpp](#MIDIHandler_8cpp)
