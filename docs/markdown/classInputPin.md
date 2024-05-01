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
members](classInputPin-members.html)
:::

::: {.headertitle}
::: {.title}
InputPin Class Reference
:::
:::
:::

::: {.contents}
`#include <Pin.h>`

::: {.dynheader}
Inheritance diagram for InputPin:
:::

::: {.dyncontent}
::: {.center}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::

::: {.dynheader}
Collaboration diagram for InputPin:
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

 

[InputPin](classInputPin.html#acf74eef6677cb410c9f6534f8ec34005){.el}
(int [pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el})

 

 

[InputPin](classInputPin.html#aaf7f95bbe6d9897e3b21dfa23fc932f3){.el}
(int [pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}, bool
internalPullup, bool internalPulldown)

 

virtual void 

[begin](classInputPin.html#a32cd882e2f65df5d59f832b5e0cf7169){.el} ()

 

virtual bool 

[getState](classInputPin.html#abcb57baddc2f83f5c969959bbec21047){.el} ()

 

![-](closed.png) Public Member Functions inherited from
[Pin](classPin.html){.el}

 

[Pin](classPin.html#a6e2beb63097c3debb9b1db1f425beb5f){.el} (int
[pin](classPin.html#acf35726490e8ccea7fdeeeb57144bf6d){.el}=-1)

 

 

[\~Pin](classPin.html#a462c14c45d3d653731dde638aa6e7bb7){.el} ()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

bool 

[useInternalPullup](classInputPin.html#afecd8c36b767a12c1b557089ff42dd40){.el}

 

bool 

[useInternalPulldown](classInputPin.html#a0ded483857a69a873d80f0915deb44db){.el}

 

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

[]{#acf74eef6677cb410c9f6534f8ec34005}

[[◆ ](#acf74eef6677cb410c9f6534f8ec34005)]{.permalink}InputPin() [\[1/2\]]{.overload} {#inputpin-12 .memtitle}
-------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------- --- ------ ------- --- --
  InputPin::InputPin   (   int    *pin*   )   
  -------------------- --- ------ ------- --- --
:::

::: {.memdoc}
:::
:::

[]{#aaf7f95bbe6d9897e3b21dfa23fc932f3}

[[◆ ](#aaf7f95bbe6d9897e3b21dfa23fc932f3)]{.permalink}InputPin() [\[2/2\]]{.overload} {#inputpin-22 .memtitle}
-------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------- --- ------- ---------------------
  InputPin::InputPin   (   int     *pin*,
                           bool    *internalPullup*,
                           bool    *internalPulldown* 
                       )           
  -------------------- --- ------- ---------------------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a32cd882e2f65df5d59f832b5e0cf7169}

[[◆ ](#a32cd882e2f65df5d59f832b5e0cf7169)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[virtual]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   v                               |                                   |
| oid InputPin::begin   (      )    |                                   |
|   ---                             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#abcb57baddc2f83f5c969959bbec21047}

[[◆ ](#abcb57baddc2f83f5c969959bbec21047)]{.permalink}getState() {#getstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------                          | [[virtual]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   bool                            |                                   |
|  InputPin::getState   (      )    |                                   |
|   ------                          |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a0ded483857a69a873d80f0915deb44db}

[[◆ ](#a0ded483857a69a873d80f0915deb44db)]{.permalink}useInternalPulldown {#useinternalpulldown .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   b                               |                                   |
| ool InputPin::useInternalPulldown |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#afecd8c36b767a12c1b557089ff42dd40}

[[◆ ](#afecd8c36b767a12c1b557089ff42dd40)]{.permalink}useInternalPullup {#useinternalpullup .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -                               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
|  bool InputPin::useInternalPullup |                                   |
|   -                               |                                   |
| --------------------------------- |                                   |
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
