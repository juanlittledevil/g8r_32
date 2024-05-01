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
Functions](#pub-static-methods) \| [Private Member
Functions](#pri-methods) \| [Private Attributes](#pri-attribs) \| [List
of all members](classModeSelector-members.html)
:::

::: {.headertitle}
::: {.title}
ModeSelector Class Reference
:::
:::
:::

::: {.contents}
`#include <ModeSelector.h>`

::: {.dynheader}
Collaboration diagram for ModeSelector:
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

int 

[getMode](classModeSelector.html#a4df062db5ff1caaae1e2d7fc44915bff){.el}
() const

 

void 

[setMode](classModeSelector.html#a3951bcc3ea04b712d94850920b7b6031){.el}
(int newMode)

 

void 

[handleLongPress](classModeSelector.html#ac85d39879a6059172ca90e57341e3371){.el}
()

 

void 

[handleEncoderRotation](classModeSelector.html#aad5e1a078338a35232888ec31d6cc5ee){.el}
()

 

void 

[handleModeSelectionPress](classModeSelector.html#a50329d06bde51f77027d6ce9e2444bc1){.el}
()

 

void 

[handleButtonPress](classModeSelector.html#a56ce569a1e97e2a0b382d032fabf8dda){.el}
()

 

void 

[setLedController](classModeSelector.html#addf7f39b68e55c83b693da4911bd5fa6){.el}
([LEDController](classLEDController.html){.el}
&[ledController](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2){.el})

 

void 

[setEncoder](classModeSelector.html#a5b291f549e155bc4f47c35746d966221){.el}
([Encoder](classEncoder.html){.el}
&[encoder](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8){.el})

 

void 

[setCurrentMode](classModeSelector.html#a0232058d131a73a98781552b12a3b696){.el}
([Mode](classMode.html){.el}
\*&[currentMode](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71){.el})

 

bool 

[isInModeSelection](classModeSelector.html#a6da6a3354fe3d5afd3f241324359de03){.el}
()

 

[Mode](classMode.html){.el} \* 

[getCurrentMode](classModeSelector.html#a5a599c64ffef54ba1dade4fedff23d7a){.el}
()

 

void 

[addMode](classModeSelector.html#ab3680d5757a1efade5128dad7c7c0ab6){.el}
([Mode](classMode.html){.el}
\*[mode](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95){.el})

 

void 

[update](classModeSelector.html#ac94481813de71f0680ab6c005c0b8e12){.el}
()

 

[]{#pub-static-methods} Static Public Member Functions {#static-public-member-functions .groupheader}
------------------------------------------------------

static [ModeSelector](classModeSelector.html){.el} & 

[getInstance](classModeSelector.html#a2312f6a56156ab4557baebe6f2d050ea){.el}
()

 

[]{#pri-methods} Private Member Functions {#private-member-functions .groupheader}
-----------------------------------------

 

[ModeSelector](classModeSelector.html#af0db492b33c751ccaafa23d9b3880fbc){.el}
()

 

 

[ModeSelector](classModeSelector.html#a5c89c05801d37b7763369afe0940c7e9){.el}
([ModeSelector](classModeSelector.html){.el} const &)

 

void 

[operator=](classModeSelector.html#a7e4c75c64115ff1628b1338df8d36639){.el}
([ModeSelector](classModeSelector.html){.el} const &)

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

std::vector\< [Mode](classMode.html){.el} \* \> 

[modes](classModeSelector.html#a4d26cfed61b6573ecaae521b85997b8c){.el}

 

[Mode](classMode.html){.el} \* 

[nullMode](classModeSelector.html#a28fad2b854f3a9d724c3661d87a94c0e){.el}
= nullptr

 

[Mode](classMode.html){.el} \*& 

[currentMode](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71){.el}

 

int 

[mode](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95){.el}

 

int 

[inModeSelection](classModeSelector.html#ab3ca420fe69c659b5f92b6ae799e5c89){.el}
= false

 

[LEDController](classLEDController.html){.el} \* 

[ledController](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2){.el}

 

[Encoder](classEncoder.html){.el} \* 

[encoder](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8){.el}

 

[ResetButton](classResetButton.html){.el} \* 

[resetButton](classModeSelector.html#a6b43ab161008add913652ccea49951e1){.el}

 

bool 

[isInSelection](classModeSelector.html#a4dc6fb472a2757e88dde6f35137c08e4){.el}

 

bool 

[inChannelSelection](classModeSelector.html#af98d3659251c8bed66b9335cc5c7f9c9){.el}

 

bool 

[singlePressHandled](classModeSelector.html#aa101ddd545060ae8f98e58f986f86637){.el}

 

bool 

[doublePressHandled](classModeSelector.html#ae886bbd080f44f047682429748c28045){.el}

 

bool 

[longPressHandled](classModeSelector.html#ade89353075816ece4e257ded8e888d88){.el}

 

size\_t 

[totalModes](classModeSelector.html#aa34005332133e2b5e10a4b904aa3c23e){.el}
= modes.size()

 

int 

[previousMode](classModeSelector.html#a69c5b741591b66abbf46e64aa295a8f8){.el}
= -1

 

int 

[numLeds](classModeSelector.html#a9657b40d4e60d82c6e4ac5a2a605c47e){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#af0db492b33c751ccaafa23d9b3880fbc}

[[◆ ](#af0db492b33c751ccaafa23d9b3880fbc)]{.permalink}ModeSelector() [\[1/2\]]{.overload} {#modeselector-12 .memtitle}
-----------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------                       | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   ModeSel                         |                                   |
| ector::ModeSelector   (      )    |                                   |
|   ---------                       |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a5c89c05801d37b7763369afe0940c7e9}

[[◆ ](#a5c89c05801d37b7763369afe0940c7e9)]{.permalink}ModeSelector() [\[2/2\]]{.overload} {#modeselector-22 .memtitle}
-----------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------- -- | [[private]{.mlabel}]{.mlabels}    |
| - ------------------------------- |                                   |
| ----------------------- -- --- -- |                                   |
|   ModeSelector::ModeSelector      |                                   |
| (   [ModeSelector](classModeSelec |                                   |
| tor.html){.el} const &       )    |                                   |
|   ---------------------------- -- |                                   |
| - ------------------------------- |                                   |
| ----------------------- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#ab3680d5757a1efade5128dad7c7c0ab6}

[[◆ ](#ab3680d5757a1efade5128dad7c7c0ab6)]{.permalink}addMode() {#addmode .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- --------------------------------- -------- --- --
  void ModeSelector::addMode   (   [Mode](classMode.html){.el} \*    *mode*   )   
  ---------------------------- --- --------------------------------- -------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a5a599c64ffef54ba1dade4fedff23d7a}

[[◆ ](#a5a599c64ffef54ba1dade4fedff23d7a)]{.permalink}getCurrentMode() {#getcurrentmode .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------- --- -- --- --
  [Mode](classMode.html){.el} \* ModeSelector::getCurrentMode   (      )   
  ------------------------------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a2312f6a56156ab4557baebe6f2d050ea}

[[◆ ](#a2312f6a56156ab4557baebe6f2d050ea)]{.permalink}getInstance() {#getinstance .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------           | [[static]{.mlabel}]{.mlabels}     |
| --------------------------------- |                                   |
| ------------------- --- -- --- -- |                                   |
|   [ModeSelector](clas             |                                   |
| sModeSelector.html){.el} & ModeSe |                                   |
| lector::getInstance   (      )    |                                   |
|   ---------------------           |                                   |
| --------------------------------- |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4df062db5ff1caaae1e2d7fc44915bff}

[[◆ ](#a4df062db5ff1caaae1e2d7fc44915bff)]{.permalink}getMode() {#getmode .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- -------
  int ModeSelector::getMode   (      )   const
  --------------------------- --- -- --- -------
:::

::: {.memdoc}
:::
:::

[]{#a56ce569a1e97e2a0b382d032fabf8dda}

[[◆ ](#a56ce569a1e97e2a0b382d032fabf8dda)]{.permalink}handleButtonPress() {#handlebuttonpress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------- --- -- --- --
  void ModeSelector::handleButtonPress   (      )   
  -------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#aad5e1a078338a35232888ec31d6cc5ee}

[[◆ ](#aad5e1a078338a35232888ec31d6cc5ee)]{.permalink}handleEncoderRotation() {#handleencoderrotation .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------ --- -- --- --
  void ModeSelector::handleEncoderRotation   (      )   
  ------------------------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ac85d39879a6059172ca90e57341e3371}

[[◆ ](#ac85d39879a6059172ca90e57341e3371)]{.permalink}handleLongPress() {#handlelongpress .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------ --- -- --- --
  void ModeSelector::handleLongPress   (      )   
  ------------------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a50329d06bde51f77027d6ce9e2444bc1}

[[◆ ](#a50329d06bde51f77027d6ce9e2444bc1)]{.permalink}handleModeSelectionPress() {#handlemodeselectionpress .memtitle}
--------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------------- --- -- --- --
  void ModeSelector::handleModeSelectionPress   (      )   
  --------------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a6da6a3354fe3d5afd3f241324359de03}

[[◆ ](#a6da6a3354fe3d5afd3f241324359de03)]{.permalink}isInModeSelection() {#isinmodeselection .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------- --- -- --- --
  bool ModeSelector::isInModeSelection   (      )   
  -------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a7e4c75c64115ff1628b1338df8d36639}

[[◆ ](#a7e4c75c64115ff1628b1338df8d36639)]{.permalink}operator=() {#operator .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| ------------------------------ -- |                                   |
| - ------------------------------- |                                   |
| ----------------------- -- --- -- |                                   |
|   void ModeSelector::operator=    |                                   |
| (   [ModeSelector](classModeSelec |                                   |
| tor.html){.el} const &       )    |                                   |
|                                   |                                   |
| ------------------------------ -- |                                   |
| - ------------------------------- |                                   |
| ----------------------- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a0232058d131a73a98781552b12a3b696}

[[◆ ](#a0232058d131a73a98781552b12a3b696)]{.permalink}setCurrentMode() {#setcurrentmode .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------- --- ---------------------------------- --------------- --- --
  void ModeSelector::setCurrentMode   (   [Mode](classMode.html){.el} \*&    *currentMode*   )   
  ----------------------------------- --- ---------------------------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a5b291f549e155bc4f47c35746d966221}

[[◆ ](#a5b291f549e155bc4f47c35746d966221)]{.permalink}setEncoder() {#setencoder .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- -------------------------------------- ----------- --- --
  void ModeSelector::setEncoder   (   [Encoder](classEncoder.html){.el} &    *encoder*   )   
  ------------------------------- --- -------------------------------------- ----------- --- --
:::

::: {.memdoc}
:::
:::

[]{#addf7f39b68e55c83b693da4911bd5fa6}

[[◆ ](#addf7f39b68e55c83b693da4911bd5fa6)]{.permalink}setLedController() {#setledcontroller .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -------------------------------------------------- ----------------- --- --
  void ModeSelector::setLedController   (   [LEDController](classLEDController.html){.el} &    *ledController*   )   
  ------------------------------------- --- -------------------------------------------------- ----------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a3951bcc3ea04b712d94850920b7b6031}

[[◆ ](#a3951bcc3ea04b712d94850920b7b6031)]{.permalink}setMode() {#setmode .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- ------ ----------- --- --
  void ModeSelector::setMode   (   int    *newMode*   )   
  ---------------------------- --- ------ ----------- --- --
:::

::: {.memdoc}
:::
:::

[]{#ac94481813de71f0680ab6c005c0b8e12}

[[◆ ](#ac94481813de71f0680ab6c005c0b8e12)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  void ModeSelector::update   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#adb7ab19bba250819ca90a26c8281bf71}

[[◆ ](#adb7ab19bba250819ca90a26c8281bf71)]{.permalink}currentMode {#currentmode .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------------       | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Mode](classMode.html){         |                                   |
| .el}\*& ModeSelector::currentMode |                                   |
|   -------------------------       |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae886bbd080f44f047682429748c28045}

[[◆ ](#ae886bbd080f44f047682429748c28045)]{.permalink}doublePressHandled {#doublepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------                          | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
|  ModeSelector::doublePressHandled |                                   |
|   ------                          |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab65d65f54eab8ec5335df2206273f0d8}

[[◆ ](#ab65d65f54eab8ec5335df2206273f0d8)]{.permalink}encoder {#encoder .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Encoder](classEncoder.h        |                                   |
| tml){.el}\* ModeSelector::encoder |                                   |
|   --------------------------      |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#af98d3659251c8bed66b9335cc5c7f9c9}

[[◆ ](#af98d3659251c8bed66b9335cc5c7f9c9)]{.permalink}inChannelSelection {#inchannelselection .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------                          | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
|  ModeSelector::inChannelSelection |                                   |
|   ------                          |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ab3ca420fe69c659b5f92b6ae799e5c89}

[[◆ ](#ab3ca420fe69c659b5f92b6ae799e5c89)]{.permalink}inModeSelection {#inmodeselection .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   int Mode                        |                                   |
| Selector::inModeSelection = false |                                   |
|   ----------                      |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4dc6fb472a2757e88dde6f35137c08e4}

[[◆ ](#a4dc6fb472a2757e88dde6f35137c08e4)]{.permalink}isInSelection {#isinselection .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
|  bool ModeSelector::isInSelection |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a2f8c7699b4534f802f75ba51393ba4d2}

[[◆ ](#a2f8c7699b4534f802f75ba51393ba4d2)]{.permalink}ledController {#ledcontroller .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------                     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [LEDContr                       |                                   |
| oller](classLEDController.html){. |                                   |
| el}\* ModeSelector::ledController |                                   |
|   -----------                     |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ade89353075816ece4e257ded8e888d88}

[[◆ ](#ade89353075816ece4e257ded8e888d88)]{.permalink}longPressHandled {#longpresshandled .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bo                              |                                   |
| ol ModeSelector::longPressHandled |                                   |
|   ----                            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aaab9cca1953b1f4797a55ded09638c95}

[[◆ ](#aaab9cca1953b1f4797a55ded09638c95)]{.permalink}mode {#mode .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[private]{.mlabel}]{.mlabels}    |
|   int ModeSelector::mode          |                                   |
|   ------------------------        |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4d26cfed61b6573ecaae521b85997b8c}

[[◆ ](#a4d26cfed61b6573ecaae521b85997b8c)]{.permalink}modes {#modes .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   std::vector\<[Mode](classMode.h |                                   |
| tml){.el}\*\> ModeSelector::modes |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a28fad2b854f3a9d724c3661d87a94c0e}

[[◆ ](#a28fad2b854f3a9d724c3661d87a94c0e)]{.permalink}nullMode {#nullmode .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Mode](classMode.html){.el}\*   |                                   |
|  ModeSelector::nullMode = nullptr |                                   |
|   ------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a9657b40d4e60d82c6e4ac5a2a605c47e}

[[◆ ](#a9657b40d4e60d82c6e4ac5a2a605c47e)]{.permalink}numLeds {#numleds .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------     | [[private]{.mlabel}]{.mlabels}    |
|   int ModeSelector::numLeds       |                                   |
|   ---------------------------     |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a69c5b741591b66abbf46e64aa295a8f8}

[[◆ ](#a69c5b741591b66abbf46e64aa295a8f8)]{.permalink}previousMode {#previousmode .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   in                              |                                   |
| t ModeSelector::previousMode = -1 |                                   |
|   ----                            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6b43ab161008add913652ccea49951e1}

[[◆ ](#a6b43ab161008add913652ccea49951e1)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----                           | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [Re                             |                                   |
| setButton](classResetButton.html) |                                   |
| {.el}\* ModeSelector::resetButton |                                   |
|   -----                           |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa101ddd545060ae8f98e58f986f86637}

[[◆ ](#aa101ddd545060ae8f98e58f986f86637)]{.permalink}singlePressHandled {#singlepresshandled .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------                          | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool                            |                                   |
|  ModeSelector::singlePressHandled |                                   |
|   ------                          |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa34005332133e2b5e10a4b904aa3c23e}

[[◆ ](#aa34005332133e2b5e10a4b904aa3c23e)]{.permalink}totalModes {#totalmodes .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------                | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   size\_t ModeSe                  |                                   |
| lector::totalModes = modes.size() |                                   |
|   ----------------                |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[ModeSelector.h](ModeSelector_8h_source.html){.el}
-   src/[ModeSelector.cpp](ModeSelector_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
