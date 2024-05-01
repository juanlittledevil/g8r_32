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
[Public Member Functions](#pub-methods) \| [Private
Attributes](#pri-attribs) \| [List of all
members](classLED-members.html)
:::

::: {.headertitle}
::: {.title}
LED Class Reference
:::
:::
:::

::: {.contents}
`#include <LED.h>`

::: {.dynheader}
Inheritance diagram for LED:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::

::: {.dynheader}
Collaboration diagram for LED:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------
:::

 

[LED](classLED.html#a2f9846058d6c93165846802571e877bf){.el} (int
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

 

[\~LED](classLED.html#a5cb49cf2696615d43952baf8ade06767){.el} ()

 

void 

[startBlinking](classLED.html#ab8b4d4f8a242125e8bb8f333fea3e1b5){.el}
(unsigned long interval)

 

void 

[stopBlinking](classLED.html#ab604feac943fb6f98970f08bc5e2cd98){.el} ()

 

void 

[updateBlinking](classLED.html#a0515347480de786c503951522ed0fae8){.el}
()

 

void 

[setIntensity](classLED.html#a5ccc3bc84dd08271c2b92e7dc395b042){.el}
(int [intensity](classLED.html#a7b29be937c90a166ab379928a89b12a1){.el})

 

void 

[trigger](classLED.html#afe1cd286a90bdf388757f840b62963b0){.el}
(unsigned long currentTime, bool
[inverted](classLED.html#a5371388f81b03dc045091c2492f92b00){.el}=false)

 

void 

[update](classLED.html#a26deb537b1cbc1f38d0fce57650875f5){.el} (unsigned
long currentTime)

 

void 

[resetIvernted](classLED.html#a973ce3608ed1449bd6521dd026b300aa){.el} ()

 

void 

[setLedOnDuration](classLED.html#a447a6142872354a57402efe1b766526c){.el}
(int duration)

 

![-](closed.png) Public Member Functions inherited from
[OutputPin](classOutputPin.html){.el}

 

[OutputPin](classOutputPin.html#a55e1bf208cb8e2f71664a83de0a78c0b){.el}
(int [pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

virtual void 

[begin](classOutputPin.html#a26ba6201d8c71d85eec4696558eea0f4){.el} ()

 

virtual void 

[setState](classOutputPin.html#aad0ad1b49fdbab03f702c7fe62dc7903){.el}
(bool [state](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf){.el})

 

virtual bool 

[getState](classOutputPin.html#a925d7942850c2a7f17f0152a64db5e34){.el}
()

 

![-](closed.png) Public Member Functions inherited from
[Pin](classPin.html){.el}

 

[Pin](classPin.html#a6e2beb63097c3debb9b1db1f425beb5f){.el} (int
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

 

[\~Pin](classPin.html#a462c14c45d3d653731dde638aa6e7bb7){.el} ()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

unsigned long 

[blinkStartTime](classLED.html#a41f91d188d162ac0856939f6368b6aeb){.el}

 

unsigned long 

[blinkInterval](classLED.html#a6f49207335f293f84ee5fd163fc0538f){.el}

 

int 

[intensity](classLED.html#a7b29be937c90a166ab379928a89b12a1){.el} = 255

 

bool 

[isBlinking](classLED.html#ac72ababe221f50a3c02f72051068f1dd){.el}

 

int 

[ledOnDuration](classLED.html#a26f304de8f30355e99917090877dee78){.el} =
25

 

int 

[invertedLedOnDuration](classLED.html#aa649a9045bd22e6d4a21bbbf161eff8e){.el}
= 40

 

unsigned long 

[triggeredTime](classLED.html#a39dd1bd3424f8daa2a72f53bde7c9c62){.el} =
0

 

bool 

[inverted](classLED.html#a5371388f81b03dc045091c2492f92b00){.el} = false

 

[]{#inherited} Additional Inherited Members {#additional-inherited-members .groupheader}
-------------------------------------------

![-](closed.png) Protected Attributes inherited from
[Pin](classPin.html){.el}

int 

[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}

 

bool 

[state](classPin.html#af51a2c85baa1c0387bd5691a808ef1cf){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a2f9846058d6c93165846802571e877bf}

[[◆ ](#a2f9846058d6c93165846802571e877bf)]{.permalink}LED() {#led .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------- --- ------ -------------- --- --
  LED::LED   (   int    *pin* = `-1`   )   
  ---------- --- ------ -------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a5cb49cf2696615d43952baf8ade06767}

[[◆ ](#a5cb49cf2696615d43952baf8ade06767)]{.permalink}\~LED() {#led-1 .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------ --- -- --- --
  LED::\~LED   (      )   
  ------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a973ce3608ed1449bd6521dd026b300aa}

[[◆ ](#a973ce3608ed1449bd6521dd026b300aa)]{.permalink}resetIvernted() {#resetivernted .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- -- --- --
  void LED::resetIvernted   (      )   
  ------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a5ccc3bc84dd08271c2b92e7dc395b042}

[[◆ ](#a5ccc3bc84dd08271c2b92e7dc395b042)]{.permalink}setIntensity() {#setintensity .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- ------ ------------- --- --
  void LED::setIntensity   (   int    *intensity*   )   
  ------------------------ --- ------ ------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a447a6142872354a57402efe1b766526c}

[[◆ ](#a447a6142872354a57402efe1b766526c)]{.permalink}setLedOnDuration() {#setledonduration .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- ------ ------------ --- --
  void LED::setLedOnDuration   (   int    *duration*   )   
  ---------------------------- --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#ab8b4d4f8a242125e8bb8f333fea3e1b5}

[[◆ ](#ab8b4d4f8a242125e8bb8f333fea3e1b5)]{.permalink}startBlinking() {#startblinking .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ---------------- ------------ --- --
  void LED::startBlinking   (   unsigned long    *interval*   )   
  ------------------------- --- ---------------- ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#ab604feac943fb6f98970f08bc5e2cd98}

[[◆ ](#ab604feac943fb6f98970f08bc5e2cd98)]{.permalink}stopBlinking() {#stopblinking .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- -- --- --
  void LED::stopBlinking   (      )   
  ------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#afe1cd286a90bdf388757f840b62963b0}

[[◆ ](#afe1cd286a90bdf388757f840b62963b0)]{.permalink}trigger() {#trigger .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------- --- ---------------- -----------------------
  void LED::trigger   (   unsigned long    *currentTime*,
                          bool             *inverted* = `false` 
                      )                    
  ------------------- --- ---------------- -----------------------
:::

::: {.memdoc}
:::
:::

[]{#a26deb537b1cbc1f38d0fce57650875f5}

[[◆ ](#a26deb537b1cbc1f38d0fce57650875f5)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------ --- ---------------- --------------- --- --
  void LED::update   (   unsigned long    *currentTime*   )   
  ------------------ --- ---------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a0515347480de786c503951522ed0fae8}

[[◆ ](#a0515347480de786c503951522ed0fae8)]{.permalink}updateBlinking() {#updateblinking .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -- --- --
  void LED::updateBlinking   (      )   
  -------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a6f49207335f293f84ee5fd163fc0538f}

[[◆ ](#a6f49207335f293f84ee5fd163fc0538f)]{.permalink}blinkInterval {#blinkinterval .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
|  unsigned long LED::blinkInterval |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a41f91d188d162ac0856939f6368b6aeb}

[[◆ ](#a41f91d188d162ac0856939f6368b6aeb)]{.permalink}blinkStartTime {#blinkstarttime .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| unsigned long LED::blinkStartTime |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a7b29be937c90a166ab379928a89b12a1}

[[◆ ](#a7b29be937c90a166ab379928a89b12a1)]{.permalink}intensity {#intensity .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[private]{.mlabel}]{.mlabels}    |
|   int LED::intensity = 255        |                                   |
|   --------------------------      |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a5371388f81b03dc045091c2492f92b00}

[[◆ ](#a5371388f81b03dc045091c2492f92b00)]{.permalink}inverted {#inverted .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------------    | [[private]{.mlabel}]{.mlabels}    |
|   bool LED::inverted = false      |                                   |
|   ----------------------------    |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa649a9045bd22e6d4a21bbbf161eff8e}

[[◆ ](#aa649a9045bd22e6d4a21bbbf161eff8e)]{.permalink}invertedLedOnDuration {#invertedledonduration .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   in                              |                                   |
| t LED::invertedLedOnDuration = 40 |                                   |
|   ----                            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ac72ababe221f50a3c02f72051068f1dd}

[[◆ ](#ac72ababe221f50a3c02f72051068f1dd)]{.permalink}isBlinking {#isblinking .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[private]{.mlabel}]{.mlabels}    |
|   bool LED::isBlinking            |                                   |
|   ----------------------          |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a26f304de8f30355e99917090877dee78}

[[◆ ](#a26f304de8f30355e99917090877dee78)]{.permalink}ledOnDuration {#ledonduration .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
|   int LED::ledOnDuration = 25     |                                   |
|   -----------------------------   |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a39dd1bd3424f8daa2a72f53bde7c9c62}

[[◆ ](#a39dd1bd3424f8daa2a72f53bde7c9c62)]{.permalink}triggeredTime {#triggeredtime .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----                           | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   uns                             |                                   |
| igned long LED::triggeredTime = 0 |                                   |
|   -----                           |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[LED.h](LED_8h_source.html){.el}
-   src/[LED.cpp](LED_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
