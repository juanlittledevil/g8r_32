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
SPDTSwitch.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](SPDTSwitch_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef SPDT\_SWITCH\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define SPDT\_SWITCH\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[Pin.h](Pin_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} 
:::

::: {.line}
[]{#l00006}[
[6](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff){.line}]{.lineno} [enum]{.keyword}
[SwitchState](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff){.code}
{
:::

::: {.line}
[]{#l00007}[
[7](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaf46d14eb9d5d71afc9f6e747689fcb56){.line}]{.lineno} 
[NEUTRAL](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaf46d14eb9d5d71afc9f6e747689fcb56){.code},
:::

::: {.line}
[]{#l00008}[
[8](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaa32486e6d0574321e0fedafe557c21fc){.line}]{.lineno} 
[STATE\_A](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaa32486e6d0574321e0fedafe557c21fc){.code},
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
[STATE\_B](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffa5ae62508b79893c526e0394ecb9eddde){.code}
:::

::: {.line}
[]{#l00010}[
[10](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffa5ae62508b79893c526e0394ecb9eddde){.line}]{.lineno} };
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} 
:::

::: {.line}
[]{#l00012}[ [12](classSPDTSwitch.html){.line}]{.lineno} [class
]{.keyword}[SPDTSwitch](classSPDTSwitch.html){.code} {
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [private]{.keyword}:
:::

::: {.line}
[]{#l00014}[
[14](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[pinA](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856){.code};
:::

::: {.line}
[]{#l00015}[
[15](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[pinB](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f){.code};
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [public]{.keyword}:
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
[SPDTSwitch](classSPDTSwitch.html#a90c160683f2376923bda23a9efbdfe9f){.code}([int]{.keywordtype}
[pinA](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856){.code},
[int]{.keywordtype}
[pinB](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f){.code});
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [void]{.keywordtype}
[begin](classSPDTSwitch.html#a85f22064a906dfe33fa955c2bf8d60da){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno} 
[SwitchState](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff){.code}
[read](classSPDTSwitch.html#a455098cc7f1d47911bca4414279b4226){.code}();
:::

::: {.line}
[]{#l00021}[ 21]{.lineno} };
:::

::: {.line}
[]{#l00022}[ 22]{.lineno} 
:::

::: {.line}
[]{#l00023}[ 23]{.lineno} [\#endif]{.preprocessor}
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
:::
:::

::: {#aSPDTSwitch_8h_html_a8fe26342018333e4ef7220e3ab6726ff .ttc}
::: {.ttname}
[SwitchState](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff)
:::

::: {.ttdeci}
SwitchState
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:6
:::
:::

::: {#aSPDTSwitch_8h_html_a8fe26342018333e4ef7220e3ab6726ffa5ae62508b79893c526e0394ecb9eddde .ttc}
::: {.ttname}
[STATE\_B](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffa5ae62508b79893c526e0394ecb9eddde)
:::

::: {.ttdeci}
@ STATE\_B
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:9
:::
:::

::: {#aSPDTSwitch_8h_html_a8fe26342018333e4ef7220e3ab6726ffaa32486e6d0574321e0fedafe557c21fc .ttc}
::: {.ttname}
[STATE\_A](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaa32486e6d0574321e0fedafe557c21fc)
:::

::: {.ttdeci}
@ STATE\_A
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:8
:::
:::

::: {#aSPDTSwitch_8h_html_a8fe26342018333e4ef7220e3ab6726ffaf46d14eb9d5d71afc9f6e747689fcb56 .ttc}
::: {.ttname}
[NEUTRAL](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ffaf46d14eb9d5d71afc9f6e747689fcb56)
:::

::: {.ttdeci}
@ NEUTRAL
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:7
:::
:::

::: {#aclassInputPin_html .ttc}
::: {.ttname}
[InputPin](classInputPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:20
:::
:::

::: {#aclassSPDTSwitch_html .ttc}
::: {.ttname}
[SPDTSwitch](classSPDTSwitch.html)
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:12
:::
:::

::: {#aclassSPDTSwitch_html_a030728c475d9df7f03002439cbc7f856 .ttc}
::: {.ttname}
[SPDTSwitch::pinA](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856)
:::

::: {.ttdeci}
InputPin pinA
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:14
:::
:::

::: {#aclassSPDTSwitch_html_a455098cc7f1d47911bca4414279b4226 .ttc}
::: {.ttname}
[SPDTSwitch::read](classSPDTSwitch.html#a455098cc7f1d47911bca4414279b4226)
:::

::: {.ttdeci}
SwitchState read()
:::

::: {.ttdef}
**Definition:** SPDTSwitch.cpp:23
:::
:::

::: {#aclassSPDTSwitch_html_a6394f0cb290e71c2ce5cc8a9d307ab3f .ttc}
::: {.ttname}
[SPDTSwitch::pinB](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f)
:::

::: {.ttdeci}
InputPin pinB
:::

::: {.ttdef}
**Definition:** SPDTSwitch.h:15
:::
:::

::: {#aclassSPDTSwitch_html_a85f22064a906dfe33fa955c2bf8d60da .ttc}
::: {.ttname}
[SPDTSwitch::begin](classSPDTSwitch.html#a85f22064a906dfe33fa955c2bf8d60da)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** SPDTSwitch.cpp:18
:::
:::

::: {#aclassSPDTSwitch_html_a90c160683f2376923bda23a9efbdfe9f .ttc}
::: {.ttname}
[SPDTSwitch::SPDTSwitch](classSPDTSwitch.html#a90c160683f2376923bda23a9efbdfe9f)
:::

::: {.ttdeci}
SPDTSwitch(int pinA, int pinB)
:::

::: {.ttdef}
**Definition:** SPDTSwitch.cpp:15
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
