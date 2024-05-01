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
of all members](classGates-members.html)
:::

::: {.headertitle}
::: {.title}
Gates Class Reference
:::
:::
:::

::: {.contents}
`#include <Gates.h>`

::: {.dynheader}
Collaboration diagram for Gates:
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

 

[Gates](classGates.html#af53ba952e2d91b90884fb38fe1f0fa0d){.el}
(std::vector\< int \>
[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.el}, int
[numGates](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2){.el})

 

 

[\~Gates](classGates.html#a7bc98979e801ceb6e28472af3eb0a78f){.el} ()

 

void 

[begin](classGates.html#a5a46476bf82868dcfcabb8bb93b14e84){.el} ()

 

void 

[setState](classGates.html#ac2c1de1f4bd52fbedb24f9aae00af9d9){.el} (int
gateIndex, bool state)

 

bool 

[getState](classGates.html#a83389338058653f2defddf694a927d56){.el} (int
gateIndex)

 

void 

[turnOnGate](classGates.html#a4c955fec75ce64b0eb76b2fcdca2b7ce){.el}
(int index)

 

void 

[turnOffGate](classGates.html#a7ab4510b88636eb970d61282353c1eb9){.el}
(int index)

 

void 

[setALLGates](classGates.html#a02f76825e2dccc537b4e495b88bbedc4){.el}
(bool state)

 

void 

[update](classGates.html#a4397cba12ab477b8759ccf846b5a909d){.el}
(unsigned long currentTime)

 

void 

[trigger](classGates.html#a6ef8dcff0ca40853f6ec07d20afa1b9b){.el} (int
index, unsigned long currentTime)

 

void 

[setDivision](classGates.html#ad2bc306e44f4f9dc025c57cd37e7c97f){.el}
(int index, int division)

 

int 

[getDivision](classGates.html#a06f6153e686887048497f965599e6ba4){.el}
(int index)

 

void 

[setSelectedGate](classGates.html#a4c5925d6eaea3c640d7e23f2219d6991){.el}
(int gate)

 

int 

[getSelectedGate](classGates.html#a18d0602275e88db59021394b4a377151){.el}
()

 

void 

[setGateOnDuration](classGates.html#a2450c2bb48ab40c0c81b6a717d2e30ca){.el}
(int index, int duration)

 

[]{#pub-attribs} Public Attributes {#public-attributes .groupheader}
----------------------------------

int 

[numGates](classGates.html#a8aa11d0f9ea6f809549664f8fd4f7cc2){.el}

 

int \* 

[gateCounters](classGates.html#a283f2d50700fad8bdca29e6227e65045){.el}

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[Gate](classGate.html){.el} \* 

[gateArray](classGates.html#a4864124d3f822dbed79aa467f454fd1a){.el}

 

int 

[selectedGate](classGates.html#aac445c16f01968f9c919815f24f3a0a7){.el}

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#af53ba952e2d91b90884fb38fe1f0fa0d}

[[◆ ](#af53ba952e2d91b90884fb38fe1f0fa0d)]{.permalink}Gates() {#gates .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------- --- ----------------------- -------------
  Gates::Gates   (   std::vector\< int \>    *pins*,
                     int                     *numGates* 
                 )                           
  -------------- --- ----------------------- -------------
:::

::: {.memdoc}
:::
:::

[]{#a7bc98979e801ceb6e28472af3eb0a78f}

[[◆ ](#a7bc98979e801ceb6e28472af3eb0a78f)]{.permalink}\~Gates() {#gates-1 .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------- --- -- --- --
  Gates::\~Gates   (      )   
  ---------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a5a46476bf82868dcfcabb8bb93b14e84}

[[◆ ](#a5a46476bf82868dcfcabb8bb93b14e84)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------- --- -- --- --
  void Gates::begin   (      )   
  ------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a06f6153e686887048497f965599e6ba4}

[[◆ ](#a06f6153e686887048497f965599e6ba4)]{.permalink}getDivision() {#getdivision .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- ------ --------- --- --
  int Gates::getDivision   (   int    *index*   )   
  ------------------------ --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a18d0602275e88db59021394b4a377151}

[[◆ ](#a18d0602275e88db59021394b4a377151)]{.permalink}getSelectedGate() {#getselectedgate .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------- --- -- --- --
  int Gates::getSelectedGate   (      )   
  ---------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a83389338058653f2defddf694a927d56}

[[◆ ](#a83389338058653f2defddf694a927d56)]{.permalink}getState() {#getstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------- --- ------ ------------- --- --
  bool Gates::getState   (   int    *gateIndex*   )   
  ---------------------- --- ------ ------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a02f76825e2dccc537b4e495b88bbedc4}

[[◆ ](#a02f76825e2dccc537b4e495b88bbedc4)]{.permalink}setALLGates() {#setallgates .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ------- --------- --- --
  void Gates::setALLGates   (   bool    *state*   )   
  ------------------------- --- ------- --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#ad2bc306e44f4f9dc025c57cd37e7c97f}

[[◆ ](#ad2bc306e44f4f9dc025c57cd37e7c97f)]{.permalink}setDivision() {#setdivision .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ------ -------------
  void Gates::setDivision   (   int    *index*,
                                int    *division* 
                            )          
  ------------------------- --- ------ -------------
:::

::: {.memdoc}
:::
:::

[]{#a2450c2bb48ab40c0c81b6a717d2e30ca}

[[◆ ](#a2450c2bb48ab40c0c81b6a717d2e30ca)]{.permalink}setGateOnDuration() {#setgateonduration .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------- --- ------ -------------
  void Gates::setGateOnDuration   (   int    *index*,
                                      int    *duration* 
                                  )          
  ------------------------------- --- ------ -------------
:::

::: {.memdoc}
:::
:::

[]{#a4c5925d6eaea3c640d7e23f2219d6991}

[[◆ ](#a4c5925d6eaea3c640d7e23f2219d6991)]{.permalink}setSelectedGate() {#setselectedgate .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------- --- ------ -------- --- --
  void Gates::setSelectedGate   (   int    *gate*   )   
  ----------------------------- --- ------ -------- --- --
:::

::: {.memdoc}
:::
:::

[]{#ac2c1de1f4bd52fbedb24f9aae00af9d9}

[[◆ ](#ac2c1de1f4bd52fbedb24f9aae00af9d9)]{.permalink}setState() {#setstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------- --- ------- --------------
  void Gates::setState   (   int     *gateIndex*,
                             bool    *state* 
                         )           
  ---------------------- --- ------- --------------
:::

::: {.memdoc}
:::
:::

[]{#a6ef8dcff0ca40853f6ec07d20afa1b9b}

[[◆ ](#a6ef8dcff0ca40853f6ec07d20afa1b9b)]{.permalink}trigger() {#trigger .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------- --- ---------------- ----------------
  void Gates::trigger   (   int              *index*,
                            unsigned long    *currentTime* 
                        )                    
  --------------------- --- ---------------- ----------------
:::

::: {.memdoc}
:::
:::

[]{#a7ab4510b88636eb970d61282353c1eb9}

[[◆ ](#a7ab4510b88636eb970d61282353c1eb9)]{.permalink}turnOffGate() {#turnoffgate .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- ------ --------- --- --
  void Gates::turnOffGate   (   int    *index*   )   
  ------------------------- --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a4c955fec75ce64b0eb76b2fcdca2b7ce}

[[◆ ](#a4c955fec75ce64b0eb76b2fcdca2b7ce)]{.permalink}turnOnGate() {#turnongate .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------ --- ------ --------- --- --
  void Gates::turnOnGate   (   int    *index*   )   
  ------------------------ --- ------ --------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a4397cba12ab477b8759ccf846b5a909d}

[[◆ ](#a4397cba12ab477b8759ccf846b5a909d)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------- --- ---------------- --------------- --- --
  void Gates::update   (   unsigned long    *currentTime*   )   
  -------------------- --- ---------------- --------------- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a4864124d3f822dbed79aa467f454fd1a}

[[◆ ](#a4864124d3f822dbed79aa467f454fd1a)]{.permalink}gateArray {#gatearray .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gate](classG                   |                                   |
| ate.html){.el}\* Gates::gateArray |                                   |
|   ---------------                 |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a283f2d50700fad8bdca29e6227e65045}

[[◆ ](#a283f2d50700fad8bdca29e6227e65045)]{.permalink}gateCounters {#gatecounters .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------
  int\* Gates::gateCounters
  ---------------------------
:::

::: {.memdoc}
:::
:::

[]{#a8aa11d0f9ea6f809549664f8fd4f7cc2}

[[◆ ](#a8aa11d0f9ea6f809549664f8fd4f7cc2)]{.permalink}numGates {#numgates .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------
  int Gates::numGates
  ---------------------
:::

::: {.memdoc}
:::
:::

[]{#aac445c16f01968f9c919815f24f3a0a7}

[[◆ ](#aac445c16f01968f9c919815f24f3a0a7)]{.permalink}selectedGate {#selectedgate .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------------       | [[private]{.mlabel}]{.mlabels}    |
|   int Gates::selectedGate         |                                   |
|   -------------------------       |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[Gates.h](Gates_8h_source.html){.el}
-   src/[Gates.cpp](Gates_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
