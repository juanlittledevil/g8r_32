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
members](classSPDTSwitch-members.html)
:::

::: {.headertitle}
::: {.title}
SPDTSwitch Class Reference
:::
:::
:::

::: {.contents}
`#include <SPDTSwitch.h>`

::: {.dynheader}
Collaboration diagram for SPDTSwitch:
:::

::: {.dyncontent}
::: {.center}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------
:::

 

[SPDTSwitch](classSPDTSwitch.html#a90c160683f2376923bda23a9efbdfe9f){.el}
(int
[pinA](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856){.el}, int
[pinB](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f){.el})

 

void 

[begin](classSPDTSwitch.html#a85f22064a906dfe33fa955c2bf8d60da){.el} ()

 

[SwitchState](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff){.el} 

[read](classSPDTSwitch.html#a455098cc7f1d47911bca4414279b4226){.el} ()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[InputPin](classInputPin.html){.el} 

[pinA](classSPDTSwitch.html#a030728c475d9df7f03002439cbc7f856){.el}

 

[InputPin](classInputPin.html){.el} 

[pinB](classSPDTSwitch.html#a6394f0cb290e71c2ce5cc8a9d307ab3f){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a90c160683f2376923bda23a9efbdfe9f}

[[◆ ](#a90c160683f2376923bda23a9efbdfe9f)]{.permalink}SPDTSwitch() {#spdtswitch .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- ------ ---------
  SPDTSwitch::SPDTSwitch   (   int    *pinA*,
                               int    *pinB* 
                           )          
  ------------------------ --- ------ ---------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a85f22064a906dfe33fa955c2bf8d60da}

[[◆ ](#a85f22064a906dfe33fa955c2bf8d60da)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- -- --- --
  void SPDTSwitch::begin   (      )   
  ------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a455098cc7f1d47911bca4414279b4226}

[[◆ ](#a455098cc7f1d47911bca4414279b4226)]{.permalink}read() {#read .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------- --- -- --- --
  [SwitchState](SPDTSwitch_8h.html#a8fe26342018333e4ef7220e3ab6726ff){.el} SPDTSwitch::read   (      )   
  ------------------------------------------------------------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a030728c475d9df7f03002439cbc7f856}

[[◆ ](#a030728c475d9df7f03002439cbc7f856)]{.permalink}pinA {#pina .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------           | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classInp             |                                   |
| utPin.html){.el} SPDTSwitch::pinA |                                   |
|   ---------------------           |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6394f0cb290e71c2ce5cc8a9d307ab3f}

[[◆ ](#a6394f0cb290e71c2ce5cc8a9d307ab3f)]{.permalink}pinB {#pinb .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------           | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classInp             |                                   |
| utPin.html){.el} SPDTSwitch::pinB |                                   |
|   ---------------------           |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[SPDTSwitch.h](SPDTSwitch_8h_source.html){.el}
-   src/[SPDTSwitch.cpp](SPDTSwitch_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
