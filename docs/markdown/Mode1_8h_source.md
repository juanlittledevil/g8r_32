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
Mode1.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Mode1_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MODE1\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MODE1\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[Mode.h](Mode_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[Encoder.h](Encoder_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Gates.h](Gates_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[LEDController.h](LEDController_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [\#include
\"[MIDIHandler.h](MIDIHandler_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} [\#include
\"[Constants.h](Constants_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [\#include
\"[ResetButton.h](ResetButton_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} [\#include
\"[InputHandler.h](InputHandler_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} 
:::

::: {.line}
[]{#l00013}[ [13](classMode1.html){.line}]{.lineno} [class
]{.keyword}[Mode1](classMode1.html){.code} : [public]{.keyword}
[Mode](classMode.html){.code} {
:::

::: {.line}
[]{#l00014}[ 14]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00015}[ 15]{.lineno} 
[Mode1](classMode1.html#ac50bac6ef48f13b9f9f23066ee3a14da){.code}([Encoder](classEncoder.html){.code}&
[encoder](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72){.code},
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode1.html#ab553243d551d5337b9d11451c257813c){.code},
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [Gates](classGates.html){.code}&
[gates](classMode1.html#abf42339815e644befd936ad85c4b6d87){.code},
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d){.code},
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac){.code},
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [ResetButton](classResetButton.html){.code}&
[resetButton](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad){.code});
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[handleSinglePress](classMode1.html#a01c39504689522af8e908f3a9f629f3d){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[handleDoublePress](classMode1.html#aece3b8dfd8fbe3a049dd50cac7827163){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [void]{.keywordtype}
[handleLongPress](classMode1.html#a3efa76e8f49820d5506a2fddba895d1a){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [void]{.keywordtype}
[handlePressReleased](classMode1.html#a27a79d962981799ecb081f6b2116bc4c){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [void]{.keywordtype}
[handleSelectionStates](classMode1.html#ad456ee0f626d63c9f96db8a8fbbedae5){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[handleResetSinglePress](classMode1.html#a130b9bda7ac6c03348c1e0f652f4c40f){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [void]{.keywordtype}
[handleResetDoublePress](classMode1.html#a3faff5eb1aea3412f05145d5894778be){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00028}[ 28]{.lineno}  [void]{.keywordtype}
[handleResetLongPress](classMode1.html#ab4c68c413efac263349524806bdb6262){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00029}[ 29]{.lineno}  [void]{.keywordtype}
[handleResetPressReleased](classMode1.html#aaf69b8382102d521c89786ab12513748){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00030}[ 30]{.lineno}  [void]{.keywordtype}
[setup](classMode1.html#aa3c75dd038802a4e3ab7381a82cfa0bd){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00031}[ 31]{.lineno}  [void]{.keywordtype}
[teardown](classMode1.html#ac71878a012a9adb6adcba2c8338be06e){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00032}[ 32]{.lineno}  [void]{.keywordtype}
[update](classMode1.html#ab4ed6fb24ddf6f713cbde450496cd16d){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00033}[ 33]{.lineno} 
:::

::: {.line}
[]{#l00034}[ 34]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00035}[
[35](classMode1.html#a67b35345a3f671799182f48495ba897d){.line}]{.lineno} 
[void]{.keywordtype}
[handleEncoder](classMode1.html#a67b35345a3f671799182f48495ba897d){.code}();
:::

::: {.line}
[]{#l00036}[ 36]{.lineno}  [void]{.keywordtype}
[handleButton](classMode1.html#a38dc924a8193edd4dc649372530f31c2){.code}([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
buttonState);
:::

::: {.line}
[]{#l00037}[ 37]{.lineno}  [void]{.keywordtype}
[handleChannelSelection](classMode1.html#acf1ab35c4057e3e8dd1bbd38a4226077){.code}();
:::

::: {.line}
[]{#l00038}[ 38]{.lineno}  [void]{.keywordtype}
[handleChannelSelectionPress](classMode1.html#a6ee6933e5dd127f1b7d73cff9e8f1dc4){.code}();
:::

::: {.line}
[]{#l00039}[
[39](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d){.line}]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d){.code};
:::

::: {.line}
[]{#l00040}[
[40](classMode1.html#ab553243d551d5337b9d11451c257813c){.line}]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode1.html#ab553243d551d5337b9d11451c257813c){.code};
:::

::: {.line}
[]{#l00041}[
[41](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72){.line}]{.lineno} 
[Encoder](classEncoder.html){.code}&
[encoder](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72){.code};
:::

::: {.line}
[]{#l00042}[
[42](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad){.line}]{.lineno} 
[ResetButton](classResetButton.html){.code}&
[resetButton](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad){.code};
:::

::: {.line}
[]{#l00043}[
[43](classMode1.html#abf42339815e644befd936ad85c4b6d87){.line}]{.lineno} 
[Gates](classGates.html){.code}&
[gates](classMode1.html#abf42339815e644befd936ad85c4b6d87){.code};
:::

::: {.line}
[]{#l00044}[
[44](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac){.line}]{.lineno} 
[MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac){.code};
:::

::: {.line}
[]{#l00045}[
[45](classMode1.html#ac572589a3df90e198153c5df4daf221a){.line}]{.lineno} 
[bool]{.keywordtype}
[doublePressHandled](classMode1.html#ac572589a3df90e198153c5df4daf221a){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00046}[
[46](classMode1.html#afbeca71c5625415fe1850e374f436c61){.line}]{.lineno} 
[bool]{.keywordtype}
[inChannelSelection](classMode1.html#afbeca71c5625415fe1850e374f436c61){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00047}[
[47](classMode1.html#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d){.line}]{.lineno} 
[bool]{.keywordtype}
[isInSelection](classMode1.html#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00048}[
[48](classMode1.html#aad6bd19e9779c9fa1e134501a3ef03fe){.line}]{.lineno} 
[bool]{.keywordtype}
[singlePressHandled](classMode1.html#aad6bd19e9779c9fa1e134501a3ef03fe){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00049}[
[49](classMode1.html#a43973ea688753e2695ec9daa54774e46){.line}]{.lineno} 
[int]{.keywordtype}
[selectedChannel](classMode1.html#a43973ea688753e2695ec9daa54774e46){.code}
= 9; [// MIDI channels are 0-15]{.comment}
:::

::: {.line}
[]{#l00050}[
[50](classMode1.html#a869e723dd397e09dad3f775f2c703720){.line}]{.lineno} 
[int]{.keywordtype}
[confirmedChannel](classMode1.html#a869e723dd397e09dad3f775f2c703720){.code}
= 9; [// MIDI channels are 0-15]{.comment}
:::

::: {.line}
[]{#l00051}[
[51](classMode1.html#a111d75d8f9cb54613b50109259a81950){.line}]{.lineno} 
[int]{.keywordtype}
[previousChannel](classMode1.html#a111d75d8f9cb54613b50109259a81950){.code}
= -1; [// used with blinking in channel selection]{.comment}
:::

::: {.line}
[]{#l00052}[
[52](classMode1.html#ac510b4ab9f79d4ba2c3c1e129b75c939){.line}]{.lineno} 
[const]{.keyword} [int]{.keywordtype}
[NUM\_MIDI\_CHANNELS](classMode1.html#ac510b4ab9f79d4ba2c3c1e129b75c939){.code}
= 16;
:::

::: {.line}
[]{#l00053}[
[53](classMode1.html#ae0fc8662aa17fcd2595477bffcf275f9){.line}]{.lineno} 
[int]{.keywordtype}
[numLeds](classMode1.html#ae0fc8662aa17fcd2595477bffcf275f9){.code} = 8;
:::

::: {.line}
[]{#l00054}[ 54]{.lineno} };
:::

::: {.line}
[]{#l00055}[ 55]{.lineno} 
:::

::: {.line}
[]{#l00056}[ 56]{.lineno} [\#endif ]{.preprocessor}[//
MODE1\_H]{.comment}
:::

::: {#aConstants_8h_html .ttc}
::: {.ttname}
[Constants.h](Constants_8h.html)
:::
:::

::: {#aEncoder_8h_html .ttc}
::: {.ttname}
[Encoder.h](Encoder_8h.html)
:::
:::

::: {#aGates_8h_html .ttc}
::: {.ttname}
[Gates.h](Gates_8h.html)
:::
:::

::: {#aInputHandler_8h_html .ttc}
::: {.ttname}
[InputHandler.h](InputHandler_8h.html)
:::
:::

::: {#aLEDController_8h_html .ttc}
::: {.ttname}
[LEDController.h](LEDController_8h.html)
:::
:::

::: {#aMIDIHandler_8h_html .ttc}
::: {.ttname}
[MIDIHandler.h](MIDIHandler_8h.html)
:::
:::

::: {#aMode_8h_html .ttc}
::: {.ttname}
[Mode.h](Mode_8h.html)
:::
:::

::: {#aResetButton_8h_html .ttc}
::: {.ttname}
[ResetButton.h](ResetButton_8h.html)
:::
:::

::: {#aclassEncoder_html .ttc}
::: {.ttname}
[Encoder](classEncoder.html)
:::

::: {.ttdef}
**Definition:** Encoder.h:6
:::
:::

::: {#aclassEncoder_html_a8d10c6f5e558cd9235db9375bf980ab9 .ttc}
::: {.ttname}
[Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9)
:::

::: {.ttdeci}
ButtonState
:::

::: {.ttdef}
**Definition:** Encoder.h:11
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

::: {#aclassInputHandler_html .ttc}
::: {.ttname}
[InputHandler](classInputHandler.html)
:::

::: {.ttdef}
**Definition:** InputHandler.h:6
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

::: {#aclassMIDIHandler_html .ttc}
::: {.ttname}
[MIDIHandler](classMIDIHandler.html)
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:9
:::
:::

::: {#aclassMode1_html .ttc}
::: {.ttname}
[Mode1](classMode1.html)
:::

::: {.ttdef}
**Definition:** Mode1.h:13
:::
:::

::: {#aclassMode1_html_a01c39504689522af8e908f3a9f629f3d .ttc}
::: {.ttname}
[Mode1::handleSinglePress](classMode1.html#a01c39504689522af8e908f3a9f629f3d)
:::

::: {.ttdeci}
void handleSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:140
:::
:::

::: {#aclassMode1_html_a05d96fc5e86a390d30ddb724cc7f5d7d .ttc}
::: {.ttname}
[Mode1::ledController](classMode1.html#a05d96fc5e86a390d30ddb724cc7f5d7d)
:::

::: {.ttdeci}
LEDController & ledController
:::

::: {.ttdef}
**Definition:** Mode1.h:39
:::
:::

::: {#aclassMode1_html_a111d75d8f9cb54613b50109259a81950 .ttc}
::: {.ttname}
[Mode1::previousChannel](classMode1.html#a111d75d8f9cb54613b50109259a81950)
:::

::: {.ttdeci}
int previousChannel
:::

::: {.ttdef}
**Definition:** Mode1.h:51
:::
:::

::: {#aclassMode1_html_a130b9bda7ac6c03348c1e0f652f4c40f .ttc}
::: {.ttname}
[Mode1::handleResetSinglePress](classMode1.html#a130b9bda7ac6c03348c1e0f652f4c40f)
:::

::: {.ttdeci}
void handleResetSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:149
:::
:::

::: {#aclassMode1_html_a27a79d962981799ecb081f6b2116bc4c .ttc}
::: {.ttname}
[Mode1::handlePressReleased](classMode1.html#a27a79d962981799ecb081f6b2116bc4c)
:::

::: {.ttdeci}
void handlePressReleased() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:145
:::
:::

::: {#aclassMode1_html_a38dc924a8193edd4dc649372530f31c2 .ttc}
::: {.ttname}
[Mode1::handleButton](classMode1.html#a38dc924a8193edd4dc649372530f31c2)
:::

::: {.ttdeci}
void handleButton(Encoder::ButtonState buttonState)
:::

::: {.ttdef}
**Definition:** Mode1.cpp:113
:::
:::

::: {#aclassMode1_html_a3efa76e8f49820d5506a2fddba895d1a .ttc}
::: {.ttname}
[Mode1::handleLongPress](classMode1.html#a3efa76e8f49820d5506a2fddba895d1a)
:::

::: {.ttdeci}
void handleLongPress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:132
:::
:::

::: {#aclassMode1_html_a3faff5eb1aea3412f05145d5894778be .ttc}
::: {.ttname}
[Mode1::handleResetDoublePress](classMode1.html#a3faff5eb1aea3412f05145d5894778be)
:::

::: {.ttdeci}
void handleResetDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:152
:::
:::

::: {#aclassMode1_html_a43973ea688753e2695ec9daa54774e46 .ttc}
::: {.ttname}
[Mode1::selectedChannel](classMode1.html#a43973ea688753e2695ec9daa54774e46)
:::

::: {.ttdeci}
int selectedChannel
:::

::: {.ttdef}
**Definition:** Mode1.h:49
:::
:::

::: {#aclassMode1_html_a67b35345a3f671799182f48495ba897d .ttc}
::: {.ttname}
[Mode1::handleEncoder](classMode1.html#a67b35345a3f671799182f48495ba897d)
:::

::: {.ttdeci}
void handleEncoder()
:::
:::

::: {#aclassMode1_html_a6ee6933e5dd127f1b7d73cff9e8f1dc4 .ttc}
::: {.ttname}
[Mode1::handleChannelSelectionPress](classMode1.html#a6ee6933e5dd127f1b7d73cff9e8f1dc4)
:::

::: {.ttdeci}
void handleChannelSelectionPress()
:::

::: {.ttdef}
**Definition:** Mode1.cpp:56
:::
:::

::: {#aclassMode1_html_a74a6e31f008c5b03e672ad74022f0cad .ttc}
::: {.ttname}
[Mode1::resetButton](classMode1.html#a74a6e31f008c5b03e672ad74022f0cad)
:::

::: {.ttdeci}
ResetButton & resetButton
:::

::: {.ttdef}
**Definition:** Mode1.h:42
:::
:::

::: {#aclassMode1_html_a813970d5012b890a2b0d0be7f9a54c72 .ttc}
::: {.ttname}
[Mode1::encoder](classMode1.html#a813970d5012b890a2b0d0be7f9a54c72)
:::

::: {.ttdeci}
Encoder & encoder
:::

::: {.ttdef}
**Definition:** Mode1.h:41
:::
:::

::: {#aclassMode1_html_a869e723dd397e09dad3f775f2c703720 .ttc}
::: {.ttname}
[Mode1::confirmedChannel](classMode1.html#a869e723dd397e09dad3f775f2c703720)
:::

::: {.ttdeci}
int confirmedChannel
:::

::: {.ttdef}
**Definition:** Mode1.h:50
:::
:::

::: {#aclassMode1_html_a8e5360d6c20dc92f0632bdc4c234e2ac .ttc}
::: {.ttname}
[Mode1::midiHandler](classMode1.html#a8e5360d6c20dc92f0632bdc4c234e2ac)
:::

::: {.ttdeci}
MIDIHandler & midiHandler
:::

::: {.ttdef}
**Definition:** Mode1.h:44
:::
:::

::: {#aclassMode1_html_a965dcdf8b3fb9e9ec6d9f4e266c9ce3d .ttc}
::: {.ttname}
[Mode1::isInSelection](classMode1.html#a965dcdf8b3fb9e9ec6d9f4e266c9ce3d)
:::

::: {.ttdeci}
bool isInSelection
:::

::: {.ttdef}
**Definition:** Mode1.h:47
:::
:::

::: {#aclassMode1_html_aa3c75dd038802a4e3ab7381a82cfa0bd .ttc}
::: {.ttname}
[Mode1::setup](classMode1.html#aa3c75dd038802a4e3ab7381a82cfa0bd)
:::

::: {.ttdeci}
void setup() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:25
:::
:::

::: {#aclassMode1_html_aad6bd19e9779c9fa1e134501a3ef03fe .ttc}
::: {.ttname}
[Mode1::singlePressHandled](classMode1.html#aad6bd19e9779c9fa1e134501a3ef03fe)
:::

::: {.ttdeci}
bool singlePressHandled
:::

::: {.ttdef}
**Definition:** Mode1.h:48
:::
:::

::: {#aclassMode1_html_aaf69b8382102d521c89786ab12513748 .ttc}
::: {.ttname}
[Mode1::handleResetPressReleased](classMode1.html#aaf69b8382102d521c89786ab12513748)
:::

::: {.ttdeci}
void handleResetPressReleased() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:158
:::
:::

::: {#aclassMode1_html_ab4c68c413efac263349524806bdb6262 .ttc}
::: {.ttname}
[Mode1::handleResetLongPress](classMode1.html#ab4c68c413efac263349524806bdb6262)
:::

::: {.ttdeci}
void handleResetLongPress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:155
:::
:::

::: {#aclassMode1_html_ab4ed6fb24ddf6f713cbde450496cd16d .ttc}
::: {.ttname}
[Mode1::update](classMode1.html#ab4ed6fb24ddf6f713cbde450496cd16d)
:::

::: {.ttdeci}
void update() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:37
:::
:::

::: {#aclassMode1_html_ab553243d551d5337b9d11451c257813c .ttc}
::: {.ttname}
[Mode1::inputHandler](classMode1.html#ab553243d551d5337b9d11451c257813c)
:::

::: {.ttdeci}
InputHandler & inputHandler
:::

::: {.ttdef}
**Definition:** Mode1.h:40
:::
:::

::: {#aclassMode1_html_abf42339815e644befd936ad85c4b6d87 .ttc}
::: {.ttname}
[Mode1::gates](classMode1.html#abf42339815e644befd936ad85c4b6d87)
:::

::: {.ttdeci}
Gates & gates
:::

::: {.ttdef}
**Definition:** Mode1.h:43
:::
:::

::: {#aclassMode1_html_ac50bac6ef48f13b9f9f23066ee3a14da .ttc}
::: {.ttname}
[Mode1::Mode1](classMode1.html#ac50bac6ef48f13b9f9f23066ee3a14da)
:::

::: {.ttdeci}
Mode1(Encoder &encoder, InputHandler &inputHandler, Gates &gates,
LEDController &ledController, MIDIHandler &midiHandler, ResetButton
&resetButton)
:::

::: {.ttdef}
**Definition:** Mode1.cpp:8
:::
:::

::: {#aclassMode1_html_ac510b4ab9f79d4ba2c3c1e129b75c939 .ttc}
::: {.ttname}
[Mode1::NUM\_MIDI\_CHANNELS](classMode1.html#ac510b4ab9f79d4ba2c3c1e129b75c939)
:::

::: {.ttdeci}
const int NUM\_MIDI\_CHANNELS
:::

::: {.ttdef}
**Definition:** Mode1.h:52
:::
:::

::: {#aclassMode1_html_ac572589a3df90e198153c5df4daf221a .ttc}
::: {.ttname}
[Mode1::doublePressHandled](classMode1.html#ac572589a3df90e198153c5df4daf221a)
:::

::: {.ttdeci}
bool doublePressHandled
:::

::: {.ttdef}
**Definition:** Mode1.h:45
:::
:::

::: {#aclassMode1_html_ac71878a012a9adb6adcba2c8338be06e .ttc}
::: {.ttname}
[Mode1::teardown](classMode1.html#ac71878a012a9adb6adcba2c8338be06e)
:::

::: {.ttdeci}
void teardown() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:30
:::
:::

::: {#aclassMode1_html_acf1ab35c4057e3e8dd1bbd38a4226077 .ttc}
::: {.ttname}
[Mode1::handleChannelSelection](classMode1.html#acf1ab35c4057e3e8dd1bbd38a4226077)
:::

::: {.ttdeci}
void handleChannelSelection()
:::

::: {.ttdef}
**Definition:** Mode1.cpp:88
:::
:::

::: {#aclassMode1_html_ad456ee0f626d63c9f96db8a8fbbedae5 .ttc}
::: {.ttname}
[Mode1::handleSelectionStates](classMode1.html#ad456ee0f626d63c9f96db8a8fbbedae5)
:::

::: {.ttdeci}
void handleSelectionStates() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:48
:::
:::

::: {#aclassMode1_html_ae0fc8662aa17fcd2595477bffcf275f9 .ttc}
::: {.ttname}
[Mode1::numLeds](classMode1.html#ae0fc8662aa17fcd2595477bffcf275f9)
:::

::: {.ttdeci}
int numLeds
:::

::: {.ttdef}
**Definition:** Mode1.h:53
:::
:::

::: {#aclassMode1_html_aece3b8dfd8fbe3a049dd50cac7827163 .ttc}
::: {.ttname}
[Mode1::handleDoublePress](classMode1.html#aece3b8dfd8fbe3a049dd50cac7827163)
:::

::: {.ttdeci}
void handleDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode1.cpp:136
:::
:::

::: {#aclassMode1_html_afbeca71c5625415fe1850e374f436c61 .ttc}
::: {.ttname}
[Mode1::inChannelSelection](classMode1.html#afbeca71c5625415fe1850e374f436c61)
:::

::: {.ttdeci}
bool inChannelSelection
:::

::: {.ttdef}
**Definition:** Mode1.h:46
:::
:::

::: {#aclassMode_html .ttc}
::: {.ttname}
[Mode](classMode.html)
:::

::: {.ttdef}
**Definition:** Mode.h:4
:::
:::

::: {#aclassResetButton_html .ttc}
::: {.ttname}
[ResetButton](classResetButton.html)
:::

::: {.ttdef}
**Definition:** ResetButton.h:9
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
