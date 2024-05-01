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
Pin.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Pin_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef PIN\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define PIN\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#ifdef ARDUINO\_ARCH\_STM32]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include \<HardwareTimer.h\>]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#endif]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} 
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [// Pin class]{.comment}
:::

::: {.line}
[]{#l00009}[ [9](classPin.html){.line}]{.lineno} [class
]{.keyword}[Pin](classPin.html){.code} {
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [protected]{.keyword}:
:::

::: {.line}
[]{#l00011}[
[11](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.line}]{.lineno} 
[int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code}; [// Pin
number]{.comment}
:::

::: {.line}
[]{#l00012}[
[12](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf){.line}]{.lineno} 
[bool]{.keywordtype}
[state](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf){.code}; [//
Current state of the pin]{.comment}
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} 
:::

::: {.line}
[]{#l00014}[ 14]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00015}[ 15]{.lineno} 
[Pin](classPin.html#a6e2beb63097c3debb9b1db1f425beb5f){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code} = -1); [//
Constructor]{.comment}
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
[\~Pin](classPin.html#a462c14c45d3d653731dde638aa6e7bb7){.code}(); [//
Destructor]{.comment}
:::

::: {.line}
[]{#l00017}[ 17]{.lineno} };
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
:::

::: {.line}
[]{#l00019}[ 19]{.lineno} [// InputPin class (inherits from
Pin)]{.comment}
:::

::: {.line}
[]{#l00020}[ [20](classInputPin.html){.line}]{.lineno} [class
]{.keyword}[InputPin](classInputPin.html){.code} : [public]{.keyword}
[Pin](classPin.html){.code} {
:::

::: {.line}
[]{#l00021}[ 21]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00022}[ 22]{.lineno} 
[InputPin](classInputPin.html#acf74eef6677cb410c9f6534f8ec34005){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code}); [//
Default constructor]{.comment}
:::

::: {.line}
[]{#l00023}[ 23]{.lineno} 
[InputPin](classInputPin.html#acf74eef6677cb410c9f6534f8ec34005){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code},
[bool]{.keywordtype} internalPullup, [bool]{.keywordtype}
internalPulldown); [// Overloaded constructor]{.comment}
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [virtual]{.keyword} [void]{.keywordtype}
[begin](classInputPin.html#a32cd882e2f65df5d59f832b5e0cf7169){.code}();
[// Initialize the pin]{.comment}
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [virtual]{.keyword} [bool]{.keywordtype}
[getState](classInputPin.html#abcb57baddc2f83f5c969959bbec21047){.code}();
[// Get the state of the pin]{.comment}
:::

::: {.line}
[]{#l00026}[ 26]{.lineno} 
:::

::: {.line}
[]{#l00027}[ 27]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00028}[
[28](classInputPin.html#afecd8c36b767a12c1b557089ff42dd40){.line}]{.lineno} 
[bool]{.keywordtype}
[useInternalPullup](classInputPin.html#afecd8c36b767a12c1b557089ff42dd40){.code};
[// Flag to indicate whether to use internal pull-up resistor]{.comment}
:::

::: {.line}
[]{#l00029}[
[29](classInputPin.html#a0ded483857a69a873d80f0915deb44db){.line}]{.lineno} 
[bool]{.keywordtype}
[useInternalPulldown](classInputPin.html#a0ded483857a69a873d80f0915deb44db){.code};
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} };
:::

::: {.line}
[]{#l00031}[ 31]{.lineno} 
:::

::: {.line}
[]{#l00032}[ 32]{.lineno} [// AnalogInputPin class (inherits from
Pin)]{.comment}
:::

::: {.line}
[]{#l00033}[ [33](classAnalogInputPin.html){.line}]{.lineno} [class
]{.keyword}[AnalogInputPin](classAnalogInputPin.html){.code} :
[public]{.keyword} [Pin](classPin.html){.code} {
:::

::: {.line}
[]{#l00034}[ 34]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00035}[ 35]{.lineno} 
[AnalogInputPin](classAnalogInputPin.html#a4a79d4e964b47c3d94a3581ee39d21a8){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code}); [//
Constructor]{.comment}
:::

::: {.line}
[]{#l00036}[ 36]{.lineno}  [void]{.keywordtype}
[begin](classAnalogInputPin.html#a747926c64444b5b8f8bff0d9d063ae75){.code}();
[// Initialize the pin]{.comment}
:::

::: {.line}
[]{#l00037}[ 37]{.lineno}  [int]{.keywordtype}
[read](classAnalogInputPin.html#a787d8df0f0810bd7e97bd0e68cff2c49){.code}();
[// Read analog value from the pin]{.comment}
:::

::: {.line}
[]{#l00038}[ 38]{.lineno} };
:::

::: {.line}
[]{#l00039}[ 39]{.lineno} 
:::

::: {.line}
[]{#l00040}[ 40]{.lineno} [// OutputPin class (inherits from
Pin)]{.comment}
:::

::: {.line}
[]{#l00041}[ [41](classOutputPin.html){.line}]{.lineno} [class
]{.keyword}[OutputPin](classOutputPin.html){.code} : [public]{.keyword}
[Pin](classPin.html){.code} {
:::

::: {.line}
[]{#l00042}[ 42]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00043}[ 43]{.lineno} 
[OutputPin](classOutputPin.html#a55e1bf208cb8e2f71664a83de0a78c0b){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code} = -1); [//
Constructor]{.comment}
:::

::: {.line}
[]{#l00044}[ 44]{.lineno}  [virtual]{.keyword} [void]{.keywordtype}
[begin](classOutputPin.html#a26ba6201d8c71d85eec4696558eea0f4){.code}();
[// Initialize the pin]{.comment}
:::

::: {.line}
[]{#l00045}[ 45]{.lineno}  [virtual]{.keyword} [void]{.keywordtype}
[setState](classOutputPin.html#aad0ad1b49fdbab03f702c7fe62dc7903){.code}([bool]{.keywordtype}
[state](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf){.code}); [//
Set the state of the pin]{.comment}
:::

::: {.line}
[]{#l00046}[ 46]{.lineno}  [virtual]{.keyword} [bool]{.keywordtype}
[getState](classOutputPin.html#a925d7942850c2a7f17f0152a64db5e34){.code}();
[// Get the state of the pin]{.comment}
:::

::: {.line}
[]{#l00047}[ 47]{.lineno} };
:::

::: {.line}
[]{#l00048}[ 48]{.lineno} 
:::

::: {.line}
[]{#l00049}[ 49]{.lineno} [// PWMPin class (inherits from
OutputPin)]{.comment}
:::

::: {.line}
[]{#l00050}[ [50](classPWMPin.html){.line}]{.lineno} [class
]{.keyword}[PWMPin](classPWMPin.html){.code} : [public]{.keyword}
[OutputPin](classOutputPin.html){.code} {
:::

::: {.line}
[]{#l00051}[ 51]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00052}[ 52]{.lineno} 
[PWMPin](classPWMPin.html#ac189246b08e89ae948ccee1f4a804617){.code}([int]{.keywordtype}
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.code} = -1); [//
Constructor]{.comment}
:::

::: {.line}
[]{#l00053}[ 53]{.lineno}  [virtual]{.keyword} [void]{.keywordtype}
[begin](classPWMPin.html#a5cf9cc1fa8d670f9c594c7d09950f159){.code}();
[// Initialize the pin]{.comment}
:::

::: {.line}
[]{#l00054}[ 54]{.lineno}  [void]{.keywordtype}
[setDutyCycle](classPWMPin.html#af7ef7aa814d7635cb2a1b5716823e7f9){.code}([int]{.keywordtype}
[dutyCycle](classPWMPin.html#a622402e0db5330b9909636476ba1a580){.code});
[// Set the duty cycle of the pin]{.comment}
:::

::: {.line}
[]{#l00055}[ 55]{.lineno}  [int]{.keywordtype}
[getDutyCycle](classPWMPin.html#ab2fb4da8e9bed797fc975390b5cfd0f5){.code}();
[// Get the duty cycle of the pin]{.comment}
:::

::: {.line}
[]{#l00056}[ 56]{.lineno} 
:::

::: {.line}
[]{#l00057}[ 57]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00058}[
[58](classPWMPin.html#a622402e0db5330b9909636476ba1a580){.line}]{.lineno} 
[int]{.keywordtype}
[dutyCycle](classPWMPin.html#a622402e0db5330b9909636476ba1a580){.code};
[// Duty cycle of the PWM pin]{.comment}
:::

::: {.line}
[]{#l00059}[
[59](classPWMPin.html#a7567b351a14c913367d125f63490731e){.line}]{.lineno} 
HardwareTimer\*
[timer](classPWMPin.html#a7567b351a14c913367d125f63490731e){.code}; [//
Timer for PWM output]{.comment}
:::

::: {.line}
[]{#l00060}[ 60]{.lineno} };
:::

::: {.line}
[]{#l00061}[ 61]{.lineno} 
:::

::: {.line}
[]{#l00062}[ 62]{.lineno} [\#endif ]{.preprocessor}[// PIN\_H]{.comment}
:::

::: {#aclassAnalogInputPin_html .ttc}
::: {.ttname}
[AnalogInputPin](classAnalogInputPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:33
:::
:::

::: {#aclassAnalogInputPin_html_a4a79d4e964b47c3d94a3581ee39d21a8 .ttc}
::: {.ttname}
[AnalogInputPin::AnalogInputPin](classAnalogInputPin.html#a4a79d4e964b47c3d94a3581ee39d21a8)
:::

::: {.ttdeci}
AnalogInputPin(int pin)
:::

::: {.ttdef}
**Definition:** Pin.cpp:55
:::
:::

::: {#aclassAnalogInputPin_html_a747926c64444b5b8f8bff0d9d063ae75 .ttc}
::: {.ttname}
[AnalogInputPin::begin](classAnalogInputPin.html#a747926c64444b5b8f8bff0d9d063ae75)
:::

::: {.ttdeci}
void begin()
:::

::: {.ttdef}
**Definition:** Pin.cpp:60
:::
:::

::: {#aclassAnalogInputPin_html_a787d8df0f0810bd7e97bd0e68cff2c49 .ttc}
::: {.ttname}
[AnalogInputPin::read](classAnalogInputPin.html#a787d8df0f0810bd7e97bd0e68cff2c49)
:::

::: {.ttdeci}
int read()
:::

::: {.ttdef}
**Definition:** Pin.cpp:65
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

::: {#aclassInputPin_html_a0ded483857a69a873d80f0915deb44db .ttc}
::: {.ttname}
[InputPin::useInternalPulldown](classInputPin.html#a0ded483857a69a873d80f0915deb44db)
:::

::: {.ttdeci}
bool useInternalPulldown
:::

::: {.ttdef}
**Definition:** Pin.h:29
:::
:::

::: {#aclassInputPin_html_a32cd882e2f65df5d59f832b5e0cf7169 .ttc}
::: {.ttname}
[InputPin::begin](classInputPin.html#a32cd882e2f65df5d59f832b5e0cf7169)
:::

::: {.ttdeci}
virtual void begin()
:::

::: {.ttdef}
**Definition:** Pin.cpp:37
:::
:::

::: {#aclassInputPin_html_abcb57baddc2f83f5c969959bbec21047 .ttc}
::: {.ttname}
[InputPin::getState](classInputPin.html#abcb57baddc2f83f5c969959bbec21047)
:::

::: {.ttdeci}
virtual bool getState()
:::

::: {.ttdef}
**Definition:** Pin.cpp:48
:::
:::

::: {#aclassInputPin_html_acf74eef6677cb410c9f6534f8ec34005 .ttc}
::: {.ttname}
[InputPin::InputPin](classInputPin.html#acf74eef6677cb410c9f6534f8ec34005)
:::

::: {.ttdeci}
InputPin(int pin)
:::

::: {.ttdef}
**Definition:** Pin.cpp:22
:::
:::

::: {#aclassInputPin_html_afecd8c36b767a12c1b557089ff42dd40 .ttc}
::: {.ttname}
[InputPin::useInternalPullup](classInputPin.html#afecd8c36b767a12c1b557089ff42dd40)
:::

::: {.ttdeci}
bool useInternalPullup
:::

::: {.ttdef}
**Definition:** Pin.h:28
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

::: {#aclassOutputPin_html_a26ba6201d8c71d85eec4696558eea0f4 .ttc}
::: {.ttname}
[OutputPin::begin](classOutputPin.html#a26ba6201d8c71d85eec4696558eea0f4)
:::

::: {.ttdeci}
virtual void begin()
:::

::: {.ttdef}
**Definition:** Pin.cpp:77
:::
:::

::: {#aclassOutputPin_html_a55e1bf208cb8e2f71664a83de0a78c0b .ttc}
::: {.ttname}
[OutputPin::OutputPin](classOutputPin.html#a55e1bf208cb8e2f71664a83de0a78c0b)
:::

::: {.ttdeci}
OutputPin(int pin=-1)
:::

::: {.ttdef}
**Definition:** Pin.cpp:72
:::
:::

::: {#aclassOutputPin_html_a925d7942850c2a7f17f0152a64db5e34 .ttc}
::: {.ttname}
[OutputPin::getState](classOutputPin.html#a925d7942850c2a7f17f0152a64db5e34)
:::

::: {.ttdeci}
virtual bool getState()
:::

::: {.ttdef}
**Definition:** Pin.cpp:88
:::
:::

::: {#aclassOutputPin_html_aad0ad1b49fdbab03f702c7fe62dc7903 .ttc}
::: {.ttname}
[OutputPin::setState](classOutputPin.html#aad0ad1b49fdbab03f702c7fe62dc7903)
:::

::: {.ttdeci}
virtual void setState(bool state)
:::

::: {.ttdef}
**Definition:** Pin.cpp:82
:::
:::

::: {#aclassPWMPin_html .ttc}
::: {.ttname}
[PWMPin](classPWMPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:50
:::
:::

::: {#aclassPWMPin_html_a5cf9cc1fa8d670f9c594c7d09950f159 .ttc}
::: {.ttname}
[PWMPin::begin](classPWMPin.html#a5cf9cc1fa8d670f9c594c7d09950f159)
:::

::: {.ttdeci}
virtual void begin()
:::

::: {.ttdef}
**Definition:** Pin.cpp:102
:::
:::

::: {#aclassPWMPin_html_a622402e0db5330b9909636476ba1a580 .ttc}
::: {.ttname}
[PWMPin::dutyCycle](classPWMPin.html#a622402e0db5330b9909636476ba1a580)
:::

::: {.ttdeci}
int dutyCycle
:::

::: {.ttdef}
**Definition:** Pin.h:58
:::
:::

::: {#aclassPWMPin_html_a7567b351a14c913367d125f63490731e .ttc}
::: {.ttname}
[PWMPin::timer](classPWMPin.html#a7567b351a14c913367d125f63490731e)
:::

::: {.ttdeci}
HardwareTimer \* timer
:::

::: {.ttdef}
**Definition:** Pin.h:59
:::
:::

::: {#aclassPWMPin_html_ab2fb4da8e9bed797fc975390b5cfd0f5 .ttc}
::: {.ttname}
[PWMPin::getDutyCycle](classPWMPin.html#ab2fb4da8e9bed797fc975390b5cfd0f5)
:::

::: {.ttdeci}
int getDutyCycle()
:::

::: {.ttdef}
**Definition:** Pin.cpp:123
:::
:::

::: {#aclassPWMPin_html_ac189246b08e89ae948ccee1f4a804617 .ttc}
::: {.ttname}
[PWMPin::PWMPin](classPWMPin.html#ac189246b08e89ae948ccee1f4a804617)
:::

::: {.ttdeci}
PWMPin(int pin=-1)
:::

::: {.ttdef}
**Definition:** Pin.cpp:94
:::
:::

::: {#aclassPWMPin_html_af7ef7aa814d7635cb2a1b5716823e7f9 .ttc}
::: {.ttname}
[PWMPin::setDutyCycle](classPWMPin.html#af7ef7aa814d7635cb2a1b5716823e7f9)
:::

::: {.ttdeci}
void setDutyCycle(int dutyCycle)
:::

::: {.ttdef}
**Definition:** Pin.cpp:117
:::
:::

::: {#aclassPin_html .ttc}
::: {.ttname}
[Pin](classPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:9
:::
:::

::: {#aclassPin_html_a462c14c45d3d653731dde638aa6e7bb7 .ttc}
::: {.ttname}
[Pin::\~Pin](classPin.html#a462c14c45d3d653731dde638aa6e7bb7)
:::

::: {.ttdeci}
\~Pin()
:::

::: {.ttdef}
**Definition:** Pin.cpp:16
:::
:::

::: {#aclassPin_html_a6e2beb63097c3debb9b1db1f425beb5f .ttc}
::: {.ttname}
[Pin::Pin](classPin.html#a6e2beb63097c3debb9b1db1f425beb5f)
:::

::: {.ttdeci}
Pin(int pin=-1)
:::

::: {.ttdef}
**Definition:** Pin.cpp:10
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

::: {#aclassPin_html_af51a2c85baa1c0387bd5691a808ef1cf .ttc}
::: {.ttname}
[Pin::state](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf)
:::

::: {.ttdeci}
bool state
:::

::: {.ttdef}
**Definition:** Pin.h:12
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
