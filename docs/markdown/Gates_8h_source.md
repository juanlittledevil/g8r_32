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
Gates.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Gates_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [// Gates.h]{.comment}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#ifndef GATES\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} [\#define GATES\_H]{.preprocessor}
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} 
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include \<Arduino.h\>]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Gate.h](Gate_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[LEDs.h](LEDs_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [\#include \<vector\>]{.preprocessor}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
:::

::: {.line}
[]{#l00010}[ [10](classGates.html){.line}]{.lineno} [class
]{.keyword}[Gates](classGates.html){.code} {
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [public]{.keyword}:
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} 
[Gates](classGates.html#af53ba952e2d91b90884fb38fe1f0fa0d){.code}(std::vector\<int\>
[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.code},
[int]{.keywordtype}
[numGates](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2){.code});
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} 
[\~Gates](classGates.html#a7bc98979e801ceb6e28472af3eb0a78f){.code}();
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [void]{.keywordtype}
[begin](classGates.html#a5a46476bf82868dcfcabb8bb93b14e84){.code}();
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[setState](classGates.html#ac2c1de1f4bd52fbedb24f9aae00af9d9){.code}([int]{.keywordtype}
gateIndex, [bool]{.keywordtype} state);
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [bool]{.keywordtype}
[getState](classGates.html#a83389338058653f2defddf694a927d56){.code}([int]{.keywordtype}
gateIndex);
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [void]{.keywordtype}
[turnOnGate](classGates.html#a4c955fec75ce64b0eb76b2fcdca2b7ce){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [void]{.keywordtype}
[turnOffGate](classGates.html#a7ab4510b88636eb970d61282353c1eb9){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [void]{.keywordtype}
[setALLGates](classGates.html#a02f76825e2dccc537b4e495b88bbedc4){.code}([bool]{.keywordtype}
state);
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [void]{.keywordtype}
[update](classGates.html#a4397cba12ab477b8759ccf846b5a909d){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[trigger](classGates.html#a6ef8dcff0ca40853f6ec07d20afa1b9b){.code}([int]{.keywordtype}
index, [unsigned]{.keywordtype} [long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[setDivision](classGates.html#ad2bc306e44f4f9dc025c57cd37e7c97f){.code}([int]{.keywordtype}
index, [int]{.keywordtype} division);
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [int]{.keywordtype}
[getDivision](classGates.html#a06f6153e686887048497f965599e6ba4){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00024}[
[24](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2){.line}]{.lineno} 
[int]{.keywordtype}
[numGates](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2){.code};
:::

::: {.line}
[]{#l00025}[
[25](classGates.html#a283f2d50700fad8bdca29e6227e65045){.line}]{.lineno} 
[int]{.keywordtype}
\*[gateCounters](classGates.html#a283f2d50700fad8bdca29e6227e65045){.code};
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[setSelectedGate](classGates.html#a4c5925d6eaea3c640d7e23f2219d6991){.code}([int]{.keywordtype}
gate);
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [int]{.keywordtype}
[getSelectedGate](classGates.html#a18d0602275e88db59021394b4a377151){.code}();
:::

::: {.line}
[]{#l00028}[ 28]{.lineno}  [void]{.keywordtype}
[setGateOnDuration](classGates.html#a2450c2bb48ab40c0c81b6a717d2e30ca){.code}([int]{.keywordtype}
index, [int]{.keywordtype} duration);
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} 
:::

::: {.line}
[]{#l00030}[ 30]{.lineno}  [private]{.keyword}:
:::

::: {.line}
[]{#l00031}[
[31](classGates.html#a4864124d3f822dbed79aa467f454fd1a){.line}]{.lineno} 
[Gate](classGate.html){.code}
\*[gateArray](classGates.html#a4864124d3f822dbed79aa467f454fd1a){.code};
:::

::: {.line}
[]{#l00032}[
[32](classGates.html#aac445c16f01968f9c919815f24f3a0a7){.line}]{.lineno} 
[int]{.keywordtype}
[selectedGate](classGates.html#aac445c16f01968f9c919815f24f3a0a7){.code};
:::

::: {.line}
[]{#l00033}[ 33]{.lineno} 
:::

::: {.line}
[]{#l00034}[ 34]{.lineno} };
:::

::: {.line}
[]{#l00035}[ 35]{.lineno} 
:::

::: {.line}
[]{#l00036}[ 36]{.lineno} [\#endif]{.preprocessor}
:::

::: {#aGate_8h_html .ttc}
::: {.ttname}
[Gate.h](Gate_8h.html)
:::
:::

::: {#aLEDs_8h_html .ttc}
::: {.ttname}
[LEDs.h](LEDs_8h.html)
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

::: {#aclassGates_html .ttc}
::: {.ttname}
[Gates](classGates.html)
:::

::: {.ttdef}
**Definition:** Gates.h:10
:::
:::

::: {#aclassGates_html_a02f76825e2dccc537b4e495b88bbedc4 .ttc}
::: {.ttname}
[Gates::setALLGates](classGates.html#a02f76825e2dccc537b4e495b88bbedc4)
:::

::: {.ttdeci}
void setALLGates(bool state)
:::

::: {.ttdef}
**Definition:** Gates.cpp:59
:::
:::

::: {#aclassGates_html_a06f6153e686887048497f965599e6ba4 .ttc}
::: {.ttname}
[Gates::getDivision](classGates.html#a06f6153e686887048497f965599e6ba4)
:::

::: {.ttdeci}
int getDivision(int index)
:::

::: {.ttdef}
**Definition:** Gates.cpp:80
:::
:::

::: {#aclassGates_html_a18d0602275e88db59021394b4a377151 .ttc}
::: {.ttname}
[Gates::getSelectedGate](classGates.html#a18d0602275e88db59021394b4a377151)
:::

::: {.ttdeci}
int getSelectedGate()
:::

::: {.ttdef}
**Definition:** Gates.cpp:98
:::
:::

::: {#aclassGates_html_a2450c2bb48ab40c0c81b6a717d2e30ca .ttc}
::: {.ttname}
[Gates::setGateOnDuration](classGates.html#a2450c2bb48ab40c0c81b6a717d2e30ca)
:::

::: {.ttdeci}
void setGateOnDuration(int index, int duration)
:::

::: {.ttdef}
**Definition:** Gates.cpp:103
:::
:::

::: {#aclassGates_html_a283f2d50700fad8bdca29e6227e65045 .ttc}
::: {.ttname}
[Gates::gateCounters](classGates.html#a283f2d50700fad8bdca29e6227e65045)
:::

::: {.ttdeci}
int \* gateCounters
:::

::: {.ttdef}
**Definition:** Gates.h:25
:::
:::

::: {#aclassGates_html_a4397cba12ab477b8759ccf846b5a909d .ttc}
::: {.ttname}
[Gates::update](classGates.html#a4397cba12ab477b8759ccf846b5a909d)
:::

::: {.ttdeci}
void update(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** Gates.cpp:88
:::
:::

::: {#aclassGates_html_a4864124d3f822dbed79aa467f454fd1a .ttc}
::: {.ttname}
[Gates::gateArray](classGates.html#a4864124d3f822dbed79aa467f454fd1a)
:::

::: {.ttdeci}
Gate \* gateArray
:::

::: {.ttdef}
**Definition:** Gates.h:31
:::
:::

::: {#aclassGates_html_a4c5925d6eaea3c640d7e23f2219d6991 .ttc}
::: {.ttname}
[Gates::setSelectedGate](classGates.html#a4c5925d6eaea3c640d7e23f2219d6991)
:::

::: {.ttdeci}
void setSelectedGate(int gate)
:::

::: {.ttdef}
**Definition:** Gates.cpp:94
:::
:::

::: {#aclassGates_html_a4c955fec75ce64b0eb76b2fcdca2b7ce .ttc}
::: {.ttname}
[Gates::turnOnGate](classGates.html#a4c955fec75ce64b0eb76b2fcdca2b7ce)
:::

::: {.ttdeci}
void turnOnGate(int index)
:::

::: {.ttdef}
**Definition:** Gates.cpp:45
:::
:::

::: {#aclassGates_html_a5a46476bf82868dcfcabb8bb93b14e84 .ttc}
::: {.ttname}
[Gates::begin](classGates.html#a5a46476bf82868dcfcabb8bb93b14e84)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** Gates.cpp:25
:::
:::

::: {#aclassGates_html_a6ef8dcff0ca40853f6ec07d20afa1b9b .ttc}
::: {.ttname}
[Gates::trigger](classGates.html#a6ef8dcff0ca40853f6ec07d20afa1b9b)
:::

::: {.ttdeci}
void trigger(int index, unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** Gates.cpp:66
:::
:::

::: {#aclassGates_html_a7ab4510b88636eb970d61282353c1eb9 .ttc}
::: {.ttname}
[Gates::turnOffGate](classGates.html#a7ab4510b88636eb970d61282353c1eb9)
:::

::: {.ttdeci}
void turnOffGate(int index)
:::

::: {.ttdef}
**Definition:** Gates.cpp:52
:::
:::

::: {#aclassGates_html_a7bc98979e801ceb6e28472af3eb0a78f .ttc}
::: {.ttname}
[Gates::\~Gates](classGates.html#a7bc98979e801ceb6e28472af3eb0a78f)
:::

::: {.ttdeci}
\~Gates()
:::

::: {.ttdef}
**Definition:** Gates.cpp:20
:::
:::

::: {#aclassGates_html_a83389338058653f2defddf694a927d56 .ttc}
::: {.ttname}
[Gates::getState](classGates.html#a83389338058653f2defddf694a927d56)
:::

::: {.ttdeci}
bool getState(int gateIndex)
:::

::: {.ttdef}
**Definition:** Gates.cpp:37
:::
:::

::: {#aclassGates_html_a8aa11d0f9ea6f809549664f8fd4f7cc2 .ttc}
::: {.ttname}
[Gates::numGates](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2)
:::

::: {.ttdeci}
int numGates
:::

::: {.ttdef}
**Definition:** Gates.h:24
:::
:::

::: {#aclassGates_html_aac445c16f01968f9c919815f24f3a0a7 .ttc}
::: {.ttname}
[Gates::selectedGate](classGates.html#aac445c16f01968f9c919815f24f3a0a7)
:::

::: {.ttdeci}
int selectedGate
:::

::: {.ttdef}
**Definition:** Gates.h:32
:::
:::

::: {#aclassGates_html_ac2c1de1f4bd52fbedb24f9aae00af9d9 .ttc}
::: {.ttname}
[Gates::setState](classGates.html#ac2c1de1f4bd52fbedb24f9aae00af9d9)
:::

::: {.ttdeci}
void setState(int gateIndex, bool state)
:::

::: {.ttdef}
**Definition:** Gates.cpp:31
:::
:::

::: {#aclassGates_html_ad2bc306e44f4f9dc025c57cd37e7c97f .ttc}
::: {.ttname}
[Gates::setDivision](classGates.html#ad2bc306e44f4f9dc025c57cd37e7c97f)
:::

::: {.ttdeci}
void setDivision(int index, int division)
:::

::: {.ttdef}
**Definition:** Gates.cpp:73
:::
:::

::: {#aclassGates_html_af53ba952e2d91b90884fb38fe1f0fa0d .ttc}
::: {.ttname}
[Gates::Gates](classGates.html#af53ba952e2d91b90884fb38fe1f0fa0d)
:::

::: {.ttdeci}
Gates(std::vector\< int \> pins, int numGates)
:::

::: {.ttdef}
**Definition:** Gates.cpp:9
:::
:::

::: {#amain_8cpp_html_a782432745fd904139737a67cfe18cc45 .ttc}
::: {.ttname}
[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45)
:::

::: {.ttdeci}
std::vector\< int \> pins
:::

::: {.ttdef}
**Definition:** main.cpp:39
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
