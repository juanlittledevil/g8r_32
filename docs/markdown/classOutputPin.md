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
[Public Member Functions](#pub-methods) \| [List of all
members](classOutputPin-members.html)
:::

::: {.headertitle}
::: {.title}
OutputPin Class Reference
:::
:::
:::

::: {.contents}
`#include <Pin.h>`

::: {.dynheader}
Inheritance diagram for OutputPin:
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
Collaboration diagram for OutputPin:
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

[]{#a55e1bf208cb8e2f71664a83de0a78c0b}

[[◆ ](#a55e1bf208cb8e2f71664a83de0a78c0b)]{.permalink}OutputPin() {#outputpin .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------- --- ------ -------------- --- --
  OutputPin::OutputPin   (   int    *pin* = `-1`   )   
  ---------------------- --- ------ -------------- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a26ba6201d8c71d85eec4696558eea0f4}

[[◆ ](#a26ba6201d8c71d85eec4696558eea0f4)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[virtual]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   vo                              |                                   |
| id OutputPin::begin   (      )    |                                   |
|   ----                            |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Reimplemented in
[PWMPin](classPWMPin.html#a5cf9cc1fa8d670f9c594c7d09950f159){.el}.
:::
:::

[]{#a925d7942850c2a7f17f0152a64db5e34}

[[◆ ](#a925d7942850c2a7f17f0152a64db5e34)]{.permalink}getState() {#getstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[virtual]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   bool                            |                                   |
| OutputPin::getState   (      )    |                                   |
|   -------                         |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aad0ad1b49fdbab03f702c7fe62dc7903}

[[◆ ](#aad0ad1b49fdbab03f702c7fe62dc7903)]{.permalink}setState() {#setstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[virtual]{.mlabel}]{.mlabels}    |
| ---- --- ------- --------- --- -- |                                   |
|   void OutputPin::setS            |                                   |
| tate   (   bool    *state*   )    |                                   |
|   ----------------------          |                                   |
| ---- --- ------- --------- --- -- |                                   |
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
