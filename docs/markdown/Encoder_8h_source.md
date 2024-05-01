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
Encoder.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Encoder_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef ENCODER\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define ENCODER\_H]{.preprocessor}
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
[]{#l00006}[ [6](classEncoder.html){.line}]{.lineno} [class
]{.keyword}[Encoder](classEncoder.html){.code} {
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
[Encoder](classEncoder.html#a5c9dd4c4121421f3868a6fae683ce201){.code}([int]{.keywordtype}
[encCLK](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb){.code},
[int]{.keywordtype}
[encDT](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47){.code},
[int]{.keywordtype}
[encButton](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700){.code});
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
:::

::: {.line}
[]{#l00010}[
[10](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda){.line}]{.lineno} 
[enum]{.keyword}
[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.code}
{
[NONE](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83){.code},
[CW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5){.code},
[CCW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda){.code}
};
:::

::: {.line}
[]{#l00011}[
[11](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.line}]{.lineno} 
[enum]{.keyword}
[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
{
[OPEN](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6){.code},
[PRESSED](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c){.code}
};
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} 
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [void]{.keywordtype}
[begin](classEncoder.html#a335f77fa68600c9a348f1cb9dba8ff5b){.code}();
:::

::: {.line}
[]{#l00014}[ 14]{.lineno} 
[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.code}
[readEncoder](classEncoder.html#aec7e3503764db573a30979e95570f7c5){.code}();
:::

::: {.line}
[]{#l00015}[ 15]{.lineno} 
[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
[readButton](classEncoder.html#ac2feca5ed5040737fbc9d6282e9b48f7){.code}();
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [int]{.keywordtype}
[handleEncoderDirection](classEncoder.html#a9fee5b6e9c060faa745a308793b984ab){.code}([int]{.keywordtype}
currentValue, [int]{.keywordtype} maxValue,
[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.code}
direction);
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [bool]{.keywordtype}
[isButtonLongPressed](classEncoder.html#a26b304caeb9cd561f201d101f62a8964){.code}();
:::

::: {.line}
[]{#l00018}[ 18]{.lineno}  [bool]{.keywordtype}
[isButtonDoublePressed](classEncoder.html#a70380dcc135f2e564607ab3401708b84){.code}();
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [bool]{.keywordtype}
[isButtonSinglePressed](classEncoder.html#a08ba46bfb2eb288a47015d63d11e8077){.code}();
:::

::: {.line}
[]{#l00020}[ 20]{.lineno}  [int]{.keywordtype}
[readSpeed](classEncoder.html#a2924112ef1f2a7ea617926e86ab13538){.code}();
:::

::: {.line}
[]{#l00021}[ 21]{.lineno} 
:::

::: {.line}
[]{#l00022}[ 22]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00023}[
[23](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[encCLK](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb){.code};
:::

::: {.line}
[]{#l00024}[
[24](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[encDT](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47){.code};
:::

::: {.line}
[]{#l00025}[
[25](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[encButton](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700){.code};
:::

::: {.line}
[]{#l00026}[
[26](classEncoder.html#ade282a3469a7eed777d2212367704624){.line}]{.lineno} 
[int]{.keywordtype}
[prevStateCLK](classEncoder.html#ade282a3469a7eed777d2212367704624){.code};
:::

::: {.line}
[]{#l00027}[
[27](classEncoder.html#a43038f2d33e15f334fa70c0dbf740851){.line}]{.lineno} 
[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
[buttonState](classEncoder.html#a43038f2d33e15f334fa70c0dbf740851){.code};
:::

::: {.line}
[]{#l00028}[
[28](classEncoder.html#a8562593d886f1a1ac75e504c5da3a41f){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastButtonPress](classEncoder.html#a8562593d886f1a1ac75e504c5da3a41f){.code};
:::

::: {.line}
[]{#l00029}[
[29](classEncoder.html#a82d327bad0b2922d2a3d0ddc1e31e815){.line}]{.lineno} 
[int]{.keywordtype}
[pressCount](classEncoder.html#a82d327bad0b2922d2a3d0ddc1e31e815){.code};
:::

::: {.line}
[]{#l00030}[
[30](classEncoder.html#a090819a377bc20c23a6de1bf7f28cfbc){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastTurnTime](classEncoder.html#a090819a377bc20c23a6de1bf7f28cfbc){.code};
:::

::: {.line}
[]{#l00031}[
[31](classEncoder.html#a7880595a1f5480757dd7125e4f47cb41){.line}]{.lineno} 
[int]{.keywordtype}
[speed](classEncoder.html#a7880595a1f5480757dd7125e4f47cb41){.code};
:::

::: {.line}
[]{#l00032}[ 32]{.lineno} 
:::

::: {.line}
[]{#l00033}[
[33](classEncoder.html#a3997f1d2b3f4fc9eaf3a2ecc334d98c5){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [unsigned]{.keywordtype}
[long]{.keywordtype}
[DOUBLE\_PRESS\_INTERVAL](classEncoder.html#a3997f1d2b3f4fc9eaf3a2ecc334d98c5){.code}
= 500; [// ms]{.comment}
:::

::: {.line}
[]{#l00034}[
[34](classEncoder.html#ac602a14a72602e3fa9ce103dd447aa8d){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [unsigned]{.keywordtype}
[long]{.keywordtype}
[LONG\_PRESS\_INTERVAL](classEncoder.html#ac602a14a72602e3fa9ce103dd447aa8d){.code}
= 1000; [// ms]{.comment}
:::

::: {.line}
[]{#l00035}[ 35]{.lineno} };
:::

::: {.line}
[]{#l00036}[ 36]{.lineno} 
:::

::: {.line}
[]{#l00037}[ 37]{.lineno} [\#endif ]{.preprocessor}[//
ENCODER\_H]{.comment}
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
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

::: {#aclassEncoder_html_a07ae142110dd9baafcb60dd140d7f700 .ttc}
::: {.ttname}
[Encoder::encButton](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700)
:::

::: {.ttdeci}
InputPin encButton
:::

::: {.ttdef}
**Definition:** Encoder.h:25
:::
:::

::: {#aclassEncoder_html_a08ba46bfb2eb288a47015d63d11e8077 .ttc}
::: {.ttname}
[Encoder::isButtonSinglePressed](classEncoder.html#a08ba46bfb2eb288a47015d63d11e8077)
:::

::: {.ttdeci}
bool isButtonSinglePressed()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:106
:::
:::

::: {#aclassEncoder_html_a090819a377bc20c23a6de1bf7f28cfbc .ttc}
::: {.ttname}
[Encoder::lastTurnTime](classEncoder.html#a090819a377bc20c23a6de1bf7f28cfbc)
:::

::: {.ttdeci}
unsigned long lastTurnTime
:::

::: {.ttdef}
**Definition:** Encoder.h:30
:::
:::

::: {#aclassEncoder_html_a0f1cb342a57e8ed3b9a951563c184ceb .ttc}
::: {.ttname}
[Encoder::encCLK](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb)
:::

::: {.ttdeci}
InputPin encCLK
:::

::: {.ttdef}
**Definition:** Encoder.h:23
:::
:::

::: {#aclassEncoder_html_a26b304caeb9cd561f201d101f62a8964 .ttc}
::: {.ttname}
[Encoder::isButtonLongPressed](classEncoder.html#a26b304caeb9cd561f201d101f62a8964)
:::

::: {.ttdeci}
bool isButtonLongPressed()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:98
:::
:::

::: {#aclassEncoder_html_a2924112ef1f2a7ea617926e86ab13538 .ttc}
::: {.ttname}
[Encoder::readSpeed](classEncoder.html#a2924112ef1f2a7ea617926e86ab13538)
:::

::: {.ttdeci}
int readSpeed()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:94
:::
:::

::: {#aclassEncoder_html_a335f77fa68600c9a348f1cb9dba8ff5b .ttc}
::: {.ttname}
[Encoder::begin](classEncoder.html#a335f77fa68600c9a348f1cb9dba8ff5b)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:21
:::
:::

::: {#aclassEncoder_html_a3997f1d2b3f4fc9eaf3a2ecc334d98c5 .ttc}
::: {.ttname}
[Encoder::DOUBLE\_PRESS\_INTERVAL](classEncoder.html#a3997f1d2b3f4fc9eaf3a2ecc334d98c5)
:::

::: {.ttdeci}
static const unsigned long DOUBLE\_PRESS\_INTERVAL
:::

::: {.ttdef}
**Definition:** Encoder.h:33
:::
:::

::: {#aclassEncoder_html_a43038f2d33e15f334fa70c0dbf740851 .ttc}
::: {.ttname}
[Encoder::buttonState](classEncoder.html#a43038f2d33e15f334fa70c0dbf740851)
:::

::: {.ttdeci}
ButtonState buttonState
:::

::: {.ttdef}
**Definition:** Encoder.h:27
:::
:::

::: {#aclassEncoder_html_a5c9dd4c4121421f3868a6fae683ce201 .ttc}
::: {.ttname}
[Encoder::Encoder](classEncoder.html#a5c9dd4c4121421f3868a6fae683ce201)
:::

::: {.ttdeci}
Encoder(int encCLK, int encDT, int encButton)
:::

::: {.ttdef}
**Definition:** Encoder.cpp:7
:::
:::

::: {#aclassEncoder_html_a70380dcc135f2e564607ab3401708b84 .ttc}
::: {.ttname}
[Encoder::isButtonDoublePressed](classEncoder.html#a70380dcc135f2e564607ab3401708b84)
:::

::: {.ttdeci}
bool isButtonDoublePressed()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:102
:::
:::

::: {#aclassEncoder_html_a7880595a1f5480757dd7125e4f47cb41 .ttc}
::: {.ttname}
[Encoder::speed](classEncoder.html#a7880595a1f5480757dd7125e4f47cb41)
:::

::: {.ttdeci}
int speed
:::

::: {.ttdef}
**Definition:** Encoder.h:31
:::
:::

::: {#aclassEncoder_html_a82d327bad0b2922d2a3d0ddc1e31e815 .ttc}
::: {.ttname}
[Encoder::pressCount](classEncoder.html#a82d327bad0b2922d2a3d0ddc1e31e815)
:::

::: {.ttdeci}
int pressCount
:::

::: {.ttdef}
**Definition:** Encoder.h:29
:::
:::

::: {#aclassEncoder_html_a8562593d886f1a1ac75e504c5da3a41f .ttc}
::: {.ttname}
[Encoder::lastButtonPress](classEncoder.html#a8562593d886f1a1ac75e504c5da3a41f)
:::

::: {.ttdeci}
unsigned long lastButtonPress
:::

::: {.ttdef}
**Definition:** Encoder.h:28
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

::: {#aclassEncoder_html_a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c .ttc}
::: {.ttname}
[Encoder::PRESSED](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c)
:::

::: {.ttdeci}
@ PRESSED
:::

::: {.ttdef}
**Definition:** Encoder.h:11
:::
:::

::: {#aclassEncoder_html_a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6 .ttc}
::: {.ttname}
[Encoder::OPEN](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6)
:::

::: {.ttdeci}
@ OPEN
:::

::: {.ttdef}
**Definition:** Encoder.h:11
:::
:::

::: {#aclassEncoder_html_a9fee5b6e9c060faa745a308793b984ab .ttc}
::: {.ttname}
[Encoder::handleEncoderDirection](classEncoder.html#a9fee5b6e9c060faa745a308793b984ab)
:::

::: {.ttdeci}
int handleEncoderDirection(int currentValue, int maxValue, Direction
direction)
:::

::: {.ttdef}
**Definition:** Encoder.cpp:114
:::
:::

::: {#aclassEncoder_html_aa7c4648a7ebc9e651c25c2d450a58213 .ttc}
::: {.ttname}
[Encoder::Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213)
:::

::: {.ttdeci}
Direction
:::

::: {.ttdef}
**Definition:** Encoder.h:10
:::
:::

::: {#aclassEncoder_html_aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5 .ttc}
::: {.ttname}
[Encoder::CW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5)
:::

::: {.ttdeci}
@ CW
:::

::: {.ttdef}
**Definition:** Encoder.h:10
:::
:::

::: {#aclassEncoder_html_aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda .ttc}
::: {.ttname}
[Encoder::CCW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda)
:::

::: {.ttdeci}
@ CCW
:::

::: {.ttdef}
**Definition:** Encoder.h:10
:::
:::

::: {#aclassEncoder_html_aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83 .ttc}
::: {.ttname}
[Encoder::NONE](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83)
:::

::: {.ttdeci}
@ NONE
:::

::: {.ttdef}
**Definition:** Encoder.h:10
:::
:::

::: {#aclassEncoder_html_ac2feca5ed5040737fbc9d6282e9b48f7 .ttc}
::: {.ttname}
[Encoder::readButton](classEncoder.html#ac2feca5ed5040737fbc9d6282e9b48f7)
:::

::: {.ttdeci}
ButtonState readButton()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:61
:::
:::

::: {#aclassEncoder_html_ac602a14a72602e3fa9ce103dd447aa8d .ttc}
::: {.ttname}
[Encoder::LONG\_PRESS\_INTERVAL](classEncoder.html#ac602a14a72602e3fa9ce103dd447aa8d)
:::

::: {.ttdeci}
static const unsigned long LONG\_PRESS\_INTERVAL
:::

::: {.ttdef}
**Definition:** Encoder.h:34
:::
:::

::: {#aclassEncoder_html_ad3c8d007a93ea4eae5decab4b7221a47 .ttc}
::: {.ttname}
[Encoder::encDT](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47)
:::

::: {.ttdeci}
InputPin encDT
:::

::: {.ttdef}
**Definition:** Encoder.h:24
:::
:::

::: {#aclassEncoder_html_ade282a3469a7eed777d2212367704624 .ttc}
::: {.ttname}
[Encoder::prevStateCLK](classEncoder.html#ade282a3469a7eed777d2212367704624)
:::

::: {.ttdeci}
int prevStateCLK
:::

::: {.ttdef}
**Definition:** Encoder.h:26
:::
:::

::: {#aclassEncoder_html_aec7e3503764db573a30979e95570f7c5 .ttc}
::: {.ttname}
[Encoder::readEncoder](classEncoder.html#aec7e3503764db573a30979e95570f7c5)
:::

::: {.ttdeci}
Direction readEncoder()
:::

::: {.ttdef}
**Definition:** Encoder.cpp:27
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
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
