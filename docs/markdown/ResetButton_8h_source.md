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
ResetButton.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](ResetButton_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef RESETBUTTON\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define RESETBUTTON\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[Pin.h](Pin_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include \<Arduino.h\>]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Debug.h](Debug_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[Constants.h](Constants_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
:::

::: {.line}
[]{#l00009}[ [9](classResetButton.html){.line}]{.lineno} [class
]{.keyword}[ResetButton](classResetButton.html){.code} {
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} 
[ResetButton](classResetButton.html#a802e419c619c9b60f2adf223b821a00f){.code}([int]{.keywordtype}
[pin](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59){.code});
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [bool]{.keywordtype}
[begin](classResetButton.html#aa851afdc17e33c8cd16a5b326058d599){.code}();
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} 
:::

::: {.line}
[]{#l00014}[
[14](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.line}]{.lineno} 
[enum]{.keyword}
[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.code}
{
[OPEN](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef){.code},
[PRESSED](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e){.code}
};
:::

::: {.line}
[]{#l00015}[ 15]{.lineno} 
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.code}
[readButton](classResetButton.html#aee7d2cd933ae28ffa43187582c979a43){.code}();
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [bool]{.keywordtype}
[isButtonLongPressed](classResetButton.html#a9965e4c38cf275972b825808414188eb){.code}();
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [bool]{.keywordtype}
[isButtonDoublePressed](classResetButton.html#addc8f5996ea2d13c1c3f2bb858ced414){.code}();
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [bool]{.keywordtype}
[isButtonSinglePressed](classResetButton.html#a48dd4aadb9e7e86022181bc46db0a6a3){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno} 
:::

::: {.line}
[]{#l00021}[ 21]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00022}[
[22](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59){.line}]{.lineno} 
[int]{.keywordtype}
[pin](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59){.code};
:::

::: {.line}
[]{#l00023}[
[23](classResetButton.html#a4aaefe379da6d90cd5499b564a1ea94c){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[resetButton](classResetButton.html#a4aaefe379da6d90cd5499b564a1ea94c){.code};
:::

::: {.line}
[]{#l00024}[
[24](classResetButton.html#a1e30ec8fd5c460df296362a5bb08b1e3){.line}]{.lineno} 
[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.code}
[buttonState](classResetButton.html#a1e30ec8fd5c460df296362a5bb08b1e3){.code};
:::

::: {.line}
[]{#l00025}[
[25](classResetButton.html#a7bcd854358d590978530fd978aa4b629){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastButtonPress](classResetButton.html#a7bcd854358d590978530fd978aa4b629){.code};
:::

::: {.line}
[]{#l00026}[
[26](classResetButton.html#a50a64667edd243f01e6b9ebc1fc5bde8){.line}]{.lineno} 
[int]{.keywordtype}
[pressCount](classResetButton.html#a50a64667edd243f01e6b9ebc1fc5bde8){.code};
:::

::: {.line}
[]{#l00027}[ 27]{.lineno} 
:::

::: {.line}
[]{#l00028}[
[28](classResetButton.html#ae1ab0b150ca6a11414c1b947da2e9987){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [unsigned]{.keywordtype}
[long]{.keywordtype}
[DOUBLE\_PRESS\_INTERVAL](classResetButton.html#ae1ab0b150ca6a11414c1b947da2e9987){.code}
= 500; [// ms]{.comment}
:::

::: {.line}
[]{#l00029}[
[29](classResetButton.html#a49dd99765dba753371b0b5a475802580){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [unsigned]{.keywordtype}
[long]{.keywordtype}
[LONG\_PRESS\_INTERVAL](classResetButton.html#a49dd99765dba753371b0b5a475802580){.code}
= 1000; [// ms]{.comment}
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} };
:::

::: {.line}
[]{#l00031}[ 31]{.lineno} 
:::

::: {.line}
[]{#l00032}[ 32]{.lineno} [\#endif ]{.preprocessor}[//
RESETBUTTON\_H]{.comment}
:::

::: {#aConstants_8h_html .ttc}
::: {.ttname}
[Constants.h](Constants_8h.html)
:::
:::

::: {#aDebug_8h_html .ttc}
::: {.ttname}
[Debug.h](Debug_8h.html)
:::
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
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

::: {#aclassResetButton_html .ttc}
::: {.ttname}
[ResetButton](classResetButton.html)
:::

::: {.ttdef}
**Definition:** ResetButton.h:9
:::
:::

::: {#aclassResetButton_html_a1e30ec8fd5c460df296362a5bb08b1e3 .ttc}
::: {.ttname}
[ResetButton::buttonState](classResetButton.html#a1e30ec8fd5c460df296362a5bb08b1e3)
:::

::: {.ttdeci}
ButtonState buttonState
:::

::: {.ttdef}
**Definition:** ResetButton.h:24
:::
:::

::: {#aclassResetButton_html_a48dd4aadb9e7e86022181bc46db0a6a3 .ttc}
::: {.ttname}
[ResetButton::isButtonSinglePressed](classResetButton.html#a48dd4aadb9e7e86022181bc46db0a6a3)
:::

::: {.ttdeci}
bool isButtonSinglePressed()
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:69
:::
:::

::: {#aclassResetButton_html_a49dd99765dba753371b0b5a475802580 .ttc}
::: {.ttname}
[ResetButton::LONG\_PRESS\_INTERVAL](classResetButton.html#a49dd99765dba753371b0b5a475802580)
:::

::: {.ttdeci}
static const unsigned long LONG\_PRESS\_INTERVAL
:::

::: {.ttdef}
**Definition:** ResetButton.h:29
:::
:::

::: {#aclassResetButton_html_a4aaefe379da6d90cd5499b564a1ea94c .ttc}
::: {.ttname}
[ResetButton::resetButton](classResetButton.html#a4aaefe379da6d90cd5499b564a1ea94c)
:::

::: {.ttdeci}
InputPin resetButton
:::

::: {.ttdef}
**Definition:** ResetButton.h:23
:::
:::

::: {#aclassResetButton_html_a50a64667edd243f01e6b9ebc1fc5bde8 .ttc}
::: {.ttname}
[ResetButton::pressCount](classResetButton.html#a50a64667edd243f01e6b9ebc1fc5bde8)
:::

::: {.ttdeci}
int pressCount
:::

::: {.ttdef}
**Definition:** ResetButton.h:26
:::
:::

::: {#aclassResetButton_html_a57b758360f53e09cd135b0fbc18edabd .ttc}
::: {.ttname}
[ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd)
:::

::: {.ttdeci}
ButtonState
:::

::: {.ttdef}
**Definition:** ResetButton.h:14
:::
:::

::: {#aclassResetButton_html_a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef .ttc}
::: {.ttname}
[ResetButton::OPEN](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef)
:::

::: {.ttdeci}
@ OPEN
:::

::: {.ttdef}
**Definition:** ResetButton.h:14
:::
:::

::: {#aclassResetButton_html_a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e .ttc}
::: {.ttname}
[ResetButton::PRESSED](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e)
:::

::: {.ttdeci}
@ PRESSED
:::

::: {.ttdef}
**Definition:** ResetButton.h:14
:::
:::

::: {#aclassResetButton_html_a7291efc6e33f2939aac77d4e474fbc59 .ttc}
::: {.ttname}
[ResetButton::pin](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59)
:::

::: {.ttdeci}
int pin
:::

::: {.ttdef}
**Definition:** ResetButton.h:22
:::
:::

::: {#aclassResetButton_html_a7bcd854358d590978530fd978aa4b629 .ttc}
::: {.ttname}
[ResetButton::lastButtonPress](classResetButton.html#a7bcd854358d590978530fd978aa4b629)
:::

::: {.ttdeci}
unsigned long lastButtonPress
:::

::: {.ttdef}
**Definition:** ResetButton.h:25
:::
:::

::: {#aclassResetButton_html_a802e419c619c9b60f2adf223b821a00f .ttc}
::: {.ttname}
[ResetButton::ResetButton](classResetButton.html#a802e419c619c9b60f2adf223b821a00f)
:::

::: {.ttdeci}
ResetButton(int pin)
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:5
:::
:::

::: {#aclassResetButton_html_a9965e4c38cf275972b825808414188eb .ttc}
::: {.ttname}
[ResetButton::isButtonLongPressed](classResetButton.html#a9965e4c38cf275972b825808414188eb)
:::

::: {.ttdeci}
bool isButtonLongPressed()
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:61
:::
:::

::: {#aclassResetButton_html_aa851afdc17e33c8cd16a5b326058d599 .ttc}
::: {.ttname}
[ResetButton::begin](classResetButton.html#aa851afdc17e33c8cd16a5b326058d599)
:::

::: {.ttdeci}
bool begin()
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:14
:::
:::

::: {#aclassResetButton_html_addc8f5996ea2d13c1c3f2bb858ced414 .ttc}
::: {.ttname}
[ResetButton::isButtonDoublePressed](classResetButton.html#addc8f5996ea2d13c1c3f2bb858ced414)
:::

::: {.ttdeci}
bool isButtonDoublePressed()
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:65
:::
:::

::: {#aclassResetButton_html_ae1ab0b150ca6a11414c1b947da2e9987 .ttc}
::: {.ttname}
[ResetButton::DOUBLE\_PRESS\_INTERVAL](classResetButton.html#ae1ab0b150ca6a11414c1b947da2e9987)
:::

::: {.ttdeci}
static const unsigned long DOUBLE\_PRESS\_INTERVAL
:::

::: {.ttdef}
**Definition:** ResetButton.h:28
:::
:::

::: {#aclassResetButton_html_aee7d2cd933ae28ffa43187582c979a43 .ttc}
::: {.ttname}
[ResetButton::readButton](classResetButton.html#aee7d2cd933ae28ffa43187582c979a43)
:::

::: {.ttdeci}
ButtonState readButton()
:::

::: {.ttdef}
**Definition:** ResetButton.cpp:27
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
