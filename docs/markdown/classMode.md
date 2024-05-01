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
members](classMode-members.html)
:::

::: {.headertitle}
::: {.title}
Mode Class Reference[[abstract]{.mlabel}]{.mlabels}
:::
:::
:::

::: {.contents}
`#include <Mode.h>`

::: {.dynheader}
Inheritance diagram for Mode:
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
Collaboration diagram for Mode:
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

virtual void 

[handleSinglePress](classMode.html#a278db06e9d46fe80d61d577f9f636fa2){.el}
()=0

 

virtual void 

[handleDoublePress](classMode.html#a2f81571d058f2b1ed1592d2041799202){.el}
()=0

 

virtual void 

[handleLongPress](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.el}
()=0

 

virtual void 

[handlePressReleased](classMode.html#ae6c70842a6e744185300d3b44c06bcaf){.el}
()=0

 

virtual void 

[handleSelectionStates](classMode.html#ae272309e82f82d2967c16c80712fed28){.el}
()=0

 

virtual void 

[handleResetSinglePress](classMode.html#a81ad1f477340a92ebf3e5a3ed8427ca1){.el}
()=0

 

virtual void 

[handleResetDoublePress](classMode.html#aaa9b6958129f7d8e8bed339e790131e0){.el}
()=0

 

virtual void 

[handleResetLongPress](classMode.html#ac153613d96bea9fba3e9775e2861ef0e){.el}
()=0

 

virtual void 

[handleResetPressReleased](classMode.html#a2b12c8d0ae0d884c8168218c4c167d92){.el}
()=0

 

virtual void 

[setup](classMode.html#acded67ff8ef9572e44948971385701ab){.el} ()=0

 

virtual void 

[teardown](classMode.html#a126f69890bd05de9745561a7f592aabd){.el} ()=0

 

virtual void 

[update](classMode.html#aa2c21d9299b9df6912689e4ada8d3102){.el} ()=0

 

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a2f81571d058f2b1ed1592d2041799202}

[[◆ ](#a2f81571d058f2b1ed1592d2041799202)]{.permalink}handleDoublePress() {#handledoublepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode               |                                   |
| ::handleDoublePress   (      )    |                                   |
|   -------------------             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a4a844846f0e3acbf9476c959c4a9328c){.el},
[Mode1](classMode1.html#aece3b8dfd8fbe3a049dd50cac7827163){.el}, and
[Mode0](classMode0.html#ab2e88db8ebc6a5c3bfe60d63715870da){.el}.
:::
:::

[]{#a09a52e2df1ef9fa944875cba99fc57fd}

[[◆ ](#a09a52e2df1ef9fa944875cba99fc57fd)]{.permalink}handleLongPress() {#handlelongpress .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mo                 |                                   |
| de::handleLongPress   (      )    |                                   |
|   -----------------               |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a0a566142bbc28d36a18168256e01e5e2){.el},
[Mode1](classMode1.html#a3efa76e8f49820d5506a2fddba895d1a){.el}, and
[Mode0](classMode0.html#aa5837e66a7d361a00f8799766ee8441e){.el}.
:::
:::

[]{#ae6c70842a6e744185300d3b44c06bcaf}

[[◆ ](#ae6c70842a6e744185300d3b44c06bcaf)]{.permalink}handlePressReleased() {#handlepressreleased .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------           | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::             |                                   |
| handlePressReleased   (      )    |                                   |
|   ---------------------           |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#aa06056369a76dc1203d4f228a70ad384){.el},
[Mode1](classMode1.html#a27a79d962981799ecb081f6b2116bc4c){.el}, and
[Mode0](classMode0.html#a843a9f1c23e45dc2e6b3023d578402e6){.el}.
:::
:::

[]{#aaa9b6958129f7d8e8bed339e790131e0}

[[◆ ](#aaa9b6958129f7d8e8bed339e790131e0)]{.permalink}handleResetDoublePress() {#handleresetdoublepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::han          |                                   |
| dleResetDoublePress   (      )    |                                   |
|   ------------------------        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a571ea6b512d8fa4bc26d43849561049f){.el},
[Mode1](classMode1.html#a3faff5eb1aea3412f05145d5894778be){.el}, and
[Mode0](classMode0.html#a5edace264c12da595e48be504f559d97){.el}.
:::
:::

[]{#ac153613d96bea9fba3e9775e2861ef0e}

[[◆ ](#ac153613d96bea9fba3e9775e2861ef0e)]{.permalink}handleResetLongPress() {#handleresetlongpress .memtitle}
----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::h            |                                   |
| andleResetLongPress   (      )    |                                   |
|   ----------------------          |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a39215df4cb9d1e59c04e89ba753978b1){.el},
[Mode1](classMode1.html#ab4c68c413efac263349524806bdb6262){.el}, and
[Mode0](classMode0.html#a3f1e02184589f15ce99156b58de814ce){.el}.
:::
:::

[]{#a2b12c8d0ae0d884c8168218c4c167d92}

[[◆ ](#a2b12c8d0ae0d884c8168218c4c167d92)]{.permalink}handleResetPressReleased() {#handleresetpressreleased .memtitle}
--------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::handl        |                                   |
| eResetPressReleased   (      )    |                                   |
|   --------------------------      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#aa25c57375888b02cb609edc73585e376){.el},
[Mode1](classMode1.html#aaf69b8382102d521c89786ab12513748){.el}, and
[Mode0](classMode0.html#aa3ef073cd777560821c68b82405c9696){.el}.
:::
:::

[]{#a81ad1f477340a92ebf3e5a3ed8427ca1}

[[◆ ](#a81ad1f477340a92ebf3e5a3ed8427ca1)]{.permalink}handleResetSinglePress() {#handleresetsinglepress .memtitle}
------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::han          |                                   |
| dleResetSinglePress   (      )    |                                   |
|   ------------------------        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a15de3fce5b6874e783f48bb30ac3c8a8){.el},
[Mode1](classMode1.html#a130b9bda7ac6c03348c1e0f652f4c40f){.el}, and
[Mode0](classMode0.html#ab49600e807fdc67b715aa5844e0008a7){.el}.
:::
:::

[]{#ae272309e82f82d2967c16c80712fed28}

[[◆ ](#ae272309e82f82d2967c16c80712fed28)]{.permalink}handleSelectionStates() {#handleselectionstates .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------         | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode::ha           |                                   |
| ndleSelectionStates   (      )    |                                   |
|   -----------------------         |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a00e770966c8f1d3a4c9214d38a127e26){.el},
[Mode1](classMode1.html#ad456ee0f626d63c9f96db8a8fbbedae5){.el}, and
[Mode0](classMode0.html#a1d2a907c0057865467210bf45f45e9c4){.el}.
:::
:::

[]{#a278db06e9d46fe80d61d577f9f636fa2}

[[◆ ](#a278db06e9d46fe80d61d577f9f636fa2)]{.permalink}handleSinglePress() {#handlesinglepress .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------             | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual void Mode               |                                   |
| ::handleSinglePress   (      )    |                                   |
|   -------------------             |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#ad0c3080fefd693164c4091435e3886d3){.el},
[Mode1](classMode1.html#a01c39504689522af8e908f3a9f629f3d){.el}, and
[Mode0](classMode0.html#afc4ad8cc4c9c59838c774c3c72a05f33){.el}.
:::
:::

[]{#acded67ff8ef9572e44948971385701ab}

[[◆ ](#acded67ff8ef9572e44948971385701ab)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtu                           |                                   |
| al void Mode::setup   (      )    |                                   |
|   -------                         |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#a0cf31cb7e85618022b870d485679c2b9){.el},
[Mode1](classMode1.html#aa3c75dd038802a4e3ab7381a82cfa0bd){.el}, and
[Mode0](classMode0.html#a3ddf8efd26e32d22530a1c37630bb341){.el}.
:::
:::

[]{#a126f69890bd05de9745561a7f592aabd}

[[◆ ](#a126f69890bd05de9745561a7f592aabd)]{.permalink}teardown() {#teardown .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtual                         |                                   |
| void Mode::teardown   (      )    |                                   |
|   ----------                      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#ad3bfbb002457e274fd65abd7673e9782){.el},
[Mode1](classMode1.html#ac71878a012a9adb6adcba2c8338be06e){.el}, and
[Mode0](classMode0.html#a898c2e53000955e37ef93983de7c7a54){.el}.
:::
:::

[]{#aa2c21d9299b9df6912689e4ada8d3102}

[[◆ ](#aa2c21d9299b9df6912689e4ada8d3102)]{.permalink}update() {#update .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------                        | [[pure                            |
| ------------------- --- -- --- -- | virtual]{.mlabel}]{.mlabels}      |
|   virtua                          |                                   |
| l void Mode::update   (      )    |                                   |
|   --------                        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
Implemented in
[Mode2](classMode2.html#ad053ed624ffa14272894e0ca75b5c2b1){.el},
[Mode1](classMode1.html#ab4ed6fb24ddf6f713cbde450496cd16d){.el}, and
[Mode0](classMode0.html#a0e20f81420b0dcd427f5cd9789cfdd4a){.el}.
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following file:

-   include/[Mode.h](Mode_8h_source.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
