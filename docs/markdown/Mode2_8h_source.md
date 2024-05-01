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
Mode2.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Mode2_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MODE2\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MODE2\_H]{.preprocessor}
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
\"[LEDController.h](LEDController_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Encoder.h](Encoder_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[Gates.h](Gates_8h.html){.code}\"]{.preprocessor}
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
\"[InputHandler.h](InputHandler_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} [\#include
\"[ResetButton.h](ResetButton_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} 
:::

::: {.line}
[]{#l00013}[ [13](classMode2.html){.line}]{.lineno} [class
]{.keyword}[Mode2](classMode2.html){.code} : [public]{.keyword}
[Mode](classMode.html){.code} {
:::

::: {.line}
[]{#l00014}[ 14]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00015}[ 15]{.lineno} 
[Mode2](classMode2.html#aa3d0d2137844e8e359d73db4ff991274){.code}([Encoder](classEncoder.html){.code}&
[encoder](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7){.code},
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0){.code},
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [Gates](classGates.html){.code}&
[gates](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259){.code},
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode2.html#a432820b6e885e9fd7b34f438905bff56){.code},
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode2.html#a296c6bf60e684f337c11b338e8b545ce){.code},
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [ResetButton](classResetButton.html){.code}&
[resetButton](classMode2.html#a01e9205eb4c0aae549de2ead64413431){.code});
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[handleSinglePress](classMode2.html#ad0c3080fefd693164c4091435e3886d3){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[handleDoublePress](classMode2.html#a4a844846f0e3acbf9476c959c4a9328c){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [void]{.keywordtype}
[handleLongPress](classMode2.html#a0a566142bbc28d36a18168256e01e5e2){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [void]{.keywordtype}
[handlePressReleased](classMode2.html#aa06056369a76dc1203d4f228a70ad384){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [void]{.keywordtype}
[handleSelectionStates](classMode2.html#a00e770966c8f1d3a4c9214d38a127e26){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[handleResetSinglePress](classMode2.html#a15de3fce5b6874e783f48bb30ac3c8a8){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [void]{.keywordtype}
[handleResetDoublePress](classMode2.html#a571ea6b512d8fa4bc26d43849561049f){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00028}[ 28]{.lineno}  [void]{.keywordtype}
[handleResetLongPress](classMode2.html#a39215df4cb9d1e59c04e89ba753978b1){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00029}[ 29]{.lineno}  [void]{.keywordtype}
[handleResetPressReleased](classMode2.html#aa25c57375888b02cb609edc73585e376){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00030}[ 30]{.lineno}  [void]{.keywordtype}
[setup](classMode2.html#a0cf31cb7e85618022b870d485679c2b9){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00031}[ 31]{.lineno}  [void]{.keywordtype}
[teardown](classMode2.html#ad3bfbb002457e274fd65abd7673e9782){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00032}[ 32]{.lineno}  [void]{.keywordtype}
[update](classMode2.html#ad053ed624ffa14272894e0ca75b5c2b1){.code}()
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
[35](classMode2.html#a3cd955fd44bfb07a089b671097a157a5){.line}]{.lineno} 
[void]{.keywordtype}
[handleEncoder](classMode2.html#a3cd955fd44bfb07a089b671097a157a5){.code}();
:::

::: {.line}
[]{#l00036}[
[36](classMode2.html#a24e78ef9e1816bd462a6c45f72c06fcd){.line}]{.lineno} 
[void]{.keywordtype}
[handleButton](classMode2.html#a24e78ef9e1816bd462a6c45f72c06fcd){.code}([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
buttonState);
:::

::: {.line}
[]{#l00037}[
[37](classMode2.html#a432820b6e885e9fd7b34f438905bff56){.line}]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode2.html#a432820b6e885e9fd7b34f438905bff56){.code};
:::

::: {.line}
[]{#l00038}[
[38](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0){.line}]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0){.code};
:::

::: {.line}
[]{#l00039}[
[39](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7){.line}]{.lineno} 
[Encoder](classEncoder.html){.code}&
[encoder](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7){.code};
:::

::: {.line}
[]{#l00040}[
[40](classMode2.html#a01e9205eb4c0aae549de2ead64413431){.line}]{.lineno} 
[ResetButton](classResetButton.html){.code}&
[resetButton](classMode2.html#a01e9205eb4c0aae549de2ead64413431){.code};
:::

::: {.line}
[]{#l00041}[
[41](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259){.line}]{.lineno} 
[Gates](classGates.html){.code}&
[gates](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259){.code};
:::

::: {.line}
[]{#l00042}[
[42](classMode2.html#a296c6bf60e684f337c11b338e8b545ce){.line}]{.lineno} 
[MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode2.html#a296c6bf60e684f337c11b338e8b545ce){.code};
:::

::: {.line}
[]{#l00043}[
[43](classMode2.html#a46d08b4d2045d045e20e19e332db1aa0){.line}]{.lineno} 
[bool]{.keywordtype}
[doublePressHandled](classMode2.html#a46d08b4d2045d045e20e19e332db1aa0){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00044}[
[44](classMode2.html#aa8b0804dda5ea06b8e7e1ae02c1e1433){.line}]{.lineno} 
[bool]{.keywordtype}
[isInSelection](classMode2.html#aa8b0804dda5ea06b8e7e1ae02c1e1433){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00045}[
[45](classMode2.html#a88ba8e992c81440f88648812f4b93db4){.line}]{.lineno} 
[bool]{.keywordtype}
[singlePressHandled](classMode2.html#a88ba8e992c81440f88648812f4b93db4){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00046}[
[46](classMode2.html#ad1eb111869a3753f05915a6f5d60f961){.line}]{.lineno} 
[int]{.keywordtype}
[numLeds](classMode2.html#ad1eb111869a3753f05915a6f5d60f961){.code} = 8;
:::

::: {.line}
[]{#l00047}[ 47]{.lineno} };
:::

::: {.line}
[]{#l00048}[ 48]{.lineno} 
:::

::: {.line}
[]{#l00049}[ 49]{.lineno} [\#endif ]{.preprocessor}[//
MODE2\_H]{.comment}
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

::: {#aclassMode2_html .ttc}
::: {.ttname}
[Mode2](classMode2.html)
:::

::: {.ttdef}
**Definition:** Mode2.h:13
:::
:::

::: {#aclassMode2_html_a00e770966c8f1d3a4c9214d38a127e26 .ttc}
::: {.ttname}
[Mode2::handleSelectionStates](classMode2.html#a00e770966c8f1d3a4c9214d38a127e26)
:::

::: {.ttdeci}
void handleSelectionStates() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:57
:::
:::

::: {#aclassMode2_html_a01e9205eb4c0aae549de2ead64413431 .ttc}
::: {.ttname}
[Mode2::resetButton](classMode2.html#a01e9205eb4c0aae549de2ead64413431)
:::

::: {.ttdeci}
ResetButton & resetButton
:::

::: {.ttdef}
**Definition:** Mode2.h:40
:::
:::

::: {#aclassMode2_html_a0a566142bbc28d36a18168256e01e5e2 .ttc}
::: {.ttname}
[Mode2::handleLongPress](classMode2.html#a0a566142bbc28d36a18168256e01e5e2)
:::

::: {.ttdeci}
void handleLongPress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:49
:::
:::

::: {#aclassMode2_html_a0cf31cb7e85618022b870d485679c2b9 .ttc}
::: {.ttname}
[Mode2::setup](classMode2.html#a0cf31cb7e85618022b870d485679c2b9)
:::

::: {.ttdeci}
void setup() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:25
:::
:::

::: {#aclassMode2_html_a15de3fce5b6874e783f48bb30ac3c8a8 .ttc}
::: {.ttname}
[Mode2::handleResetSinglePress](classMode2.html#a15de3fce5b6874e783f48bb30ac3c8a8)
:::

::: {.ttdeci}
void handleResetSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:61
:::
:::

::: {#aclassMode2_html_a24e78ef9e1816bd462a6c45f72c06fcd .ttc}
::: {.ttname}
[Mode2::handleButton](classMode2.html#a24e78ef9e1816bd462a6c45f72c06fcd)
:::

::: {.ttdeci}
void handleButton(Encoder::ButtonState buttonState)
:::
:::

::: {#aclassMode2_html_a296c6bf60e684f337c11b338e8b545ce .ttc}
::: {.ttname}
[Mode2::midiHandler](classMode2.html#a296c6bf60e684f337c11b338e8b545ce)
:::

::: {.ttdeci}
MIDIHandler & midiHandler
:::

::: {.ttdef}
**Definition:** Mode2.h:42
:::
:::

::: {#aclassMode2_html_a2d0e2cb262c9a1b593d2ca26bce49259 .ttc}
::: {.ttname}
[Mode2::gates](classMode2.html#a2d0e2cb262c9a1b593d2ca26bce49259)
:::

::: {.ttdeci}
Gates & gates
:::

::: {.ttdef}
**Definition:** Mode2.h:41
:::
:::

::: {#aclassMode2_html_a3743f7fa6df1df514bcbec1b031ba9f0 .ttc}
::: {.ttname}
[Mode2::inputHandler](classMode2.html#a3743f7fa6df1df514bcbec1b031ba9f0)
:::

::: {.ttdeci}
InputHandler & inputHandler
:::

::: {.ttdef}
**Definition:** Mode2.h:38
:::
:::

::: {#aclassMode2_html_a39215df4cb9d1e59c04e89ba753978b1 .ttc}
::: {.ttname}
[Mode2::handleResetLongPress](classMode2.html#a39215df4cb9d1e59c04e89ba753978b1)
:::

::: {.ttdeci}
void handleResetLongPress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:69
:::
:::

::: {#aclassMode2_html_a3cd955fd44bfb07a089b671097a157a5 .ttc}
::: {.ttname}
[Mode2::handleEncoder](classMode2.html#a3cd955fd44bfb07a089b671097a157a5)
:::

::: {.ttdeci}
void handleEncoder()
:::
:::

::: {#aclassMode2_html_a432820b6e885e9fd7b34f438905bff56 .ttc}
::: {.ttname}
[Mode2::ledController](classMode2.html#a432820b6e885e9fd7b34f438905bff56)
:::

::: {.ttdeci}
LEDController & ledController
:::

::: {.ttdef}
**Definition:** Mode2.h:37
:::
:::

::: {#aclassMode2_html_a46d08b4d2045d045e20e19e332db1aa0 .ttc}
::: {.ttname}
[Mode2::doublePressHandled](classMode2.html#a46d08b4d2045d045e20e19e332db1aa0)
:::

::: {.ttdeci}
bool doublePressHandled
:::

::: {.ttdef}
**Definition:** Mode2.h:43
:::
:::

::: {#aclassMode2_html_a4a844846f0e3acbf9476c959c4a9328c .ttc}
::: {.ttname}
[Mode2::handleDoublePress](classMode2.html#a4a844846f0e3acbf9476c959c4a9328c)
:::

::: {.ttdeci}
void handleDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:45
:::
:::

::: {#aclassMode2_html_a571ea6b512d8fa4bc26d43849561049f .ttc}
::: {.ttname}
[Mode2::handleResetDoublePress](classMode2.html#a571ea6b512d8fa4bc26d43849561049f)
:::

::: {.ttdeci}
void handleResetDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:65
:::
:::

::: {#aclassMode2_html_a69b706c00f657f336dee43ddd99ac6a7 .ttc}
::: {.ttname}
[Mode2::encoder](classMode2.html#a69b706c00f657f336dee43ddd99ac6a7)
:::

::: {.ttdeci}
Encoder & encoder
:::

::: {.ttdef}
**Definition:** Mode2.h:39
:::
:::

::: {#aclassMode2_html_a88ba8e992c81440f88648812f4b93db4 .ttc}
::: {.ttname}
[Mode2::singlePressHandled](classMode2.html#a88ba8e992c81440f88648812f4b93db4)
:::

::: {.ttdeci}
bool singlePressHandled
:::

::: {.ttdef}
**Definition:** Mode2.h:45
:::
:::

::: {#aclassMode2_html_aa06056369a76dc1203d4f228a70ad384 .ttc}
::: {.ttname}
[Mode2::handlePressReleased](classMode2.html#aa06056369a76dc1203d4f228a70ad384)
:::

::: {.ttdeci}
void handlePressReleased() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:53
:::
:::

::: {#aclassMode2_html_aa25c57375888b02cb609edc73585e376 .ttc}
::: {.ttname}
[Mode2::handleResetPressReleased](classMode2.html#aa25c57375888b02cb609edc73585e376)
:::

::: {.ttdeci}
void handleResetPressReleased() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:73
:::
:::

::: {#aclassMode2_html_aa3d0d2137844e8e359d73db4ff991274 .ttc}
::: {.ttname}
[Mode2::Mode2](classMode2.html#aa3d0d2137844e8e359d73db4ff991274)
:::

::: {.ttdeci}
Mode2(Encoder &encoder, InputHandler &inputHandler, Gates &gates,
LEDController &ledController, MIDIHandler &midiHandler, ResetButton
&resetButton)
:::

::: {.ttdef}
**Definition:** Mode2.cpp:11
:::
:::

::: {#aclassMode2_html_aa8b0804dda5ea06b8e7e1ae02c1e1433 .ttc}
::: {.ttname}
[Mode2::isInSelection](classMode2.html#aa8b0804dda5ea06b8e7e1ae02c1e1433)
:::

::: {.ttdeci}
bool isInSelection
:::

::: {.ttdef}
**Definition:** Mode2.h:44
:::
:::

::: {#aclassMode2_html_ad053ed624ffa14272894e0ca75b5c2b1 .ttc}
::: {.ttname}
[Mode2::update](classMode2.html#ad053ed624ffa14272894e0ca75b5c2b1)
:::

::: {.ttdeci}
void update() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:36
:::
:::

::: {#aclassMode2_html_ad0c3080fefd693164c4091435e3886d3 .ttc}
::: {.ttname}
[Mode2::handleSinglePress](classMode2.html#ad0c3080fefd693164c4091435e3886d3)
:::

::: {.ttdeci}
void handleSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:41
:::
:::

::: {#aclassMode2_html_ad1eb111869a3753f05915a6f5d60f961 .ttc}
::: {.ttname}
[Mode2::numLeds](classMode2.html#ad1eb111869a3753f05915a6f5d60f961)
:::

::: {.ttdeci}
int numLeds
:::

::: {.ttdef}
**Definition:** Mode2.h:46
:::
:::

::: {#aclassMode2_html_ad3bfbb002457e274fd65abd7673e9782 .ttc}
::: {.ttname}
[Mode2::teardown](classMode2.html#ad3bfbb002457e274fd65abd7673e9782)
:::

::: {.ttdeci}
void teardown() override
:::

::: {.ttdef}
**Definition:** Mode2.cpp:31
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
