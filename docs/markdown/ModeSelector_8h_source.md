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
ModeSelector.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](ModeSelector_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MODE\_SELECTOR\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MODE\_SELECTOR\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include \<vector\>]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[LEDController.h](LEDController_8h.html){.code}\"]{.preprocessor} [//
Include the LEDController header]{.comment}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Encoder.h](Encoder_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[Mode.h](Mode_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [\#include
\"[ResetButton.h](ResetButton_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [//Mode Selector Singleton.]{.comment}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} 
:::

::: {.line}
[]{#l00012}[ [12](classModeSelector.html){.line}]{.lineno} [class
]{.keyword}[ModeSelector](classModeSelector.html){.code} {
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [static]{.keyword}
[ModeSelector](classModeSelector.html){.code}&
[getInstance](classModeSelector.html#a2312f6a56156ab4557baebe6f2d050ea){.code}();
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [int]{.keywordtype}
[getMode](classModeSelector.html#a4df062db5ff1caaae1e2d7fc44915bff){.code}()
[const]{.keyword};
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [void]{.keywordtype}
[setMode](classModeSelector.html#a3951bcc3ea04b712d94850920b7b6031){.code}([int]{.keywordtype}
newMode);
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [void]{.keywordtype}
[handleLongPress](classModeSelector.html#ac85d39879a6059172ca90e57341e3371){.code}();
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [void]{.keywordtype}
[handleEncoderRotation](classModeSelector.html#aad5e1a078338a35232888ec31d6cc5ee){.code}();
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [void]{.keywordtype}
[handleModeSelectionPress](classModeSelector.html#a50329d06bde51f77027d6ce9e2444bc1){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [void]{.keywordtype}
[handleButtonPress](classModeSelector.html#a56ce569a1e97e2a0b382d032fabf8dda){.code}();
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[setLedController](classModeSelector.html#addf7f39b68e55c83b693da4911bd5fa6){.code}([LEDController](classLEDController.html){.code}&
[ledController](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2){.code});
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[setEncoder](classModeSelector.html#a5b291f549e155bc4f47c35746d966221){.code}([Encoder](classEncoder.html){.code}&
[encoder](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8){.code});
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [void]{.keywordtype}
[setCurrentMode](classModeSelector.html#a0232058d131a73a98781552b12a3b696){.code}([Mode](classMode.html){.code}\*&
[currentMode](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71){.code});
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [bool]{.keywordtype}
[isInModeSelection](classModeSelector.html#a6da6a3354fe3d5afd3f241324359de03){.code}();
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [Mode](classMode.html){.code}\*
[getCurrentMode](classModeSelector.html#a5a599c64ffef54ba1dade4fedff23d7a){.code}();
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[addMode](classModeSelector.html#ab3680d5757a1efade5128dad7c7c0ab6){.code}([Mode](classMode.html){.code}\*
[mode](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95){.code});
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [void]{.keywordtype}
[update](classModeSelector.html#ac94481813de71f0680ab6c005c0b8e12){.code}();
:::

::: {.line}
[]{#l00028}[ 28]{.lineno} 
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} 
[ModeSelector](classModeSelector.html#af0db492b33c751ccaafa23d9b3880fbc){.code}();
[// Constructor is private]{.comment}
:::

::: {.line}
[]{#l00031}[
[31](classModeSelector.html#a5c89c05801d37b7763369afe0940c7e9){.line}]{.lineno} 
[ModeSelector](classModeSelector.html#a5c89c05801d37b7763369afe0940c7e9){.code}([ModeSelector](classModeSelector.html){.code}
[const]{.keyword}&); [// Don\'t Implement]{.comment}
:::

::: {.line}
[]{#l00032}[
[32](classModeSelector.html#a7e4c75c64115ff1628b1338df8d36639){.line}]{.lineno} 
[void]{.keywordtype}
[operator=](classModeSelector.html#a7e4c75c64115ff1628b1338df8d36639){.code}([ModeSelector](classModeSelector.html){.code}
[const]{.keyword}&); [// Don\'t implement]{.comment}
:::

::: {.line}
[]{#l00033}[ 33]{.lineno} 
:::

::: {.line}
[]{#l00034}[
[34](classModeSelector.html#a4d26cfed61b6573ecaae521b85997b8c){.line}]{.lineno} 
std::vector\<Mode\*\>
[modes](classModeSelector.html#a4d26cfed61b6573ecaae521b85997b8c){.code};
:::

::: {.line}
[]{#l00035}[
[35](classModeSelector.html#a28fad2b854f3a9d724c3661d87a94c0e){.line}]{.lineno} 
[Mode](classMode.html){.code}\*
[nullMode](classModeSelector.html#a28fad2b854f3a9d724c3661d87a94c0e){.code}
= [nullptr]{.keyword};
:::

::: {.line}
[]{#l00036}[
[36](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71){.line}]{.lineno} 
[Mode](classMode.html){.code}\*&
[currentMode](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71){.code};
:::

::: {.line}
[]{#l00037}[
[37](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95){.line}]{.lineno} 
[int]{.keywordtype}
[mode](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95){.code};
:::

::: {.line}
[]{#l00038}[
[38](classModeSelector.html#ab3ca420fe69c659b5f92b6ae799e5c89){.line}]{.lineno} 
[int]{.keywordtype}
[inModeSelection](classModeSelector.html#ab3ca420fe69c659b5f92b6ae799e5c89){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00039}[
[39](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2){.line}]{.lineno} 
[LEDController](classLEDController.html){.code}\*
[ledController](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2){.code};
[// Add a pointer to LEDController]{.comment}
:::

::: {.line}
[]{#l00040}[
[40](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8){.line}]{.lineno} 
[Encoder](classEncoder.html){.code}\*
[encoder](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8){.code};
[// Add a pointer to Encoder]{.comment}
:::

::: {.line}
[]{#l00041}[
[41](classModeSelector.html#a6b43ab161008add913652ccea49951e1){.line}]{.lineno} 
[ResetButton](classResetButton.html){.code}\*
[resetButton](classModeSelector.html#a6b43ab161008add913652ccea49951e1){.code};
:::

::: {.line}
[]{#l00042}[
[42](classModeSelector.html#a4dc6fb472a2757e88dde6f35137c08e4){.line}]{.lineno} 
[bool]{.keywordtype}
[isInSelection](classModeSelector.html#a4dc6fb472a2757e88dde6f35137c08e4){.code};
:::

::: {.line}
[]{#l00043}[
[43](classModeSelector.html#af98d3659251c8bed66b9335cc5c7f9c9){.line}]{.lineno} 
[bool]{.keywordtype}
[inChannelSelection](classModeSelector.html#af98d3659251c8bed66b9335cc5c7f9c9){.code};
:::

::: {.line}
[]{#l00044}[
[44](classModeSelector.html#aa101ddd545060ae8f98e58f986f86637){.line}]{.lineno} 
[bool]{.keywordtype}
[singlePressHandled](classModeSelector.html#aa101ddd545060ae8f98e58f986f86637){.code};
:::

::: {.line}
[]{#l00045}[
[45](classModeSelector.html#ae886bbd080f44f047682429748c28045){.line}]{.lineno} 
[bool]{.keywordtype}
[doublePressHandled](classModeSelector.html#ae886bbd080f44f047682429748c28045){.code};
:::

::: {.line}
[]{#l00046}[
[46](classModeSelector.html#ade89353075816ece4e257ded8e888d88){.line}]{.lineno} 
[bool]{.keywordtype}
[longPressHandled](classModeSelector.html#ade89353075816ece4e257ded8e888d88){.code};
:::

::: {.line}
[]{#l00047}[
[47](classModeSelector.html#aa34005332133e2b5e10a4b904aa3c23e){.line}]{.lineno} 
[size\_t]{.keywordtype}
[totalModes](classModeSelector.html#aa34005332133e2b5e10a4b904aa3c23e){.code}
=
[modes](classModeSelector.html#a4d26cfed61b6573ecaae521b85997b8c){.code}.size();
:::

::: {.line}
[]{#l00048}[
[48](classModeSelector.html#a69c5b741591b66abbf46e64aa295a8f8){.line}]{.lineno} 
[int]{.keywordtype}
[previousMode](classModeSelector.html#a69c5b741591b66abbf46e64aa295a8f8){.code}
= -1;
:::

::: {.line}
[]{#l00049}[
[49](classModeSelector.html#a9657b40d4e60d82c6e4ac5a2a605c47e){.line}]{.lineno} 
[int]{.keywordtype}
[numLeds](classModeSelector.html#a9657b40d4e60d82c6e4ac5a2a605c47e){.code};
:::

::: {.line}
[]{#l00050}[ 50]{.lineno} };
:::

::: {.line}
[]{#l00051}[ 51]{.lineno} 
:::

::: {.line}
[]{#l00052}[ 52]{.lineno} [\#endif ]{.preprocessor}[//
MODE\_SELECTOR\_H]{.comment}
:::

::: {#aEncoder_8h_html .ttc}
::: {.ttname}
[Encoder.h](Encoder_8h.html)
:::
:::

::: {#aLEDController_8h_html .ttc}
::: {.ttname}
[LEDController.h](LEDController_8h.html)
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

::: {#aclassLEDController_html .ttc}
::: {.ttname}
[LEDController](classLEDController.html)
:::

::: {.ttdef}
**Definition:** LEDController.h:6
:::
:::

::: {#aclassModeSelector_html .ttc}
::: {.ttname}
[ModeSelector](classModeSelector.html)
:::

::: {.ttdef}
**Definition:** ModeSelector.h:12
:::
:::

::: {#aclassModeSelector_html_a0232058d131a73a98781552b12a3b696 .ttc}
::: {.ttname}
[ModeSelector::setCurrentMode](classModeSelector.html#a0232058d131a73a98781552b12a3b696)
:::

::: {.ttdeci}
void setCurrentMode(Mode \*&currentMode)
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:107
:::
:::

::: {#aclassModeSelector_html_a2312f6a56156ab4557baebe6f2d050ea .ttc}
::: {.ttname}
[ModeSelector::getInstance](classModeSelector.html#a2312f6a56156ab4557baebe6f2d050ea)
:::

::: {.ttdeci}
static ModeSelector & getInstance()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:7
:::
:::

::: {#aclassModeSelector_html_a28fad2b854f3a9d724c3661d87a94c0e .ttc}
::: {.ttname}
[ModeSelector::nullMode](classModeSelector.html#a28fad2b854f3a9d724c3661d87a94c0e)
:::

::: {.ttdeci}
Mode \* nullMode
:::

::: {.ttdef}
**Definition:** ModeSelector.h:35
:::
:::

::: {#aclassModeSelector_html_a2f8c7699b4534f802f75ba51393ba4d2 .ttc}
::: {.ttname}
[ModeSelector::ledController](classModeSelector.html#a2f8c7699b4534f802f75ba51393ba4d2)
:::

::: {.ttdeci}
LEDController \* ledController
:::

::: {.ttdef}
**Definition:** ModeSelector.h:39
:::
:::

::: {#aclassModeSelector_html_a3951bcc3ea04b712d94850920b7b6031 .ttc}
::: {.ttname}
[ModeSelector::setMode](classModeSelector.html#a3951bcc3ea04b712d94850920b7b6031)
:::

::: {.ttdeci}
void setMode(int newMode)
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:21
:::
:::

::: {#aclassModeSelector_html_a4d26cfed61b6573ecaae521b85997b8c .ttc}
::: {.ttname}
[ModeSelector::modes](classModeSelector.html#a4d26cfed61b6573ecaae521b85997b8c)
:::

::: {.ttdeci}
std::vector\< Mode \* \> modes
:::

::: {.ttdef}
**Definition:** ModeSelector.h:34
:::
:::

::: {#aclassModeSelector_html_a4dc6fb472a2757e88dde6f35137c08e4 .ttc}
::: {.ttname}
[ModeSelector::isInSelection](classModeSelector.html#a4dc6fb472a2757e88dde6f35137c08e4)
:::

::: {.ttdeci}
bool isInSelection
:::

::: {.ttdef}
**Definition:** ModeSelector.h:42
:::
:::

::: {#aclassModeSelector_html_a4df062db5ff1caaae1e2d7fc44915bff .ttc}
::: {.ttname}
[ModeSelector::getMode](classModeSelector.html#a4df062db5ff1caaae1e2d7fc44915bff)
:::

::: {.ttdeci}
int getMode() const
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:17
:::
:::

::: {#aclassModeSelector_html_a50329d06bde51f77027d6ce9e2444bc1 .ttc}
::: {.ttname}
[ModeSelector::handleModeSelectionPress](classModeSelector.html#a50329d06bde51f77027d6ce9e2444bc1)
:::

::: {.ttdeci}
void handleModeSelectionPress()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:46
:::
:::

::: {#aclassModeSelector_html_a56ce569a1e97e2a0b382d032fabf8dda .ttc}
::: {.ttname}
[ModeSelector::handleButtonPress](classModeSelector.html#a56ce569a1e97e2a0b382d032fabf8dda)
:::

::: {.ttdeci}
void handleButtonPress()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:59
:::
:::

::: {#aclassModeSelector_html_a5a599c64ffef54ba1dade4fedff23d7a .ttc}
::: {.ttname}
[ModeSelector::getCurrentMode](classModeSelector.html#a5a599c64ffef54ba1dade4fedff23d7a)
:::

::: {.ttdeci}
Mode \* getCurrentMode()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:116
:::
:::

::: {#aclassModeSelector_html_a5b291f549e155bc4f47c35746d966221 .ttc}
::: {.ttname}
[ModeSelector::setEncoder](classModeSelector.html#a5b291f549e155bc4f47c35746d966221)
:::

::: {.ttdeci}
void setEncoder(Encoder &encoder)
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:103
:::
:::

::: {#aclassModeSelector_html_a5c89c05801d37b7763369afe0940c7e9 .ttc}
::: {.ttname}
[ModeSelector::ModeSelector](classModeSelector.html#a5c89c05801d37b7763369afe0940c7e9)
:::

::: {.ttdeci}
ModeSelector(ModeSelector const &)
:::
:::

::: {#aclassModeSelector_html_a69c5b741591b66abbf46e64aa295a8f8 .ttc}
::: {.ttname}
[ModeSelector::previousMode](classModeSelector.html#a69c5b741591b66abbf46e64aa295a8f8)
:::

::: {.ttdeci}
int previousMode
:::

::: {.ttdef}
**Definition:** ModeSelector.h:48
:::
:::

::: {#aclassModeSelector_html_a6b43ab161008add913652ccea49951e1 .ttc}
::: {.ttname}
[ModeSelector::resetButton](classModeSelector.html#a6b43ab161008add913652ccea49951e1)
:::

::: {.ttdeci}
ResetButton \* resetButton
:::

::: {.ttdef}
**Definition:** ModeSelector.h:41
:::
:::

::: {#aclassModeSelector_html_a6da6a3354fe3d5afd3f241324359de03 .ttc}
::: {.ttname}
[ModeSelector::isInModeSelection](classModeSelector.html#a6da6a3354fe3d5afd3f241324359de03)
:::

::: {.ttdeci}
bool isInModeSelection()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:95
:::
:::

::: {#aclassModeSelector_html_a7e4c75c64115ff1628b1338df8d36639 .ttc}
::: {.ttname}
[ModeSelector::operator=](classModeSelector.html#a7e4c75c64115ff1628b1338df8d36639)
:::

::: {.ttdeci}
void operator=(ModeSelector const &)
:::
:::

::: {#aclassModeSelector_html_a9657b40d4e60d82c6e4ac5a2a605c47e .ttc}
::: {.ttname}
[ModeSelector::numLeds](classModeSelector.html#a9657b40d4e60d82c6e4ac5a2a605c47e)
:::

::: {.ttdeci}
int numLeds
:::

::: {.ttdef}
**Definition:** ModeSelector.h:49
:::
:::

::: {#aclassModeSelector_html_aa101ddd545060ae8f98e58f986f86637 .ttc}
::: {.ttname}
[ModeSelector::singlePressHandled](classModeSelector.html#aa101ddd545060ae8f98e58f986f86637)
:::

::: {.ttdeci}
bool singlePressHandled
:::

::: {.ttdef}
**Definition:** ModeSelector.h:44
:::
:::

::: {#aclassModeSelector_html_aa34005332133e2b5e10a4b904aa3c23e .ttc}
::: {.ttname}
[ModeSelector::totalModes](classModeSelector.html#aa34005332133e2b5e10a4b904aa3c23e)
:::

::: {.ttdeci}
size\_t totalModes
:::

::: {.ttdef}
**Definition:** ModeSelector.h:47
:::
:::

::: {#aclassModeSelector_html_aaab9cca1953b1f4797a55ded09638c95 .ttc}
::: {.ttname}
[ModeSelector::mode](classModeSelector.html#aaab9cca1953b1f4797a55ded09638c95)
:::

::: {.ttdeci}
int mode
:::

::: {.ttdef}
**Definition:** ModeSelector.h:37
:::
:::

::: {#aclassModeSelector_html_aad5e1a078338a35232888ec31d6cc5ee .ttc}
::: {.ttname}
[ModeSelector::handleEncoderRotation](classModeSelector.html#aad5e1a078338a35232888ec31d6cc5ee)
:::

::: {.ttdeci}
void handleEncoderRotation()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:77
:::
:::

::: {#aclassModeSelector_html_ab3680d5757a1efade5128dad7c7c0ab6 .ttc}
::: {.ttname}
[ModeSelector::addMode](classModeSelector.html#ab3680d5757a1efade5128dad7c7c0ab6)
:::

::: {.ttdeci}
void addMode(Mode \*mode)
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:111
:::
:::

::: {#aclassModeSelector_html_ab3ca420fe69c659b5f92b6ae799e5c89 .ttc}
::: {.ttname}
[ModeSelector::inModeSelection](classModeSelector.html#ab3ca420fe69c659b5f92b6ae799e5c89)
:::

::: {.ttdeci}
int inModeSelection
:::

::: {.ttdef}
**Definition:** ModeSelector.h:38
:::
:::

::: {#aclassModeSelector_html_ab65d65f54eab8ec5335df2206273f0d8 .ttc}
::: {.ttname}
[ModeSelector::encoder](classModeSelector.html#ab65d65f54eab8ec5335df2206273f0d8)
:::

::: {.ttdeci}
Encoder \* encoder
:::

::: {.ttdef}
**Definition:** ModeSelector.h:40
:::
:::

::: {#aclassModeSelector_html_ac85d39879a6059172ca90e57341e3371 .ttc}
::: {.ttname}
[ModeSelector::handleLongPress](classModeSelector.html#ac85d39879a6059172ca90e57341e3371)
:::

::: {.ttdeci}
void handleLongPress()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:28
:::
:::

::: {#aclassModeSelector_html_ac94481813de71f0680ab6c005c0b8e12 .ttc}
::: {.ttname}
[ModeSelector::update](classModeSelector.html#ac94481813de71f0680ab6c005c0b8e12)
:::

::: {.ttdeci}
void update()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:12
:::
:::

::: {#aclassModeSelector_html_adb7ab19bba250819ca90a26c8281bf71 .ttc}
::: {.ttname}
[ModeSelector::currentMode](classModeSelector.html#adb7ab19bba250819ca90a26c8281bf71)
:::

::: {.ttdeci}
Mode \*& currentMode
:::

::: {.ttdef}
**Definition:** ModeSelector.h:36
:::
:::

::: {#aclassModeSelector_html_addf7f39b68e55c83b693da4911bd5fa6 .ttc}
::: {.ttname}
[ModeSelector::setLedController](classModeSelector.html#addf7f39b68e55c83b693da4911bd5fa6)
:::

::: {.ttdeci}
void setLedController(LEDController &ledController)
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:99
:::
:::

::: {#aclassModeSelector_html_ade89353075816ece4e257ded8e888d88 .ttc}
::: {.ttname}
[ModeSelector::longPressHandled](classModeSelector.html#ade89353075816ece4e257ded8e888d88)
:::

::: {.ttdeci}
bool longPressHandled
:::

::: {.ttdef}
**Definition:** ModeSelector.h:46
:::
:::

::: {#aclassModeSelector_html_ae886bbd080f44f047682429748c28045 .ttc}
::: {.ttname}
[ModeSelector::doublePressHandled](classModeSelector.html#ae886bbd080f44f047682429748c28045)
:::

::: {.ttdeci}
bool doublePressHandled
:::

::: {.ttdef}
**Definition:** ModeSelector.h:45
:::
:::

::: {#aclassModeSelector_html_af0db492b33c751ccaafa23d9b3880fbc .ttc}
::: {.ttname}
[ModeSelector::ModeSelector](classModeSelector.html#af0db492b33c751ccaafa23d9b3880fbc)
:::

::: {.ttdeci}
ModeSelector()
:::

::: {.ttdef}
**Definition:** ModeSelector.cpp:120
:::
:::

::: {#aclassModeSelector_html_af98d3659251c8bed66b9335cc5c7f9c9 .ttc}
::: {.ttname}
[ModeSelector::inChannelSelection](classModeSelector.html#af98d3659251c8bed66b9335cc5c7f9c9)
:::

::: {.ttdeci}
bool inChannelSelection
:::

::: {.ttdef}
**Definition:** ModeSelector.h:43
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
