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
members](classInputHandler-members.html)
:::

::: {.headertitle}
::: {.title}
InputHandler Class Reference
:::
:::
:::

::: {.contents}
`#include <InputHandler.h>`

::: {.dynheader}
Collaboration diagram for InputHandler:
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

 

[InputHandler](classInputHandler.html#a628103ee6cade2dadfd536d9a4fcd9a1){.el}
(int cvAPin, int cvBPin)

 

void 

[begin](classInputHandler.html#aefbb4e5aa831a70959c51ff3583df576){.el}
()

 

int 

[readCVA](classInputHandler.html#a23aa86bfae156881f0cafb5f44993969){.el}
()

 

int 

[readCVB](classInputHandler.html#a95a298cf90c6af9974eec9dd3c52d9a2){.el}
()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[AnalogInputPin](classAnalogInputPin.html){.el} 

[cvA](classInputHandler.html#a8365143d0ed3e4c163a9695ea387d627){.el}

 

[AnalogInputPin](classAnalogInputPin.html){.el} 

[cvB](classInputHandler.html#a00fec0a9809187403e471b6938334fb9){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a628103ee6cade2dadfd536d9a4fcd9a1}

[[◆ ](#a628103ee6cade2dadfd536d9a4fcd9a1)]{.permalink}InputHandler() {#inputhandler .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- ------ -----------
  InputHandler::InputHandler   (   int    *cvAPin*,
                                   int    *cvBPin* 
                               )          
  ---------------------------- --- ------ -----------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#aefbb4e5aa831a70959c51ff3583df576}

[[◆ ](#aefbb4e5aa831a70959c51ff3583df576)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -- --- --
  void InputHandler::begin   (      )   
  -------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a23aa86bfae156881f0cafb5f44993969}

[[◆ ](#a23aa86bfae156881f0cafb5f44993969)]{.permalink}readCVA() {#readcva .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  int InputHandler::readCVA   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a95a298cf90c6af9974eec9dd3c52d9a2}

[[◆ ](#a95a298cf90c6af9974eec9dd3c52d9a2)]{.permalink}readCVB() {#readcvb .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  int InputHandler::readCVB   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a8365143d0ed3e4c163a9695ea387d627}

[[◆ ](#a8365143d0ed3e4c163a9695ea387d627)]{.permalink}cvA {#cva .memtitle}
---------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|                                   |                                   |
|  [AnalogInputPin](classAnalogInpu |                                   |
| tPin.html){.el} InputHandler::cvA |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a00fec0a9809187403e471b6938334fb9}

[[◆ ](#a00fec0a9809187403e471b6938334fb9)]{.permalink}cvB {#cvb .memtitle}
---------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|                                   |                                   |
|  [AnalogInputPin](classAnalogInpu |                                   |
| tPin.html){.el} InputHandler::cvB |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[InputHandler.h](InputHandler_8h_source.html){.el}
-   src/[InputHandler.cpp](InputHandler_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
