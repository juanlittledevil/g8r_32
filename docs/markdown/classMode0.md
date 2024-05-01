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
of all members](classMode0-members.html)
:::

::: {.headertitle}
::: {.title}
Mode0 Class Reference
:::
:::
:::

::: {.contents}
`#include <Mode0.h>`

::: {.dynheader}
Inheritance diagram for Mode0:
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
Collaboration diagram for Mode0:
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

 

[Mode0](classMode0.html#ac6c68a326df4139c0ea7cae89f79e923){.el}
([Encoder](classEncoder.html){.el}
&[encoder](classMode0.html#ab92b642845ecfe37182477b6de246e6f){.el},
[InputHandler](classInputHandler.html){.el}
&[inputHandler](classMode0.html#a8b44b908b0df280399ed62e46d23453b){.el},
[Gates](classGates.html){.el}
&[gates](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e){.el},
[LEDController](classLEDController.html){.el}
&[ledController](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf){.el},
[MIDIHandler](classMIDIHandler.html){.el}
&[midiHandler](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f){.el},
[ResetButton](classResetButton.html){.el}
&[resetButton](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d){.el},
[EurorackClock](classEurorackClock.html){.el}
&[clock](classMode0.html#ac7c269771d185bfd70c9610aa15d4873){.el})

 

void 

[handleSinglePress](classMode0.html#afc4ad8cc4c9c59838c774c3c72a05f33){.el}
() override

 

void 

[handleDoublePress](classMode0.html#ab2e88db8ebc6a5c3bfe60d63715870da){.el}
() override

 

void 

[handleLongPress](classMode0.html#aa5837e66a7d361a00f8799766ee8441e){.el}
() override

 

void 

[handlePressReleased](classMode0.html#a843a9f1c23e45dc2e6b3023d578402e6){.el}
() override

 

void 

[handleSelectionStates](classMode0.html#a1d2a907c0057865467210bf45f45e9c4){.el}
() override

 

void 

[handleResetSinglePress](classMode0.html#ab49600e807fdc67b715aa5844e0008a7){.el}
() override

 

void 

[handleResetDoublePress](classMode0.html#a5edace264c12da595e48be504f559d97){.el}
() override

 

void 

[handleResetLongPress](classMode0.html#a3f1e02184589f15ce99156b58de814ce){.el}
() override

 

void 

[handleResetPressReleased](classMode0.html#aa3ef073cd777560821c68b82405c9696){.el}
() override

 

void 

[setup](classMode0.html#a3ddf8efd26e32d22530a1c37630bb341){.el} ()
override

 

void 

[teardown](classMode0.html#a898c2e53000955e37ef93983de7c7a54){.el} ()
override

 

void 

[update](classMode0.html#a0e20f81420b0dcd427f5cd9789cfdd4a){.el} ()
override

 

void 

[setDivisionPPQN](classMode0.html#a08f962ccd2bb1a958d8b6816af2af223){.el}
(int ppqn)

 

void 

[setDefaultDivisionIndex](classMode0.html#aba40b7f6eb84a6e8b9052081c9346e48){.el}
()

 

[]{#pri-methods} Private Member Functions {#private-member-functions .groupheader}
-----------------------------------------

void 

[handleEncoder](classMode0.html#a794e94163599470716ea944754ddd337){.el}
()

 

void 

[handleButton](classMode0.html#a27a112beb9ebe4648830681deab01ca0){.el}
([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el}
buttonState)

 

void 

[handleResetButton](classMode0.html#ae55cb650c7a6ace775a3a796097d603a){.el}
([ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el}
buttonState)

 

void 

[handleCVInput](classMode0.html#ab7d9744dbbb6b913d5093a20ba3eba36){.el}
()

 

void 

[handleTempoSelection](classMode0.html#a3841d23139d59cdedfe95272724ca71f){.el}
()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[LEDController](classLEDController.html){.el} & 

[ledController](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf){.el}

 

[Encoder](classEncoder.html){.el} & 

[encoder](classMode0.html#ab92b642845ecfe37182477b6de246e6f){.el}

 

[ResetButton](classResetButton.html){.el} & 

[resetButton](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d){.el}

 

[Gates](classGates.html){.el} & 

[gates](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e){.el}

 

[EurorackClock](classEurorackClock.html){.el} & 

[clock](classMode0.html#ac7c269771d185bfd70c9610aa15d4873){.el}

 

[MIDIHandler](classMIDIHandler.html){.el} & 

[midiHandler](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f){.el}

 

[InputHandler](classInputHandler.html){.el} & 

[inputHandler](classMode0.html#a8b44b908b0df280399ed62e46d23453b){.el}

 

bool 

[inDivisionSelection](classMode0.html#af335be379b0fd0883e5797b0e0f398ff){.el}
= false

 

bool 

[externalTempo](classMode0.html#ae518d870e6feb9faed5463f7e82164a4){.el}
= false

 

bool 

[singlePressHandled](classMode0.html#a4cf5950c179f5ee11cb79b87af84f5d3){.el}
= false

 

bool 

[singleResetPressHandled](classMode0.html#ae773b1cc8d0a7a3d3db4153827b2f1cc){.el}
= false

 

int 

[tempoIncrement](classMode0.html#a6f0459d85f755de7775f3de610ee74b3){.el}
= 1

 

const int 

[minTempo](classMode0.html#a931032227e5a4553f7eee3210182dba8){.el} = 20

 

const int 

[maxTempo](classMode0.html#a53b9693eeb9e70d2200fa5fa058ff4b9){.el} = 340

 

int 

[divisionIndex](classMode0.html#aaf228318b6eb380ab81e0329010d3825){.el}
= 24

 

int 

[selectedGate](classMode0.html#ae791813273bde4c769a69ff84a60f82a){.el} =
0

 

bool 

[selectingTempo](classMode0.html#a42f5db2d1e74a2cc249ab9af0d303dde){.el}
= false

 

bool 

[doublePressHandled](classMode0.html#a6687689798d7b32b2b15232c9c29c49d){.el}
= false

 

bool 

[doubleResetPressHandled](classMode0.html#a35a6460b24e5f6f9480b8f73dae1d24a){.el}
= false

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#ac6c68a326df4139c0ea7cae89f79e923}

[[◆ ](#ac6c68a326df4139c0ea7cae89f79e923)]{.permalink}Mode0() {#mode0 .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- -------------------------------------------------- ------------------
  Mode0::Mode0   (   [Encoder](classEncoder.html){.el} &                *encoder*,
                     [InputHandler](classInputHandler.html){.el} &      *inputHandler*,
                     [Gates](classGates.html){.el} &                    *gates*,
                     [LEDController](classLEDController.html){.el} &    *ledController*,
                     [MIDIHandler](classMIDIHandler.html){.el} &        *midiHandler*,
                     [ResetButton](classResetButton.html){.el} &        *resetButton*,
                     [EurorackClock](classEurorackClock.html){.el} &    *clock* 
                 )                                                      
  -------------- --- -------------------------------------------------- ------------------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a27a112beb9ebe4648830681deab01ca0}

[[◆ ](#a27a112beb9ebe4648830681deab01ca0)]{.permalink}handleButton() {#handlebutton .memtitle}
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
| d Mode0::handleButton   (   [Enco |                                   |
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

[]{#ab7d9744dbbb6b913d5093a20ba3eba36}

[[◆ ](#ab7d9744dbbb6b913d5093a20ba3eba36)]{.permalink}handleCVInput() {#handlecvinput .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void M                          |                                   |
| ode0::handleCVInput   (      )    |                                   |
|   --------                        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab2e88db8ebc6a5c3bfe60d63715870da}

[[◆ ](#ab2e88db8ebc6a5c3bfe60d63715870da)]{.permalink}handleDoublePress() {#handledoublepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0                      |                                   |
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

[]{#a794e94163599470716ea944754ddd337}

[[◆ ](#a794e94163599470716ea944754ddd337)]{.permalink}handleEncoder() {#handleencoder .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void M                          |                                   |
| ode0::handleEncoder   (      )    |                                   |
|   --------                        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa5837e66a7d361a00f8799766ee8441e}

[[◆ ](#aa5837e66a7d361a00f8799766ee8441e)]{.permalink}handleLongPress() {#handlelongpress .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mod                        |                                   |
| e0::handleLongPress   (      )    |                                   |
|   ----------                      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.el}.
:::
:::

[]{#a843a9f1c23e45dc2e6b3023d578402e6}

[[◆ ](#a843a9f1c23e45dc2e6b3023d578402e6)]{.permalink}handlePressReleased() {#handlepressreleased .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::                    |                                   |
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

[]{#ae55cb650c7a6ace775a3a796097d603a}

[[◆ ](#ae55cb650c7a6ace775a3a796097d603a)]{.permalink}handleResetButton() {#handleresetbutton .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| ------------- --- --------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| ---------- --------------- --- -- |                                   |
|   void Mode0::hand                |                                   |
| leResetButton   (   [ResetButton: |                                   |
| :ButtonState](classResetButton.ht |                                   |
| ml#a57b758360f53e09cd135b0fbc18ed |                                   |
| abd){.el}    *buttonState*   )    |                                   |
|   ------------------              |                                   |
| ------------- --- --------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a5edace264c12da595e48be504f559d97}

[[◆ ](#a5edace264c12da595e48be504f559d97)]{.permalink}handleResetDoublePress() {#handleresetdoublepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::han                 |                                   |
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

[]{#a3f1e02184589f15ce99156b58de814ce}

[[◆ ](#a3f1e02184589f15ce99156b58de814ce)]{.permalink}handleResetLongPress() {#handleresetlongpress .memtitle}
----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::h                   |                                   |
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

[]{#aa3ef073cd777560821c68b82405c9696}

[[◆ ](#aa3ef073cd777560821c68b82405c9696)]{.permalink}handleResetPressReleased() {#handleresetpressreleased .memtitle}
--------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::handl               |                                   |
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

[]{#ab49600e807fdc67b715aa5844e0008a7}

[[◆ ](#ab49600e807fdc67b715aa5844e0008a7)]{.permalink}handleResetSinglePress() {#handleresetsinglepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::han                 |                                   |
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

[]{#a1d2a907c0057865467210bf45f45e9c4}

[[◆ ](#a1d2a907c0057865467210bf45f45e9c4)]{.permalink}handleSelectionStates() {#handleselectionstates .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------                | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::ha                  |                                   |
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

[]{#afc4ad8cc4c9c59838c774c3c72a05f33}

[[◆ ](#afc4ad8cc4c9c59838c774c3c72a05f33)]{.permalink}handleSinglePress() {#handlesinglepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0                      |                                   |
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

[]{#a3841d23139d59cdedfe95272724ca71f}

[[◆ ](#a3841d23139d59cdedfe95272724ca71f)]{.permalink}handleTempoSelection() {#handletemposelection .memtitle}
----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void Mode0::h                   |                                   |
| andleTempoSelection   (      )    |                                   |
|   ---------------                 |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aba40b7f6eb84a6e8b9052081c9346e48}

[[◆ ](#aba40b7f6eb84a6e8b9052081c9346e48)]{.permalink}setDefaultDivisionIndex() {#setdefaultdivisionindex .memtitle}
-------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  void Mode0::setDefaultDivisionIndex   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a08f962ccd2bb1a958d8b6816af2af223}

[[◆ ](#a08f962ccd2bb1a958d8b6816af2af223)]{.permalink}setDivisionPPQN() {#setdivisionppqn .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------- --- ------ -------- --- --
  void Mode0::setDivisionPPQN   (   int    *ppqn*   )   
  ----------------------------- --- ------ -------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a3ddf8efd26e32d22530a1c37630bb341}

[[◆ ](#a3ddf8efd26e32d22530a1c37630bb341)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   void Mode0::setup   (      )    |                                   |
|                                   |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#acded67ff8ef9572e44948971385701ab){.el}.
:::
:::

[]{#a898c2e53000955e37ef93983de7c7a54}

[[◆ ](#a898c2e53000955e37ef93983de7c7a54)]{.permalink}teardown() {#teardown .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|   v                               |                                   |
| oid Mode0::teardown   (      )    |                                   |
|   ---                             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implements
[Mode](classMode.html#a126f69890bd05de9745561a7f592aabd){.el}.
:::
:::

[]{#a0e20f81420b0dcd427f5cd9789cfdd4a}

[[◆ ](#a0e20f81420b0dcd427f5cd9789cfdd4a)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[override]{.mla                  |
| ------------------- --- -- --- -- | bel}[virtual]{.mlabel}]{.mlabels} |
|                                   |                                   |
|  void Mode0::update   (      )    |                                   |
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

[]{#ac7c269771d185bfd70c9610aa15d4873}

[[◆ ](#ac7c269771d185bfd70c9610aa15d4873)]{.permalink}clock {#clock .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------------    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [EurorackClock](classEuror      |                                   |
| ackClock.html){.el}& Mode0::clock |                                   |
|   ----------------------------    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aaf228318b6eb380ab81e0329010d3825}

[[◆ ](#aaf228318b6eb380ab81e0329010d3825)]{.permalink}divisionIndex {#divisionindex .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
|   int Mode0::divisionIndex = 24   |                                   |
|   ------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6687689798d7b32b2b15232c9c29c49d}

[[◆ ](#a6687689798d7b32b2b15232c9c29c49d)]{.permalink}doublePressHandled {#doublepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode0::doublePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a35a6460b24e5f6f9480b8f73dae1d24a}

[[◆ ](#a35a6460b24e5f6f9480b8f73dae1d24a)]{.permalink}doubleResetPressHandled {#doubleresetpresshandled .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool Mode0                      |                                   |
| ::doubleResetPressHandled = false |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab92b642845ecfe37182477b6de246e6f}

[[◆ ](#ab92b642845ecfe37182477b6de246e6f)]{.permalink}encoder {#encoder .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Encoder](classE                |                                   |
| ncoder.html){.el}& Mode0::encoder |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae518d870e6feb9faed5463f7e82164a4}

[[◆ ](#ae518d870e6feb9faed5463f7e82164a4)]{.permalink}externalTempo {#externaltempo .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| bool Mode0::externalTempo = false |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#adc42a2183e9c806749f5a4a6de0fa07e}

[[◆ ](#adc42a2183e9c806749f5a4a6de0fa07e)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gates](cl                      |                                   |
| assGates.html){.el}& Mode0::gates |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#af335be379b0fd0883e5797b0e0f398ff}

[[◆ ](#af335be379b0fd0883e5797b0e0f398ff)]{.permalink}inDivisionSelection {#indivisionselection .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool M                          |                                   |
| ode0::inDivisionSelection = false |                                   |
|   --------                        |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a8b44b908b0df280399ed62e46d23453b}

[[◆ ](#a8b44b908b0df280399ed62e46d23453b)]{.permalink}inputHandler {#inputhandler .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [InputHandler](classInputHandle |                                   |
| r.html){.el}& Mode0::inputHandler |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ad1252cf80f5ab5c7ed8832e333001ecf}

[[◆ ](#ad1252cf80f5ab5c7ed8832e333001ecf)]{.permalink}ledController {#ledcontroller .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [                               |                                   |
| LEDController](classLEDController |                                   |
| .html){.el}& Mode0::ledController |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a53b9693eeb9e70d2200fa5fa058ff4b9}

[[◆ ](#a53b9693eeb9e70d2200fa5fa058ff4b9)]{.permalink}maxTempo {#maxtempo .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   const int Mode0::maxTempo = 340 |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a8d06cb8c1a9d88d5806dd2e431d1e98f}

[[◆ ](#a8d06cb8c1a9d88d5806dd2e431d1e98f)]{.permalink}midiHandler {#midihandler .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [MIDIHandler](classMIDIHandl    |                                   |
| er.html){.el}& Mode0::midiHandler |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a931032227e5a4553f7eee3210182dba8}

[[◆ ](#a931032227e5a4553f7eee3210182dba8)]{.permalink}minTempo {#mintempo .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
|  -------------------------------- |                                   |
|   const int Mode0::minTempo = 20  |                                   |
|                                   |                                   |
|  -------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a2e3f6fa1323a1d17620d99e106fd3d2d}

[[◆ ](#a2e3f6fa1323a1d17620d99e106fd3d2d)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [ResetButton](classResetButt    |                                   |
| on.html){.el}& Mode0::resetButton |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae791813273bde4c769a69ff84a60f82a}

[[◆ ](#ae791813273bde4c769a69ff84a60f82a)]{.permalink}selectedGate {#selectedgate .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
|   int Mode0::selectedGate = 0     |                                   |
|   -----------------------------   |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a42f5db2d1e74a2cc249ab9af0d303dde}

[[◆ ](#a42f5db2d1e74a2cc249ab9af0d303dde)]{.permalink}selectingTempo {#selectingtempo .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   b                               |                                   |
| ool Mode0::selectingTempo = false |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4cf5950c179f5ee11cb79b87af84f5d3}

[[◆ ](#a4cf5950c179f5ee11cb79b87af84f5d3)]{.permalink}singlePressHandled {#singlepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
| Mode0::singlePressHandled = false |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae773b1cc8d0a7a3d3db4153827b2f1cc}

[[◆ ](#ae773b1cc8d0a7a3d3db4153827b2f1cc)]{.permalink}singleResetPressHandled {#singleresetpresshandled .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool Mode0                      |                                   |
| ::singleResetPressHandled = false |                                   |
|   ------------                    |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6f0459d85f755de7775f3de610ee74b3}

[[◆ ](#a6f0459d85f755de7775f3de610ee74b3)]{.permalink}tempoIncrement {#tempoincrement .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
|   int Mode0::tempoIncrement = 1   |                                   |
|   ------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Mode0.h](Mode0_8h_source.html){.el}
-   src/[Mode0.cpp](Mode0_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
