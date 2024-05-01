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
[Public Member Functions](#pub-methods) \| [Public
Attributes](#pub-attribs) \| [Private Attributes](#pri-attribs) \| [List
of all members](classLEDs-members.html)
:::

::: {.headertitle}
::: {.title}
LEDs Class Reference
:::
:::
:::

::: {.contents}
`#include <LEDs.h>`

::: {.dynheader}
Collaboration diagram for LEDs:
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

 

[LEDs](classLEDs.html#a1bd8cd6dfe54db1248b5749d532e705a){.el}
(std::vector\< int \>
[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.el}, int
[numLeds](classLEDs.html#a279c7fb7628edf2a73c98313607993d4){.el})

 

 

[\~LEDs](classLEDs.html#a682bab337039995cc4fc2a7e753a38e5){.el} ()

 

void 

[begin](classLEDs.html#aa964a9b80d6606286a69f5025f5f857a){.el} ()

 

void 

[setState](classLEDs.html#a763ea6fd51a29a40ddc0c39a70a4167e){.el} (int
index, bool state)

 

void 

[setState](classLEDs.html#a3cbae273cb30c1a09c414e2c1c5fd11d){.el} (int
index, bool state, int
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.el})

 

bool 

[getState](classLEDs.html#a98711a933b0dc69df40c3d9752a61334){.el} (int
index)

 

void 

[setAllLeds](classLEDs.html#af2bb823ca5af8a88e7f98f5869b4c706){.el}
(bool state)

 

void 

[startBlinking](classLEDs.html#a5d00178936fca48853813129e26c5dea){.el}
(int index, unsigned long interval)

 

void 

[stopBlinking](classLEDs.html#a343cdb24ad5b0ceae3fdf3086db765c5){.el}
(int index)

 

void 

[stopAllBlinking](classLEDs.html#a6cfb124344f67e7246c45e88da7bd47e){.el}
()

 

void 

[updateBlinking](classLEDs.html#aee969eddac897718c3f75c3c24e23aa6){.el}
()

 

void 

[setIntensity](classLEDs.html#a6a8449ad97957877f7cfc6ff9776ad21){.el}
(int index, int
[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.el})

 

void 

[setAllintensity](classLEDs.html#a8ea9ceb959da8cde5f7c80542a023ac9){.el}
(int [intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.el})

 

void 

[update](classLEDs.html#ab689142c4f9a1f6a8d1deb6e5f3e79e6){.el}
(unsigned long currentTime)

 

void 

[trigger](classLEDs.html#af9c6980e1497fca93a2945698156fbe6){.el} (int
index, unsigned long currentTime, bool inverted=false)

 

void 

[resetInverted](classLEDs.html#adbb31af7efe7478045f4a260db116af2){.el}
(int index)

 

[]{#pub-attribs} Public Attributes {#public-attributes .groupheader}
----------------------------------

int 

[numLeds](classLEDs.html#a279c7fb7628edf2a73c98313607993d4){.el}

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[LED](classLED.html){.el} \* 

[leds](classLEDs.html#a1b4516594fe6c345ead0ebe269d15374){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a1bd8cd6dfe54db1248b5749d532e705a}

[[◆ ](#a1bd8cd6dfe54db1248b5749d532e705a)]{.permalink}LEDs() {#leds .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------ --- ----------------------- ------------
  LEDs::LEDs   (   std::vector\< int \>    *pins*,
                   int                     *numLeds* 
               )                           
  ------------ --- ----------------------- ------------
:::

::: {.memdoc}
:::
:::

[]{#a682bab337039995cc4fc2a7e753a38e5}

[[◆ ](#a682bab337039995cc4fc2a7e753a38e5)]{.permalink}\~LEDs() {#leds-1 .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- -- --- --
  LEDs::\~LEDs   (      )   
  -------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#aa964a9b80d6606286a69f5025f5f857a}

[[◆ ](#aa964a9b80d6606286a69f5025f5f857a)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------ --- -- --- --
  void LEDs::begin   (      )   
  ------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a98711a933b0dc69df40c3d9752a61334}

[[◆ ](#a98711a933b0dc69df40c3d9752a61334)]{.permalink}getState() {#getstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------- --- ------ --------- --- --
  bool LEDs::getState   (   int    *index*   )   
  --------------------- --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#adbb31af7efe7478045f4a260db116af2}

[[◆ ](#adbb31af7efe7478045f4a260db116af2)]{.permalink}resetInverted() {#resetinverted .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- ------ --------- --- --
  void LEDs::resetInverted   (   int    *index*   )   
  -------------------------- --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a8ea9ceb959da8cde5f7c80542a023ac9}

[[◆ ](#a8ea9ceb959da8cde5f7c80542a023ac9)]{.permalink}setAllintensity() {#setallintensity .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- ------ ------------- --- --
  void LEDs::setAllintensity   (   int    *intensity*   )   
  ---------------------------- --- ------ ------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#af2bb823ca5af8a88e7f98f5869b4c706}

[[◆ ](#af2bb823ca5af8a88e7f98f5869b4c706)]{.permalink}setAllLeds() {#setallleds .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------- --- ------- --------- --- --
  void LEDs::setAllLeds   (   bool    *state*   )   
  ----------------------- --- ------- --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a6a8449ad97957877f7cfc6ff9776ad21}

[[◆ ](#a6a8449ad97957877f7cfc6ff9776ad21)]{.permalink}setIntensity() {#setintensity .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ------ --------------
  void LEDs::setIntensity   (   int    *index*,
                                int    *intensity* 
                            )          
  ------------------------- --- ------ --------------
:::

::: {.memdoc}
:::
:::

[]{#a763ea6fd51a29a40ddc0c39a70a4167e}

[[◆ ](#a763ea6fd51a29a40ddc0c39a70a4167e)]{.permalink}setState() [\[1/2\]]{.overload} {#setstate-12 .memtitle}
-------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------- --- ------- ----------
  void LEDs::setState   (   int     *index*,
                            bool    *state* 
                        )           
  --------------------- --- ------- ----------
:::

::: {.memdoc}
:::
:::

[]{#a3cbae273cb30c1a09c414e2c1c5fd11d}

[[◆ ](#a3cbae273cb30c1a09c414e2c1c5fd11d)]{.permalink}setState() [\[2/2\]]{.overload} {#setstate-22 .memtitle}
-------------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------- --- ------- --------------
  void LEDs::setState   (   int     *index*,
                            bool    *state*,
                            int     *intensity* 
                        )           
  --------------------- --- ------- --------------
:::

::: {.memdoc}
:::
:::

[]{#a5d00178936fca48853813129e26c5dea}

[[◆ ](#a5d00178936fca48853813129e26c5dea)]{.permalink}startBlinking() {#startblinking .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- ---------------- -------------
  void LEDs::startBlinking   (   int              *index*,
                                 unsigned long    *interval* 
                             )                    
  -------------------------- --- ---------------- -------------
:::

::: {.memdoc}
:::
:::

[]{#a6cfb124344f67e7246c45e88da7bd47e}

[[◆ ](#a6cfb124344f67e7246c45e88da7bd47e)]{.permalink}stopAllBlinking() {#stopallblinking .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- -- --- --
  void LEDs::stopAllBlinking   (      )   
  ---------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a343cdb24ad5b0ceae3fdf3086db765c5}

[[◆ ](#a343cdb24ad5b0ceae3fdf3086db765c5)]{.permalink}stopBlinking() {#stopblinking .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ------ --------- --- --
  void LEDs::stopBlinking   (   int    *index*   )   
  ------------------------- --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#af9c6980e1497fca93a2945698156fbe6}

[[◆ ](#af9c6980e1497fca93a2945698156fbe6)]{.permalink}trigger() {#trigger .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------- --- ---------------- -----------------------
  void LEDs::trigger   (   int              *index*,
                           unsigned long    *currentTime*,
                           bool             *inverted* = `false` 
                       )                    
  -------------------- --- ---------------- -----------------------
:::

::: {.memdoc}
:::
:::

[]{#ab689142c4f9a1f6a8d1deb6e5f3e79e6}

[[◆ ](#ab689142c4f9a1f6a8d1deb6e5f3e79e6)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------- --- ---------------- --------------- --- --
  void LEDs::update   (   unsigned long    *currentTime*   )   
  ------------------- --- ---------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#aee969eddac897718c3f75c3c24e23aa6}

[[◆ ](#aee969eddac897718c3f75c3c24e23aa6)]{.permalink}updateBlinking() {#updateblinking .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  void LEDs::updateBlinking   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a1b4516594fe6c345ead0ebe269d15374}

[[◆ ](#a1b4516594fe6c345ead0ebe269d15374)]{.permalink}leds {#leds-2 .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [LED]                           |                                   |
| (classLED.html){.el}\* LEDs::leds |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a279c7fb7628edf2a73c98313607993d4}

[[◆ ](#a279c7fb7628edf2a73c98313607993d4)]{.permalink}numLeds {#numleds .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------
  int LEDs::numLeds
  -------------------
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[LEDs.h](LEDs_8h_source.html){.el}
-   src/[LEDs.cpp](LEDs_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
