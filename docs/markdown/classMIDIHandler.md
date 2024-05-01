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
:::

::: {.header}
::: {.summary}
[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [Private Attributes](#pri-attribs) \|
[Static Private Attributes](#pri-static-attribs) \| [List of all
members](classMIDIHandler-members.html)
:::

::: {.headertitle}
::: {.title}
MIDIHandler Class Reference
:::
:::
:::

::: {.contents}
`#include <MIDIHandler.h>`

::: {.dynheader}
Collaboration diagram for MIDIHandler:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------
:::

 

[MIDIHandler](classMIDIHandler.html#a111128982faa1b9ab120c93a952bb0c3){.el}
(HardwareSerial &serial, [EurorackClock](classEurorackClock.html){.el}
&[clock](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1){.el},
[Gates](classGates.html){.el}
&[gates](classMIDIHandler.html#a6e7403817e27f065202890151901ab12){.el},
[LEDs](classLEDs.html){.el}
&[leds](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7){.el})

 

void 

[begin](classMIDIHandler.html#aafab0b47b4d8293f93373cba2aa41129){.el} ()

 

void 

[handleMidiMessage](classMIDIHandler.html#a45018066c1aaefbbd668db1339fba882){.el}
()

 

void 

[setChannel](classMIDIHandler.html#ab4005150c6d9387f8df78dc1d1b17d45){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el})

 

void 

[setMode](classMIDIHandler.html#a725f296f31f0c3ae7805cbcfe9f5ee90){.el}
(int mode)

 

[]{#pub-static-methods} Static Public Member Functions {#static-public-member-functions .groupheader}
------------------------------------------------------

static void 

[handleClock](classMIDIHandler.html#a55a9edcae2619289d0ac93e3c517cde6){.el}
()

 

static void 

[handleStart](classMIDIHandler.html#a54da5c6224ba69e13f9abbfa20a106dc){.el}
()

 

static void 

[handleStop](classMIDIHandler.html#a1b8c0df6a88955015079015f7d31e5dc){.el}
()

 

static void 

[handleContinue](classMIDIHandler.html#a9a363b48740934d0e9e9ca316c7af8ca){.el}
()

 

static void 

[handleMode0NoteOn](classMIDIHandler.html#a326ea56e31b41936a1e43c46954bab5b){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

static void 

[handleMode0NoteOff](classMIDIHandler.html#aa80471de6d0b39a55bc221f02a426644){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

static void 

[handleMode1NoteOn](classMIDIHandler.html#a49bacf4eaf9110d8a342bdc0cc86ca44){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

static void 

[handleMode1NoteOff](classMIDIHandler.html#a92e2a2a1d49df9778b02a8a9c3792a11){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

static void 

[handleMode2NoteOn](classMIDIHandler.html#a19cc82f664b2930415be7297d34b7c03){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

static void 

[handleMode2NoteOff](classMIDIHandler.html#a1e865329487a6882bea7dbad7041133e){.el}
(byte
[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el},
byte pitch, byte velocity)

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

midi::SerialMIDI\< HardwareSerial \> 

[midiSerial](classMIDIHandler.html#aa4b65e5bb6d15ad16f1a81b71ad68032){.el}

 

midi::MidiInterface\< midi::SerialMIDI\< HardwareSerial \> \> 

[midi](classMIDIHandler.html#ae40e99be5a079eed6e440731ae1ef93e){.el}

 

[EurorackClock](classEurorackClock.html){.el} & 

[clock](classMIDIHandler.html#a4d9d86bb2edeedb03de885327a14aaf1){.el}

 

byte 

[channel](classMIDIHandler.html#a5d8146fcf03b33ceca39730c382f989c){.el}
= 10

 

[Gates](classGates.html){.el} & 

[gates](classMIDIHandler.html#a6e7403817e27f065202890151901ab12){.el}

 

[LEDs](classLEDs.html){.el} & 

[leds](classMIDIHandler.html#af21335eb5ef193127459c58f068ebca7){.el}

 

[]{#pri-static-attribs} Static Private Attributes {#static-private-attributes .groupheader}
-------------------------------------------------

static [MIDIHandler](classMIDIHandler.html){.el} \* 

[instance](classMIDIHandler.html#a3d8701182deb4d7da29d1c3dd636b09d){.el}
= nullptr

 

static byte 

[confirmedChannel](classMIDIHandler.html#a721a9b1ff8c56a43ac4bebc320e510ab){.el}
= 9

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a111128982faa1b9ab120c93a952bb0c3}

[[◆ ](#a111128982faa1b9ab120c93a952bb0c3)]{.permalink}MIDIHandler() {#midihandler .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -------------------------------------------------- -----------
  MIDIHandler::MIDIHandler   (   HardwareSerial &                                   *serial*,
                                 [EurorackClock](classEurorackClock.html){.el} &    *clock*,
                                 [Gates](classGates.html){.el} &                    *gates*,
                                 [LEDs](classLEDs.html){.el} &                      *leds* 
                             )                                                      
  -------------------------- --- -------------------------------------------------- -----------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#aafab0b47b4d8293f93373cba2aa41129}

[[◆ ](#aafab0b47b4d8293f93373cba2aa41129)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- -- --- --
  void MIDIHandler::begin   (      )   
  ------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a55a9edcae2619289d0ac93e3c517cde6}

[[◆ ](#a55a9edcae2619289d0ac93e3c517cde6)]{.permalink}handleClock() {#handleclock .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[static]{.mlabel}]{.mlabels}     |
| ------------------- --- -- --- -- |                                   |
|   void MIDIH                      |                                   |
| andler::handleClock   (      )    |                                   |
|   ------------                    |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a9a363b48740934d0e9e9ca316c7af8ca}

[[◆ ](#a9a363b48740934d0e9e9ca316c7af8ca)]{.permalink}handleContinue() {#handlecontinue .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[static]{.mlabel}]{.mlabels}     |
| ------------------- --- -- --- -- |                                   |
|   void MIDIHand                   |                                   |
| ler::handleContinue   (      )    |                                   |
|   ---------------                 |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a45018066c1aaefbbd668db1339fba882}

[[◆ ](#a45018066c1aaefbbd668db1339fba882)]{.permalink}handleMidiMessage() {#handlemidimessage .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  void MIDIHandler::handleMidiMessage   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#aa80471de6d0b39a55bc221f02a426644}

[[◆ ](#aa80471de6d0b39a55bc221f02a426644)]{.permalink}handleMode0NoteOff() {#handlemode0noteoff .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMode    |                                   |
| 0NoteOff   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------- |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a326ea56e31b41936a1e43c46954bab5b}

[[◆ ](#a326ea56e31b41936a1e43c46954bab5b)]{.permalink}handleMode0NoteOn() {#handlemode0noteon .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMod     |                                   |
| e0NoteOn   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------  |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a92e2a2a1d49df9778b02a8a9c3792a11}

[[◆ ](#a92e2a2a1d49df9778b02a8a9c3792a11)]{.permalink}handleMode1NoteOff() {#handlemode1noteoff .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMode    |                                   |
| 1NoteOff   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------- |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a49bacf4eaf9110d8a342bdc0cc86ca44}

[[◆ ](#a49bacf4eaf9110d8a342bdc0cc86ca44)]{.permalink}handleMode1NoteOn() {#handlemode1noteon .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMod     |                                   |
| e1NoteOn   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------  |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a1e865329487a6882bea7dbad7041133e}

[[◆ ](#a1e865329487a6882bea7dbad7041133e)]{.permalink}handleMode2NoteOff() {#handlemode2noteoff .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMode    |                                   |
| 2NoteOff   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------- |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a19cc82f664b2930415be7297d34b7c03}

[[◆ ](#a19cc82f664b2930415be7297d34b7c03)]{.permalink}handleMode2NoteOn() {#handlemode2noteon .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[static]{.mlabel}]{.mlabels}     |
| ------- --- ------- ------------- |                                   |
|   void MIDIHandler::handleMod     |                                   |
| e2NoteOn   (   byte    *channel*, |                                   |
|                                   |                                   |
|                  byte    *pitch*, |                                   |
|                                   |                                   |
|               byte    *velocity*  |                                   |
|                                   |                                   |
|                      )            |                                   |
|   ------------------------------  |                                   |
| ------- --- ------- ------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a54da5c6224ba69e13f9abbfa20a106dc}

[[◆ ](#a54da5c6224ba69e13f9abbfa20a106dc)]{.permalink}handleStart() {#handlestart .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[static]{.mlabel}]{.mlabels}     |
| ------------------- --- -- --- -- |                                   |
|   void MIDIH                      |                                   |
| andler::handleStart   (      )    |                                   |
|   ------------                    |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a1b8c0df6a88955015079015f7d31e5dc}

[[◆ ](#a1b8c0df6a88955015079015f7d31e5dc)]{.permalink}handleStop() {#handlestop .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------                     | [[static]{.mlabel}]{.mlabels}     |
| ------------------- --- -- --- -- |                                   |
|   void MIDI                       |                                   |
| Handler::handleStop   (      )    |                                   |
|   -----------                     |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab4005150c6d9387f8df78dc1d1b17d45}

[[◆ ](#ab4005150c6d9387f8df78dc1d1b17d45)]{.permalink}setChannel() {#setchannel .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- ------- ----------- --- --
  void MIDIHandler::setChannel   (   byte    *channel*   )   
  ------------------------------ --- ------- ----------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a725f296f31f0c3ae7805cbcfe9f5ee90}

[[◆ ](#a725f296f31f0c3ae7805cbcfe9f5ee90)]{.permalink}setMode() {#setmode .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- ------ -------- --- --
  void MIDIHandler::setMode   (   int    *mode*   )   
  --------------------------- --- ------ -------- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a5d8146fcf03b33ceca39730c382f989c}

[[◆ ](#a5d8146fcf03b33ceca39730c382f989c)]{.permalink}channel {#channel .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
|  -------------------------------- |                                   |
|   byte MIDIHandler::channel = 10  |                                   |
|                                   |                                   |
|  -------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4d9d86bb2edeedb03de885327a14aaf1}

[[◆ ](#a4d9d86bb2edeedb03de885327a14aaf1)]{.permalink}clock {#clock .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|                                   |                                   |
|  [EurorackClock](classEurorackClo |                                   |
| ck.html){.el}& MIDIHandler::clock |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a721a9b1ff8c56a43ac4bebc320e510ab}

[[◆ ](#a721a9b1ff8c56a43ac4bebc320e510ab)]{.permalink}confirmedChannel {#confirmedchannel .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   byte                            |                                   |
| MIDIHandler::confirmedChannel = 9 |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6e7403817e27f065202890151901ab12}

[[◆ ](#a6e7403817e27f065202890151901ab12)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gates](classGat                |                                   |
| es.html){.el}& MIDIHandler::gates |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a3d8701182deb4d7da29d1c3dd636b09d}

[[◆ ](#a3d8701182deb4d7da29d1c3dd636b09d)]{.permalink}instance {#instance .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
| --------------------------------- |                                   |
|   [MIDIHandl                      |                                   |
| er](classMIDIHandler.html){.el} \ |                                   |
| * MIDIHandler::instance = nullptr |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#af21335eb5ef193127459c58f068ebca7}

[[◆ ](#af21335eb5ef193127459c58f068ebca7)]{.permalink}leds {#leds .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [LEDs](classL                   |                                   |
| EDs.html){.el}& MIDIHandler::leds |                                   |
|   ---------------                 |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae40e99be5a079eed6e440731ae1ef93e}

[[◆ ](#ae40e99be5a079eed6e440731ae1ef93e)]{.permalink}midi {#midi .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   midi::Midi                      |                                   |
| Interface\<midi::SerialMIDI\<Hard |                                   |
| wareSerial\> \> MIDIHandler::midi |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa4b65e5bb6d15ad16f1a81b71ad68032}

[[◆ ](#aa4b65e5bb6d15ad16f1a81b71ad68032)]{.permalink}midiSerial {#midiserial .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   midi::SerialMIDI\<Hardwar       |                                   |
| eSerial\> MIDIHandler::midiSerial |                                   |
|   ---------------------------     |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[MIDIHandler.h](MIDIHandler_8h_source.html){.el}
-   src/[MIDIHandler.cpp](MIDIHandler_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
