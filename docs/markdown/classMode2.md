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
[Public Member Functions](#pub-methods) \| [Private Member
Functions](#pri-methods) \| [Private Attributes](#pri-attribs) \| [List
of all members](classMode2-members.html)
:::

::: {.headertitle}
::: {.title}
Mode2 Class Reference
:::
:::
:::

::: {.contents}
`#include <Mode2.h>`

::: {.dynheader}
Inheritance diagram for Mode2:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::

::: {.dynheader}
Collaboration diagram for Mode2:
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

 

[Mode2](classMode2.html#aa3d0d2137844e8e359d73db4ff991274){.el}
([Encoder](classEncoder.html){.el}
&[encoder](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7){.el},
[InputHandler](classInputHandler.html){.el}
&[inputHandler](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0){.el},
[Gates](classGates.html){.el}
&[gates](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259){.el},
[LEDController](classLEDController.html){.el}
&[ledController](classMode2.html#a432820b6e885e9fd7b34f438905bff56){.el},
[MIDIHandler](classMIDIHandler.html){.el}
&[midiHandler](classMode2.html#a296c6bf60e684f337c11b338e8b545ce){.el},
[ResetButton](classResetButton.html){.el}
&[resetButton](classMode2.html#a01e9205eb4c0aae549de2ead64413431){.el})

 

void 

[handleSinglePress](classMode2.html#ad0c3080fefd693164c4091435e3886d3){.el}
() override

 

void 

[handleDoublePress](classMode2.html#a4a844846f0e3acbf9476c959c4a9328c){.el}
() override

 

void 

[handleLongPress](classMode2.html#a0a566142bbc28d36a18168256e01e5e2){.el}
() override

 

void 

[handlePressReleased](classMode2.html#aa06056369a76dc1203d4f228a70ad384){.el}
() override

 

void 

[handleSelectionStates](classMode2.html#a00e770966c8f1d3a4c9214d38a127e26){.el}
() override

 

void 

[handleResetSinglePress](classMode2.html#a15de3fce5b6874e783f48bb30ac3c8a8){.el}
() override

 

void 

[handleResetDoublePress](classMode2.html#a571ea6b512d8fa4bc26d43849561049f){.el}
() override

 

void 

[handleResetLongPress](classMode2.html#a39215df4cb9d1e59c04e89ba753978b1){.el}
() override

 

void 

[handleResetPressReleased](classMode2.html#aa25c57375888b02cb609edc73585e376){.el}
() override

 

void 

[setup](classMode2.html#a0cf31cb7e85618022b870d485679c2b9){.el} ()
override

 

void 

[teardown](classMode2.html#ad3bfbb002457e274fd65abd7673e9782){.el} ()
override

 

void 

[update](classMode2.html#ad053ed624ffa14272894e0ca75b5c2b1){.el} ()
override

 

[]{#pri-methods} Private Member Functions {#private-member-functions .groupheader}
-----------------------------------------

void 

[handleEncoder](classMode2.html#a3cd955fd44bfb07a089b671097a157a5){.el}
()

 

void 

[handleButton](classMode2.html#a24e78ef9e1816bd462a6c45f72c06fcd){.el}
([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el}
buttonState)

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[LEDController](classLEDController.html){.el} & 

[ledController](classMode2.html#a432820b6e885e9fd7b34f438905bff56){.el}

 

[InputHandler](classInputHandler.html){.el} & 

[inputHandler](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0){.el}

 

[Encoder](classEncoder.html){.el} & 

[encoder](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7){.el}

 

[ResetButton](classResetButton.html){.el} & 

[resetButton](classMode2.html#a01e9205eb4c0aae549de2ead64413431){.el}

 

[Gates](classGates.html){.el} & 

[gates](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259){.el}

 

[MIDIHandler](classMIDIHandler.html){.el} & 

[midiHandler](classMode2.html#a296c6bf60e684f337c11b338e8b545ce){.el}

 

bool 

[doublePressHandled](classMode2.html#a46d08b4d2045d045e20e19e332db1aa0){.el}
= false

 

bool 

[isInSelection](classMode2.html#aa8b0804dda5ea06b8e7e1ae02c1e1433){.el}
= false

 

bool 

[singlePressHandled](classMode2.html#a88ba8e992c81440f88648812f4b93db4){.el}
= false

 

int 

[numLeds](classMode2.html#ad1eb111869a3753f05915a6f5d60f961){.el} = 8

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#aa3d0d2137844e8e359d73db4ff991274}

[[◆ ](#aa3d0d2137844e8e359d73db4ff991274)]{.permalink}Mode2() {#mode2 .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- -------------------------------------------------- ------------------
  Mode2::Mode2   (   [Encoder](classEncoder.html){.el} &                *encoder*,
                     [InputHandler](classInputHandler.html){.el} &      *inputHandler*,
                     [Gates](classGates.html){.el} &                    *gates*,
                     [LEDController](classLEDController.html){.el} &    *ledController*,
                     [MIDIHandler](classMIDIHandler.html){.el} &        *midiHandler*,
                     [ResetButton](classResetButton.html){.el} &        *resetButton* 
                 )                                                      
  -------------- --- -------------------------------------------------- ------------------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a24e78ef9e1816bd462a6c45f72c06fcd}

[[◆ ](#a24e78ef9e1816bd462a6c45f72c06fcd)]{.permalink}handleButton() {#handlebutton .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----                           | [[private]{.mlabel}]{.mlabels}    |
| --------------------- --- ------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| ---------- --------------- --- -- |                                   |
|   voi                             |                                   |
| d Mode2::handleButton   (   [Enco |                                   |
| der::ButtonState](classEncoder.ht |                                   |
| ml#a8d10c6f5e558cd9235db9375bf980 |                                   |
| ab9){.el}    *buttonState*   )    |                                   |
|   -----                           |                                   |
| --------------------- --- ------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4a844846f0e3acbf9476c959c4a9328c}

[[◆ ](#a4a844846f0e3acbf9476c959c4a9328c)]{.permalink}handleDoublePress() {#handledoublepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2                      |                                   |
| ::handleDoublePress   (      )    |                                   |
|   ------------                    |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a2f81571d058f2b1ed1592d2041799202){.el}.
:::
:::

[]{#a3cd955fd44bfb07a089b671097a157a5}

[[◆ ](#a3cd955fd44bfb07a089b671097a157a5)]{.permalink}handleEncoder() {#handleencoder .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void M                          |                                   |
| ode2::handleEncoder   (      )    |                                   |
|   --------                        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a0a566142bbc28d36a18168256e01e5e2}

[[◆ ](#a0a566142bbc28d36a18168256e01e5e2)]{.permalink}handleLongPress() {#handlelongpress .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mod                        |                                   |
| e2::handleLongPress   (      )    |                                   |
|   ----------                      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.el}.
:::
:::

[]{#aa06056369a76dc1203d4f228a70ad384}

[[◆ ](#aa06056369a76dc1203d4f228a70ad384)]{.permalink}handlePressReleased() {#handlepressreleased .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::                    |                                   |
| handlePressReleased   (      )    |                                   |
|   --------------                  |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#ae6c70842a6e744185300d3b44c06bcaf){.el}.
:::
:::

[]{#a571ea6b512d8fa4bc26d43849561049f}

[[◆ ](#a571ea6b512d8fa4bc26d43849561049f)]{.permalink}handleResetDoublePress() {#handleresetdoublepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::han                 |                                   |
| dleResetDoublePress   (      )    |                                   |
|   -----------------               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#aaa9b6958129f7d8e8bed339e790131e0){.el}.
:::
:::

[]{#a39215df4cb9d1e59c04e89ba753978b1}

[[◆ ](#a39215df4cb9d1e59c04e89ba753978b1)]{.permalink}handleResetLongPress() {#handleresetlongpress .memtitle}
----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::h                   |                                   |
| andleResetLongPress   (      )    |                                   |
|   ---------------                 |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#ac153613d96bea9fba3e9775e2861ef0e){.el}.
:::
:::

[]{#aa25c57375888b02cb609edc73585e376}

[[◆ ](#aa25c57375888b02cb609edc73585e376)]{.permalink}handleResetPressReleased() {#handleresetpressreleased .memtitle}
--------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::handl               |                                   |
| eResetPressReleased   (      )    |                                   |
|   -------------------             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a2b12c8d0ae0d884c8168218c4c167d92){.el}.
:::
:::

[]{#a15de3fce5b6874e783f48bb30ac3c8a8}

[[◆ ](#a15de3fce5b6874e783f48bb30ac3c8a8)]{.permalink}handleResetSinglePress() {#handleresetsinglepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::han                 |                                   |
| dleResetSinglePress   (      )    |                                   |
|   -----------------               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a81ad1f477340a92ebf3e5a3ed8427ca1){.el}.
:::
:::

[]{#a00e770966c8f1d3a4c9214d38a127e26}

[[◆ ](#a00e770966c8f1d3a4c9214d38a127e26)]{.permalink}handleSelectionStates() {#handleselectionstates .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------                | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::ha                  |                                   |
| ndleSelectionStates   (      )    |                                   |
|   ----------------                |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#ae272309e82f82d2967c16c80712fed28){.el}.
:::
:::

[]{#ad0c3080fefd693164c4091435e3886d3}

[[◆ ](#ad0c3080fefd693164c4091435e3886d3)]{.permalink}handleSinglePress() {#handlesinglepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2                      |                                   |
| ::handleSinglePress   (      )    |                                   |
|   ------------                    |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a278db06e9d46fe80d61d577f9f636fa2){.el}.
:::
:::

[]{#a0cf31cb7e85618022b870d485679c2b9}

[[◆ ](#a0cf31cb7e85618022b870d485679c2b9)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode2::setup   (      )    |                                   |
|                                   |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#acded67ff8ef9572e44948971385701ab){.el}.
:::
:::

[]{#ad3bfbb002457e274fd65abd7673e9782}

[[◆ ](#ad3bfbb002457e274fd65abd7673e9782)]{.permalink}teardown() {#teardown .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   v                               |                                   |
| oid Mode2::teardown   (      )    |                                   |
|   ---                             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a126f69890bd05de9745561a7f592aabd){.el}.
:::
:::

[]{#ad053ed624ffa14272894e0ca75b5c2b1}

[[◆ ](#ad053ed624ffa14272894e0ca75b5c2b1)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|                                   |                                   |
|  void Mode2::update   (      )    |                                   |
|   -                               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#aa2c21d9299b9df6912689e4ada8d3102){.el}.
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a46d08b4d2045d045e20e19e332db1aa0}

[[◆ ](#a46d08b4d2045d045e20e19e332db1aa0)]{.permalink}doublePressHandled {#doublepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode2::doublePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a69b706c00f657f336dee43ddd99ac6a7}

[[◆ ](#a69b706c00f657f336dee43ddd99ac6a7)]{.permalink}encoder {#encoder .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Encoder](classE                |                                   |
| ncoder.html){.el}& Mode2::encoder |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a2d0e2cb262c9a1b593d2ca26bce49259}

[[◆ ](#a2d0e2cb262c9a1b593d2ca26bce49259)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gates](cl                      |                                   |
| assGates.html){.el}& Mode2::gates |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a3743f7fa6df1df514bcbec1b031ba9f0}

[[◆ ](#a3743f7fa6df1df514bcbec1b031ba9f0)]{.permalink}inputHandler {#inputhandler .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [InputHandler](classInputHandle |                                   |
| r.html){.el}& Mode2::inputHandler |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa8b0804dda5ea06b8e7e1ae02c1e1433}

[[◆ ](#aa8b0804dda5ea06b8e7e1ae02c1e1433)]{.permalink}isInSelection {#isinselection .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| bool Mode2::isInSelection = false |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a432820b6e885e9fd7b34f438905bff56}

[[◆ ](#a432820b6e885e9fd7b34f438905bff56)]{.permalink}ledController {#ledcontroller .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [                               |                                   |
| LEDController](classLEDController |                                   |
| .html){.el}& Mode2::ledController |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a296c6bf60e684f337c11b338e8b545ce}

[[◆ ](#a296c6bf60e684f337c11b338e8b545ce)]{.permalink}midiHandler {#midihandler .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [MIDIHandler](classMIDIHandl    |                                   |
| er.html){.el}& Mode2::midiHandler |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ad1eb111869a3753f05915a6f5d60f961}

[[◆ ](#ad1eb111869a3753f05915a6f5d60f961)]{.permalink}numLeds {#numleds .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[private]{.mlabel}]{.mlabels}    |
|   int Mode2::numLeds = 8          |                                   |
|   ------------------------        |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a01e9205eb4c0aae549de2ead64413431}

[[◆ ](#a01e9205eb4c0aae549de2ead64413431)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [ResetButton](classResetButt    |                                   |
| on.html){.el}& Mode2::resetButton |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a88ba8e992c81440f88648812f4b93db4}

[[◆ ](#a88ba8e992c81440f88648812f4b93db4)]{.permalink}singlePressHandled {#singlepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode2::singlePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Mode2.h](Mode2_8h_source.html){.el}
-   src/[Mode2.cpp](Mode2_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
