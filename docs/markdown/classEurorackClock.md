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
[Public Member Functions](#pub-methods) \| [Static Public Member
Functions](#pub-static-methods) \| [Private Member
Functions](#pri-methods) \| [Private Attributes](#pri-attribs) \|
[Static Private Attributes](#pri-static-attribs) \| [List of all
members](classEurorackClock-members.html)
:::

::: {.headertitle}
::: {.title}
EurorackClock Class Reference
:::
:::
:::

::: {.contents}
`#include <EurorackClock.h>`

::: {.dynheader}
Collaboration diagram for EurorackClock:
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

 

[EurorackClock](classEurorackClock.html#ab4640da7e0f07985916b5ed44a6afbd2){.el}
(int
[clockPin](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e){.el},
int
[resetPin](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad){.el},
int tempoLedPin, [Gates](classGates.html){.el}
&[gates](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb){.el},
[LEDs](classLEDs.html){.el}
&[leds](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921){.el})

 

void 

[setup](classEurorackClock.html#af237ef8da045ffc906547346b8e1e20d){.el}
()

 

void 

[start](classEurorackClock.html#a85a00dfdd0cd08c0b3a9d90acc5cc66b){.el}
()

 

void 

[stop](classEurorackClock.html#ad92731fd0b8203b283be37fd83ab9e7b){.el}
()

 

void 

[reset](classEurorackClock.html#acb69cc2c53c500576df9c12c025db2d1){.el}
()

 

void 

[reset](classEurorackClock.html#ace2ae0b8ec34653a1186f0e8939c9f0e){.el}
(int selectedGate)

 

void 

[tick](classEurorackClock.html#a7881b7e717da092e55e7f8b0961b6ae0){.el}
()

 

void 

[setTempo](classEurorackClock.html#a3abcd345bde222e68cd86464ae1de2ae){.el}
(float newTempo, int
[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.el})

 

int 

[getTempo](classEurorackClock.html#a3ee132275b852260555b9cd5cf9536c1){.el}
() const

 

void 

[flashTempoLed](classEurorackClock.html#acda15075afacc084a32c3cebbd077914){.el}
()

 

void 

[handleExternalClock](classEurorackClock.html#ab526a6829f0489eae35811e86e7e80f8){.el}
()

 

void 

[handleMidiClock](classEurorackClock.html#aa204c15662e069ecbf1ac4029116365d){.el}
()

 

void 

[setPPQN](classEurorackClock.html#a6f6b794fde098d908287afb357d30cb6){.el}
(int
[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.el})

 

void 

[setExternalTempo](classEurorackClock.html#aa911fac3efe50a37cf2355046119461b){.el}
(bool
[isExternalTempo](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6){.el})

 

void 

[toggleLedOnDuration](classEurorackClock.html#a45c55e3e1a02a319cf83c60658bff956){.el}
(bool selectingTempo)

 

[]{#pub-static-methods} Static Public Member Functions {#static-public-member-functions .groupheader}
------------------------------------------------------

static void 

[interruptHandler](classEurorackClock.html#aec074cdc6187413e42bb4e1cce6c07c8){.el}
()

 

static void 

[resetInterruptHandler](classEurorackClock.html#ac6279fbb8d7396de017252b39b3f266b){.el}
()

 

[]{#pri-methods} Private Member Functions {#private-member-functions .groupheader}
-----------------------------------------

void 

[updateTempoLed](classEurorackClock.html#a9cddc56f91761c38a32f850fe4920804){.el}
(unsigned long currentTime)

 

void 

[updateFlashPulseCount](classEurorackClock.html#ae0c42a84a524c12c2f01e43682e5e36f){.el}
()

 

bool 

[shouldTriggerClockPulse](classEurorackClock.html#a4af4876927901a6cfc1619d2192fbb55){.el}
()

 

void 

[triggerClockPulse](classEurorackClock.html#a300b4ab6a0b925f185841a7bca2d80cc){.el}
()

 

void 

[handleResetTrigger](classEurorackClock.html#a50a5339b6a232a0e2db5bf7c621bbf9e){.el}
()

 

void 

[decideFlash](classEurorackClock.html#a55a6e89f8c69c7ee73392c89f8e155a8){.el}
()

 

void 

[triggerTempoLed](classEurorackClock.html#ad3159d70a7ed39e332b6564c2b0e227f){.el}
(unsigned long currentTime)

 

void 

[triggerGates](classEurorackClock.html#a708240997f4112f2bcb7f9e25ab186eb){.el}
(unsigned long currentTime)

 

void 

[handleTempoLed](classEurorackClock.html#a02c9cd57faf38ecdfec76e6d09d93b7c){.el}
(unsigned long currentTime)

 

[]{#pri-attribs} Private Attributes {#private-attributes .groupheader}
-----------------------------------

[ClockState](structClockState.html){.el} 

[clockState](classEurorackClock.html#a6582607e7c111bb17bd4656bade25880){.el}

 

HardwareTimer \* 

[timer](classEurorackClock.html#a4a47006cfd467d0385bc605ea9157618){.el}

 

[LED](classLED.html){.el} 

[tempoLed](classEurorackClock.html#a08c566025baec51dfe9528636895dca1){.el}

 

[InputPin](classInputPin.html){.el} 

[externalClock](classEurorackClock.html#aa33304d81b503a6183633369016188a6){.el}

 

[InputPin](classInputPin.html){.el} 

[resetButton](classEurorackClock.html#ae2d7164536f7921ac0751875fd67c83b){.el}

 

[Gates](classGates.html){.el} & 

[gates](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb){.el}

 

[LEDs](classLEDs.html){.el} & 

[leds](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921){.el}

 

float 

[tempo](classEurorackClock.html#ae31434bf73c7c86490a70d5fa6dbe3fc){.el}

 

float 

[lastTickTime](classEurorackClock.html#a2793ecd9e97550228e88fed371ed671d){.el}

 

float 

[tickInterval](classEurorackClock.html#aa316235771ee7584bbf198798fa62a09){.el}

 

float 

[lastExternalTickTime](classEurorackClock.html#aae0d70573973af8a7800dddd0fdaafe8){.el}

 

unsigned long 

[lastMidiClockTime](classEurorackClock.html#a530f570bb7e4615cf304f473ac820133){.el}

 

int 

[ledOnDuration](classEurorackClock.html#a49c3ef3023e15397d463026b93229634){.el}
=
[LONG\_LED\_ON\_DURATION](classEurorackClock.html#aa6f21a81192926804c417f3937608af0){.el}

 

unsigned long 

[ledOnTime](classEurorackClock.html#a8f2268e67c1164e5acb449e2ff162892){.el}
= 0

 

int 

[clockPin](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e){.el}

 

int 

[resetPin](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad){.el}

 

int 

[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.el}

 

bool 

[isRunning](classEurorackClock.html#a432c6c15fe407d014f6d2c4148346c4a){.el}

 

bool 

[isExternalTempo](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6){.el}

 

bool 

[isMidiClock](classEurorackClock.html#a707c76310f278ac9675d493d356623c1){.el}

 

bool 

[timeToFlash](classEurorackClock.html#aa44f194d606bc5dd0caf3508bacc6857){.el}

 

bool 

[resetTriggered](classEurorackClock.html#a1534c3851f19a278a70f7d6bad47b98d){.el}

 

float 

[externalTempo](classEurorackClock.html#a0622d65ad3d8f7542ecef32415a2bfde){.el}

 

int 

[lastClockState](classEurorackClock.html#aa1f32b9296ee482b8cc4a5a5b0246ad4){.el}

 

unsigned long 

[lastClockTime](classEurorackClock.html#abdd7383cccac419acc8fb29ef21c11d0){.el}

 

int 

[tickCount](classEurorackClock.html#a52d17e9dbf5701acca86bee03a16b730){.el}

 

[]{#pri-static-attribs} Static Private Attributes {#static-private-attributes .groupheader}
-------------------------------------------------

static [EurorackClock](classEurorackClock.html){.el} \* 

[instance](classEurorackClock.html#a10369405a7858db967411284861e3439){.el}
= nullptr

 

static float 

[lastFlashTime](classEurorackClock.html#a9f9bb4fdbf42fea86ba74511dde5285f){.el}
= 0

 

static int 

[flashPulseCount](classEurorackClock.html#a3c863251f650f36cf05de825a300a7fb){.el}
= 0

 

static const unsigned long 

[MIDI\_CLOCK\_TIMEOUT](classEurorackClock.html#ae5b52e0dacc5a2e9a1f53f380f245cb1){.el}
= 1000

 

static const int 

[LED\_ON\_DURATION](classEurorackClock.html#aa19d61388803b784928c4ab209f18cab){.el}
= 10

 

static const int 

[LONG\_LED\_ON\_DURATION](classEurorackClock.html#aa6f21a81192926804c417f3937608af0){.el}
= 50

 

static const int 

[MIDI\_CLOCK\_PULSE\_COUNT](classEurorackClock.html#af1d98ae106104e4a771e42fda5b88d0c){.el}
= 24

 

Constructor & Destructor Documentation {#constructor-destructor-documentation .groupheader}
--------------------------------------

[]{#ab4640da7e0f07985916b5ed44a6afbd2}

[[◆ ](#ab4640da7e0f07985916b5ed44a6afbd2)]{.permalink}EurorackClock() {#eurorackclock .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- ---------------------------------- ----------------
  EurorackClock::EurorackClock   (   int                                *clockPin*,
                                     int                                *resetPin*,
                                     int                                *tempoLedPin*,
                                     [Gates](classGates.html){.el} &    *gates*,
                                     [LEDs](classLEDs.html){.el} &      *leds* 
                                 )                                      
  ------------------------------ --- ---------------------------------- ----------------
:::

::: {.memdoc}
:::
:::

Member Function Documentation {#member-function-documentation .groupheader}
-----------------------------

[]{#a55a6e89f8c69c7ee73392c89f8e155a8}

[[◆ ](#a55a6e89f8c69c7ee73392c89f8e155a8)]{.permalink}decideFlash() {#decideflash .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void Eurorac                    |                                   |
| kClock::decideFlash   (      )    |                                   |
|   --------------                  |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#acda15075afacc084a32c3cebbd077914}

[[◆ ](#acda15075afacc084a32c3cebbd077914)]{.permalink}flashTempoLed() {#flashtempoled .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------- --- -- --- --
  void EurorackClock::flashTempoLed   (      )   
  ----------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a3ee132275b852260555b9cd5cf9536c1}

[[◆ ](#a3ee132275b852260555b9cd5cf9536c1)]{.permalink}getTempo() {#gettempo .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------- --- -- --- -------
  int EurorackClock::getTempo   (      )   const
  ----------------------------- --- -- --- -------
:::

::: {.memdoc}
:::
:::

[]{#ab526a6829f0489eae35811e86e7e80f8}

[[◆ ](#ab526a6829f0489eae35811e86e7e80f8)]{.permalink}handleExternalClock() {#handleexternalclock .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------- --- -- --- --
  void EurorackClock::handleExternalClock   (      )   
  ----------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#aa204c15662e069ecbf1ac4029116365d}

[[◆ ](#aa204c15662e069ecbf1ac4029116365d)]{.permalink}handleMidiClock() {#handlemidiclock .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------------- --- -- --- --
  void EurorackClock::handleMidiClock   (      )   
  ------------------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a50a5339b6a232a0e2db5bf7c621bbf9e}

[[◆ ](#a50a5339b6a232a0e2db5bf7c621bbf9e)]{.permalink}handleResetTrigger() {#handleresettrigger .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------           | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void EurorackClock:             |                                   |
| :handleResetTrigger   (      )    |                                   |
|   ---------------------           |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a02c9cd57faf38ecdfec76e6d09d93b7c}

[[◆ ](#a02c9cd57faf38ecdfec76e6d09d93b7c)]{.permalink}handleTempoLed() {#handletempoled .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[private]{.mlabel}]{.mlabels}    |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
|   void Eurorac                    |                                   |
| kClock::handleTempoLed   (   unsi |                                   |
| gned long    *currentTime*   )    |                                   |
|   --------------                  |                                   |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aec074cdc6187413e42bb4e1cce6c07c8}

[[◆ ](#aec074cdc6187413e42bb4e1cce6c07c8)]{.permalink}interruptHandler() {#interrupthandler .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[inline]{.ml                     |
| ------------------- --- -- --- -- | abel}[static]{.mlabel}]{.mlabels} |
|   static void EurorackCloc        |                                   |
| k::interruptHandler   (      )    |                                   |
|   --------------------------      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#acb69cc2c53c500576df9c12c025db2d1}

[[◆ ](#acb69cc2c53c500576df9c12c025db2d1)]{.permalink}reset() [\[1/2\]]{.overload} {#reset-12 .memtitle}
----------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  void EurorackClock::reset   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ace2ae0b8ec34653a1186f0e8939c9f0e}

[[◆ ](#ace2ae0b8ec34653a1186f0e8939c9f0e)]{.permalink}reset() [\[2/2\]]{.overload} {#reset-22 .memtitle}
----------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- ------ ---------------- --- --
  void EurorackClock::reset   (   int    *selectedGate*   )   
  --------------------------- --- ------ ---------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#ac6279fbb8d7396de017252b39b3f266b}

[[◆ ](#ac6279fbb8d7396de017252b39b3f266b)]{.permalink}resetInterruptHandler() {#resetinterrupthandler .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[inline]{.ml                     |
| ------------------- --- -- --- -- | abel}[static]{.mlabel}]{.mlabels} |
|   static void EurorackClock::re   |                                   |
| setInterruptHandler   (      )    |                                   |
|   ------------------------------- |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa911fac3efe50a37cf2355046119461b}

[[◆ ](#aa911fac3efe50a37cf2355046119461b)]{.permalink}setExternalTempo() {#setexternaltempo .memtitle}
------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------------------- --- ------- ------------------- --- --
  void EurorackClock::setExternalTempo   (   bool    *isExternalTempo*   )   
  -------------------------------------- --- ------- ------------------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a6f6b794fde098d908287afb357d30cb6}

[[◆ ](#a6f6b794fde098d908287afb357d30cb6)]{.permalink}setPPQN() {#setppqn .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------- --- ------ -------- --- --
  void EurorackClock::setPPQN   (   int    *ppqn*   )   
  ----------------------------- --- ------ -------- --- --
:::

::: {.memdoc}
:::
:::

[]{#a3abcd345bde222e68cd86464ae1de2ae}

[[◆ ](#a3abcd345bde222e68cd86464ae1de2ae)]{.permalink}setTempo() {#settempo .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ------------------------------ --- -------- -------------
  void EurorackClock::setTempo   (   float    *newTempo*,
                                     int      *ppqn* 
                                 )            
  ------------------------------ --- -------- -------------
:::

::: {.memdoc}
:::
:::

[]{#af237ef8da045ffc906547346b8e1e20d}

[[◆ ](#af237ef8da045ffc906547346b8e1e20d)]{.permalink}setup() {#setup .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  void EurorackClock::setup   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a4af4876927901a6cfc1619d2192fbb55}

[[◆ ](#a4af4876927901a6cfc1619d2192fbb55)]{.permalink}shouldTriggerClockPulse() {#shouldtriggerclockpulse .memtitle}
-------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------------      | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   bool EurorackClock::shou        |                                   |
| ldTriggerClockPulse   (      )    |                                   |
|   --------------------------      |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a85a00dfdd0cd08c0b3a9d90acc5cc66b}

[[◆ ](#a85a00dfdd0cd08c0b3a9d90acc5cc66b)]{.permalink}start() {#start .memtitle}
-------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  --------------------------- --- -- --- --
  void EurorackClock::start   (      )   
  --------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#ad92731fd0b8203b283be37fd83ab9e7b}

[[◆ ](#ad92731fd0b8203b283be37fd83ab9e7b)]{.permalink}stop() {#stop .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -- --- --
  void EurorackClock::stop   (      )   
  -------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a7881b7e717da092e55e7f8b0961b6ae0}

[[◆ ](#a7881b7e717da092e55e7f8b0961b6ae0)]{.permalink}tick() {#tick .memtitle}
------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  -------------------------- --- -- --- --
  void EurorackClock::tick   (      )   
  -------------------------- --- -- --- --
:::

::: {.memdoc}
:::
:::

[]{#a45c55e3e1a02a319cf83c60658bff956}

[[◆ ](#a45c55e3e1a02a319cf83c60658bff956)]{.permalink}toggleLedOnDuration() {#toggleledonduration .memtitle}
---------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
  ----------------------------------------- --- ------- ------------------ --- --
  void EurorackClock::toggleLedOnDuration   (   bool    *selectingTempo*   )   
  ----------------------------------------- --- ------- ------------------ --- --
:::

::: {.memdoc}
:::
:::

[]{#a300b4ab6a0b925f185841a7bca2d80cc}

[[◆ ](#a300b4ab6a0b925f185841a7bca2d80cc)]{.permalink}triggerClockPulse() {#triggerclockpulse .memtitle}
-------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------            | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void EurorackClock              |                                   |
| ::triggerClockPulse   (      )    |                                   |
|   --------------------            |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a708240997f4112f2bcb7f9e25ab186eb}

[[◆ ](#a708240997f4112f2bcb7f9e25ab186eb)]{.permalink}triggerGates() {#triggergates .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------                    | [[private]{.mlabel}]{.mlabels}    |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
|   void Euror                      |                                   |
| ackClock::triggerGates   (   unsi |                                   |
| gned long    *currentTime*   )    |                                   |
|   ------------                    |                                   |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ad3159d70a7ed39e332b6564c2b0e227f}

[[◆ ](#ad3159d70a7ed39e332b6564c2b0e227f)]{.permalink}triggerTempoLed() {#triggertempoled .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[private]{.mlabel}]{.mlabels}    |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
|   void Eurorack                   |                                   |
| Clock::triggerTempoLed   (   unsi |                                   |
| gned long    *currentTime*   )    |                                   |
|   ---------------                 |                                   |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae0c42a84a524c12c2f01e43682e5e36f}

[[◆ ](#ae0c42a84a524c12c2f01e43682e5e36f)]{.permalink}updateFlashPulseCount() {#updateflashpulsecount .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[private]{.mlabel}]{.mlabels}    |
| ------------------- --- -- --- -- |                                   |
|   void EurorackClock::up          |                                   |
| dateFlashPulseCount   (      )    |                                   |
|   ------------------------        |                                   |
| ------------------- --- -- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a9cddc56f91761c38a32f850fe4920804}

[[◆ ](#a9cddc56f91761c38a32f850fe4920804)]{.permalink}updateTempoLed() {#updatetempoled .memtitle}
----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------                  | [[private]{.mlabel}]{.mlabels}    |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
|   void Eurorac                    |                                   |
| kClock::updateTempoLed   (   unsi |                                   |
| gned long    *currentTime*   )    |                                   |
|   --------------                  |                                   |
| ---------------------- --- ------ |                                   |
| ---------- --------------- --- -- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

Member Data Documentation {#member-data-documentation .groupheader}
-------------------------

[]{#ae8c82303a099d61cd967306957419d4e}

[[◆ ](#ae8c82303a099d61cd967306957419d4e)]{.permalink}clockPin {#clockpin .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
|   int EurorackClock::clockPin     |                                   |
|   -----------------------------   |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a6582607e7c111bb17bd4656bade25880}

[[◆ ](#a6582607e7c111bb17bd4656bade25880)]{.permalink}clockState {#clockstate .memtitle}
----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|                                   |                                   |
| [ClockState](structClockState.htm |                                   |
| l){.el} EurorackClock::clockState |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa33304d81b503a6183633369016188a6}

[[◆ ](#aa33304d81b503a6183633369016188a6)]{.permalink}externalClock {#externalclock .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   [InputPin](classInputPin.html){ |                                   |
| .el} EurorackClock::externalClock |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a0622d65ad3d8f7542ecef32415a2bfde}

[[◆ ](#a0622d65ad3d8f7542ecef32415a2bfde)]{.permalink}externalTempo {#externaltempo .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   f                               |                                   |
| loat EurorackClock::externalTempo |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a3c863251f650f36cf05de825a300a7fb}

[[◆ ](#a3c863251f650f36cf05de825a300a7fb)]{.permalink}flashPulseCount {#flashpulsecount .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   int E                           |                                   |
| urorackClock::flashPulseCount = 0 |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#af7e11cb46ab51c58609123ae13c236eb}

[[◆ ](#af7e11cb46ab51c58609123ae13c236eb)]{.permalink}gates {#gates .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --------------------            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [Gates](classGates              |                                   |
| .html){.el}& EurorackClock::gates |                                   |
|   --------------------            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a10369405a7858db967411284861e3439}

[[◆ ](#a10369405a7858db967411284861e3439)]{.permalink}instance {#instance .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
| --------------------------------- |                                   |
|   [EurorackClock](                |                                   |
| classEurorackClock.html){.el} \*  |                                   |
| EurorackClock::instance = nullptr |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a53f9514598facb1b47a35e2d0cfc5bf6}

[[◆ ](#a53f9514598facb1b47a35e2d0cfc5bf6)]{.permalink}isExternalTempo {#isexternaltempo .memtitle}
---------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----                            | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bo                              |                                   |
| ol EurorackClock::isExternalTempo |                                   |
|   ----                            |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a707c76310f278ac9675d493d356623c1}

[[◆ ](#a707c76310f278ac9675d493d356623c1)]{.permalink}isMidiClock {#ismidiclock .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool EurorackClock::isMidiClock |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a432c6c15fe407d014f6d2c4148346c4a}

[[◆ ](#a432c6c15fe407d014f6d2c4148346c4a)]{.permalink}isRunning {#isrunning .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
|   bool EurorackClock::isRunning   |                                   |
|   ------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa1f32b9296ee482b8cc4a5a5b0246ad4}

[[◆ ](#aa1f32b9296ee482b8cc4a5a5b0246ad4)]{.permalink}lastClockState {#lastclockstate .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| int EurorackClock::lastClockState |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#abdd7383cccac419acc8fb29ef21c11d0}

[[◆ ](#abdd7383cccac419acc8fb29ef21c11d0)]{.permalink}lastClockTime {#lastclocktime .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------                     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsigned                        |                                   |
| long EurorackClock::lastClockTime |                                   |
|   -----------                     |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aae0d70573973af8a7800dddd0fdaafe8}

[[◆ ](#aae0d70573973af8a7800dddd0fdaafe8)]{.permalink}lastExternalTickTime {#lastexternalticktime .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------                      | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   float Eu                        |                                   |
| rorackClock::lastExternalTickTime |                                   |
|   ----------                      |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a9f9bb4fdbf42fea86ba74511dde5285f}

[[◆ ](#a9f9bb4fdbf42fea86ba74511dde5285f)]{.permalink}lastFlashTime {#lastflashtime .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------                         | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   float                           |                                   |
|  EurorackClock::lastFlashTime = 0 |                                   |
|   -------                         |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a530f570bb7e4615cf304f473ac820133}

[[◆ ](#a530f570bb7e4615cf304f473ac820133)]{.permalink}lastMidiClockTime {#lastmidiclocktime .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------                 | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsigned long                   |                                   |
|  EurorackClock::lastMidiClockTime |                                   |
|   ---------------                 |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a2793ecd9e97550228e88fed371ed671d}

[[◆ ](#a2793ecd9e97550228e88fed371ed671d)]{.permalink}lastTickTime {#lastticktime .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| float EurorackClock::lastTickTime |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa19d61388803b784928c4ab209f18cab}

[[◆ ](#aa19d61388803b784928c4ab209f18cab)]{.permalink}LED\_ON\_DURATION {#led_on_duration .memtitle}
-----------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------                | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const int Euro                  |                                   |
| rackClock::LED\_ON\_DURATION = 10 |                                   |
|   ----------------                |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a49c3ef3023e15397d463026b93229634}

[[◆ ](#a49c3ef3023e15397d463026b93229634)]{.permalink}ledOnDuration {#ledonduration .memtitle}
-------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---------------------------     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
|   int EurorackClock::ledOnD       |                                   |
| uration = [LONG\_LED\_ON\_DURATIO |                                   |
| N](classEurorackClock.html#aa6f21 |                                   |
| a81192926804c417f3937608af0){.el} |                                   |
|   ---------------------------     |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a8f2268e67c1164e5acb449e2ff162892}

[[◆ ](#a8f2268e67c1164e5acb449e2ff162892)]{.permalink}ledOnTime {#ledontime .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------                     | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   unsigned                        |                                   |
| long EurorackClock::ledOnTime = 0 |                                   |
|   -----------                     |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a808f0d1dc014fd9f8541433bc26ed921}

[[◆ ](#a808f0d1dc014fd9f8541433bc26ed921)]{.permalink}leds {#leds .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------               | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [LEDs](classLED                 |                                   |
| s.html){.el}& EurorackClock::leds |                                   |
|   -----------------               |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa6f21a81192926804c417f3937608af0}

[[◆ ](#aa6f21a81192926804c417f3937608af0)]{.permalink}LONG\_LED\_ON\_DURATION {#long_led_on_duration .memtitle}
-----------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------          | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const int EurorackCl            |                                   |
| ock::LONG\_LED\_ON\_DURATION = 50 |                                   |
|   ----------------------          |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#af1d98ae106104e4a771e42fda5b88d0c}

[[◆ ](#af1d98ae106104e4a771e42fda5b88d0c)]{.permalink}MIDI\_CLOCK\_PULSE\_COUNT {#midi_clock_pulse_count .memtitle}
-------------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------        | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const int EurorackCloc          |                                   |
| k::MIDI\_CLOCK\_PULSE\_COUNT = 24 |                                   |
|   ------------------------        |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae5b52e0dacc5a2e9a1f53f380f245cb1}

[[◆ ](#ae5b52e0dacc5a2e9a1f53f380f245cb1)]{.permalink}MIDI\_CLOCK\_TIMEOUT {#midi_clock_timeout .memtitle}
--------------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[static]{.mla                    |
| --------------------------------- | bel}[private]{.mlabel}]{.mlabels} |
|   const unsigned long EurorackC   |                                   |
| lock::MIDI\_CLOCK\_TIMEOUT = 1000 |                                   |
|   ------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ac829929df9b7372bcd3b2c609ecbf9a1}

[[◆ ](#ac829929df9b7372bcd3b2c609ecbf9a1)]{.permalink}ppqn {#ppqn .memtitle}
----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -------------------------       | [[private]{.mlabel}]{.mlabels}    |
|   int EurorackClock::ppqn         |                                   |
|   -------------------------       |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae2d7164536f7921ac0751875fd67c83b}

[[◆ ](#ae2d7164536f7921ac0751875fd67c83b)]{.permalink}resetButton {#resetbutton .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------- | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [InputPin](classInputPin.html   |                                   |
| ){.el} EurorackClock::resetButton |                                   |
|   ------------------------------- |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a013e9fa1f3c6af6fb7517cdca76905ad}

[[◆ ](#a013e9fa1f3c6af6fb7517cdca76905ad)]{.permalink}resetPin {#resetpin .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----------------------------   | [[private]{.mlabel}]{.mlabels}    |
|   int EurorackClock::resetPin     |                                   |
|   -----------------------------   |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a1534c3851f19a278a70f7d6bad47b98d}

[[◆ ](#a1534c3851f19a278a70f7d6bad47b98d)]{.permalink}resetTriggered {#resettriggered .memtitle}
--------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ---                             | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   b                               |                                   |
| ool EurorackClock::resetTriggered |                                   |
|   ---                             |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#ae31434bf73c7c86490a70d5fa6dbe3fc}

[[◆ ](#ae31434bf73c7c86490a70d5fa6dbe3fc)]{.permalink}tempo {#tempo .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ----------------------------    | [[private]{.mlabel}]{.mlabels}    |
|   float EurorackClock::tempo      |                                   |
|   ----------------------------    |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a08c566025baec51dfe9528636895dca1}

[[◆ ](#a08c566025baec51dfe9528636895dca1)]{.permalink}tempoLed {#tempoled .memtitle}
--------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   [LED](classLED.h                |                                   |
| tml){.el} EurorackClock::tempoLed |                                   |
|   ------------------              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a52d17e9dbf5701acca86bee03a16b730}

[[◆ ](#a52d17e9dbf5701acca86bee03a16b730)]{.permalink}tickCount {#tickcount .memtitle}
---------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   ------------------------------  | [[private]{.mlabel}]{.mlabels}    |
|   int EurorackClock::tickCount    |                                   |
|   ------------------------------  |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa316235771ee7584bbf198798fa62a09}

[[◆ ](#aa316235771ee7584bbf198798fa62a09)]{.permalink}tickInterval {#tickinterval .memtitle}
------------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   --                              | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|                                   |                                   |
| float EurorackClock::tickInterval |                                   |
|   --                              |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#a4a47006cfd467d0385bc605ea9157618}

[[◆ ](#a4a47006cfd467d0385bc605ea9157618)]{.permalink}timer {#timer .memtitle}
-----------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|   -----                           | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   Har                             |                                   |
| dwareTimer\* EurorackClock::timer |                                   |
|   -----                           |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

[]{#aa44f194d606bc5dd0caf3508bacc6857}

[[◆ ](#aa44f194d606bc5dd0caf3508bacc6857)]{.permalink}timeToFlash {#timetoflash .memtitle}
-----------------------------------------------------------------

::: {.memitem}
::: {.memproto}
+-----------------------------------+-----------------------------------+
|                                   | [[private]{.mlabel}]{.mlabels}    |
| --------------------------------- |                                   |
|   bool EurorackClock::timeToFlash |                                   |
|                                   |                                   |
| --------------------------------- |                                   |
+-----------------------------------+-----------------------------------+
:::

::: {.memdoc}
:::
:::

------------------------------------------------------------------------

The documentation for this class was generated from the following files:

-   include/[EurorackClock.h](EurorackClock_8h_source.html){.el}
-   src/[EurorackClock.cpp](EurorackClock_8cpp.html){.el}

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
