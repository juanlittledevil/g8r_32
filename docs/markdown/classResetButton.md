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
members](classResetButton-members.html)
:::

::: {.headertitle}
::: {.title}
ResetButton Class Reference
:::
:::
:::

::: {.contents}
`#include <ResetButton.h>`

::: {.dynheader}
Collaboration diagram for ResetButton:
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

[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el}
{
[OPEN](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef){.el}
,
[PRESSED](classResetButton.html#a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e){.el}
}

 

[]{#pub-methods} Public Member Functions {#public-member-functions .groupheader}
----------------------------------------

 

[ResetButton](classResetButton.html#a802e419c619c9b60f2adf223b821a00f){.el}
(int
[pin](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59){.el})

 

bool 

[begin](classResetButton.html#aa851afdc17e33c8cd16a5b326058d599){.el} ()

 

[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el} 

[readButton](classResetButton.html#aee7d2cd933ae28ffa43187582c979a43){.el}
()

 

bool 

[isButtonLongPressed](classResetButton.html#a9965e4c38cf275972b825808414188eb){.el}
()

 

bool 

[isButtonDoublePressed](classResetButton.html#addc8f5996ea2d13c1c3f2bb858ced414){.el}
()

 

bool 

[isButtonSinglePressed](classResetButton.html#a48dd4aadb9e7e86022181bc46db0a6a3){.el}
()

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

int 

[pin](classResetButton.html#a7291efc6e33f2939aac77d4e474fbc59){.el}

 

[InputPin](classInputPin.html){.el} 

[resetButton](classResetButton.html#a4aaefe379da6d90cd5499b564a1ea94c){.el}

 

[ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el} 

[buttonState](classResetButton.html#a1e30ec8fd5c460df296362a5bb08b1e3){.el}

 

unsigned long 

[lastButtonPress](classResetButton.html#a7bcd854358d590978530fd978aa4b629){.el}

 

int 

[pressCount](classResetButton.html#a50a64667edd243f01e6b9ebc1fc5bde8){.el}

 

[]{#pri-static-attribs} Static Private Attributes {#static-private-attributes .groupheader}
-------------------------------------------------

static const unsigned long 

[DOUBLE\_PRESS\_INTERVAL](classResetButton.html#ae1ab0b150ca6a11414c1b947da2e9987){.el}
= 500

 

static const unsigned long 

[LONG\_PRESS\_INTERVAL](classResetButton.html#a49dd99765dba753371b0b5a475802580){.el}
= 1000

 

Member Enumeration Documentation {#member-enumeration-documentation .groupheader}
--------------------------------

[]{#a57b758360f53e09cd135b0fbc18edabd}

[[◆ ](#a57b758360f53e09cd135b0fbc18edabd)]{.permalink}ButtonState {#buttonstate .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -----------------------------------------------------------------------------------------------
  enum [ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el}
  -----------------------------------------------------------------------------------------------
:::

::: {.memdoc}
Enumerator
:::
:::

[]{#a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef}OPEN 

[]{#a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e}PRESSED 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#a802e419c619c9b60f2adf223b821a00f}

[[◆ ](#a802e419c619c9b60f2adf223b821a00f)]{.permalink}ResetButton() {#resetbutton .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- ------ ------- --- --
  ResetButton::ResetButton   (   int    *pin*   )   
  -------------------------- --- ------ ------- --- --
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#aa851afdc17e33c8cd16a5b326058d599}

[[◆ ](#aa851afdc17e33c8cd16a5b326058d599)]{.permalink}begin() {#begin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------- --- -- --- --
  bool ResetButton::begin   (      )   
  ------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#addc8f5996ea2d13c1c3f2bb858ced414}

[[◆ ](#addc8f5996ea2d13c1c3f2bb858ced414)]{.permalink}isButtonDoublePressed() {#isbuttondoublepressed .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------- --- -- --- --
  bool ResetButton::isButtonDoublePressed   (      )   
  ----------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a9965e4c38cf275972b825808414188eb}

[[◆ ](#a9965e4c38cf275972b825808414188eb)]{.permalink}isButtonLongPressed() {#isbuttonlongpressed .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------- --- -- --- --
  bool ResetButton::isButtonLongPressed   (      )   
  --------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a48dd4aadb9e7e86022181bc46db0a6a3}

[[◆ ](#a48dd4aadb9e7e86022181bc46db0a6a3)]{.permalink}isButtonSinglePressed() {#isbuttonsinglepressed .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------- --- -- --- --
  bool ResetButton::isButtonSinglePressed   (      )   
  ----------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#aee7d2cd933ae28ffa43187582c979a43}

[[◆ ](#aee7d2cd933ae28ffa43187582c979a43)]{.permalink}readButton() {#readbutton .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------------------------------ --- -- --- --
  [ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.el} ResetButton::readButton   (      )   
  ------------------------------------------------------------------------------------------------------------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#a1e30ec8fd5c460df296362a5bb08b1e3}

[[◆ ](#a1e30ec8fd5c460df296362a5bb08b1e3)]{.permalink}buttonState {#buttonstate-1 .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [                               |                                   |
| ButtonState](classResetButton.htm |                                   |
| l#a57b758360f53e09cd135b0fbc18eda |                                   |
| bd){.el} ResetButton::buttonState |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae1ab0b150ca6a11414c1b947da2e9987}

[[◆ ](#ae1ab0b150ca6a11414c1b947da2e9987)]{.permalink}DOUBLE\_PRESS\_INTERVAL {#double_press_interval .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const unsigned long ResetButt   |                                   |
| on::DOUBLE\_PRESS\_INTERVAL = 500 |                                   |
|   ------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a7bcd854358d590978530fd978aa4b629}

[[◆ ](#a7bcd854358d590978530fd978aa4b629)]{.permalink}lastButtonPress {#lastbuttonpress .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------                     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsigned                        |                                   |
| long ResetButton::lastButtonPress |                                   |
|   -----------                     |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a49dd99765dba753371b0b5a475802580}

[[◆ ](#a49dd99765dba753371b0b5a475802580)]{.permalink}LONG\_PRESS\_INTERVAL {#long_press_interval .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const unsigned long ResetBut    |                                   |
| ton::LONG\_PRESS\_INTERVAL = 1000 |                                   |
|   ------------------------------  |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a7291efc6e33f2939aac77d4e474fbc59}

[[◆ ](#a7291efc6e33f2939aac77d4e474fbc59)]{.permalink}pin {#pin .memtitle}
---------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[private]{.mlabel}]{.mlabels}    |
|   int ResetButton::pin            |                                   |
|   ----------------------          |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a50a64667edd243f01e6b9ebc1fc5bde8}

[[◆ ](#a50a64667edd243f01e6b9ebc1fc5bde8)]{.permalink}pressCount {#presscount .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
|   int ResetButton::pressCount     |                                   |
|   -----------------------------   |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4aaefe379da6d90cd5499b564a1ea94c}

[[◆ ](#a4aaefe379da6d90cd5499b564a1ea94c)]{.permalink}resetButton {#resetbutton-1 .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classInputPin.ht     |                                   |
| ml){.el} ResetButton::resetButton |                                   |
|   -----------------------------   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[ResetButton.h](ResetButton_8h_source.html){.el}
-   src/[ResetButton.cpp](ResetButton_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
