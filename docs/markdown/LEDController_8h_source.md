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
LEDController.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](LEDController_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef LED\_CONTROLLER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define LED\_CONTROLLER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[LEDs.h](LEDs_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} 
:::

::: {.line}
[]{#l00006}[ [6](classLEDController.html){.line}]{.lineno} [class
]{.keyword}[LEDController](classLEDController.html){.code} {
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
[LEDController](classLEDController.html#a745e22f2bff89379f1ba931ef3e87af9){.code}([LEDs](classLEDs.html){.code}&
[leds](classLEDController.html#a843d7baf6e1d25b971058000c6d14285){.code});
:::

::: {.line}
[]{#l00009}[ 9]{.lineno}  [void]{.keywordtype}
[turnAllOn](classLEDController.html#a7fa2395ec4f58ad835915e427463bec0){.code}();
:::

::: {.line}
[]{#l00010}[ 10]{.lineno}  [void]{.keywordtype}
[turnAllOff](classLEDController.html#a40b2381a7df13d29cf4f4e654155e7af){.code}();
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [void]{.keywordtype}
[blinkSlow](classLEDController.html#ab2446eb215b833358b8c5a8a8049b879){.code}([int]{.keywordtype}
ledIndex);
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [void]{.keywordtype}
[blinkFast](classLEDController.html#a5d08bfa962c8df40e6943de346518bc1){.code}([int]{.keywordtype}
ledIndex);
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [void]{.keywordtype}
[blinkFaster](classLEDController.html#aef59bb9c869f433976d40c268bd7f277){.code}([int]{.keywordtype}
ledIndex);
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [void]{.keywordtype}
[stopBlinking](classLEDController.html#a947daa5c9148f080cb7485613ac5cc60){.code}([int]{.keywordtype}
ledIndex);
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[stopAllBlinking](classLEDController.html#a8e6acb784fdab8b7545d1e602ecc6ea2){.code}();
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [void]{.keywordtype}
[resetInverted](classLEDController.html#ad5d9dce7bda36149d503cad8c6160fa2){.code}();
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [void]{.keywordtype}
[resetInverted](classLEDController.html#ad5d9dce7bda36149d503cad8c6160fa2){.code}([int]{.keywordtype}
ledIndex);
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [int]{.keywordtype}
[getNumLeds](classLEDController.html#acd5157d96af56837fd665fd222aba918){.code}();
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [void]{.keywordtype}
[update](classLEDController.html#a34f412383b75a8f5d9e5e369ee7345cf){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [void]{.keywordtype}
[clearAndResetLEDs](classLEDController.html#aca84215ce851c4abdbfbe9340a2b2ffc){.code}();
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[clearLEDs](classLEDController.html#a15ddcd060673c9d39c647fc4f374dcbd){.code}();
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[updateBlinking](classLEDController.html#affdef62d0508d20124fe590ea6634af6){.code}();
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [void]{.keywordtype}
[setState](classLEDController.html#ab23aa7c21c0b0d98871b13b97ab17520){.code}([int]{.keywordtype}
ledIndex, [bool]{.keywordtype} state);
:::

::: {.line}
[]{#l00024}[ 24]{.lineno} 
:::

::: {.line}
[]{#l00025}[ 25]{.lineno} 
:::

::: {.line}
[]{#l00026}[ 26]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00027}[
[27](classLEDController.html#a843d7baf6e1d25b971058000c6d14285){.line}]{.lineno} 
[LEDs](classLEDs.html){.code}&
[leds](classLEDController.html#a843d7baf6e1d25b971058000c6d14285){.code};
:::

::: {.line}
[]{#l00028}[
[28](classLEDController.html#ae33cda0ea999854e4855d7964ec59763){.line}]{.lineno} 
[int]{.keywordtype}
[numLeds](classLEDController.html#ae33cda0ea999854e4855d7964ec59763){.code};
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} };
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} 
:::

::: {.line}
[]{#l00031}[ 31]{.lineno} [\#endif ]{.preprocessor}[//
LED\_CONTROLLER\_H]{.comment}
:::

::: {#aLEDs_8h_html .ttc}
::: {.ttname}
[LEDs.h](LEDs_8h.html)
:::
:::

::: {#aclassLEDController_html .ttc}
::: {.ttname}
[LEDController](classLEDController.html)
:::

::: {.ttdef}
**Definition:** LEDController.h:6
:::
:::

::: {#aclassLEDController_html_a15ddcd060673c9d39c647fc4f374dcbd .ttc}
::: {.ttname}
[LEDController::clearLEDs](classLEDController.html#a15ddcd060673c9d39c647fc4f374dcbd)
:::

::: {.ttdeci}
void clearLEDs()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:65
:::
:::

::: {#aclassLEDController_html_a34f412383b75a8f5d9e5e369ee7345cf .ttc}
::: {.ttname}
[LEDController::update](classLEDController.html#a34f412383b75a8f5d9e5e369ee7345cf)
:::

::: {.ttdeci}
void update()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:55
:::
:::

::: {#aclassLEDController_html_a40b2381a7df13d29cf4f4e654155e7af .ttc}
::: {.ttname}
[LEDController::turnAllOff](classLEDController.html#a40b2381a7df13d29cf4f4e654155e7af)
:::

::: {.ttdeci}
void turnAllOff()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:13
:::
:::

::: {#aclassLEDController_html_a5d08bfa962c8df40e6943de346518bc1 .ttc}
::: {.ttname}
[LEDController::blinkFast](classLEDController.html#a5d08bfa962c8df40e6943de346518bc1)
:::

::: {.ttdeci}
void blinkFast(int ledIndex)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:21
:::
:::

::: {#aclassLEDController_html_a745e22f2bff89379f1ba931ef3e87af9 .ttc}
::: {.ttname}
[LEDController::LEDController](classLEDController.html#a745e22f2bff89379f1ba931ef3e87af9)
:::

::: {.ttdeci}
LEDController(LEDs &leds)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:5
:::
:::

::: {#aclassLEDController_html_a7fa2395ec4f58ad835915e427463bec0 .ttc}
::: {.ttname}
[LEDController::turnAllOn](classLEDController.html#a7fa2395ec4f58ad835915e427463bec0)
:::

::: {.ttdeci}
void turnAllOn()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:9
:::
:::

::: {#aclassLEDController_html_a843d7baf6e1d25b971058000c6d14285 .ttc}
::: {.ttname}
[LEDController::leds](classLEDController.html#a843d7baf6e1d25b971058000c6d14285)
:::

::: {.ttdeci}
LEDs & leds
:::

::: {.ttdef}
**Definition:** LEDController.h:27
:::
:::

::: {#aclassLEDController_html_a8e6acb784fdab8b7545d1e602ecc6ea2 .ttc}
::: {.ttname}
[LEDController::stopAllBlinking](classLEDController.html#a8e6acb784fdab8b7545d1e602ecc6ea2)
:::

::: {.ttdeci}
void stopAllBlinking()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:29
:::
:::

::: {#aclassLEDController_html_a947daa5c9148f080cb7485613ac5cc60 .ttc}
::: {.ttname}
[LEDController::stopBlinking](classLEDController.html#a947daa5c9148f080cb7485613ac5cc60)
:::

::: {.ttdeci}
void stopBlinking(int ledIndex)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:25
:::
:::

::: {#aclassLEDController_html_ab23aa7c21c0b0d98871b13b97ab17520 .ttc}
::: {.ttname}
[LEDController::setState](classLEDController.html#ab23aa7c21c0b0d98871b13b97ab17520)
:::

::: {.ttdeci}
void setState(int ledIndex, bool state)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:37
:::
:::

::: {#aclassLEDController_html_ab2446eb215b833358b8c5a8a8049b879 .ttc}
::: {.ttname}
[LEDController::blinkSlow](classLEDController.html#ab2446eb215b833358b8c5a8a8049b879)
:::

::: {.ttdeci}
void blinkSlow(int ledIndex)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:17
:::
:::

::: {#aclassLEDController_html_aca84215ce851c4abdbfbe9340a2b2ffc .ttc}
::: {.ttname}
[LEDController::clearAndResetLEDs](classLEDController.html#aca84215ce851c4abdbfbe9340a2b2ffc)
:::

::: {.ttdeci}
void clearAndResetLEDs()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:59
:::
:::

::: {#aclassLEDController_html_acd5157d96af56837fd665fd222aba918 .ttc}
::: {.ttname}
[LEDController::getNumLeds](classLEDController.html#acd5157d96af56837fd665fd222aba918)
:::

::: {.ttdeci}
int getNumLeds()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:51
:::
:::

::: {#aclassLEDController_html_ad5d9dce7bda36149d503cad8c6160fa2 .ttc}
::: {.ttname}
[LEDController::resetInverted](classLEDController.html#ad5d9dce7bda36149d503cad8c6160fa2)
:::

::: {.ttdeci}
void resetInverted()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:41
:::
:::

::: {#aclassLEDController_html_ae33cda0ea999854e4855d7964ec59763 .ttc}
::: {.ttname}
[LEDController::numLeds](classLEDController.html#ae33cda0ea999854e4855d7964ec59763)
:::

::: {.ttdeci}
int numLeds
:::

::: {.ttdef}
**Definition:** LEDController.h:28
:::
:::

::: {#aclassLEDController_html_aef59bb9c869f433976d40c268bd7f277 .ttc}
::: {.ttname}
[LEDController::blinkFaster](classLEDController.html#aef59bb9c869f433976d40c268bd7f277)
:::

::: {.ttdeci}
void blinkFaster(int ledIndex)
:::

::: {.ttdef}
**Definition:** LEDController.cpp:33
:::
:::

::: {#aclassLEDController_html_affdef62d0508d20124fe590ea6634af6 .ttc}
::: {.ttname}
[LEDController::updateBlinking](classLEDController.html#affdef62d0508d20124fe590ea6634af6)
:::

::: {.ttdeci}
void updateBlinking()
:::

::: {.ttdef}
**Definition:** LEDController.cpp:70
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
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
