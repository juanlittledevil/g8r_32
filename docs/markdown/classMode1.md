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
of all members](classMode1-members.html)
:::

::: {.headertitle}
::: {.title}
Mode1 Class Reference
:::
:::
:::

::: {.contents}
`#include <Mode1.h>`

::: {.dynheader}
Inheritance diagram for Mode1:
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
Collaboration diagram for Mode1:
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

 

[Mode1](classMode1.html#ac50bac6ef48f13b9f9f23066ee3a14da){.el}
([Encoder](classEncoder.html){.el}
&[encoder](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72){.el},
[InputHandler](classInputHandler.html){.el}
&[inputHandler](classMode1.html#ab553243d551d5337b9d11451c257813c){.el},
[Gates](classGates.html){.el}
&[gates](classMode1.html#abf42339815e644befd936ad85c4b6d87){.el},
[LEDController](classLEDController.html){.el}
&[ledController](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d){.el},
[MIDIHandler](classMIDIHandler.html){.el}
&[midiHandler](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac){.el},
[ResetButton](classResetButton.html){.el}
&[resetButton](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad){.el})

 

void 

[handleSinglePress](classMode1.html#a01c39504689522af8e908f3a9f629f3d){.el}
() override

 

void 

[handleDoublePress](classMode1.html#aece3b8dfd8fbe3a049dd50cac7827163){.el}
() override

 

void 

[handleLongPress](classMode1.html#a3efa76e8f49820d5506a2fddba895d1a){.el}
() override

 

void 

[handlePressReleased](classMode1.html#a27a79d962981799ecb081f6b2116bc4c){.el}
() override

 

void 

[handleSelectionStates](classMode1.html#ad456ee0f626d63c9f96db8a8fbbedae5){.el}
() override

 

void 

[handleResetSinglePress](classMode1.html#a130b9bda7ac6c03348c1e0f652f4c40f){.el}
() override

 

void 

[handleResetDoublePress](classMode1.html#a3faff5eb1aea3412f05145d5894778be){.el}
() override

 

void 

[handleResetLongPress](classMode1.html#ab4c68c413efac263349524806bdb6262){.el}
() override

 

void 

[handleResetPressReleased](classMode1.html#aaf69b8382102d521c89786ab12513748){.el}
() override

 

void 

[setup](classMode1.html#aa3c75dd038802a4e3ab7381a82cfa0bd){.el} ()
override

 

void 

[teardown](classMode1.html#ac71878a012a9adb6adcba2c8338be06e){.el} ()
override

 

void 

[update](classMode1.html#ab4ed6fb24ddf6f713cbde450496cd16d){.el} ()
override

 

[]{#pri-methods} Private Member Functions {#private-member-functions .groupheader}
-----------------------------------------

void 

[handleEncoder](classMode1.html#a67b35345a3f671799182f48495ba897d){.el}
()

 

void 

[handleButton](classMode1.html#a38dc924a8193edd4dc649372530f31c2){.el}
([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el}
buttonState)

 

void 

[handleChannelSelection](classMode1.html#acf1ab35c4057e3e8dd1bbd38a4226077){.el}
()

 

void 

[handleChannelSelectionPress](classMode1.html#a6ee6933e5dd127f1b7d73cff9e8f1dc4){.el}
()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[LEDController](classLEDController.html){.el} & 

[ledController](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d){.el}

 

[InputHandler](classInputHandler.html){.el} & 

[inputHandler](classMode1.html#ab553243d551d5337b9d11451c257813c){.el}

 

[Encoder](classEncoder.html){.el} & 

[encoder](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72){.el}

 

[ResetButton](classResetButton.html){.el} & 

[resetButton](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad){.el}

 

[Gates](classGates.html){.el} & 

[gates](classMode1.html#abf42339815e644befd936ad85c4b6d87){.el}

 

[MIDIHandler](classMIDIHandler.html){.el} & 

[midiHandler](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac){.el}

 

bool 

[doublePressHandled](classMode1.html#ac572589a3df90e198153c5df4daf221a){.el}
= false

 

bool 

[inChannelSelection](classMode1.html#afbeca71c5625415fe1850e374f436c61){.el}
= false

 

bool 

[isInSelection](classMode1.html#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d){.el}
= false

 

bool 

[singlePressHandled](classMode1.html#aad6bd19e9779c9fa1e134501a3ef03fe){.el}
= false

 

int 

[selectedChannel](classMode1.html#a43973ea688753e2695ec9daa54774e46){.el}
= 9

 

int 

[confirmedChannel](classMode1.html#a869e723dd397e09dad3f775f2c703720){.el}
= 9

 

int 

[previousChannel](classMode1.html#a111d75d8f9cb54613b50109259a81950){.el}
= -1

 

const int 

[NUM\_MIDI\_CHANNELS](classMode1.html#ac510b4ab9f79d4ba2c3c1e129b75c939){.el}
= 16

 

int 

[numLeds](classMode1.html#ae0fc8662aa17fcd2595477bffcf275f9){.el} = 8

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#ac50bac6ef48f13b9f9f23066ee3a14da}

[[◆ ](#ac50bac6ef48f13b9f9f23066ee3a14da)]{.permalink}Mode1() {#mode1 .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- -------------------------------------------------- ------------------
  Mode1::Mode1   (   [Encoder](classEncoder.html){.el} &                *encoder*,
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

[]{#a38dc924a8193edd4dc649372530f31c2}

[[◆ ](#a38dc924a8193edd4dc649372530f31c2)]{.permalink}handleButton() {#handlebutton .memtitle}
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
| d Mode1::handleButton   (   [Enco |                                   |
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

[]{#acf1ab35c4057e3e8dd1bbd38a4226077}

[[◆ ](#acf1ab35c4057e3e8dd1bbd38a4226077)]{.permalink}handleChannelSelection() {#handlechannelselection .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void Mode1::han                 |                                   |
| dleChannelSelection   (      )    |                                   |
|   -----------------               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6ee6933e5dd127f1b7d73cff9e8f1dc4}

[[◆ ](#a6ee6933e5dd127f1b7d73cff9e8f1dc4)]{.permalink}handleChannelSelectionPress() {#handlechannelselectionpress .memtitle}
-----------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void Mode1::handleCh            |                                   |
| annelSelectionPress   (      )    |                                   |
|   ----------------------          |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aece3b8dfd8fbe3a049dd50cac7827163}

[[◆ ](#aece3b8dfd8fbe3a049dd50cac7827163)]{.permalink}handleDoublePress() {#handledoublepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1                      |                                   |
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

[]{#a67b35345a3f671799182f48495ba897d}

[[◆ ](#a67b35345a3f671799182f48495ba897d)]{.permalink}handleEncoder() {#handleencoder .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void M                          |                                   |
| ode1::handleEncoder   (      )    |                                   |
|   --------                        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a3efa76e8f49820d5506a2fddba895d1a}

[[◆ ](#a3efa76e8f49820d5506a2fddba895d1a)]{.permalink}handleLongPress() {#handlelongpress .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mod                        |                                   |
| e1::handleLongPress   (      )    |                                   |
|   ----------                      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.el}.
:::
:::

[]{#a27a79d962981799ecb081f6b2116bc4c}

[[◆ ](#a27a79d962981799ecb081f6b2116bc4c)]{.permalink}handlePressReleased() {#handlepressreleased .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::                    |                                   |
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

[]{#a3faff5eb1aea3412f05145d5894778be}

[[◆ ](#a3faff5eb1aea3412f05145d5894778be)]{.permalink}handleResetDoublePress() {#handleresetdoublepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::han                 |                                   |
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

[]{#ab4c68c413efac263349524806bdb6262}

[[◆ ](#ab4c68c413efac263349524806bdb6262)]{.permalink}handleResetLongPress() {#handleresetlongpress .memtitle}
----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::h                   |                                   |
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

[]{#aaf69b8382102d521c89786ab12513748}

[[◆ ](#aaf69b8382102d521c89786ab12513748)]{.permalink}handleResetPressReleased() {#handleresetpressreleased .memtitle}
--------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::handl               |                                   |
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

[]{#a130b9bda7ac6c03348c1e0f652f4c40f}

[[◆ ](#a130b9bda7ac6c03348c1e0f652f4c40f)]{.permalink}handleResetSinglePress() {#handleresetsinglepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::han                 |                                   |
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

[]{#ad456ee0f626d63c9f96db8a8fbbedae5}

[[◆ ](#ad456ee0f626d63c9f96db8a8fbbedae5)]{.permalink}handleSelectionStates() {#handleselectionstates .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------                | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::ha                  |                                   |
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

[]{#a01c39504689522af8e908f3a9f629f3d}

[[◆ ](#a01c39504689522af8e908f3a9f629f3d)]{.permalink}handleSinglePress() {#handlesinglepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1                      |                                   |
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

[]{#aa3c75dd038802a4e3ab7381a82cfa0bd}

[[◆ ](#aa3c75dd038802a4e3ab7381a82cfa0bd)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode1::setup   (      )    |                                   |
|                                   |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#acded67ff8ef9572e44948971385701ab){.el}.
:::
:::

[]{#ac71878a012a9adb6adcba2c8338be06e}

[[◆ ](#ac71878a012a9adb6adcba2c8338be06e)]{.permalink}teardown() {#teardown .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   v                               |                                   |
| oid Mode1::teardown   (      )    |                                   |
|   ---                             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a126f69890bd05de9745561a7f592aabd){.el}.
:::
:::

[]{#ab4ed6fb24ddf6f713cbde450496cd16d}

[[◆ ](#ab4ed6fb24ddf6f713cbde450496cd16d)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|                                   |                                   |
|  void Mode1::update   (      )    |                                   |
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

[]{#a869e723dd397e09dad3f775f2c703720}

[[◆ ](#a869e723dd397e09dad3f775f2c703720)]{.permalink}confirmedChannel {#confirmedchannel .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   int Mode1::confirmedChannel = 9 |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ac572589a3df90e198153c5df4daf221a}

[[◆ ](#ac572589a3df90e198153c5df4daf221a)]{.permalink}doublePressHandled {#doublepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode1::doublePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a813970d5012b890a2b0d0be7f9a54c72}

[[◆ ](#a813970d5012b890a2b0d0be7f9a54c72)]{.permalink}encoder {#encoder .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Encoder](classE                |                                   |
| ncoder.html){.el}& Mode1::encoder |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#abf42339815e644befd936ad85c4b6d87}

[[◆ ](#abf42339815e644befd936ad85c4b6d87)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gates](cl                      |                                   |
| assGates.html){.el}& Mode1::gates |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#afbeca71c5625415fe1850e374f436c61}

[[◆ ](#afbeca71c5625415fe1850e374f436c61)]{.permalink}inChannelSelection {#inchannelselection .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode1::inChannelSelection = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab553243d551d5337b9d11451c257813c}

[[◆ ](#ab553243d551d5337b9d11451c257813c)]{.permalink}inputHandler {#inputhandler .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [InputHandler](classInputHandle |                                   |
| r.html){.el}& Mode1::inputHandler |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d}

[[◆ ](#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d)]{.permalink}isInSelection {#isinselection .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| bool Mode1::isInSelection = false |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a05d96fc5e86a390d30ddb724cc7f5d7d}

[[◆ ](#a05d96fc5e86a390d30ddb724cc7f5d7d)]{.permalink}ledController {#ledcontroller .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [                               |                                   |
| LEDController](classLEDController |                                   |
| .html){.el}& Mode1::ledController |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a8e5360d6c20dc92f0632bdc4c234e2ac}

[[◆ ](#a8e5360d6c20dc92f0632bdc4c234e2ac)]{.permalink}midiHandler {#midihandler .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [MIDIHandler](classMIDIHandl    |                                   |
| er.html){.el}& Mode1::midiHandler |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ac510b4ab9f79d4ba2c3c1e129b75c939}

[[◆ ](#ac510b4ab9f79d4ba2c3c1e129b75c939)]{.permalink}NUM\_MIDI\_CHANNELS {#num_midi_channels .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   const in                        |                                   |
| t Mode1::NUM\_MIDI\_CHANNELS = 16 |                                   |
|   ----------                      |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae0fc8662aa17fcd2595477bffcf275f9}

[[◆ ](#ae0fc8662aa17fcd2595477bffcf275f9)]{.permalink}numLeds {#numleds .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[private]{.mlabel}]{.mlabels}    |
|   int Mode1::numLeds = 8          |                                   |
|   ------------------------        |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a111d75d8f9cb54613b50109259a81950}

[[◆ ](#a111d75d8f9cb54613b50109259a81950)]{.permalink}previousChannel {#previouschannel .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   int Mode1::previousChannel = -1 |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a74a6e31f008c5b03e672ad74022f0cad}

[[◆ ](#a74a6e31f008c5b03e672ad74022f0cad)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [ResetButton](classResetButt    |                                   |
| on.html){.el}& Mode1::resetButton |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a43973ea688753e2695ec9daa54774e46}

[[◆ ](#a43973ea688753e2695ec9daa54774e46)]{.permalink}selectedChannel {#selectedchannel .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
|  -------------------------------- |                                   |
|   int Mode1::selectedChannel = 9  |                                   |
|                                   |                                   |
|  -------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aad6bd19e9779c9fa1e134501a3ef03fe}

[[◆ ](#aad6bd19e9779c9fa1e134501a3ef03fe)]{.permalink}singlePressHandled {#singlepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode1::singlePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Mode1.h](Mode1_8h_source.html){.el}
-   src/[Mode1.cpp](Mode1_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
