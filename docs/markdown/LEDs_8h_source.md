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
LEDs.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](LEDs_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef LEDS\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define LEDS\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[LED.h](LED_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include \<vector\>]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} 
:::

::: {.line}
[]{#l00007}[ [7](classLEDs.html){.line}]{.lineno} [class
]{.keyword}[LEDs](classLEDs.html){.code} {
:::

::: {.line}
[]{#l00008}[ 8]{.lineno}  [public]{.keyword}:
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
[LEDs](classLEDs.html#a1bd8cd6dfe54db1248b5749d532e705a){.code}(std::vector\<int\>
[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.code},
[int]{.keywordtype}
[numLeds](classLEDs.html#a279c7fb7628edf2a73c98313607993d4){.code}); [//
Constructor declaration]{.comment}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} 
[\~LEDs](classLEDs.html#a682bab337039995cc4fc2a7e753a38e5){.code}(); [//
Destructor declaration]{.comment}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [void]{.keywordtype}
[begin](classLEDs.html#aa964a9b80d6606286a69f5025f5f857a){.code}();
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [void]{.keywordtype}
[setState](classLEDs.html#a763ea6fd51a29a40ddc0c39a70a4167e){.code}([int]{.keywordtype}
index, [bool]{.keywordtype} state);
:::

::: {.line}
[]{#l00013}[
[13](classLEDs.html#a3cbae273cb30c1a09c414e2c1c5fd11d){.line}]{.lineno} 
[void]{.keywordtype}
[setState](classLEDs.html#a3cbae273cb30c1a09c414e2c1c5fd11d){.code}([int]{.keywordtype}
index, [bool]{.keywordtype} state, [int]{.keywordtype}
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.code});
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [bool]{.keywordtype}
[getState](classLEDs.html#a98711a933b0dc69df40c3d9752a61334){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[setAllLeds](classLEDs.html#af2bb823ca5af8a88e7f98f5869b4c706){.code}([bool]{.keywordtype}
state);
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [// void blinkFast(int index);]{.comment}
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [// void blinkFast2(int index);]{.comment}
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [// void blinkSlow(int index);]{.comment}
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [void]{.keywordtype}
[startBlinking](classLEDs.html#a5d00178936fca48853813129e26c5dea){.code}([int]{.keywordtype}
index, [unsigned]{.keywordtype} [long]{.keywordtype} interval);
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [void]{.keywordtype}
[stopBlinking](classLEDs.html#a343cdb24ad5b0ceae3fdf3086db765c5){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [void]{.keywordtype}
[stopAllBlinking](classLEDs.html#a6cfb124344f67e7246c45e88da7bd47e){.code}();
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [void]{.keywordtype}
[updateBlinking](classLEDs.html#aee969eddac897718c3f75c3c24e23aa6){.code}();
:::

::: {.line}
[]{#l00023}[ 23]{.lineno}  [void]{.keywordtype}
[setIntensity](classLEDs.html#a6a8449ad97957877f7cfc6ff9776ad21){.code}([int]{.keywordtype}
index, [int]{.keywordtype}
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.code});
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [void]{.keywordtype}
[setAllintensity](classLEDs.html#a8ea9ceb959da8cde5f7c80542a023ac9){.code}([int]{.keywordtype}
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.code});
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [void]{.keywordtype}
[update](classLEDs.html#ab689142c4f9a1f6a8d1deb6e5f3e79e6){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[trigger](classLEDs.html#af9c6980e1497fca93a2945698156fbe6){.code}([int]{.keywordtype}
index, [unsigned]{.keywordtype} [long]{.keywordtype} currentTime,
[bool]{.keywordtype} inverted=[false]{.keyword});
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [void]{.keywordtype}
[resetInverted](classLEDs.html#adbb31af7efe7478045f4a260db116af2){.code}([int]{.keywordtype}
index);
:::

::: {.line}
[]{#l00028}[
[28](classLEDs.html#a279c7fb7628edf2a73c98313607993d4){.line}]{.lineno} 
[int]{.keywordtype}
[numLeds](classLEDs.html#a279c7fb7628edf2a73c98313607993d4){.code}; [//
Number of LEDs]{.comment}
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} 
:::

::: {.line}
[]{#l00030}[ 30]{.lineno}  [private]{.keyword}:
:::

::: {.line}
[]{#l00031}[
[31](classLEDs.html#a1b4516594fe6c345ead0ebe269d15374){.line}]{.lineno} 
[LED](classLED.html){.code}\*
[leds](classLEDs.html#a1b4516594fe6c345ead0ebe269d15374){.code}; [//
Pointer to an array of LED objects]{.comment}
:::

::: {.line}
[]{#l00032}[ 32]{.lineno} };
:::

::: {.line}
[]{#l00033}[ 33]{.lineno} 
:::

::: {.line}
[]{#l00034}[ 34]{.lineno} [\#endif]{.preprocessor}
:::

::: {#aLED_8h_html .ttc}
::: {.ttname}
[LED.h](LED_8h.html)
:::
:::

::: {#aclassLED_html .ttc}
::: {.ttname}
[LED](classLED.html)
:::

::: {.ttdef}
**Definition:** LED.h:6
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

::: {#aclassLEDs_html_a1b4516594fe6c345ead0ebe269d15374 .ttc}
::: {.ttname}
[LEDs::leds](classLEDs.html#a1b4516594fe6c345ead0ebe269d15374)
:::

::: {.ttdeci}
LED \* leds
:::

::: {.ttdef}
**Definition:** LEDs.h:31
:::
:::

::: {#aclassLEDs_html_a1bd8cd6dfe54db1248b5749d532e705a .ttc}
::: {.ttname}
[LEDs::LEDs](classLEDs.html#a1bd8cd6dfe54db1248b5749d532e705a)
:::

::: {.ttdeci}
LEDs(std::vector\< int \> pins, int numLeds)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:8
:::
:::

::: {#aclassLEDs_html_a279c7fb7628edf2a73c98313607993d4 .ttc}
::: {.ttname}
[LEDs::numLeds](classLEDs.html#a279c7fb7628edf2a73c98313607993d4)
:::

::: {.ttdeci}
int numLeds
:::

::: {.ttdef}
**Definition:** LEDs.h:28
:::
:::

::: {#aclassLEDs_html_a343cdb24ad5b0ceae3fdf3086db765c5 .ttc}
::: {.ttname}
[LEDs::stopBlinking](classLEDs.html#a343cdb24ad5b0ceae3fdf3086db765c5)
:::

::: {.ttdeci}
void stopBlinking(int index)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:91
:::
:::

::: {#aclassLEDs_html_a3cbae273cb30c1a09c414e2c1c5fd11d .ttc}
::: {.ttname}
[LEDs::setState](classLEDs.html#a3cbae273cb30c1a09c414e2c1c5fd11d)
:::

::: {.ttdeci}
void setState(int index, bool state, int intensity)
:::
:::

::: {#aclassLEDs_html_a5d00178936fca48853813129e26c5dea .ttc}
::: {.ttname}
[LEDs::startBlinking](classLEDs.html#a5d00178936fca48853813129e26c5dea)
:::

::: {.ttdeci}
void startBlinking(int index, unsigned long interval)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:79
:::
:::

::: {#aclassLEDs_html_a682bab337039995cc4fc2a7e753a38e5 .ttc}
::: {.ttname}
[LEDs::\~LEDs](classLEDs.html#a682bab337039995cc4fc2a7e753a38e5)
:::

::: {.ttdeci}
\~LEDs()
:::

::: {.ttdef}
**Definition:** LEDs.cpp:17
:::
:::

::: {#aclassLEDs_html_a6a8449ad97957877f7cfc6ff9776ad21 .ttc}
::: {.ttname}
[LEDs::setIntensity](classLEDs.html#a6a8449ad97957877f7cfc6ff9776ad21)
:::

::: {.ttdeci}
void setIntensity(int index, int intensity)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:41
:::
:::

::: {#aclassLEDs_html_a6cfb124344f67e7246c45e88da7bd47e .ttc}
::: {.ttname}
[LEDs::stopAllBlinking](classLEDs.html#a6cfb124344f67e7246c45e88da7bd47e)
:::

::: {.ttdeci}
void stopAllBlinking()
:::

::: {.ttdef}
**Definition:** LEDs.cpp:97
:::
:::

::: {#aclassLEDs_html_a763ea6fd51a29a40ddc0c39a70a4167e .ttc}
::: {.ttname}
[LEDs::setState](classLEDs.html#a763ea6fd51a29a40ddc0c39a70a4167e)
:::

::: {.ttdeci}
void setState(int index, bool state)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:35
:::
:::

::: {#aclassLEDs_html_a8ea9ceb959da8cde5f7c80542a023ac9 .ttc}
::: {.ttname}
[LEDs::setAllintensity](classLEDs.html#a8ea9ceb959da8cde5f7c80542a023ac9)
:::

::: {.ttdeci}
void setAllintensity(int intensity)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:47
:::
:::

::: {#aclassLEDs_html_a98711a933b0dc69df40c3d9752a61334 .ttc}
::: {.ttname}
[LEDs::getState](classLEDs.html#a98711a933b0dc69df40c3d9752a61334)
:::

::: {.ttdeci}
bool getState(int index)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:54
:::
:::

::: {#aclassLEDs_html_aa964a9b80d6606286a69f5025f5f857a .ttc}
::: {.ttname}
[LEDs::begin](classLEDs.html#aa964a9b80d6606286a69f5025f5f857a)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** LEDs.cpp:21
:::
:::

::: {#aclassLEDs_html_ab689142c4f9a1f6a8d1deb6e5f3e79e6 .ttc}
::: {.ttname}
[LEDs::update](classLEDs.html#ab689142c4f9a1f6a8d1deb6e5f3e79e6)
:::

::: {.ttdeci}
void update(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:110
:::
:::

::: {#aclassLEDs_html_adbb31af7efe7478045f4a260db116af2 .ttc}
::: {.ttname}
[LEDs::resetInverted](classLEDs.html#adbb31af7efe7478045f4a260db116af2)
:::

::: {.ttdeci}
void resetInverted(int index)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:116
:::
:::

::: {#aclassLEDs_html_aee969eddac897718c3f75c3c24e23aa6 .ttc}
::: {.ttname}
[LEDs::updateBlinking](classLEDs.html#aee969eddac897718c3f75c3c24e23aa6)
:::

::: {.ttdeci}
void updateBlinking()
:::

::: {.ttdef}
**Definition:** LEDs.cpp:85
:::
:::

::: {#aclassLEDs_html_af2bb823ca5af8a88e7f98f5869b4c706 .ttc}
::: {.ttname}
[LEDs::setAllLeds](classLEDs.html#af2bb823ca5af8a88e7f98f5869b4c706)
:::

::: {.ttdeci}
void setAllLeds(bool state)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:28
:::
:::

::: {#aclassLEDs_html_af9c6980e1497fca93a2945698156fbe6 .ttc}
::: {.ttname}
[LEDs::trigger](classLEDs.html#af9c6980e1497fca93a2945698156fbe6)
:::

::: {.ttdeci}
void trigger(int index, unsigned long currentTime, bool inverted=false)
:::

::: {.ttdef}
**Definition:** LEDs.cpp:104
:::
:::

::: {#amain_8cpp_html_a299ec0c42ccc5a2d79d1739428ac3210 .ttc}
::: {.ttname}
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210)
:::

::: {.ttdeci}
int intensity
:::

::: {.ttdef}
**Definition:** main.cpp:56
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
