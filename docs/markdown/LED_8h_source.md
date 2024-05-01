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
LED.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](LED_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef LED\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define LED\_H]{.preprocessor}
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
[]{#l00006}[ [6](classLED.html){.line}]{.lineno} [class
]{.keyword}[LED](classLED.html){.code} : [public]{.keyword}
[OutputPin](classOutputPin.html){.code} {
:::

::: {.line}
[]{#l00007}[ 7]{.lineno}  [public]{.keyword}:
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} 
[LED](classLED.html#a2f9846058d6c93165846802571e877bf){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code} = -1); [//
Default pin set to -1]{.comment}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} 
[\~LED](classLED.html#a5cb49cf2696615d43952baf8ade06767){.code}(); [//
Destructor declaration]{.comment}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno}  [void]{.keywordtype}
[startBlinking](classLED.html#ab8b4d4f8a242125e8bb8f333fea3e1b5){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} interval);
:::

::: {.line}
[]{#l00011}[ 11]{.lineno}  [void]{.keywordtype}
[stopBlinking](classLED.html#ab604feac943fb6f98970f08bc5e2cd98){.code}();
:::

::: {.line}
[]{#l00012}[ 12]{.lineno}  [void]{.keywordtype}
[updateBlinking](classLED.html#a0515347480de786c503951522ed0fae8){.code}();
:::

::: {.line}
[]{#l00013}[ 13]{.lineno}  [void]{.keywordtype}
[setIntensity](classLED.html#a5ccc3bc84dd08271c2b92e7dc395b042){.code}([int]{.keywordtype}
[intensity](classLED.html#a7b29be937c90a166ab379928a89b12a1){.code});
:::

::: {.line}
[]{#l00014}[ 14]{.lineno}  [void]{.keywordtype}
[trigger](classLED.html#afe1cd286a90bdf388757f840b62963b0){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime, [bool]{.keywordtype}
[inverted](classLED.html#a5371388f81b03dc045091c2492f92b00){.code}=[false]{.keyword});
:::

::: {.line}
[]{#l00015}[ 15]{.lineno}  [void]{.keywordtype}
[update](classLED.html#a26deb537b1cbc1f38d0fce57650875f5){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00016}[ 16]{.lineno}  [void]{.keywordtype}
[resetIvernted](classLED.html#a973ce3608ed1449bd6521dd026b300aa){.code}();
:::

::: {.line}
[]{#l00017}[ 17]{.lineno}  [void]{.keywordtype}
[setLedOnDuration](classLED.html#a447a6142872354a57402efe1b766526c){.code}([int]{.keywordtype}
duration);
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [private]{.keyword}:
:::

::: {.line}
[]{#l00020}[
[20](classLED.html#a41f91d188d162ac0856939f6368b6aeb){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[blinkStartTime](classLED.html#a41f91d188d162ac0856939f6368b6aeb){.code};
:::

::: {.line}
[]{#l00021}[
[21](classLED.html#a6f49207335f293f84ee5fd163fc0538f){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[blinkInterval](classLED.html#a6f49207335f293f84ee5fd163fc0538f){.code};
:::

::: {.line}
[]{#l00022}[
[22](classLED.html#a7b29be937c90a166ab379928a89b12a1){.line}]{.lineno} 
[int]{.keywordtype}
[intensity](classLED.html#a7b29be937c90a166ab379928a89b12a1){.code} =
255;
:::

::: {.line}
[]{#l00023}[
[23](classLED.html#ac72ababe221f50a3c02f72051068f1dd){.line}]{.lineno} 
[bool]{.keywordtype}
[isBlinking](classLED.html#ac72ababe221f50a3c02f72051068f1dd){.code};
:::

::: {.line}
[]{#l00024}[
[24](classLED.html#a26f304de8f30355e99917090877dee78){.line}]{.lineno} 
[int]{.keywordtype}
[ledOnDuration](classLED.html#a26f304de8f30355e99917090877dee78){.code}
= 25; [// Duration in milliseconds that the LED should stay
on]{.comment}
:::

::: {.line}
[]{#l00025}[
[25](classLED.html#aa649a9045bd22e6d4a21bbbf161eff8e){.line}]{.lineno} 
[int]{.keywordtype}
[invertedLedOnDuration](classLED.html#aa649a9045bd22e6d4a21bbbf161eff8e){.code}
= 40; [// Duration in milliseconds that the LED should stay
on]{.comment}
:::

::: {.line}
[]{#l00026}[
[26](classLED.html#a39dd1bd3424f8daa2a72f53bde7c9c62){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[triggeredTime](classLED.html#a39dd1bd3424f8daa2a72f53bde7c9c62){.code}
= 0;
:::

::: {.line}
[]{#l00027}[
[27](classLED.html#a5371388f81b03dc045091c2492f92b00){.line}]{.lineno} 
[bool]{.keywordtype}
[inverted](classLED.html#a5371388f81b03dc045091c2492f92b00){.code} =
[false]{.keyword};
:::

::: {.line}
[]{#l00028}[ 28]{.lineno} };
:::

::: {.line}
[]{#l00029}[ 29]{.lineno} 
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} [\#endif]{.preprocessor}
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
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

::: {#aclassLED_html_a0515347480de786c503951522ed0fae8 .ttc}
::: {.ttname}
[LED::updateBlinking](classLED.html#a0515347480de786c503951522ed0fae8)
:::

::: {.ttdeci}
void updateBlinking()
:::

::: {.ttdef}
**Definition:** LED.cpp:33
:::
:::

::: {#aclassLED_html_a26deb537b1cbc1f38d0fce57650875f5 .ttc}
::: {.ttname}
[LED::update](classLED.html#a26deb537b1cbc1f38d0fce57650875f5)
:::

::: {.ttdeci}
void update(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** LED.cpp:50
:::
:::

::: {#aclassLED_html_a26f304de8f30355e99917090877dee78 .ttc}
::: {.ttname}
[LED::ledOnDuration](classLED.html#a26f304de8f30355e99917090877dee78)
:::

::: {.ttdeci}
int ledOnDuration
:::

::: {.ttdef}
**Definition:** LED.h:24
:::
:::

::: {#aclassLED_html_a2f9846058d6c93165846802571e877bf .ttc}
::: {.ttname}
[LED::LED](classLED.html#a2f9846058d6c93165846802571e877bf)
:::

::: {.ttdeci}
LED(int pin=-1)
:::

::: {.ttdef}
**Definition:** LED.cpp:8
:::
:::

::: {#aclassLED_html_a39dd1bd3424f8daa2a72f53bde7c9c62 .ttc}
::: {.ttname}
[LED::triggeredTime](classLED.html#a39dd1bd3424f8daa2a72f53bde7c9c62)
:::

::: {.ttdeci}
unsigned long triggeredTime
:::

::: {.ttdef}
**Definition:** LED.h:26
:::
:::

::: {#aclassLED_html_a41f91d188d162ac0856939f6368b6aeb .ttc}
::: {.ttname}
[LED::blinkStartTime](classLED.html#a41f91d188d162ac0856939f6368b6aeb)
:::

::: {.ttdeci}
unsigned long blinkStartTime
:::

::: {.ttdef}
**Definition:** LED.h:20
:::
:::

::: {#aclassLED_html_a447a6142872354a57402efe1b766526c .ttc}
::: {.ttname}
[LED::setLedOnDuration](classLED.html#a447a6142872354a57402efe1b766526c)
:::

::: {.ttdeci}
void setLedOnDuration(int duration)
:::

::: {.ttdef}
**Definition:** LED.cpp:68
:::
:::

::: {#aclassLED_html_a5371388f81b03dc045091c2492f92b00 .ttc}
::: {.ttname}
[LED::inverted](classLED.html#a5371388f81b03dc045091c2492f92b00)
:::

::: {.ttdeci}
bool inverted
:::

::: {.ttdef}
**Definition:** LED.h:27
:::
:::

::: {#aclassLED_html_a5cb49cf2696615d43952baf8ade06767 .ttc}
::: {.ttname}
[LED::\~LED](classLED.html#a5cb49cf2696615d43952baf8ade06767)
:::

::: {.ttdeci}
\~LED()
:::

::: {.ttdef}
**Definition:** LED.cpp:13
:::
:::

::: {#aclassLED_html_a5ccc3bc84dd08271c2b92e7dc395b042 .ttc}
::: {.ttname}
[LED::setIntensity](classLED.html#a5ccc3bc84dd08271c2b92e7dc395b042)
:::

::: {.ttdeci}
void setIntensity(int intensity)
:::

::: {.ttdef}
**Definition:** LED.cpp:17
:::
:::

::: {#aclassLED_html_a6f49207335f293f84ee5fd163fc0538f .ttc}
::: {.ttname}
[LED::blinkInterval](classLED.html#a6f49207335f293f84ee5fd163fc0538f)
:::

::: {.ttdeci}
unsigned long blinkInterval
:::

::: {.ttdef}
**Definition:** LED.h:21
:::
:::

::: {#aclassLED_html_a7b29be937c90a166ab379928a89b12a1 .ttc}
::: {.ttname}
[LED::intensity](classLED.html#a7b29be937c90a166ab379928a89b12a1)
:::

::: {.ttdeci}
int intensity
:::

::: {.ttdef}
**Definition:** LED.h:22
:::
:::

::: {#aclassLED_html_a973ce3608ed1449bd6521dd026b300aa .ttc}
::: {.ttname}
[LED::resetIvernted](classLED.html#a973ce3608ed1449bd6521dd026b300aa)
:::

::: {.ttdeci}
void resetIvernted()
:::

::: {.ttdef}
**Definition:** LED.cpp:64
:::
:::

::: {#aclassLED_html_aa649a9045bd22e6d4a21bbbf161eff8e .ttc}
::: {.ttname}
[LED::invertedLedOnDuration](classLED.html#aa649a9045bd22e6d4a21bbbf161eff8e)
:::

::: {.ttdeci}
int invertedLedOnDuration
:::

::: {.ttdef}
**Definition:** LED.h:25
:::
:::

::: {#aclassLED_html_ab604feac943fb6f98970f08bc5e2cd98 .ttc}
::: {.ttname}
[LED::stopBlinking](classLED.html#ab604feac943fb6f98970f08bc5e2cd98)
:::

::: {.ttdeci}
void stopBlinking()
:::

::: {.ttdef}
**Definition:** LED.cpp:27
:::
:::

::: {#aclassLED_html_ab8b4d4f8a242125e8bb8f333fea3e1b5 .ttc}
::: {.ttname}
[LED::startBlinking](classLED.html#ab8b4d4f8a242125e8bb8f333fea3e1b5)
:::

::: {.ttdeci}
void startBlinking(unsigned long interval)
:::

::: {.ttdef}
**Definition:** LED.cpp:21
:::
:::

::: {#aclassLED_html_ac72ababe221f50a3c02f72051068f1dd .ttc}
::: {.ttname}
[LED::isBlinking](classLED.html#ac72ababe221f50a3c02f72051068f1dd)
:::

::: {.ttdeci}
bool isBlinking
:::

::: {.ttdef}
**Definition:** LED.h:23
:::
:::

::: {#aclassLED_html_afe1cd286a90bdf388757f840b62963b0 .ttc}
::: {.ttname}
[LED::trigger](classLED.html#afe1cd286a90bdf388757f840b62963b0)
:::

::: {.ttdeci}
void trigger(unsigned long currentTime, bool inverted=false)
:::

::: {.ttdef}
**Definition:** LED.cpp:40
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
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
