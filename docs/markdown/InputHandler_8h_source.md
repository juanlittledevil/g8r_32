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
InputHandler.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](InputHandler_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef INPUT\_HANDLER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define INPUT\_HANDLER\_H]{.preprocessor}
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
[]{#l00006}[ [6](classInputHandler.html){.line}]{.lineno} [class
]{.keyword}[InputHandler](classInputHandler.html){.code} {
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
[InputHandler](classInputHandler.html#a628103ee6cade2dadfd536d9a4fcd9a1){.code}([int]{.keywordtype}
cvAPin, [int]{.keywordtype} cvBPin);
:::

::: {.line}
[]{#l00009}[ 9]{.lineno}  [void]{.keywordtype}
[begin](classInputHandler.html#aefbb4e5aa831a70959c51ff3583df576){.code}();
:::

::: {.line}
[]{#l00010}[ 10]{.lineno}  [int]{.keywordtype}
[readCVA](classInputHandler.html#a23aa86bfae156881f0cafb5f44993969){.code}();
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [int]{.keywordtype}
[readCVB](classInputHandler.html#a95a298cf90c6af9974eec9dd3c52d9a2){.code}();
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} 
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00014}[
[14](classInputHandler.html#a8365143d0ed3e4c163a9695ea387d627){.line}]{.lineno} 
[AnalogInputPin](classAnalogInputPin.html){.code}
[cvA](classInputHandler.html#a8365143d0ed3e4c163a9695ea387d627){.code};
:::

::: {.line}
[]{#l00015}[
[15](classInputHandler.html#a00fec0a9809187403e471b6938334fb9){.line}]{.lineno} 
[AnalogInputPin](classAnalogInputPin.html){.code}
[cvB](classInputHandler.html#a00fec0a9809187403e471b6938334fb9){.code};
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} };
:::

::: {.line}
[]{#l00017}[ 17]{.lineno} 
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} [\#endif ]{.preprocessor}[//
INPUT\_HANDLER\_H]{.comment}
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
:::
:::

::: {#aclassAnalogInputPin_html .ttc}
::: {.ttname}
[AnalogInputPin](classAnalogInputPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:33
:::
:::

::: {#aclassInputHandler_html .ttc}
::: {.ttname}
[InputHandler](classInputHandler.html)
:::

::: {.ttdef}
**Definition:** InputHandler.h:6
:::
:::

::: {#aclassInputHandler_html_a00fec0a9809187403e471b6938334fb9 .ttc}
::: {.ttname}
[InputHandler::cvB](classInputHandler.html#a00fec0a9809187403e471b6938334fb9)
:::

::: {.ttdeci}
AnalogInputPin cvB
:::

::: {.ttdef}
**Definition:** InputHandler.h:15
:::
:::

::: {#aclassInputHandler_html_a23aa86bfae156881f0cafb5f44993969 .ttc}
::: {.ttname}
[InputHandler::readCVA](classInputHandler.html#a23aa86bfae156881f0cafb5f44993969)
:::

::: {.ttdeci}
int readCVA()
:::

::: {.ttdef}
**Definition:** InputHandler.cpp:15
:::
:::

::: {#aclassInputHandler_html_a628103ee6cade2dadfd536d9a4fcd9a1 .ttc}
::: {.ttname}
[InputHandler::InputHandler](classInputHandler.html#a628103ee6cade2dadfd536d9a4fcd9a1)
:::

::: {.ttdeci}
InputHandler(int cvAPin, int cvBPin)
:::

::: {.ttdef}
**Definition:** InputHandler.cpp:7
:::
:::

::: {#aclassInputHandler_html_a8365143d0ed3e4c163a9695ea387d627 .ttc}
::: {.ttname}
[InputHandler::cvA](classInputHandler.html#a8365143d0ed3e4c163a9695ea387d627)
:::

::: {.ttdeci}
AnalogInputPin cvA
:::

::: {.ttdef}
**Definition:** InputHandler.h:14
:::
:::

::: {#aclassInputHandler_html_a95a298cf90c6af9974eec9dd3c52d9a2 .ttc}
::: {.ttname}
[InputHandler::readCVB](classInputHandler.html#a95a298cf90c6af9974eec9dd3c52d9a2)
:::

::: {.ttdeci}
int readCVB()
:::

::: {.ttdef}
**Definition:** InputHandler.cpp:19
:::
:::

::: {#aclassInputHandler_html_aefbb4e5aa831a70959c51ff3583df576 .ttc}
::: {.ttname}
[InputHandler::begin](classInputHandler.html#aefbb4e5aa831a70959c51ff3583df576)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** InputHandler.cpp:10
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
