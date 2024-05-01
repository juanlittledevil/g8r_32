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
[Public Member Functions](#pub-methods) \| [Private
Attributes](#pri-attribs) \| [List of all
members](classLEDController-members.html)
:::

::: {.headertitle}
::: {.title}
LEDController Class Reference
:::
:::
:::

::: {.contents}
`#include <LEDController.h>`

::: {.dynheader}
Collaboration diagram for LEDController:
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

 

[LEDController](classLEDController.html#a745e22f2bff89379f1ba931ef3e87af9){.el}
([LEDs](classLEDs.html){.el}
&[leds](classLEDController.html#a843d7baf6e1d25b971058000c6d14285){.el})

 

void 

[turnAllOn](classLEDController.html#a7fa2395ec4f58ad835915e427463bec0){.el}
()

 

void 

[turnAllOff](classLEDController.html#a40b2381a7df13d29cf4f4e654155e7af){.el}
()

 

void 

[blinkSlow](classLEDController.html#ab2446eb215b833358b8c5a8a8049b879){.el}
(int ledIndex)

 

void 

[blinkFast](classLEDController.html#a5d08bfa962c8df40e6943de346518bc1){.el}
(int ledIndex)

 

void 

[blinkFaster](classLEDController.html#aef59bb9c869f433976d40c268bd7f277){.el}
(int ledIndex)

 

void 

[stopBlinking](classLEDController.html#a947daa5c9148f080cb7485613ac5cc60){.el}
(int ledIndex)

 

void 

[stopAllBlinking](classLEDController.html#a8e6acb784fdab8b7545d1e602ecc6ea2){.el}
()

 

void 

[resetInverted](classLEDController.html#ad5d9dce7bda36149d503cad8c6160fa2){.el}
()

 

void 

[resetInverted](classLEDController.html#a916e5ced402d4092d8c42d3f2f4b56f6){.el}
(int ledIndex)

 

int 

[getNumLeds](classLEDController.html#acd5157d96af56837fd665fd222aba918){.el}
()

 

void 

[update](classLEDController.html#a34f412383b75a8f5d9e5e369ee7345cf){.el}
()

 

void 

[clearAndResetLEDs](classLEDController.html#aca84215ce851c4abdbfbe9340a2b2ffc){.el}
()

 

void 

[clearLEDs](classLEDController.html#a15ddcd060673c9d39c647fc4f374dcbd){.el}
()

 

void 

[updateBlinking](classLEDController.html#affdef62d0508d20124fe590ea6634af6){.el}
()

 

void 

[setState](classLEDController.html#ab23aa7c21c0b0d98871b13b97ab17520){.el}
(int ledIndex, bool state)

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[LEDs](classLEDs.html){.el} & 

[leds](classLEDController.html#a843d7baf6e1d25b971058000c6d14285){.el}

 

int 

[numLeds](classLEDController.html#ae33cda0ea999854e4855d7964ec59763){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a745e22f2bff89379f1ba931ef3e87af9}

[[◆ ](#a745e22f2bff89379f1ba931ef3e87af9)]{.permalink}LEDController() {#ledcontroller .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- -------------------------------- -------- --- --
  LEDController::LEDController   (   [LEDs](classLEDs.html){.el} &    *leds*   )   
  ------------------------------ --- -------------------------------- -------- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a5d08bfa962c8df40e6943de346518bc1}

[[◆ ](#a5d08bfa962c8df40e6943de346518bc1)]{.permalink}blinkFast() {#blinkfast .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- ------ ------------ --- --
  void LEDController::blinkFast   (   int    *ledIndex*   )   
  ------------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#aef59bb9c869f433976d40c268bd7f277}

[[◆ ](#aef59bb9c869f433976d40c268bd7f277)]{.permalink}blinkFaster() {#blinkfaster .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------- --- ------ ------------ --- --
  void LEDController::blinkFaster   (   int    *ledIndex*   )   
  --------------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#ab2446eb215b833358b8c5a8a8049b879}

[[◆ ](#ab2446eb215b833358b8c5a8a8049b879)]{.permalink}blinkSlow() {#blinkslow .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- ------ ------------ --- --
  void LEDController::blinkSlow   (   int    *ledIndex*   )   
  ------------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#aca84215ce851c4abdbfbe9340a2b2ffc}

[[◆ ](#aca84215ce851c4abdbfbe9340a2b2ffc)]{.permalink}clearAndResetLEDs() {#clearandresetleds .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------- --- -- --- --
  void LEDController::clearAndResetLEDs   (      )   
  --------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a15ddcd060673c9d39c647fc4f374dcbd}

[[◆ ](#a15ddcd060673c9d39c647fc4f374dcbd)]{.permalink}clearLEDs() {#clearleds .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- -- --- --
  void LEDController::clearLEDs   (      )   
  ------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#acd5157d96af56837fd665fd222aba918}

[[◆ ](#acd5157d96af56837fd665fd222aba918)]{.permalink}getNumLeds() {#getnumleds .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- -- --- --
  int LEDController::getNumLeds   (      )   
  ------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ad5d9dce7bda36149d503cad8c6160fa2}

[[◆ ](#ad5d9dce7bda36149d503cad8c6160fa2)]{.permalink}resetInverted() [\[1/2\]]{.overload} {#resetinverted-12 .memtitle}
------------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------- --- -- --- --
  void LEDController::resetInverted   (      )   
  ----------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a916e5ced402d4092d8c42d3f2f4b56f6}

[[◆ ](#a916e5ced402d4092d8c42d3f2f4b56f6)]{.permalink}resetInverted() [\[2/2\]]{.overload} {#resetinverted-22 .memtitle}
------------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------- --- ------ ------------ --- --
  void LEDController::resetInverted   (   int    *ledIndex*   )   
  ----------------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#ab23aa7c21c0b0d98871b13b97ab17520}

[[◆ ](#ab23aa7c21c0b0d98871b13b97ab17520)]{.permalink}setState() {#setstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- ------- -------------
  void LEDController::setState   (   int     *ledIndex*,
                                     bool    *state* 
                                 )           
  ------------------------------ --- ------- -------------
:::

::: {.memdoc}
:::
:::

[]{#a8e6acb784fdab8b7545d1e602ecc6ea2}

[[◆ ](#a8e6acb784fdab8b7545d1e602ecc6ea2)]{.permalink}stopAllBlinking() {#stopallblinking .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  void LEDController::stopAllBlinking   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a947daa5c9148f080cb7485613ac5cc60}

[[◆ ](#a947daa5c9148f080cb7485613ac5cc60)]{.permalink}stopBlinking() {#stopblinking .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------- --- ------ ------------ --- --
  void LEDController::stopBlinking   (   int    *ledIndex*   )   
  ---------------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#a40b2381a7df13d29cf4f4e654155e7af}

[[◆ ](#a40b2381a7df13d29cf4f4e654155e7af)]{.permalink}turnAllOff() {#turnalloff .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------- --- -- --- --
  void LEDController::turnAllOff   (      )   
  -------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a7fa2395ec4f58ad835915e427463bec0}

[[◆ ](#a7fa2395ec4f58ad835915e427463bec0)]{.permalink}turnAllOn() {#turnallon .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- -- --- --
  void LEDController::turnAllOn   (      )   
  ------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a34f412383b75a8f5d9e5e369ee7345cf}

[[◆ ](#a34f412383b75a8f5d9e5e369ee7345cf)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- -- --- --
  void LEDController::update   (      )   
  ---------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#affdef62d0508d20124fe590ea6634af6}

[[◆ ](#affdef62d0508d20124fe590ea6634af6)]{.permalink}updateBlinking() {#updateblinking .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------ --- -- --- --
  void LEDController::updateBlinking   (      )   
  ------------------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a843d7baf6e1d25b971058000c6d14285}

[[◆ ](#a843d7baf6e1d25b971058000c6d14285)]{.permalink}leds {#leds .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [LEDs](classLED                 |                                   |
| s.html){.el}& LEDController::leds |                                   |
|   -----------------               |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae33cda0ea999854e4855d7964ec59763}

[[◆ ](#ae33cda0ea999854e4855d7964ec59763)]{.permalink}numLeds {#numleds .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------------    | [[private]{.mlabel}]{.mlabels}    |
|   int LEDController::numLeds      |                                   |
|   ----------------------------    |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[LEDController.h](LEDController_8h_source.html){.el}
-   src/[LEDController.cpp](LEDController_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
