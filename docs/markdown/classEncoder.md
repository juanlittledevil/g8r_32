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
:::

::: {.header}
::: {.summary}
[Public Types](#pub-types) \| [Public Member Functions](#pub-methods) \|
[Private Attributes](#pri-attribs) \| [Static Private
Attributes](#pri-static-attribs) \| [List of all
members](classEncoder-members.html)
:::

::: {.headertitle}
::: {.title}
Encoder Class Reference
:::
:::
:::

::: {.contents}
`#include <Encoder.h>`

::: {.dynheader}
Collaboration diagram for Encoder:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::

[]{#pub-types} Public Types {#public-types .groupheader}
---------------------------
:::

enum  

[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el} {
[NONE](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83){.el}
,
[CW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5){.el}
,
[CCW](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda){.el}
}

 

enum  

[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el}
{
[OPEN](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6){.el}
,
[PRESSED](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c){.el}
}

 

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------

 

[Encoder](classEncoder.html#a5c9dd4c4121421f3868a6fae683ce201){.el} (int
[encCLK](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb){.el}, int
[encDT](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47){.el}, int
[encButton](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700){.el})

 

void 

[begin](classEncoder.html#a335f77fa68600c9a348f1cb9dba8ff5b){.el} ()

 

[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el} 

[readEncoder](classEncoder.html#aec7e3503764db573a30979e95570f7c5){.el}
()

 

[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el} 

[readButton](classEncoder.html#ac2feca5ed5040737fbc9d6282e9b48f7){.el}
()

 

int 

[handleEncoderDirection](classEncoder.html#a9fee5b6e9c060faa745a308793b984ab){.el}
(int currentValue, int maxValue,
[Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el}
direction)

 

bool 

[isButtonLongPressed](classEncoder.html#a26b304caeb9cd561f201d101f62a8964){.el}
()

 

bool 

[isButtonDoublePressed](classEncoder.html#a70380dcc135f2e564607ab3401708b84){.el}
()

 

bool 

[isButtonSinglePressed](classEncoder.html#a08ba46bfb2eb288a47015d63d11e8077){.el}
()

 

int 

[readSpeed](classEncoder.html#a2924112ef1f2a7ea617926e86ab13538){.el} ()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[InputPin](classInputPin.html){.el} 

[encCLK](classEncoder.html#a0f1cb342a57e8ed3b9a951563c184ceb){.el}

 

[InputPin](classInputPin.html){.el} 

[encDT](classEncoder.html#ad3c8d007a93ea4eae5decab4b7221a47){.el}

 

[InputPin](classInputPin.html){.el} 

[encButton](classEncoder.html#a07ae142110dd9baafcb60dd140d7f700){.el}

 

int 

[prevStateCLK](classEncoder.html#ade282a3469a7eed777d2212367704624){.el}

 

[ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el} 

[buttonState](classEncoder.html#a43038f2d33e15f334fa70c0dbf740851){.el}

 

unsigned long 

[lastButtonPress](classEncoder.html#a8562593d886f1a1ac75e504c5da3a41f){.el}

 

int 

[pressCount](classEncoder.html#a82d327bad0b2922d2a3d0ddc1e31e815){.el}

 

unsigned long 

[lastTurnTime](classEncoder.html#a090819a377bc20c23a6de1bf7f28cfbc){.el}

 

int 

[speed](classEncoder.html#a7880595a1f5480757dd7125e4f47cb41){.el}

 

[]{#pri-static-attribs} Static Private Attributes {#static-private-attributes .groupheader}
-------------------------------------------------

static const unsigned long 

[DOUBLE\_PRESS\_INTERVAL](classEncoder.html#a3997f1d2b3f4fc9eaf3a2ecc334d98c5){.el}
= 500

 

static const unsigned long 

[LONG\_PRESS\_INTERVAL](classEncoder.html#ac602a14a72602e3fa9ce103dd447aa8d){.el}
= 1000

 

Member Enumeration Documentation {#member-enumeration-documentation .groupheader}
--------------------------------

[]{#a8d10c6f5e558cd9235db9375bf980ab9}

[[◆ ](#a8d10c6f5e558cd9235db9375bf980ab9)]{.permalink}ButtonState {#buttonstate .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------
  enum [Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el}
  ---------------------------------------------------------------------------------------
:::

::: {.memdoc}
Enumerator
:::
:::

[]{#a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6}OPEN 

[]{#a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c}PRESSED 

[]{#aa7c4648a7ebc9e651c25c2d450a58213}

[[◆ ](#aa7c4648a7ebc9e651c25c2d450a58213)]{.permalink}Direction {#direction .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------------------------------------------------------
  enum [Encoder::Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el}
  -------------------------------------------------------------------------------------
:::

::: {.memdoc}
Enumerator
:::
:::

[]{#aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83}NONE 

[]{#aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5}CW 

[]{#aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda}CCW 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a5c9dd4c4121421f3868a6fae683ce201}

[[◆ ](#a5c9dd4c4121421f3868a6fae683ce201)]{.permalink}Encoder() {#encoder .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------ --- ------ --------------
  Encoder::Encoder   (   int    *encCLK*,
                         int    *encDT*,
                         int    *encButton* 
                     )          
  ------------------ --- ------ --------------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a335f77fa68600c9a348f1cb9dba8ff5b}

[[◆ ](#a335f77fa68600c9a348f1cb9dba8ff5b)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------- --- -- --- --
  void Encoder::begin   (      )   
  --------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a9fee5b6e9c060faa745a308793b984ab}

[[◆ ](#a9fee5b6e9c060faa745a308793b984ab)]{.permalink}handleEncoderDirection() {#handleencoderdirection .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- ------------------------------------------------------------------------ -----------------
  int Encoder::handleEncoderDirection   (   int                                                                      *currentValue*,
                                            int                                                                      *maxValue*,
                                            [Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el}    *direction* 
                                        )                                                                            
  ------------------------------------- --- ------------------------------------------------------------------------ -----------------
:::

::: {.memdoc}
:::
:::

[]{#a70380dcc135f2e564607ab3401708b84}

[[◆ ](#a70380dcc135f2e564607ab3401708b84)]{.permalink}isButtonDoublePressed() {#isbuttondoublepressed .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  bool Encoder::isButtonDoublePressed   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a26b304caeb9cd561f201d101f62a8964}

[[◆ ](#a26b304caeb9cd561f201d101f62a8964)]{.permalink}isButtonLongPressed() {#isbuttonlongpressed .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------- --- -- --- --
  bool Encoder::isButtonLongPressed   (      )   
  ----------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a08ba46bfb2eb288a47015d63d11e8077}

[[◆ ](#a08ba46bfb2eb288a47015d63d11e8077)]{.permalink}isButtonSinglePressed() {#isbuttonsinglepressed .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  bool Encoder::isButtonSinglePressed   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ac2feca5ed5040737fbc9d6282e9b48f7}

[[◆ ](#ac2feca5ed5040737fbc9d6282e9b48f7)]{.permalink}readButton() {#readbutton .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------------------ --- -- --- --
  [Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.el} Encoder::readButton   (      )   
  ------------------------------------------------------------------------------------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#aec7e3503764db573a30979e95570f7c5}

[[◆ ](#aec7e3503764db573a30979e95570f7c5)]{.permalink}readEncoder() {#readencoder .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------------------------------------------------------------------- --- -- --- --
  [Encoder::Direction](classEncoder.html#aa7c4648a7ebc9e651c25c2d450a58213){.el} Encoder::readEncoder   (      )   
  ----------------------------------------------------------------------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a2924112ef1f2a7ea617926e86ab13538}

[[◆ ](#a2924112ef1f2a7ea617926e86ab13538)]{.permalink}readSpeed() {#readspeed .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- -- --- --
  int Encoder::readSpeed   (      )   
  ------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a43038f2d33e15f334fa70c0dbf740851}

[[◆ ](#a43038f2d33e15f334fa70c0dbf740851)]{.permalink}buttonState {#buttonstate-1 .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------------    | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [ButtonState](classEncoder      |                                   |
| .html#a8d10c6f5e558cd9235db9375bf |                                   |
| 980ab9){.el} Encoder::buttonState |                                   |
|   ----------------------------    |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a3997f1d2b3f4fc9eaf3a2ecc334d98c5}

[[◆ ](#a3997f1d2b3f4fc9eaf3a2ecc334d98c5)]{.permalink}DOUBLE\_PRESS\_INTERVAL {#double_press_interval .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------     | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const unsigned long Encod       |                                   |
| er::DOUBLE\_PRESS\_INTERVAL = 500 |                                   |
|   ---------------------------     |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a07ae142110dd9baafcb60dd140d7f700}

[[◆ ](#a07ae142110dd9baafcb60dd140d7f700)]{.permalink}encButton {#encbutton .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classInput           |                                   |
| Pin.html){.el} Encoder::encButton |                                   |
|   -----------------------         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a0f1cb342a57e8ed3b9a951563c184ceb}

[[◆ ](#a0f1cb342a57e8ed3b9a951563c184ceb)]{.permalink}encCLK {#encclk .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classIn              |                                   |
| putPin.html){.el} Encoder::encCLK |                                   |
|   --------------------            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ad3c8d007a93ea4eae5decab4b7221a47}

[[◆ ](#ad3c8d007a93ea4eae5decab4b7221a47)]{.permalink}encDT {#encdt .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classI               |                                   |
| nputPin.html){.el} Encoder::encDT |                                   |
|   -------------------             |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a8562593d886f1a1ac75e504c5da3a41f}

[[◆ ](#a8562593d886f1a1ac75e504c5da3a41f)]{.permalink}lastButtonPress {#lastbuttonpress .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsig                           |                                   |
| ned long Encoder::lastButtonPress |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a090819a377bc20c23a6de1bf7f28cfbc}

[[◆ ](#a090819a377bc20c23a6de1bf7f28cfbc)]{.permalink}lastTurnTime {#lastturntime .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   un                              |                                   |
| signed long Encoder::lastTurnTime |                                   |
|   ----                            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ac602a14a72602e3fa9ce103dd447aa8d}

[[◆ ](#ac602a14a72602e3fa9ce103dd447aa8d)]{.permalink}LONG\_PRESS\_INTERVAL {#long_press_interval .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const unsigned long Enco        |                                   |
| der::LONG\_PRESS\_INTERVAL = 1000 |                                   |
|   --------------------------      |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a82d327bad0b2922d2a3d0ddc1e31e815}

[[◆ ](#a82d327bad0b2922d2a3d0ddc1e31e815)]{.permalink}pressCount {#presscount .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------------       | [[private]{.mlabel}]{.mlabels}    |
|   int Encoder::pressCount         |                                   |
|   -------------------------       |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ade282a3469a7eed777d2212367704624}

[[◆ ](#ade282a3469a7eed777d2212367704624)]{.permalink}prevStateCLK {#prevstateclk .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------     | [[private]{.mlabel}]{.mlabels}    |
|   int Encoder::prevStateCLK       |                                   |
|   ---------------------------     |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a7880595a1f5480757dd7125e4f47cb41}

[[◆ ](#a7880595a1f5480757dd7125e4f47cb41)]{.permalink}speed {#speed .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------            | [[private]{.mlabel}]{.mlabels}    |
|   int Encoder::speed              |                                   |
|   --------------------            |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Encoder.h](Encoder_8h_source.html){.el}
-   src/[Encoder.cpp](Encoder_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
