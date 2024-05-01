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
members](classPWMPin-members.html)
:::

::: {.headertitle}
::: {.title}
PWMPin Class Reference
:::
:::
:::

::: {.contents}
`#include <Pin.h>`

::: {.dynheader}
Inheritance diagram for PWMPin:
:::

::: {.dyncontent}
::: {.center}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::

::: {.dynheader}
Collaboration diagram for PWMPin:
:::

::: {.dyncontent}
::: {.center}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------
:::

 

[PWMPin](classPWMPin.html#ac189246b08e89ae948ccee1f4a804617){.el} (int
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

virtual void 

[begin](classPWMPin.html#a5cf9cc1fa8d670f9c594c7d09950f159){.el} ()

 

void 

[setDutyCycle](classPWMPin.html#af7ef7aa814d7635cb2a1b5716823e7f9){.el}
(int
[dutyCycle](classPWMPin.html#a622402e0db5330b9909636476ba1a580){.el})

 

int 

[getDutyCycle](classPWMPin.html#ab2fb4da8e9bed797fc975390b5cfd0f5){.el}
()

 

![-](closed.png) Public Member Functions inherited from
[OutputPin](classOutputPin.html){.el}

 

[OutputPin](classOutputPin.html#a55e1bf208cb8e2f71664a83de0a78c0b){.el}
(int [pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

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

[dutyCycle](classPWMPin.html#a622402e0db5330b9909636476ba1a580){.el}

 

HardwareTimer \* 

[timer](classPWMPin.html#a7567b351a14c913367d125f63490731e){.el}

 

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

[]{#ac189246b08e89ae948ccee1f4a804617}

[[◆ ](#ac189246b08e89ae948ccee1f4a804617)]{.permalink}PWMPin() {#pwmpin .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------- --- ------ -------------- --- --
  PWMPin::PWMPin   (   int    *pin* = `-1`   )   
  ---------------- --- ------ -------------- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a5cf9cc1fa8d670f9c594c7d09950f159}

[[◆ ](#a5cf9cc1fa8d670f9c594c7d09950f159)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[virtual]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|                                   |                                   |
|  void PWMPin::begin   (      )    |                                   |
|   -                               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Reimplemented from
[OutputPin](classOutputPin.html#a26ba6201d8c71d85eec4696558eea0f4){.el}.
:::
:::

[]{#ab2fb4da8e9bed797fc975390b5cfd0f5}

[[◆ ](#ab2fb4da8e9bed797fc975390b5cfd0f5)]{.permalink}getDutyCycle() {#getdutycycle .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -- --- --
  int PWMPin::getDutyCycle   (      )   
  -------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#af7ef7aa814d7635cb2a1b5716823e7f9}

[[◆ ](#af7ef7aa814d7635cb2a1b5716823e7f9)]{.permalink}setDutyCycle() {#setdutycycle .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- ------ ------------- --- --
  void PWMPin::setDutyCycle   (   int    *dutyCycle*   )   
  --------------------------- --- ------ ------------- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a622402e0db5330b9909636476ba1a580}

[[◆ ](#a622402e0db5330b9909636476ba1a580)]{.permalink}dutyCycle {#dutycycle .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------         | [[private]{.mlabel}]{.mlabels}    |
|   int PWMPin::dutyCycle           |                                   |
|   -----------------------         |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a7567b351a14c913367d125f63490731e}

[[◆ ](#a7567b351a14c913367d125f63490731e)]{.permalink}timer {#timer .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
|   HardwareTimer\* PWMPin::timer   |                                   |
|   ------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Pin.h](Pin_8h_source.html){.el}
-   src/[Pin.cpp](Pin_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
