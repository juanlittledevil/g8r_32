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
members](classGate-members.html)
:::

::: {.headertitle}
::: {.title}
Gate Class Reference
:::
:::
:::

::: {.contents}
`#include <Gate.h>`

::: {.dynheader}
Inheritance diagram for Gate:
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
Collaboration diagram for Gate:
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

 

[Gate](classGate.html#a9f0a3e04c61f6924c2d2d5bbdfaa8ead){.el} (int
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

 

[\~Gate](classGate.html#aa04556acb1cdc5715e38ced8f28c6b27){.el} ()

 

void 

[trigger](classGate.html#a6277eacc42d5f84de2a59ea4e062b5bf){.el}
(unsigned long currentTime)

 

void 

[update](classGate.html#a420659855b83dd5dcd94b9eda11f5824){.el}
(unsigned long currentTime)

 

void 

[setDivision](classGate.html#a49ac696e28beeb2d158778c5588f872e){.el}
(int divition)

 

int 

[getDivision](classGate.html#ab99412ef6a005235669a0acc34bc9c9b){.el} ()

 

void 

[setGateOnDuration](classGate.html#a17f0a9f5f2d7e19367c70d6afd965fa1){.el}
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

int 

[gateOnDuration](classGate.html#a35f127ccfcc6721cd0fcae3de805815f){.el}
= 10

 

unsigned long 

[triggeredTime](classGate.html#a16fe5ae275203f6fc24bf34f08033f0f){.el} =
0

 

int 

[division](classGate.html#a650b1da6da13180bae01219b862ec725){.el} =
[internalPPQN](Constants_8h.html#adf636984b70d690edd0c4a32836392e0){.el}

 

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

[]{#a9f0a3e04c61f6924c2d2d5bbdfaa8ead}

[[◆ ](#a9f0a3e04c61f6924c2d2d5bbdfaa8ead)]{.permalink}Gate() {#gate .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------ --- ------ -------------- --- --
  Gate::Gate   (   int    *pin* = `-1`   )   
  ------------ --- ------ -------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#aa04556acb1cdc5715e38ced8f28c6b27}

[[◆ ](#aa04556acb1cdc5715e38ced8f28c6b27)]{.permalink}\~Gate() {#gate-1 .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- -- --- --
  Gate::\~Gate   (      )   
  -------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#ab99412ef6a005235669a0acc34bc9c9b}

[[◆ ](#ab99412ef6a005235669a0acc34bc9c9b)]{.permalink}getDivision() {#getdivision .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------- --- -- --- --
  int Gate::getDivision   (      )   
  ----------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a49ac696e28beeb2d158778c5588f872e}

[[◆ ](#a49ac696e28beeb2d158778c5588f872e)]{.permalink}setDivision() {#setdivision .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- ------ ------------ --- --
  void Gate::setDivision   (   int    *divition*   )   
  ------------------------ --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#a17f0a9f5f2d7e19367c70d6afd965fa1}

[[◆ ](#a17f0a9f5f2d7e19367c70d6afd965fa1)]{.permalink}setGateOnDuration() {#setgateonduration .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- ------ ------------ --- --
  void Gate::setGateOnDuration   (   int    *duration*   )   
  ------------------------------ --- ------ ------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#a6277eacc42d5f84de2a59ea4e062b5bf}

[[◆ ](#a6277eacc42d5f84de2a59ea4e062b5bf)]{.permalink}trigger() {#trigger .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------- --- ---------------- --------------- --- --
  void Gate::trigger   (   unsigned long    *currentTime*   )   
  -------------------- --- ---------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a420659855b83dd5dcd94b9eda11f5824}

[[◆ ](#a420659855b83dd5dcd94b9eda11f5824)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------- --- ---------------- --------------- --- --
  void Gate::update   (   unsigned long    *currentTime*   )   
  ------------------- --- ---------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a650b1da6da13180bae01219b862ec725}

[[◆ ](#a650b1da6da13180bae01219b862ec725)]{.permalink}division {#division .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   int Gate::division = [inter     |                                   |
| nalPPQN](Constants_8h.html#adf636 |                                   |
| 984b70d690edd0c4a32836392e0){.el} |                                   |
|   -----------------------------   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a35f127ccfcc6721cd0fcae3de805815f}

[[◆ ](#a35f127ccfcc6721cd0fcae3de805815f)]{.permalink}gateOnDuration {#gateonduration .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
|   int Gate::gateOnDuration = 10   |                                   |
|   ------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a16fe5ae275203f6fc24bf34f08033f0f}

[[◆ ](#a16fe5ae275203f6fc24bf34f08033f0f)]{.permalink}triggeredTime {#triggeredtime .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------                          | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsi                            |                                   |
| gned long Gate::triggeredTime = 0 |                                   |
|   ------                          |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Gate.h](Gate_8h_source.html){.el}
-   src/[Gate.cpp](Gate_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
