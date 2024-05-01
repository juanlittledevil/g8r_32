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

::: {#nav-path .navpath}
-   [src](dir_68267d1309a1af8e8297ef4c3efbcdba.html){.el}
:::
:::

::: {.header}
::: {.summary}
[Macros](#define-members) \| [Functions](#func-members) \|
[Variables](#var-members)
:::

::: {.headertitle}
::: {.title}
main.cpp File Reference
:::
:::
:::

::: {.contents}
::: {.textblock}
`#include <Arduino.h>`\
`#include <MIDI.h>`\
`#include "Gates.h"`\
`#include "ModeSelector.h"`\
`#include "LEDs.h"`\
`#include "Debug.h"`\
`#include "Encoder.h"`\
`#include "MIDIHandler.h"`\
`#include "EurorackClock.h"`\
`#include "Constants.h"`\
`#include "Mode0.h"`\
`#include "Mode1.h"`\
`#include "Mode2.h"`\
`#include "LEDController.h"`\
`#include "ResetButton.h"`\
`#include "InputHandler.h"`\
`#include <vector>`\
:::

::: {.textblock}
::: {.dynheader}
Include dependency graph for main.cpp:
:::

::: {.dyncontent}
::: {.center}
::: {.zoom}
**This browser is not able to show SVG: try Firefox, Chrome, Safari, or
Opera instead.**
:::
:::
:::
:::

[]{#define-members} Macros {#macros .groupheader}
--------------------------
:::

\#define 

[DEBUG\_PRINT](main_8cpp.html#a24fac9ff5bcc1384e1f99ec350941c9a){.el}(message)   [Debug::print](classDebug.html#aec89c31d051cd6de448ccf9a8f29a83d){.el}(\_\_FILE\_\_,
\_\_LINE\_\_, \_\_func\_\_, String(message))

 

\#define 

[RX\_PIN](main_8cpp.html#aa7089c01538b339ae745173c117f95b9){.el}   PA3

 

\#define 

[TX\_PIN](main_8cpp.html#a3bb17f5daa2b1eaef58c8aa2d989e27e){.el}   PA2

 

\#define 

[ENCODER\_PINA](main_8cpp.html#abe826c409a8a833bfa7532171db34cf0){.el}   PB13

 

\#define 

[ENCODER\_PINB](main_8cpp.html#abb0ab32273368ab840bf7c43f5309ca5){.el}   PB14

 

\#define 

[ENCODER\_BUTTON](main_8cpp.html#a13d83485198c96bfc9ab7e0bd91bbc3a){.el}   PB12

 

\#define 

[CLOCK\_PIN](main_8cpp.html#a23b348310475af5d6544794f1a167ee8){.el}   PB10

 

\#define 

[RESET\_PIN](main_8cpp.html#a08bca59db4b190eaaea4d47b7562869c){.el}   PB11

 

\#define 

[RESET\_BUTTON](main_8cpp.html#ae80f4e50d6756064b8880735a5644881){.el}   PB15

 

\#define 

[TEMPO\_LED](main_8cpp.html#a47ca58cb74e74a56ae5eaf454df47409){.el}   PA8

 

\#define 

[CV\_A\_PIN](main_8cpp.html#a1f63b7e11fd7cdaa5cb5104155d5ddad){.el}   PA4

 

\#define 

[CV\_B\_PIN](main_8cpp.html#aa3104e4ee339881c3a36c9ac65b819a4){.el}   PA5

 

[]{#func-members} Functions {#functions .groupheader}
---------------------------

void 

[setup](main_8cpp.html#a4fc01d736fe50cf5b977f755b675f11d){.el} ()

 

void 

[loop](main_8cpp.html#afe461d27b9c48d5921c00d521181f12f){.el} ()

 

[]{#var-members} Variables {#variables .groupheader}
--------------------------

std::vector\< int \> 

[pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.el} = {PA15,
PB3, PB4, PB5, PB6, PB7, PB8, PB9}

 

const int 

[numPins](main_8cpp.html#a7e0ec12422847c7eae2e7fe6c5972a48){.el} =
pins.size()

 

[Gates](classGates.html){.el} 

[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el} =
[Gates](classGates.html){.el}([pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.el},
[numPins](main_8cpp.html#a7e0ec12422847c7eae2e7fe6c5972a48){.el})

 

std::vector\< int \> 

[ledPins](main_8cpp.html#ab274bd88fcca137c72235967915b9f58){.el} =
{PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0}

 

int 

[numLedPins](main_8cpp.html#a42946fc499bc5d1b6da4a7d38a91b347){.el} =
ledPins.size()

 

[LEDs](classLEDs.html){.el} 

[leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el} =
[LEDs](classLEDs.html){.el}([ledPins](main_8cpp.html#ab274bd88fcca137c72235967915b9f58){.el},
[numLedPins](main_8cpp.html#a42946fc499bc5d1b6da4a7d38a91b347){.el})

 

int 

[encCLKPin](main_8cpp.html#a163c71453f25c788b655dd83689eaea0){.el} =
[ENCODER\_PINA](main_8cpp.html#abe826c409a8a833bfa7532171db34cf0){.el}

 

int 

[encDTPin](main_8cpp.html#a808ab567ec354ba030c82614669258bb){.el} =
[ENCODER\_PINB](main_8cpp.html#abb0ab32273368ab840bf7c43f5309ca5){.el}

 

int 

[encButtonPin](main_8cpp.html#a5238625c5c9a4b1ed2f485c3696bef20){.el} =
[ENCODER\_BUTTON](main_8cpp.html#a13d83485198c96bfc9ab7e0bd91bbc3a){.el}

 

bool 

[inModeSelection](main_8cpp.html#a530c93b1821f0134b60d27d445a4a4e3){.el}
= false

 

int 

[intensity](main_8cpp.html#a299ec0c42ccc5a2d79d1739428ac3210){.el} = 255

 

bool 

[isInSelection](main_8cpp.html#ae8ce8df8470642a28044a27add2964e4){.el} =
false

 

unsigned long 

[lastFlashTime](main_8cpp.html#a6a23ed29bcba26182457398cf3ba0dc4){.el} =
0

 

unsigned char 

[internalPPQN](main_8cpp.html#adf636984b70d690edd0c4a32836392e0){.el} =
24

 

std::vector\< int \> 

[musicalIntervals](main_8cpp.html#a385d88ba7be4d1867aa11aefaba64f1a){.el}
= {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288,
384, 576, 768, 1152, 1536}

 

const int 

[musicalIntervalsSize](main_8cpp.html#a4b2982d5837258bd50d39acde6f57b80){.el}
= musicalIntervals.size()

 

int 

[total\_pages](main_8cpp.html#a3359c659dd3104507b620365d1b1d715){.el} =
16 / leds.numLeds

 

int 

[min\_intensity](main_8cpp.html#ae26c09cc76954053454ea55a4147b005){.el}
= 64

 

int 

[intensity\_step](main_8cpp.html#a95711a53744764804ef9b98c59664764){.el}
= (255 -
[min\_intensity](main_8cpp.html#ae26c09cc76954053454ea55a4147b005){.el})
/ ([total\_pages](main_8cpp.html#a3359c659dd3104507b620365d1b1d715){.el}
- 1)

 

[Encoder](classEncoder.html){.el} 

[encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el} =
[Encoder](classEncoder.html){.el}([encCLKPin](main_8cpp.html#a163c71453f25c788b655dd83689eaea0){.el},
[encDTPin](main_8cpp.html#a808ab567ec354ba030c82614669258bb){.el},
[encButtonPin](main_8cpp.html#a5238625c5c9a4b1ed2f485c3696bef20){.el})

 

[ResetButton](classResetButton.html){.el} 

[resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el} =
[ResetButton](classResetButton.html){.el}([RESET\_BUTTON](main_8cpp.html#ae80f4e50d6756064b8880735a5644881){.el})

 

[LEDController](classLEDController.html){.el} 

[ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}
([leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})

 

[EurorackClock](classEurorackClock.html){.el} 

[clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el}
([CLOCK\_PIN](main_8cpp.html#a23b348310475af5d6544794f1a167ee8){.el},
[RESET\_PIN](main_8cpp.html#a08bca59db4b190eaaea4d47b7562869c){.el},
[TEMPO\_LED](main_8cpp.html#a47ca58cb74e74a56ae5eaf454df47409){.el},
[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el},
[leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})

 

[MIDIHandler](classMIDIHandler.html){.el} 

[midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}
(Serial2,
[clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el},
[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el},
[leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})

 

[InputHandler](classInputHandler.html){.el} 

[inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el} =
[InputHandler](classInputHandler.html){.el}([CV\_A\_PIN](main_8cpp.html#a1f63b7e11fd7cdaa5cb5104155d5ddad){.el},
[CV\_B\_PIN](main_8cpp.html#aa3104e4ee339881c3a36c9ac65b819a4){.el})

 

[ModeSelector](classModeSelector.html){.el} & 

[modeSelector](main_8cpp.html#a42f72ce52094b0a028afddf862ddaa4d){.el} =
[ModeSelector::getInstance](classModeSelector.html#a2312f6a56156ab4557baebe6f2d050ea){.el}()

 

[Mode](classMode.html){.el} \* 

[currentMode](main_8cpp.html#a7a725ed0b89db4bf8461039a479bc143){.el} =
nullptr

 

[Mode0](classMode0.html){.el} 

[mode0](main_8cpp.html#ab97762dda44bd590fbe8c97580106a9e){.el}
([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el},
[inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el},
[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el},
[ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el},
[midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el},
[resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el},
[clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el})

 

[Mode1](classMode1.html){.el} 

[mode1](main_8cpp.html#ac453df32cb30f2f9509c37f37eb30b77){.el}
([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el},
[inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el},
[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el},
[ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el},
[midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el},
[resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el})

 

[Mode2](classMode2.html){.el} 

[mode2](main_8cpp.html#aca8126f10bd0d0aac519977996b805f9){.el}
([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el},
[inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el},
[gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el},
[ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el},
[midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el},
[resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el})

 

Macro Definition Documentation {#macro-definition-documentation .groupheader}
------------------------------

[]{#a23b348310475af5d6544794f1a167ee8}

[[◆ ](#a23b348310475af5d6544794f1a167ee8)]{.permalink}CLOCK\_PIN {#clock_pin .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------
  \#define CLOCK\_PIN   PB10
  ----------------------------
:::

::: {.memdoc}
:::
:::

[]{#a1f63b7e11fd7cdaa5cb5104155d5ddad}

[[◆ ](#a1f63b7e11fd7cdaa5cb5104155d5ddad)]{.permalink}CV\_A\_PIN {#cv_a_pin .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------
  \#define CV\_A\_PIN   PA4
  ---------------------------
:::

::: {.memdoc}
:::
:::

[]{#aa3104e4ee339881c3a36c9ac65b819a4}

[[◆ ](#aa3104e4ee339881c3a36c9ac65b819a4)]{.permalink}CV\_B\_PIN {#cv_b_pin .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------
  \#define CV\_B\_PIN   PA5
  ---------------------------
:::

::: {.memdoc}
:::
:::

[]{#a24fac9ff5bcc1384e1f99ec350941c9a}

[[◆ ](#a24fac9ff5bcc1384e1f99ec350941c9a)]{.permalink}DEBUG\_PRINT {#debug_print .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------- --- --- --------- --- --------------------------------------------------------------------------------------------------------------------------------------
  \#define DEBUG\_PRINT   (       message   )      [Debug::print](classDebug.html#aec89c31d051cd6de448ccf9a8f29a83d){.el}(\_\_FILE\_\_, \_\_LINE\_\_, \_\_func\_\_, String(message))
  ----------------------- --- --- --------- --- --------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a13d83485198c96bfc9ab7e0bd91bbc3a}

[[◆ ](#a13d83485198c96bfc9ab7e0bd91bbc3a)]{.permalink}ENCODER\_BUTTON {#encoder_button .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------
  \#define ENCODER\_BUTTON   PB12
  ---------------------------------
:::

::: {.memdoc}
:::
:::

[]{#abe826c409a8a833bfa7532171db34cf0}

[[◆ ](#abe826c409a8a833bfa7532171db34cf0)]{.permalink}ENCODER\_PINA {#encoder_pina .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------
  \#define ENCODER\_PINA   PB13
  -------------------------------
:::

::: {.memdoc}
:::
:::

[]{#abb0ab32273368ab840bf7c43f5309ca5}

[[◆ ](#abb0ab32273368ab840bf7c43f5309ca5)]{.permalink}ENCODER\_PINB {#encoder_pinb .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------
  \#define ENCODER\_PINB   PB14
  -------------------------------
:::

::: {.memdoc}
:::
:::

[]{#ae80f4e50d6756064b8880735a5644881}

[[◆ ](#ae80f4e50d6756064b8880735a5644881)]{.permalink}RESET\_BUTTON {#reset_button .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------
  \#define RESET\_BUTTON   PB15
  -------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a08bca59db4b190eaaea4d47b7562869c}

[[◆ ](#a08bca59db4b190eaaea4d47b7562869c)]{.permalink}RESET\_PIN {#reset_pin .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------
  \#define RESET\_PIN   PB11
  ----------------------------
:::

::: {.memdoc}
:::
:::

[]{#aa7089c01538b339ae745173c117f95b9}

[[◆ ](#aa7089c01538b339ae745173c117f95b9)]{.permalink}RX\_PIN {#rx_pin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------
  \#define RX\_PIN   PA3
  ------------------------
:::

::: {.memdoc}
:::
:::

[]{#a47ca58cb74e74a56ae5eaf454df47409}

[[◆ ](#a47ca58cb74e74a56ae5eaf454df47409)]{.permalink}TEMPO\_LED {#tempo_led .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------
  \#define TEMPO\_LED   PA8
  ---------------------------
:::

::: {.memdoc}
:::
:::

[]{#a3bb17f5daa2b1eaef58c8aa2d989e27e}

[[◆ ](#a3bb17f5daa2b1eaef58c8aa2d989e27e)]{.permalink}TX\_PIN {#tx_pin .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------
  \#define TX\_PIN   PA2
  ------------------------
:::

::: {.memdoc}
:::
:::

Function Documentation {#function-documentation .groupheader}
----------------------

[]{#afe461d27b9c48d5921c00d521181f12f}

[[◆ ](#afe461d27b9c48d5921c00d521181f12f)]{.permalink}loop() {#loop .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------- --- -- --- --
  void loop   (      )   
  ----------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a4fc01d736fe50cf5b977f755b675f11d}

[[◆ ](#a4fc01d736fe50cf5b977f755b675f11d)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------ --- -- --- --
  void setup   (      )   
  ------------ --- -- --- --
:::

::: {.memdoc}
:::
:::

Variable Documentation {#variable-documentation .groupheader}
----------------------

[]{#a3486ebc2916c9a757b036be4e303c573}

[[◆ ](#a3486ebc2916c9a757b036be4e303c573)]{.permalink}clock {#clock .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ---------------------------------------------------------------------- ---
  [EurorackClock](classEurorackClock.html){.el} clock([CLOCK\_PIN](main_8cpp.html#a23b348310475af5d6544794f1a167ee8){.el}, [RESET\_PIN](main_8cpp.html#a08bca59db4b190eaaea4d47b7562869c){.el}, [TEMPO\_LED](main_8cpp.html#a47ca58cb74e74a56ae5eaf454df47409){.el}, [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}, [leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})   (   [CLOCK\_PIN](main_8cpp.html#a23b348310475af5d6544794f1a167ee8){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                          [RESET\_PIN](main_8cpp.html#a08bca59db4b190eaaea4d47b7562869c){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                          [TEMPO\_LED](main_8cpp.html#a47ca58cb74e74a56ae5eaf454df47409){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                          [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}         ,
                                                                                                                                                                                                                                                                                                                                                                                                          [leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el}           
                                                                                                                                                                                                                                                                                                                                                                                                      )                                                                          
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ---------------------------------------------------------------------- ---
:::

::: {.memdoc}
:::
:::

[]{#a7a725ed0b89db4bf8461039a479bc143}

[[◆ ](#a7a725ed0b89db4bf8461039a479bc143)]{.permalink}currentMode {#currentmode .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -----------------------------------------------------
  [Mode](classMode.html){.el}\* currentMode = nullptr
  -----------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a5238625c5c9a4b1ed2f485c3696bef20}

[[◆ ](#a5238625c5c9a4b1ed2f485c3696bef20)]{.permalink}encButtonPin {#encbuttonpin .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------------
  int encButtonPin = [ENCODER\_BUTTON](main_8cpp.html#a13d83485198c96bfc9ab7e0bd91bbc3a){.el}
  ---------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a163c71453f25c788b655dd83689eaea0}

[[◆ ](#a163c71453f25c788b655dd83689eaea0)]{.permalink}encCLKPin {#encclkpin .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------------------------------------------------------
  int encCLKPin = [ENCODER\_PINA](main_8cpp.html#abe826c409a8a833bfa7532171db34cf0){.el}
  ----------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a808ab567ec354ba030c82614669258bb}

[[◆ ](#a808ab567ec354ba030c82614669258bb)]{.permalink}encDTPin {#encdtpin .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------
  int encDTPin = [ENCODER\_PINB](main_8cpp.html#abb0ab32273368ab840bf7c43f5309ca5){.el}
  ---------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a133a3017d675be921d0d7586eec7bb7c}

[[◆ ](#a133a3017d675be921d0d7586eec7bb7c)]{.permalink}encoder {#encoder .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [Encoder](classEncoder.html){.el} encoder = [Encoder](classEncoder.html){.el}([encCLKPin](main_8cpp.html#a163c71453f25c788b655dd83689eaea0){.el}, [encDTPin](main_8cpp.html#a808ab567ec354ba030c82614669258bb){.el}, [encButtonPin](main_8cpp.html#a5238625c5c9a4b1ed2f485c3696bef20){.el})
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#aafa551f375cee7e3faaf9390080592a7}

[[◆ ](#aafa551f375cee7e3faaf9390080592a7)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [Gates](classGates.html){.el} gates = [Gates](classGates.html){.el}([pins](main_8cpp.html#a782432745fd904139737a67cfe18cc45){.el}, [numPins](main_8cpp.html#a7e0ec12422847c7eae2e7fe6c5972a48){.el})
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a530c93b1821f0134b60d27d445a4a4e3}

[[◆ ](#a530c93b1821f0134b60d27d445a4a4e3)]{.permalink}inModeSelection {#inmodeselection .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------
  bool inModeSelection = false
  ------------------------------
:::

::: {.memdoc}
:::
:::

[]{#ae8f5410196ad7877ecf0fea76491fb22}

[[◆ ](#ae8f5410196ad7877ecf0fea76491fb22)]{.permalink}inputHandler {#inputhandler .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [InputHandler](classInputHandler.html){.el} inputHandler = [InputHandler](classInputHandler.html){.el}([CV\_A\_PIN](main_8cpp.html#a1f63b7e11fd7cdaa5cb5104155d5ddad){.el}, [CV\_B\_PIN](main_8cpp.html#aa3104e4ee339881c3a36c9ac65b819a4){.el})
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a299ec0c42ccc5a2d79d1739428ac3210}

[[◆ ](#a299ec0c42ccc5a2d79d1739428ac3210)]{.permalink}intensity {#intensity .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------
  int intensity = 255
  ---------------------
:::

::: {.memdoc}
:::
:::

[]{#a95711a53744764804ef9b98c59664764}

[[◆ ](#a95711a53744764804ef9b98c59664764)]{.permalink}intensity\_step {#intensity_step .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  int intensity\_step = (255 - [min\_intensity](main_8cpp.html#ae26c09cc76954053454ea55a4147b005){.el}) / ([total\_pages](main_8cpp.html#a3359c659dd3104507b620365d1b1d715){.el} - 1)
  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#adf636984b70d690edd0c4a32836392e0}

[[◆ ](#adf636984b70d690edd0c4a32836392e0)]{.permalink}internalPPQN {#internalppqn .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------
  unsigned char internalPPQN = 24
  ---------------------------------
:::

::: {.memdoc}
:::
:::

[]{#ae8ce8df8470642a28044a27add2964e4}

[[◆ ](#ae8ce8df8470642a28044a27add2964e4)]{.permalink}isInSelection {#isinselection .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------
  bool isInSelection = false
  ----------------------------
:::

::: {.memdoc}
:::
:::

[]{#a6a23ed29bcba26182457398cf3ba0dc4}

[[◆ ](#a6a23ed29bcba26182457398cf3ba0dc4)]{.permalink}lastFlashTime {#lastflashtime .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------
  unsigned long lastFlashTime = 0
  ---------------------------------
:::

::: {.memdoc}
:::
:::

[]{#af8afe1fb511986724cafc628d457ee07}

[[◆ ](#af8afe1fb511986724cafc628d457ee07)]{.permalink}ledController {#ledcontroller .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------------------------------------------- --- ---------------------------------------------------------------- -- --- --
  [LEDController](classLEDController.html){.el} ledController([leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})   (   [leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el}       )   
  ---------------------------------------------------------------------------------------------------------------------------- --- ---------------------------------------------------------------- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ab274bd88fcca137c72235967915b9f58}

[[◆ ](#ab274bd88fcca137c72235967915b9f58)]{.permalink}ledPins {#ledpins .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------------------------------------------
  std::vector\<int\> ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1, PA0}
  -------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#acff5fe5d7a28e483a9ab2f183bb4dc25}

[[◆ ](#acff5fe5d7a28e483a9ab2f183bb4dc25)]{.permalink}leds {#leds .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [LEDs](classLEDs.html){.el} leds = [LEDs](classLEDs.html){.el}([ledPins](main_8cpp.html#ab274bd88fcca137c72235967915b9f58){.el}, [numLedPins](main_8cpp.html#a42946fc499bc5d1b6da4a7d38a91b347){.el})
  -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#af1ad199a35c31bace3d533077689e6df}

[[◆ ](#af1ad199a35c31bace3d533077689e6df)]{.permalink}midiHandler {#midihandler .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ----------------------------------------------------------------- ---
  [MIDIHandler](classMIDIHandler.html){.el} midiHandler(Serial2, [clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el}, [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}, [leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el})   (   Serial2                                                           ,
                                                                                                                                                                                                                                                                      [clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el}    ,
                                                                                                                                                                                                                                                                      [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}    ,
                                                                                                                                                                                                                                                                      [leds](main_8cpp.html#acff5fe5d7a28e483a9ab2f183bb4dc25){.el}      
                                                                                                                                                                                                                                                                  )                                                                     
  --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ----------------------------------------------------------------- ---
:::

::: {.memdoc}
:::
:::

[]{#ae26c09cc76954053454ea55a4147b005}

[[◆ ](#ae26c09cc76954053454ea55a4147b005)]{.permalink}min\_intensity {#min_intensity .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------
  int min\_intensity = 64
  -------------------------
:::

::: {.memdoc}
:::
:::

[]{#ab97762dda44bd590fbe8c97580106a9e}

[[◆ ](#ab97762dda44bd590fbe8c97580106a9e)]{.permalink}mode0 {#mode0 .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ------------------------------------------------------------------------- ---
  [Mode0](classMode0.html){.el} mode0([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}, [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}, [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}, [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}, [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}, [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el}, [clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el})   (   [encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}          ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}     ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}            ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}      ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el}      ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [clock](main_8cpp.html#a3486ebc2916c9a757b036be4e303c573){.el}             
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     )                                                                             
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- --- ------------------------------------------------------------------------- ---
:::

::: {.memdoc}
:::
:::

[]{#ac453df32cb30f2f9509c37f37eb30b77}

[[◆ ](#ac453df32cb30f2f9509c37f37eb30b77)]{.permalink}mode1 {#mode1 .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ --- ------------------------------------------------------------------------- ---
  [Mode1](classMode1.html){.el} mode1([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}, [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}, [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}, [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}, [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}, [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el})   (   [encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}          ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}     ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}            ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}      ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el}       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     )                                                                             
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ --- ------------------------------------------------------------------------- ---
:::

::: {.memdoc}
:::
:::

[]{#aca8126f10bd0d0aac519977996b805f9}

[[◆ ](#aca8126f10bd0d0aac519977996b805f9)]{.permalink}mode2 {#mode2 .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ --- ------------------------------------------------------------------------- ---
  [Mode2](classMode2.html){.el} mode2([encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}, [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}, [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}, [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}, [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}, [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el})   (   [encoder](main_8cpp.html#a133a3017d675be921d0d7586eec7bb7c){.el}          ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [inputHandler](main_8cpp.html#ae8f5410196ad7877ecf0fea76491fb22){.el}     ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [gates](main_8cpp.html#aafa551f375cee7e3faaf9390080592a7){.el}            ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [ledController](main_8cpp.html#af8afe1fb511986724cafc628d457ee07){.el}    ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [midiHandler](main_8cpp.html#af1ad199a35c31bace3d533077689e6df){.el}      ,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                         [resetButton](main_8cpp.html#a191753692ee909460b91f43cfd141fa7){.el}       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     )                                                                             
  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ --- ------------------------------------------------------------------------- ---
:::

::: {.memdoc}
:::
:::

[]{#a42f72ce52094b0a028afddf862ddaa4d}

[[◆ ](#a42f72ce52094b0a028afddf862ddaa4d)]{.permalink}modeSelector {#modeselector .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------------------------------------------------------------------------------------------------------------------------
  [ModeSelector](classModeSelector.html){.el}& modeSelector = [ModeSelector::getInstance](classModeSelector.html#a2312f6a56156ab4557baebe6f2d050ea){.el}()
  ----------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a385d88ba7be4d1867aa11aefaba64f1a}

[[◆ ](#a385d88ba7be4d1867aa11aefaba64f1a)]{.permalink}musicalIntervals {#musicalintervals .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -----------------------------------------------------------------------------------------------------------------------------------------
  std::vector\<int\> musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288, 384, 576, 768, 1152, 1536}
  -----------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a4b2982d5837258bd50d39acde6f57b80}

[[◆ ](#a4b2982d5837258bd50d39acde6f57b80)]{.permalink}musicalIntervalsSize {#musicalintervalssize .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------------------------
  const int musicalIntervalsSize = musicalIntervals.size()
  ----------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a42946fc499bc5d1b6da4a7d38a91b347}

[[◆ ](#a42946fc499bc5d1b6da4a7d38a91b347)]{.permalink}numLedPins {#numledpins .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------
  int numLedPins = ledPins.size()
  ---------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a7e0ec12422847c7eae2e7fe6c5972a48}

[[◆ ](#a7e0ec12422847c7eae2e7fe6c5972a48)]{.permalink}numPins {#numpins .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------
  const int numPins = pins.size()
  ---------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a782432745fd904139737a67cfe18cc45}

[[◆ ](#a782432745fd904139737a67cfe18cc45)]{.permalink}pins {#pins .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------
  std::vector\<int\> pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9}
  ---------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a191753692ee909460b91f43cfd141fa7}

[[◆ ](#a191753692ee909460b91f43cfd141fa7)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [ResetButton](classResetButton.html){.el} resetButton = [ResetButton](classResetButton.html){.el}([RESET\_BUTTON](main_8cpp.html#ae80f4e50d6756064b8880735a5644881){.el})
  ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
:::

::: {.memdoc}
:::
:::

[]{#a3359c659dd3104507b620365d1b1d715}

[[◆ ](#a3359c659dd3104507b620365d1b1d715)]{.permalink}total\_pages {#total_pages .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------------------
  int total\_pages = 16 / leds.numLeds
  --------------------------------------
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
