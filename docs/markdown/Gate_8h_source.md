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
Gate.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Gate_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef GATE\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define GATE\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[Pin.h](Pin_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[Constants.h](Constants_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} 
:::

::: {.line}
[]{#l00007}[ [7](classGate.html){.line}]{.lineno} [class
]{.keyword}[Gate](classGate.html){.code} : [public]{.keyword}
[OutputPin](classOutputPin.html){.code} {
:::

::: {.line}
[]{#l00008}[ 8]{.lineno}  [public]{.keyword}:
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
[Gate](classGate.html#a9f0a3e04c61f6924c2d2d5bbdfaa8ead){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code} = -1); [//
Default pin set to -1]{.comment}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} 
[\~Gate](classGate.html#aa04556acb1cdc5715e38ced8f28c6b27){.code}(); [//
Destructor declaration]{.comment}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [void]{.keywordtype}
[trigger](classGate.html#a6277eacc42d5f84de2a59ea4e062b5bf){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [void]{.keywordtype}
[update](classGate.html#a420659855b83dd5dcd94b9eda11f5824){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [void]{.keywordtype}
[setDivision](classGate.html#a49ac696e28beeb2d158778c5588f872e){.code}([int]{.keywordtype}
divition);
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [int]{.keywordtype}
[getDivision](classGate.html#ab99412ef6a005235669a0acc34bc9c9b){.code}();
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[setGateOnDuration](classGate.html#a17f0a9f5f2d7e19367c70d6afd965fa1){.code}([int]{.keywordtype}
duration);
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [private]{.keyword}:
:::

::: {.line}
[]{#l00018}[
[18](classGate.html#a35f127ccfcc6721cd0fcae3de805815f){.line}]{.lineno} 
[int]{.keywordtype}
[gateOnDuration](classGate.html#a35f127ccfcc6721cd0fcae3de805815f){.code}
= 10; [// Duration in milliseconds that the LED should stay
on]{.comment}
:::

::: {.line}
[]{#l00019}[
[19](classGate.html#a16fe5ae275203f6fc24bf34f08033f0f){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[triggeredTime](classGate.html#a16fe5ae275203f6fc24bf34f08033f0f){.code}
= 0;
:::

::: {.line}
[]{#l00020}[
[20](classGate.html#a650b1da6da13180bae01219b862ec725){.line}]{.lineno} 
[int]{.keywordtype}
[division](classGate.html#a650b1da6da13180bae01219b862ec725){.code} =
[internalPPQN](main_8cpp.html#adf636984b70d690edd0c4a32836392e0){.code};
:::

::: {.line}
[]{#l00021}[ 21]{.lineno} };
:::

::: {.line}
[]{#l00022}[ 22]{.lineno} 
:::

::: {.line}
[]{#l00023}[ 23]{.lineno} 
:::

::: {.line}
[]{#l00024}[ 24]{.lineno} [\#endif]{.preprocessor}
:::

::: {#aConstants_8h_html .ttc}
::: {.ttname}
[Constants.h](Constants_8h.html)
:::
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
:::
:::

::: {#aclassGate_html .ttc}
::: {.ttname}
[Gate](classGate.html)
:::

::: {.ttdef}
**Definition:** Gate.h:7
:::
:::

::: {#aclassGate_html_a16fe5ae275203f6fc24bf34f08033f0f .ttc}
::: {.ttname}
[Gate::triggeredTime](classGate.html#a16fe5ae275203f6fc24bf34f08033f0f)
:::

::: {.ttdeci}
unsigned long triggeredTime
:::

::: {.ttdef}
**Definition:** Gate.h:19
:::
:::

::: {#aclassGate_html_a17f0a9f5f2d7e19367c70d6afd965fa1 .ttc}
::: {.ttname}
[Gate::setGateOnDuration](classGate.html#a17f0a9f5f2d7e19367c70d6afd965fa1)
:::

::: {.ttdeci}
void setGateOnDuration(int duration)
:::

::: {.ttdef}
**Definition:** Gate.cpp:39
:::
:::

::: {#aclassGate_html_a35f127ccfcc6721cd0fcae3de805815f .ttc}
::: {.ttname}
[Gate::gateOnDuration](classGate.html#a35f127ccfcc6721cd0fcae3de805815f)
:::

::: {.ttdeci}
int gateOnDuration
:::

::: {.ttdef}
**Definition:** Gate.h:18
:::
:::

::: {#aclassGate_html_a420659855b83dd5dcd94b9eda11f5824 .ttc}
::: {.ttname}
[Gate::update](classGate.html#a420659855b83dd5dcd94b9eda11f5824)
:::

::: {.ttdeci}
void update(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** Gate.cpp:29
:::
:::

::: {#aclassGate_html_a49ac696e28beeb2d158778c5588f872e .ttc}
::: {.ttname}
[Gate::setDivision](classGate.html#a49ac696e28beeb2d158778c5588f872e)
:::

::: {.ttdeci}
void setDivision(int divition)
:::

::: {.ttdef}
**Definition:** Gate.cpp:20
:::
:::

::: {#aclassGate_html_a6277eacc42d5f84de2a59ea4e062b5bf .ttc}
::: {.ttname}
[Gate::trigger](classGate.html#a6277eacc42d5f84de2a59ea4e062b5bf)
:::

::: {.ttdeci}
void trigger(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** Gate.cpp:24
:::
:::

::: {#aclassGate_html_a650b1da6da13180bae01219b862ec725 .ttc}
::: {.ttname}
[Gate::division](classGate.html#a650b1da6da13180bae01219b862ec725)
:::

::: {.ttdeci}
int division
:::

::: {.ttdef}
**Definition:** Gate.h:20
:::
:::

::: {#aclassGate_html_a9f0a3e04c61f6924c2d2d5bbdfaa8ead .ttc}
::: {.ttname}
[Gate::Gate](classGate.html#a9f0a3e04c61f6924c2d2d5bbdfaa8ead)
:::

::: {.ttdeci}
Gate(int pin=-1)
:::

::: {.ttdef}
**Definition:** Gate.cpp:9
:::
:::

::: {#aclassGate_html_aa04556acb1cdc5715e38ced8f28c6b27 .ttc}
::: {.ttname}
[Gate::\~Gate](classGate.html#aa04556acb1cdc5715e38ced8f28c6b27)
:::

::: {.ttdeci}
\~Gate()
:::

::: {.ttdef}
**Definition:** Gate.cpp:15
:::
:::

::: {#aclassGate_html_ab99412ef6a005235669a0acc34bc9c9b .ttc}
::: {.ttname}
[Gate::getDivision](classGate.html#ab99412ef6a005235669a0acc34bc9c9b)
:::

::: {.ttdeci}
int getDivision()
:::

::: {.ttdef}
**Definition:** Gate.cpp:35
:::
:::

::: {#aclassOutputPin_html .ttc}
::: {.ttname}
[OutputPin](classOutputPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:41
:::
:::

::: {#aclassPin_html_acf35726490e8ccea7fdeeeb57144bf6d .ttc}
::: {.ttname}
[Pin::pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d)
:::

::: {.ttdeci}
int pin
:::

::: {.ttdef}
**Definition:** Pin.h:11
:::
:::

::: {#amain_8cpp_html_adf636984b70d690edd0c4a32836392e0 .ttc}
::: {.ttname}
[internalPPQN](main_8cpp.html#adf636984b70d690edd0c4a32836392e0)
:::

::: {.ttdeci}
unsigned char internalPPQN
:::

::: {.ttdef}
**Definition:** main.cpp:60
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
