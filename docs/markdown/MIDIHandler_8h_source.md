::: {#top}
::: {#titlearea}
+-----------------------------------------------------------------------+
| ::: {#projectname}                                                    |
| G8R                                                                   |
| :::                                                                   |
|                                                                       |
| ::: {#projectbrief}                                                   |
| Eurorack MIDI Module with 8 Gate Outputs                              |
| :::                                                                   |
+-----------------------------------------------------------------------+
:::

::: {#main-nav}
:::

::: {#MSearchSelectWindow onmouseover="return searchBox.OnSearchSelectShow()" onmouseout="return searchBox.OnSearchSelectHide()" onkeydown="return searchBox.OnSearchSelectKey(event)"}
:::

::: {#MSearchResultsWindow}
:::

::: {#nav-path .navpath}
-   [include](dir_d44c64559bbebec7f509842c48db8b23.html){.el}
:::
:::

::: {.header}
::: {.headertitle}
::: {.title}
MIDIHandler.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](MIDIHandler_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MIDIHANDLER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MIDIHANDLER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include \<MIDI.h\>]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[EurorackClock.h](EurorackClock_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Gates.h](Gates_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[LEDs.h](LEDs_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
:::

::: {.line}
[]{#l00009}[ [9](classMIDIHandler.html){.line}]{.lineno} [class
]{.keyword}[MIDIHandler](classMIDIHandler.html){.code} {
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} 
[MIDIHandler](classMIDIHandler.html#a111128982faa1b9ab120c93a952bb0c3){.code}(HardwareSerial&
serial, [EurorackClock](classEurorackClock.html){.code}&
[clock](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1){.code},
[Gates](classGates.html){.code}&
[gates](classMIDIHandler.html#a6e7403817e27f065202890151901ab12){.code},
[LEDs](classLEDs.html){.code}&
[leds](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7){.code});
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [void]{.keywordtype}
[begin](classMIDIHandler.html#aafab0b47b4d8293f93373cba2aa41129){.code}();
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [void]{.keywordtype}
[handleMidiMessage](classMIDIHandler.html#a45018066c1aaefbbd668db1339fba882){.code}();
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [void]{.keywordtype}
[setChannel](classMIDIHandler.html#ab4005150c6d9387f8df78dc1d1b17d45){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code});
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[setMode](classMIDIHandler.html#a725f296f31f0c3ae7805cbcfe9f5ee90){.code}([int]{.keywordtype}
mode);
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [// Declare static functions to handle MIDI
messages]{.comment}
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleClock](classMIDIHandler.html#a55a9edcae2619289d0ac93e3c517cde6){.code}();
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleStart](classMIDIHandler.html#a54da5c6224ba69e13f9abbfa20a106dc){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleStop](classMIDIHandler.html#a1b8c0df6a88955015079015f7d31e5dc){.code}();
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleContinue](classMIDIHandler.html#a9a363b48740934d0e9e9ca316c7af8ca){.code}();
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode0NoteOn](classMIDIHandler.html#a326ea56e31b41936a1e43c46954bab5b){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode0NoteOff](classMIDIHandler.html#aa80471de6d0b39a55bc221f02a426644){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode1NoteOn](classMIDIHandler.html#a49bacf4eaf9110d8a342bdc0cc86ca44){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode1NoteOff](classMIDIHandler.html#a92e2a2a1d49df9778b02a8a9c3792a11){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode2NoteOn](classMIDIHandler.html#a19cc82f664b2930415be7297d34b7c03){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [static]{.keyword} [void]{.keywordtype}
[handleMode2NoteOff](classMIDIHandler.html#a1e865329487a6882bea7dbad7041133e){.code}([byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code},
[byte]{.keywordtype} pitch, [byte]{.keywordtype} velocity);
:::

::: {.line}
[]{#l00028}[ 28]{.lineno} 
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} 
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00031}[ 31]{.lineno}  [// Declare a static instance of the
MIDIHandler class]{.comment}
:::

::: {.line}
[]{#l00032}[
[32](classMIDIHandler.html#a3d8701182deb4d7da29d1c3dd636b09d){.line}]{.lineno} 
[static]{.keyword} [MIDIHandler](classMIDIHandler.html){.code}\*
[instance](classMIDIHandler.html#a3d8701182deb4d7da29d1c3dd636b09d){.code};
:::

::: {.line}
[]{#l00033}[
[33](classMIDIHandler.html#aa4b65e5bb6d15ad16f1a81b71ad68032){.line}]{.lineno} 
midi::SerialMIDI\<HardwareSerial\>
[midiSerial](classMIDIHandler.html#aa4b65e5bb6d15ad16f1a81b71ad68032){.code};
:::

::: {.line}
[]{#l00034}[
[34](classMIDIHandler.html#ae40e99be5a079eed6e440731ae1ef93e){.line}]{.lineno} 
midi::MidiInterface\<midi::SerialMIDI\<HardwareSerial\>\>
[midi](classMIDIHandler.html#ae40e99be5a079eed6e440731ae1ef93e){.code};
:::

::: {.line}
[]{#l00035}[
[35](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1){.line}]{.lineno} 
[EurorackClock](classEurorackClock.html){.code}&
[clock](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1){.code};
:::

::: {.line}
[]{#l00036}[
[36](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.line}]{.lineno} 
[byte]{.keywordtype}
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.code}
= 10;
:::

::: {.line}
[]{#l00037}[
[37](classMIDIHandler.html#a6e7403817e27f065202890151901ab12){.line}]{.lineno} 
[Gates](classGates.html){.code}&
[gates](classMIDIHandler.html#a6e7403817e27f065202890151901ab12){.code};
:::

::: {.line}
[]{#l00038}[
[38](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7){.line}]{.lineno} 
[LEDs](classLEDs.html){.code}&
[leds](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7){.code};
:::

::: {.line}
[]{#l00039}[
[39](classMIDIHandler.html#a721a9b1ff8c56a43ac4bebc320e510ab){.line}]{.lineno} 
[static]{.keyword} [byte]{.keywordtype}
[confirmedChannel](classMIDIHandler.html#a721a9b1ff8c56a43ac4bebc320e510ab){.code};
:::

::: {.line}
[]{#l00040}[ 40]{.lineno} 
:::

::: {.line}
[]{#l00041}[ 41]{.lineno} };
:::

::: {.line}
[]{#l00042}[ 42]{.lineno} 
:::

::: {.line}
[]{#l00043}[ 43]{.lineno} [\#endif ]{.preprocessor}[//
MIDIHANDLER\_H]{.comment}
:::

::: {#aEurorackClock_8h_html .ttc}
::: {.ttname}
[EurorackClock.h](EurorackClock_8h.html)
:::
:::

::: {#aGates_8h_html .ttc}
::: {.ttname}
[Gates.h](Gates_8h.html)
:::
:::

::: {#aLEDs_8h_html .ttc}
::: {.ttname}
[LEDs.h](LEDs_8h.html)
:::
:::

::: {#aclassEurorackClock_html .ttc}
::: {.ttname}
[EurorackClock](classEurorackClock.html)
:::

::: {.ttdef}
**Definition:** EurorackClock.h:21
:::
:::

::: {#aclassGates_html .ttc}
::: {.ttname}
[Gates](classGates.html)
:::

::: {.ttdef}
**Definition:** Gates.h:10
:::
:::

::: {#aclassLEDs_html .ttc}
::: {.ttname}
[LEDs](classLEDs.html)
:::

::: {.ttdef}
**Definition:** LEDs.h:7
:::
:::

::: {#aclassMIDIHandler_html .ttc}
::: {.ttname}
[MIDIHandler](classMIDIHandler.html)
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:9
:::
:::

::: {#aclassMIDIHandler_html_a111128982faa1b9ab120c93a952bb0c3 .ttc}
::: {.ttname}
[MIDIHandler::MIDIHandler](classMIDIHandler.html#a111128982faa1b9ab120c93a952bb0c3)
:::

::: {.ttdeci}
MIDIHandler(HardwareSerial &serial, EurorackClock &clock, Gates &gates,
LEDs &leds)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:17
:::
:::

::: {#aclassMIDIHandler_html_a19cc82f664b2930415be7297d34b7c03 .ttc}
::: {.ttname}
[MIDIHandler::handleMode2NoteOn](classMIDIHandler.html#a19cc82f664b2930415be7297d34b7c03)
:::

::: {.ttdeci}
static void handleMode2NoteOn(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:94
:::
:::

::: {#aclassMIDIHandler_html_a1b8c0df6a88955015079015f7d31e5dc .ttc}
::: {.ttname}
[MIDIHandler::handleStop](classMIDIHandler.html#a1b8c0df6a88955015079015f7d31e5dc)
:::

::: {.ttdeci}
static void handleStop()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:55
:::
:::

::: {#aclassMIDIHandler_html_a1e865329487a6882bea7dbad7041133e .ttc}
::: {.ttname}
[MIDIHandler::handleMode2NoteOff](classMIDIHandler.html#a1e865329487a6882bea7dbad7041133e)
:::

::: {.ttdeci}
static void handleMode2NoteOff(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:106
:::
:::

::: {#aclassMIDIHandler_html_a326ea56e31b41936a1e43c46954bab5b .ttc}
::: {.ttname}
[MIDIHandler::handleMode0NoteOn](classMIDIHandler.html#a326ea56e31b41936a1e43c46954bab5b)
:::

::: {.ttdeci}
static void handleMode0NoteOn(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:65
:::
:::

::: {#aclassMIDIHandler_html_a3d8701182deb4d7da29d1c3dd636b09d .ttc}
::: {.ttname}
[MIDIHandler::instance](classMIDIHandler.html#a3d8701182deb4d7da29d1c3dd636b09d)
:::

::: {.ttdeci}
static MIDIHandler \* instance
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:32
:::
:::

::: {#aclassMIDIHandler_html_a45018066c1aaefbbd668db1339fba882 .ttc}
::: {.ttname}
[MIDIHandler::handleMidiMessage](classMIDIHandler.html#a45018066c1aaefbbd668db1339fba882)
:::

::: {.ttdeci}
void handleMidiMessage()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:37
:::
:::

::: {#aclassMIDIHandler_html_a49bacf4eaf9110d8a342bdc0cc86ca44 .ttc}
::: {.ttname}
[MIDIHandler::handleMode1NoteOn](classMIDIHandler.html#a49bacf4eaf9110d8a342bdc0cc86ca44)
:::

::: {.ttdeci}
static void handleMode1NoteOn(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:75
:::
:::

::: {#aclassMIDIHandler_html_a4d9d86bb2edeedb03de885327a14aaf1 .ttc}
::: {.ttname}
[MIDIHandler::clock](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1)
:::

::: {.ttdeci}
EurorackClock & clock
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:35
:::
:::

::: {#aclassMIDIHandler_html_a54da5c6224ba69e13f9abbfa20a106dc .ttc}
::: {.ttname}
[MIDIHandler::handleStart](classMIDIHandler.html#a54da5c6224ba69e13f9abbfa20a106dc)
:::

::: {.ttdeci}
static void handleStart()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:50
:::
:::

::: {#aclassMIDIHandler_html_a55a9edcae2619289d0ac93e3c517cde6 .ttc}
::: {.ttname}
[MIDIHandler::handleClock](classMIDIHandler.html#a55a9edcae2619289d0ac93e3c517cde6)
:::

::: {.ttdeci}
static void handleClock()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:45
:::
:::

::: {#aclassMIDIHandler_html_a5d8146fcf03b33ceca39730c382f989c .ttc}
::: {.ttname}
[MIDIHandler::channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c)
:::

::: {.ttdeci}
byte channel
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:36
:::
:::

::: {#aclassMIDIHandler_html_a6e7403817e27f065202890151901ab12 .ttc}
::: {.ttname}
[MIDIHandler::gates](classMIDIHandler.html#a6e7403817e27f065202890151901ab12)
:::

::: {.ttdeci}
Gates & gates
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:37
:::
:::

::: {#aclassMIDIHandler_html_a721a9b1ff8c56a43ac4bebc320e510ab .ttc}
::: {.ttname}
[MIDIHandler::confirmedChannel](classMIDIHandler.html#a721a9b1ff8c56a43ac4bebc320e510ab)
:::

::: {.ttdeci}
static byte confirmedChannel
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:39
:::
:::

::: {#aclassMIDIHandler_html_a725f296f31f0c3ae7805cbcfe9f5ee90 .ttc}
::: {.ttname}
[MIDIHandler::setMode](classMIDIHandler.html#a725f296f31f0c3ae7805cbcfe9f5ee90)
:::

::: {.ttdeci}
void setMode(int mode)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:110
:::
:::

::: {#aclassMIDIHandler_html_a92e2a2a1d49df9778b02a8a9c3792a11 .ttc}
::: {.ttname}
[MIDIHandler::handleMode1NoteOff](classMIDIHandler.html#a92e2a2a1d49df9778b02a8a9c3792a11)
:::

::: {.ttdeci}
static void handleMode1NoteOff(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:89
:::
:::

::: {#aclassMIDIHandler_html_a9a363b48740934d0e9e9ca316c7af8ca .ttc}
::: {.ttname}
[MIDIHandler::handleContinue](classMIDIHandler.html#a9a363b48740934d0e9e9ca316c7af8ca)
:::

::: {.ttdeci}
static void handleContinue()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:60
:::
:::

::: {#aclassMIDIHandler_html_aa4b65e5bb6d15ad16f1a81b71ad68032 .ttc}
::: {.ttname}
[MIDIHandler::midiSerial](classMIDIHandler.html#aa4b65e5bb6d15ad16f1a81b71ad68032)
:::

::: {.ttdeci}
midi::SerialMIDI\< HardwareSerial \> midiSerial
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:33
:::
:::

::: {#aclassMIDIHandler_html_aa80471de6d0b39a55bc221f02a426644 .ttc}
::: {.ttname}
[MIDIHandler::handleMode0NoteOff](classMIDIHandler.html#aa80471de6d0b39a55bc221f02a426644)
:::

::: {.ttdeci}
static void handleMode0NoteOff(byte channel, byte pitch, byte velocity)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:70
:::
:::

::: {#aclassMIDIHandler_html_aafab0b47b4d8293f93373cba2aa41129 .ttc}
::: {.ttname}
[MIDIHandler::begin](classMIDIHandler.html#aafab0b47b4d8293f93373cba2aa41129)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:23
:::
:::

::: {#aclassMIDIHandler_html_ab4005150c6d9387f8df78dc1d1b17d45 .ttc}
::: {.ttname}
[MIDIHandler::setChannel](classMIDIHandler.html#ab4005150c6d9387f8df78dc1d1b17d45)
:::

::: {.ttdeci}
void setChannel(byte channel)
:::

::: {.ttdef}
**Definition:** MIDIHandler.cpp:134
:::
:::

::: {#aclassMIDIHandler_html_ae40e99be5a079eed6e440731ae1ef93e .ttc}
::: {.ttname}
[MIDIHandler::midi](classMIDIHandler.html#ae40e99be5a079eed6e440731ae1ef93e)
:::

::: {.ttdeci}
midi::MidiInterface\< midi::SerialMIDI\< HardwareSerial \> \> midi
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:34
:::
:::

::: {#aclassMIDIHandler_html_af21335eb5ef193127459c58f068ebca7 .ttc}
::: {.ttname}
[MIDIHandler::leds](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7)
:::

::: {.ttdeci}
LEDs & leds
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:38
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
