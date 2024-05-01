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
-   [include](dir_d44c64559bbebec7f509842c48db8b23.html){.el}
:::
:::

::: {.header}
::: {.headertitle}
::: {.title}
EurorackClock.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](EurorackClock_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef EURORACKCLOCK\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define EURORACKCLOCK\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include \<HardwareTimer.h\>]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[LED.h](LED_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Pin.h](Pin_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[Gates.h](Gates_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [\#include
\"[LEDs.h](LEDs_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} [\#include
\"[Constants.h](Constants_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} 
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} [// Define the state of the clock]{.comment}
:::

::: {.line}
[]{#l00012}[ [12](structClockState.html){.line}]{.lineno} [struct
]{.keyword}[ClockState](structClockState.html){.code} {
:::

::: {.line}
[]{#l00013}[
[13](structClockState.html#a95ea496cd652c244f1b016ae0d4e0299){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastTickTime](structClockState.html#a95ea496cd652c244f1b016ae0d4e0299){.code};
[// Time of the last tick]{.comment}
:::

::: {.line}
[]{#l00014}[
[14](structClockState.html#a82ae8c87efe27db5487b3241f205f652){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[tickInterval](structClockState.html#a82ae8c87efe27db5487b3241f205f652){.code};
[// Interval between ticks]{.comment}
:::

::: {.line}
[]{#l00015}[
[15](structClockState.html#ad2352e0588e3fc275e0cf3afa943c293){.line}]{.lineno} 
[bool]{.keywordtype}
[isRunning](structClockState.html#ad2352e0588e3fc275e0cf3afa943c293){.code};
[// Indicates whether the clock is running]{.comment}
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} 
:::

::: {.line}
[]{#l00017}[
[17](structClockState.html#aaa69bdf8d4cdfeb9fea0bf2bce02a1e2){.line}]{.lineno} 
[ClockState](structClockState.html#aaa69bdf8d4cdfeb9fea0bf2bce02a1e2){.code}()
:
[lastTickTime](structClockState.html#a95ea496cd652c244f1b016ae0d4e0299){.code}(0),
[tickInterval](structClockState.html#a82ae8c87efe27db5487b3241f205f652){.code}(0),
[isRunning](structClockState.html#ad2352e0588e3fc275e0cf3afa943c293){.code}(false)
{}
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} };
:::

::: {.line}
[]{#l00019}[ 19]{.lineno} 
:::

::: {.line}
[]{#l00020}[ 20]{.lineno} [// Class declaration for
EurorackClock]{.comment}
:::

::: {.line}
[]{#l00021}[ [21](classEurorackClock.html){.line}]{.lineno} [class
]{.keyword}[EurorackClock](classEurorackClock.html){.code} {
:::

::: {.line}
[]{#l00022}[
[22](classEurorackClock.html#a6582607e7c111bb17bd4656bade25880){.line}]{.lineno} 
[ClockState](structClockState.html){.code}
[clockState](classEurorackClock.html#a6582607e7c111bb17bd4656bade25880){.code};
[// Current state of the clock]{.comment}
:::

::: {.line}
[]{#l00023}[ 23]{.lineno} 
:::

::: {.line}
[]{#l00024}[ 24]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [// Constructor]{.comment}
:::

::: {.line}
[]{#l00026}[ 26]{.lineno} 
[EurorackClock](classEurorackClock.html#ab4640da7e0f07985916b5ed44a6afbd2){.code}([int]{.keywordtype}
[clockPin](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e){.code},
[int]{.keywordtype}
[resetPin](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad){.code},
[int]{.keywordtype} tempoLedPin, [Gates](classGates.html){.code}&
[gates](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb){.code},
[LEDs](classLEDs.html){.code}&
[leds](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921){.code});
:::

::: {.line}
[]{#l00027}[ 27]{.lineno} 
:::

::: {.line}
[]{#l00028}[ 28]{.lineno}  [// Setup function to initialize the
clock]{.comment}
:::

::: {.line}
[]{#l00029}[ 29]{.lineno}  [void]{.keywordtype}
[setup](classEurorackClock.html#af237ef8da045ffc906547346b8e1e20d){.code}();
:::

::: {.line}
[]{#l00030}[ 30]{.lineno} 
:::

::: {.line}
[]{#l00031}[ 31]{.lineno}  [// Start the clock]{.comment}
:::

::: {.line}
[]{#l00032}[ 32]{.lineno}  [void]{.keywordtype}
[start](classEurorackClock.html#a85a00dfdd0cd08c0b3a9d90acc5cc66b){.code}();
:::

::: {.line}
[]{#l00033}[ 33]{.lineno} 
:::

::: {.line}
[]{#l00034}[ 34]{.lineno}  [// Stop the clock]{.comment}
:::

::: {.line}
[]{#l00035}[ 35]{.lineno}  [void]{.keywordtype}
[stop](classEurorackClock.html#ad92731fd0b8203b283be37fd83ab9e7b){.code}();
:::

::: {.line}
[]{#l00036}[ 36]{.lineno} 
:::

::: {.line}
[]{#l00037}[ 37]{.lineno}  [// Static interrupt handler for the
clock]{.comment}
:::

::: {.line}
[]{#l00038}[
[38](classEurorackClock.html#aec074cdc6187413e42bb4e1cce6c07c8){.line}]{.lineno} 
[static]{.keyword} [void]{.keywordtype}
[interruptHandler](classEurorackClock.html#aec074cdc6187413e42bb4e1cce6c07c8){.code}()
{
:::

::: {.line}
[]{#l00039}[ 39]{.lineno} 
[instance](classEurorackClock.html#a10369405a7858db967411284861e3439){.code}-\>[tick](classEurorackClock.html#a7881b7e717da092e55e7f8b0961b6ae0){.code}();
:::

::: {.line}
[]{#l00040}[ 40]{.lineno}  }
:::

::: {.line}
[]{#l00041}[ 41]{.lineno} 
:::

::: {.line}
[]{#l00042}[ 42]{.lineno}  [// Static reset interrupt handler]{.comment}
:::

::: {.line}
[]{#l00043}[
[43](classEurorackClock.html#ac6279fbb8d7396de017252b39b3f266b){.line}]{.lineno} 
[static]{.keyword} [void]{.keywordtype}
[resetInterruptHandler](classEurorackClock.html#ac6279fbb8d7396de017252b39b3f266b){.code}()
{
:::

::: {.line}
[]{#l00044}[ 44]{.lineno} 
[instance](classEurorackClock.html#a10369405a7858db967411284861e3439){.code}-\>[reset](classEurorackClock.html#acb69cc2c53c500576df9c12c025db2d1){.code}();
:::

::: {.line}
[]{#l00045}[ 45]{.lineno}  }
:::

::: {.line}
[]{#l00046}[ 46]{.lineno} 
:::

::: {.line}
[]{#l00047}[ 47]{.lineno}  [// Reset the clock]{.comment}
:::

::: {.line}
[]{#l00048}[ 48]{.lineno}  [void]{.keywordtype}
[reset](classEurorackClock.html#acb69cc2c53c500576df9c12c025db2d1){.code}();
:::

::: {.line}
[]{#l00049}[ 49]{.lineno}  [void]{.keywordtype}
[reset](classEurorackClock.html#acb69cc2c53c500576df9c12c025db2d1){.code}([int]{.keywordtype}
selectedGate);
:::

::: {.line}
[]{#l00050}[ 50]{.lineno} 
:::

::: {.line}
[]{#l00051}[ 51]{.lineno}  [// Main tick function]{.comment}
:::

::: {.line}
[]{#l00052}[ 52]{.lineno}  [void]{.keywordtype}
[tick](classEurorackClock.html#a7881b7e717da092e55e7f8b0961b6ae0){.code}();
:::

::: {.line}
[]{#l00053}[ 53]{.lineno} 
:::

::: {.line}
[]{#l00054}[ 54]{.lineno}  [// Set the tempo of the clock]{.comment}
:::

::: {.line}
[]{#l00055}[ 55]{.lineno}  [void]{.keywordtype}
[setTempo](classEurorackClock.html#a3abcd345bde222e68cd86464ae1de2ae){.code}([float]{.keywordtype}
newTempo, [int]{.keywordtype}
[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.code});
:::

::: {.line}
[]{#l00056}[ 56]{.lineno} 
:::

::: {.line}
[]{#l00057}[ 57]{.lineno}  [// Get the current tempo]{.comment}
:::

::: {.line}
[]{#l00058}[ 58]{.lineno}  [int]{.keywordtype}
[getTempo](classEurorackClock.html#a3ee132275b852260555b9cd5cf9536c1){.code}()
[const]{.keyword};
:::

::: {.line}
[]{#l00059}[ 59]{.lineno} 
:::

::: {.line}
[]{#l00060}[ 60]{.lineno}  [// Flash the tempo LED]{.comment}
:::

::: {.line}
[]{#l00061}[
[61](classEurorackClock.html#acda15075afacc084a32c3cebbd077914){.line}]{.lineno} 
[void]{.keywordtype}
[flashTempoLed](classEurorackClock.html#acda15075afacc084a32c3cebbd077914){.code}();
:::

::: {.line}
[]{#l00062}[ 62]{.lineno} 
:::

::: {.line}
[]{#l00063}[ 63]{.lineno}  [// Handle the external clock
input]{.comment}
:::

::: {.line}
[]{#l00064}[ 64]{.lineno}  [void]{.keywordtype}
[handleExternalClock](classEurorackClock.html#ab526a6829f0489eae35811e86e7e80f8){.code}();
:::

::: {.line}
[]{#l00065}[ 65]{.lineno} 
:::

::: {.line}
[]{#l00066}[ 66]{.lineno}  [// Handle the MIDI clock input]{.comment}
:::

::: {.line}
[]{#l00067}[ 67]{.lineno}  [void]{.keywordtype}
[handleMidiClock](classEurorackClock.html#aa204c15662e069ecbf1ac4029116365d){.code}();
:::

::: {.line}
[]{#l00068}[ 68]{.lineno} 
:::

::: {.line}
[]{#l00069}[ 69]{.lineno}  [// Set the PPQN (Pulses Per Quarter
Note)]{.comment}
:::

::: {.line}
[]{#l00070}[ 70]{.lineno}  [void]{.keywordtype}
[setPPQN](classEurorackClock.html#a6f6b794fde098d908287afb357d30cb6){.code}([int]{.keywordtype}
[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.code});
:::

::: {.line}
[]{#l00071}[ 71]{.lineno} 
:::

::: {.line}
[]{#l00072}[ 72]{.lineno}  [// Set whether the clock is using external
tempo]{.comment}
:::

::: {.line}
[]{#l00073}[ 73]{.lineno}  [void]{.keywordtype}
[setExternalTempo](classEurorackClock.html#aa911fac3efe50a37cf2355046119461b){.code}([bool]{.keywordtype}
[isExternalTempo](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6){.code});
:::

::: {.line}
[]{#l00074}[ 74]{.lineno} 
:::

::: {.line}
[]{#l00075}[ 75]{.lineno}  [// Toggle the led on durationfor the tempo
selection]{.comment}
:::

::: {.line}
[]{#l00076}[ 76]{.lineno}  [void]{.keywordtype}
[toggleLedOnDuration](classEurorackClock.html#a45c55e3e1a02a319cf83c60658bff956){.code}([bool]{.keywordtype}
selectingTempo);
:::

::: {.line}
[]{#l00077}[ 77]{.lineno} 
:::

::: {.line}
[]{#l00078}[ 78]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00079}[ 79]{.lineno}  [// Helper functions]{.comment}
:::

::: {.line}
[]{#l00080}[ 80]{.lineno}  [void]{.keywordtype}
[updateTempoLed](classEurorackClock.html#a9cddc56f91761c38a32f850fe4920804){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00081}[ 81]{.lineno}  [void]{.keywordtype}
[updateFlashPulseCount](classEurorackClock.html#ae0c42a84a524c12c2f01e43682e5e36f){.code}();
:::

::: {.line}
[]{#l00082}[ 82]{.lineno}  [bool]{.keywordtype}
[shouldTriggerClockPulse](classEurorackClock.html#a4af4876927901a6cfc1619d2192fbb55){.code}();
:::

::: {.line}
[]{#l00083}[ 83]{.lineno}  [void]{.keywordtype}
[triggerClockPulse](classEurorackClock.html#a300b4ab6a0b925f185841a7bca2d80cc){.code}();
:::

::: {.line}
[]{#l00084}[ 84]{.lineno}  [void]{.keywordtype}
[handleResetTrigger](classEurorackClock.html#a50a5339b6a232a0e2db5bf7c621bbf9e){.code}();
:::

::: {.line}
[]{#l00085}[ 85]{.lineno}  [void]{.keywordtype}
[decideFlash](classEurorackClock.html#a55a6e89f8c69c7ee73392c89f8e155a8){.code}();
:::

::: {.line}
[]{#l00086}[ 86]{.lineno}  [void]{.keywordtype}
[triggerTempoLed](classEurorackClock.html#ad3159d70a7ed39e332b6564c2b0e227f){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00087}[ 87]{.lineno}  [void]{.keywordtype}
[triggerGates](classEurorackClock.html#a708240997f4112f2bcb7f9e25ab186eb){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00088}[ 88]{.lineno}  [void]{.keywordtype}
[handleTempoLed](classEurorackClock.html#a02c9cd57faf38ecdfec76e6d09d93b7c){.code}([unsigned]{.keywordtype}
[long]{.keywordtype} currentTime);
:::

::: {.line}
[]{#l00089}[ 89]{.lineno} 
:::

::: {.line}
[]{#l00090}[ 90]{.lineno}  [// Member variables]{.comment}
:::

::: {.line}
[]{#l00091}[
[91](classEurorackClock.html#a10369405a7858db967411284861e3439){.line}]{.lineno} 
[static]{.keyword} [EurorackClock](classEurorackClock.html){.code}\*
[instance](classEurorackClock.html#a10369405a7858db967411284861e3439){.code};
:::

::: {.line}
[]{#l00092}[
[92](classEurorackClock.html#a4a47006cfd467d0385bc605ea9157618){.line}]{.lineno} 
HardwareTimer\*
[timer](classEurorackClock.html#a4a47006cfd467d0385bc605ea9157618){.code};
:::

::: {.line}
[]{#l00093}[
[93](classEurorackClock.html#a08c566025baec51dfe9528636895dca1){.line}]{.lineno} 
[LED](classLED.html){.code}
[tempoLed](classEurorackClock.html#a08c566025baec51dfe9528636895dca1){.code};
:::

::: {.line}
[]{#l00094}[
[94](classEurorackClock.html#aa33304d81b503a6183633369016188a6){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[externalClock](classEurorackClock.html#aa33304d81b503a6183633369016188a6){.code};
:::

::: {.line}
[]{#l00095}[
[95](classEurorackClock.html#ae2d7164536f7921ac0751875fd67c83b){.line}]{.lineno} 
[InputPin](classInputPin.html){.code}
[resetButton](classEurorackClock.html#ae2d7164536f7921ac0751875fd67c83b){.code};
:::

::: {.line}
[]{#l00096}[
[96](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb){.line}]{.lineno} 
[Gates](classGates.html){.code}&
[gates](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb){.code};
:::

::: {.line}
[]{#l00097}[
[97](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921){.line}]{.lineno} 
[LEDs](classLEDs.html){.code}&
[leds](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921){.code};
:::

::: {.line}
[]{#l00098}[
[98](classEurorackClock.html#ae31434bf73c7c86490a70d5fa6dbe3fc){.line}]{.lineno} 
[float]{.keywordtype}
[tempo](classEurorackClock.html#ae31434bf73c7c86490a70d5fa6dbe3fc){.code};
:::

::: {.line}
[]{#l00099}[
[99](classEurorackClock.html#a2793ecd9e97550228e88fed371ed671d){.line}]{.lineno} 
[float]{.keywordtype}
[lastTickTime](classEurorackClock.html#a2793ecd9e97550228e88fed371ed671d){.code};
:::

::: {.line}
[]{#l00100}[
[100](classEurorackClock.html#aa316235771ee7584bbf198798fa62a09){.line}]{.lineno} 
[float]{.keywordtype}
[tickInterval](classEurorackClock.html#aa316235771ee7584bbf198798fa62a09){.code};
:::

::: {.line}
[]{#l00101}[
[101](classEurorackClock.html#aae0d70573973af8a7800dddd0fdaafe8){.line}]{.lineno} 
[float]{.keywordtype}
[lastExternalTickTime](classEurorackClock.html#aae0d70573973af8a7800dddd0fdaafe8){.code};
:::

::: {.line}
[]{#l00102}[
[102](classEurorackClock.html#a9f9bb4fdbf42fea86ba74511dde5285f){.line}]{.lineno} 
[static]{.keyword} [float]{.keywordtype}
[lastFlashTime](classEurorackClock.html#a9f9bb4fdbf42fea86ba74511dde5285f){.code};
:::

::: {.line}
[]{#l00103}[
[103](classEurorackClock.html#a3c863251f650f36cf05de825a300a7fb){.line}]{.lineno} 
[static]{.keyword} [int]{.keywordtype}
[flashPulseCount](classEurorackClock.html#a3c863251f650f36cf05de825a300a7fb){.code};
:::

::: {.line}
[]{#l00104}[
[104](classEurorackClock.html#a530f570bb7e4615cf304f473ac820133){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastMidiClockTime](classEurorackClock.html#a530f570bb7e4615cf304f473ac820133){.code};
:::

::: {.line}
[]{#l00105}[
[105](classEurorackClock.html#ae5b52e0dacc5a2e9a1f53f380f245cb1){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [unsigned]{.keywordtype}
[long]{.keywordtype}
[MIDI\_CLOCK\_TIMEOUT](classEurorackClock.html#ae5b52e0dacc5a2e9a1f53f380f245cb1){.code}
= 1000;
:::

::: {.line}
[]{#l00106}[
[106](classEurorackClock.html#aa19d61388803b784928c4ab209f18cab){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [int]{.keywordtype}
[LED\_ON\_DURATION](classEurorackClock.html#aa19d61388803b784928c4ab209f18cab){.code}
= 10;
:::

::: {.line}
[]{#l00107}[
[107](classEurorackClock.html#aa6f21a81192926804c417f3937608af0){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [int]{.keywordtype}
[LONG\_LED\_ON\_DURATION](classEurorackClock.html#aa6f21a81192926804c417f3937608af0){.code}
= 50;
:::

::: {.line}
[]{#l00108}[
[108](classEurorackClock.html#af1d98ae106104e4a771e42fda5b88d0c){.line}]{.lineno} 
[static]{.keyword} [const]{.keyword} [int]{.keywordtype}
[MIDI\_CLOCK\_PULSE\_COUNT](classEurorackClock.html#af1d98ae106104e4a771e42fda5b88d0c){.code}
= 24;
:::

::: {.line}
[]{#l00109}[
[109](classEurorackClock.html#a49c3ef3023e15397d463026b93229634){.line}]{.lineno} 
[int]{.keywordtype}
[ledOnDuration](classEurorackClock.html#a49c3ef3023e15397d463026b93229634){.code}
=
[LONG\_LED\_ON\_DURATION](classEurorackClock.html#aa6f21a81192926804c417f3937608af0){.code};
:::

::: {.line}
[]{#l00110}[
[110](classEurorackClock.html#a8f2268e67c1164e5acb449e2ff162892){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[ledOnTime](classEurorackClock.html#a8f2268e67c1164e5acb449e2ff162892){.code}
= 0;
:::

::: {.line}
[]{#l00111}[
[111](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e){.line}]{.lineno} 
[int]{.keywordtype}
[clockPin](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e){.code};
:::

::: {.line}
[]{#l00112}[
[112](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad){.line}]{.lineno} 
[int]{.keywordtype}
[resetPin](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad){.code};
:::

::: {.line}
[]{#l00113}[
[113](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.line}]{.lineno} 
[int]{.keywordtype}
[ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1){.code};
:::

::: {.line}
[]{#l00114}[
[114](classEurorackClock.html#a432c6c15fe407d014f6d2c4148346c4a){.line}]{.lineno} 
[bool]{.keywordtype}
[isRunning](classEurorackClock.html#a432c6c15fe407d014f6d2c4148346c4a){.code};
:::

::: {.line}
[]{#l00115}[
[115](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6){.line}]{.lineno} 
[bool]{.keywordtype}
[isExternalTempo](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6){.code};
:::

::: {.line}
[]{#l00116}[
[116](classEurorackClock.html#a707c76310f278ac9675d493d356623c1){.line}]{.lineno} 
[bool]{.keywordtype}
[isMidiClock](classEurorackClock.html#a707c76310f278ac9675d493d356623c1){.code};
:::

::: {.line}
[]{#l00117}[
[117](classEurorackClock.html#aa44f194d606bc5dd0caf3508bacc6857){.line}]{.lineno} 
[bool]{.keywordtype}
[timeToFlash](classEurorackClock.html#aa44f194d606bc5dd0caf3508bacc6857){.code};
:::

::: {.line}
[]{#l00118}[
[118](classEurorackClock.html#a1534c3851f19a278a70f7d6bad47b98d){.line}]{.lineno} 
[bool]{.keywordtype}
[resetTriggered](classEurorackClock.html#a1534c3851f19a278a70f7d6bad47b98d){.code};
:::

::: {.line}
[]{#l00119}[
[119](classEurorackClock.html#a0622d65ad3d8f7542ecef32415a2bfde){.line}]{.lineno} 
[float]{.keywordtype}
[externalTempo](classEurorackClock.html#a0622d65ad3d8f7542ecef32415a2bfde){.code};
:::

::: {.line}
[]{#l00120}[
[120](classEurorackClock.html#aa1f32b9296ee482b8cc4a5a5b0246ad4){.line}]{.lineno} 
[int]{.keywordtype}
[lastClockState](classEurorackClock.html#aa1f32b9296ee482b8cc4a5a5b0246ad4){.code};
:::

::: {.line}
[]{#l00121}[
[121](classEurorackClock.html#abdd7383cccac419acc8fb29ef21c11d0){.line}]{.lineno} 
[unsigned]{.keywordtype} [long]{.keywordtype}
[lastClockTime](classEurorackClock.html#abdd7383cccac419acc8fb29ef21c11d0){.code};
:::

::: {.line}
[]{#l00122}[
[122](classEurorackClock.html#a52d17e9dbf5701acca86bee03a16b730){.line}]{.lineno} 
[int]{.keywordtype}
[tickCount](classEurorackClock.html#a52d17e9dbf5701acca86bee03a16b730){.code};
:::

::: {.line}
[]{#l00123}[ 123]{.lineno} };
:::

::: {.line}
[]{#l00124}[ 124]{.lineno} 
:::

::: {.line}
[]{#l00125}[ 125]{.lineno} [\#endif ]{.preprocessor}[//
EURORACKCLOCK\_H]{.comment}
:::

::: {#aConstants_8h_html .ttc}
::: {.ttname}
[Constants.h](Constants_8h.html)
:::
:::

::: {#aGates_8h_html .ttc}
::: {.ttname}
[Gates.h](Gates_8h.html)
:::
:::

::: {#aLED_8h_html .ttc}
::: {.ttname}
[LED.h](LED_8h.html)
:::
:::

::: {#aLEDs_8h_html .ttc}
::: {.ttname}
[LEDs.h](LEDs_8h.html)
:::
:::

::: {#aPin_8h_html .ttc}
::: {.ttname}
[Pin.h](Pin_8h.html)
:::
:::

::: {#aclassEurorackClock_html .ttc}
::: {.ttname}
[EurorackClock](classEurorackClock.html)
:::

::: {.ttdef}
**Definition:** EurorackClock.h:21
:::
:::

::: {#aclassEurorackClock_html_a013e9fa1f3c6af6fb7517cdca76905ad .ttc}
::: {.ttname}
[EurorackClock::resetPin](classEurorackClock.html#a013e9fa1f3c6af6fb7517cdca76905ad)
:::

::: {.ttdeci}
int resetPin
:::

::: {.ttdef}
**Definition:** EurorackClock.h:112
:::
:::

::: {#aclassEurorackClock_html_a02c9cd57faf38ecdfec76e6d09d93b7c .ttc}
::: {.ttname}
[EurorackClock::handleTempoLed](classEurorackClock.html#a02c9cd57faf38ecdfec76e6d09d93b7c)
:::

::: {.ttdeci}
void handleTempoLed(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:232
:::
:::

::: {#aclassEurorackClock_html_a0622d65ad3d8f7542ecef32415a2bfde .ttc}
::: {.ttname}
[EurorackClock::externalTempo](classEurorackClock.html#a0622d65ad3d8f7542ecef32415a2bfde)
:::

::: {.ttdeci}
float externalTempo
:::

::: {.ttdef}
**Definition:** EurorackClock.h:119
:::
:::

::: {#aclassEurorackClock_html_a08c566025baec51dfe9528636895dca1 .ttc}
::: {.ttname}
[EurorackClock::tempoLed](classEurorackClock.html#a08c566025baec51dfe9528636895dca1)
:::

::: {.ttdeci}
LED tempoLed
:::

::: {.ttdef}
**Definition:** EurorackClock.h:93
:::
:::

::: {#aclassEurorackClock_html_a10369405a7858db967411284861e3439 .ttc}
::: {.ttname}
[EurorackClock::instance](classEurorackClock.html#a10369405a7858db967411284861e3439)
:::

::: {.ttdeci}
static EurorackClock \* instance
:::

::: {.ttdef}
**Definition:** EurorackClock.h:91
:::
:::

::: {#aclassEurorackClock_html_a1534c3851f19a278a70f7d6bad47b98d .ttc}
::: {.ttname}
[EurorackClock::resetTriggered](classEurorackClock.html#a1534c3851f19a278a70f7d6bad47b98d)
:::

::: {.ttdeci}
bool resetTriggered
:::

::: {.ttdef}
**Definition:** EurorackClock.h:118
:::
:::

::: {#aclassEurorackClock_html_a2793ecd9e97550228e88fed371ed671d .ttc}
::: {.ttname}
[EurorackClock::lastTickTime](classEurorackClock.html#a2793ecd9e97550228e88fed371ed671d)
:::

::: {.ttdeci}
float lastTickTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:99
:::
:::

::: {#aclassEurorackClock_html_a300b4ab6a0b925f185841a7bca2d80cc .ttc}
::: {.ttname}
[EurorackClock::triggerClockPulse](classEurorackClock.html#a300b4ab6a0b925f185841a7bca2d80cc)
:::

::: {.ttdeci}
void triggerClockPulse()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:198
:::
:::

::: {#aclassEurorackClock_html_a3abcd345bde222e68cd86464ae1de2ae .ttc}
::: {.ttname}
[EurorackClock::setTempo](classEurorackClock.html#a3abcd345bde222e68cd86464ae1de2ae)
:::

::: {.ttdeci}
void setTempo(float newTempo, int ppqn)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:44
:::
:::

::: {#aclassEurorackClock_html_a3c863251f650f36cf05de825a300a7fb .ttc}
::: {.ttname}
[EurorackClock::flashPulseCount](classEurorackClock.html#a3c863251f650f36cf05de825a300a7fb)
:::

::: {.ttdeci}
static int flashPulseCount
:::

::: {.ttdef}
**Definition:** EurorackClock.h:103
:::
:::

::: {#aclassEurorackClock_html_a3ee132275b852260555b9cd5cf9536c1 .ttc}
::: {.ttname}
[EurorackClock::getTempo](classEurorackClock.html#a3ee132275b852260555b9cd5cf9536c1)
:::

::: {.ttdeci}
int getTempo() const
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:66
:::
:::

::: {#aclassEurorackClock_html_a432c6c15fe407d014f6d2c4148346c4a .ttc}
::: {.ttname}
[EurorackClock::isRunning](classEurorackClock.html#a432c6c15fe407d014f6d2c4148346c4a)
:::

::: {.ttdeci}
bool isRunning
:::

::: {.ttdef}
**Definition:** EurorackClock.h:114
:::
:::

::: {#aclassEurorackClock_html_a45c55e3e1a02a319cf83c60658bff956 .ttc}
::: {.ttname}
[EurorackClock::toggleLedOnDuration](classEurorackClock.html#a45c55e3e1a02a319cf83c60658bff956)
:::

::: {.ttdeci}
void toggleLedOnDuration(bool selectingTempo)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:71
:::
:::

::: {#aclassEurorackClock_html_a49c3ef3023e15397d463026b93229634 .ttc}
::: {.ttname}
[EurorackClock::ledOnDuration](classEurorackClock.html#a49c3ef3023e15397d463026b93229634)
:::

::: {.ttdeci}
int ledOnDuration
:::

::: {.ttdef}
**Definition:** EurorackClock.h:109
:::
:::

::: {#aclassEurorackClock_html_a4a47006cfd467d0385bc605ea9157618 .ttc}
::: {.ttname}
[EurorackClock::timer](classEurorackClock.html#a4a47006cfd467d0385bc605ea9157618)
:::

::: {.ttdeci}
HardwareTimer \* timer
:::

::: {.ttdef}
**Definition:** EurorackClock.h:92
:::
:::

::: {#aclassEurorackClock_html_a4af4876927901a6cfc1619d2192fbb55 .ttc}
::: {.ttname}
[EurorackClock::shouldTriggerClockPulse](classEurorackClock.html#a4af4876927901a6cfc1619d2192fbb55)
:::

::: {.ttdeci}
bool shouldTriggerClockPulse()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:179
:::
:::

::: {#aclassEurorackClock_html_a50a5339b6a232a0e2db5bf7c621bbf9e .ttc}
::: {.ttname}
[EurorackClock::handleResetTrigger](classEurorackClock.html#a50a5339b6a232a0e2db5bf7c621bbf9e)
:::

::: {.ttdeci}
void handleResetTrigger()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:100
:::
:::

::: {#aclassEurorackClock_html_a52d17e9dbf5701acca86bee03a16b730 .ttc}
::: {.ttname}
[EurorackClock::tickCount](classEurorackClock.html#a52d17e9dbf5701acca86bee03a16b730)
:::

::: {.ttdeci}
int tickCount
:::

::: {.ttdef}
**Definition:** EurorackClock.h:122
:::
:::

::: {#aclassEurorackClock_html_a530f570bb7e4615cf304f473ac820133 .ttc}
::: {.ttname}
[EurorackClock::lastMidiClockTime](classEurorackClock.html#a530f570bb7e4615cf304f473ac820133)
:::

::: {.ttdeci}
unsigned long lastMidiClockTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:104
:::
:::

::: {#aclassEurorackClock_html_a53f9514598facb1b47a35e2d0cfc5bf6 .ttc}
::: {.ttname}
[EurorackClock::isExternalTempo](classEurorackClock.html#a53f9514598facb1b47a35e2d0cfc5bf6)
:::

::: {.ttdeci}
bool isExternalTempo
:::

::: {.ttdef}
**Definition:** EurorackClock.h:115
:::
:::

::: {#aclassEurorackClock_html_a55a6e89f8c69c7ee73392c89f8e155a8 .ttc}
::: {.ttname}
[EurorackClock::decideFlash](classEurorackClock.html#a55a6e89f8c69c7ee73392c89f8e155a8)
:::

::: {.ttdeci}
void decideFlash()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:110
:::
:::

::: {#aclassEurorackClock_html_a6582607e7c111bb17bd4656bade25880 .ttc}
::: {.ttname}
[EurorackClock::clockState](classEurorackClock.html#a6582607e7c111bb17bd4656bade25880)
:::

::: {.ttdeci}
ClockState clockState
:::

::: {.ttdef}
**Definition:** EurorackClock.h:22
:::
:::

::: {#aclassEurorackClock_html_a6f6b794fde098d908287afb357d30cb6 .ttc}
::: {.ttname}
[EurorackClock::setPPQN](classEurorackClock.html#a6f6b794fde098d908287afb357d30cb6)
:::

::: {.ttdeci}
void setPPQN(int ppqn)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:151
:::
:::

::: {#aclassEurorackClock_html_a707c76310f278ac9675d493d356623c1 .ttc}
::: {.ttname}
[EurorackClock::isMidiClock](classEurorackClock.html#a707c76310f278ac9675d493d356623c1)
:::

::: {.ttdeci}
bool isMidiClock
:::

::: {.ttdef}
**Definition:** EurorackClock.h:116
:::
:::

::: {#aclassEurorackClock_html_a708240997f4112f2bcb7f9e25ab186eb .ttc}
::: {.ttname}
[EurorackClock::triggerGates](classEurorackClock.html#a708240997f4112f2bcb7f9e25ab186eb)
:::

::: {.ttdeci}
void triggerGates(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:207
:::
:::

::: {#aclassEurorackClock_html_a7881b7e717da092e55e7f8b0961b6ae0 .ttc}
::: {.ttname}
[EurorackClock::tick](classEurorackClock.html#a7881b7e717da092e55e7f8b0961b6ae0)
:::

::: {.ttdeci}
void tick()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:168
:::
:::

::: {#aclassEurorackClock_html_a808f0d1dc014fd9f8541433bc26ed921 .ttc}
::: {.ttname}
[EurorackClock::leds](classEurorackClock.html#a808f0d1dc014fd9f8541433bc26ed921)
:::

::: {.ttdeci}
LEDs & leds
:::

::: {.ttdef}
**Definition:** EurorackClock.h:97
:::
:::

::: {#aclassEurorackClock_html_a85a00dfdd0cd08c0b3a9d90acc5cc66b .ttc}
::: {.ttname}
[EurorackClock::start](classEurorackClock.html#a85a00dfdd0cd08c0b3a9d90acc5cc66b)
:::

::: {.ttdeci}
void start()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:52
:::
:::

::: {#aclassEurorackClock_html_a8f2268e67c1164e5acb449e2ff162892 .ttc}
::: {.ttname}
[EurorackClock::ledOnTime](classEurorackClock.html#a8f2268e67c1164e5acb449e2ff162892)
:::

::: {.ttdeci}
unsigned long ledOnTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:110
:::
:::

::: {#aclassEurorackClock_html_a9cddc56f91761c38a32f850fe4920804 .ttc}
::: {.ttname}
[EurorackClock::updateTempoLed](classEurorackClock.html#a9cddc56f91761c38a32f850fe4920804)
:::

::: {.ttdeci}
void updateTempoLed(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:76
:::
:::

::: {#aclassEurorackClock_html_a9f9bb4fdbf42fea86ba74511dde5285f .ttc}
::: {.ttname}
[EurorackClock::lastFlashTime](classEurorackClock.html#a9f9bb4fdbf42fea86ba74511dde5285f)
:::

::: {.ttdeci}
static float lastFlashTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:102
:::
:::

::: {#aclassEurorackClock_html_aa19d61388803b784928c4ab209f18cab .ttc}
::: {.ttname}
[EurorackClock::LED\_ON\_DURATION](classEurorackClock.html#aa19d61388803b784928c4ab209f18cab)
:::

::: {.ttdeci}
static const int LED\_ON\_DURATION
:::

::: {.ttdef}
**Definition:** EurorackClock.h:106
:::
:::

::: {#aclassEurorackClock_html_aa1f32b9296ee482b8cc4a5a5b0246ad4 .ttc}
::: {.ttname}
[EurorackClock::lastClockState](classEurorackClock.html#aa1f32b9296ee482b8cc4a5a5b0246ad4)
:::

::: {.ttdeci}
int lastClockState
:::

::: {.ttdef}
**Definition:** EurorackClock.h:120
:::
:::

::: {#aclassEurorackClock_html_aa204c15662e069ecbf1ac4029116365d .ttc}
::: {.ttname}
[EurorackClock::handleMidiClock](classEurorackClock.html#aa204c15662e069ecbf1ac4029116365d)
:::

::: {.ttdeci}
void handleMidiClock()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:135
:::
:::

::: {#aclassEurorackClock_html_aa316235771ee7584bbf198798fa62a09 .ttc}
::: {.ttname}
[EurorackClock::tickInterval](classEurorackClock.html#aa316235771ee7584bbf198798fa62a09)
:::

::: {.ttdeci}
float tickInterval
:::

::: {.ttdef}
**Definition:** EurorackClock.h:100
:::
:::

::: {#aclassEurorackClock_html_aa33304d81b503a6183633369016188a6 .ttc}
::: {.ttname}
[EurorackClock::externalClock](classEurorackClock.html#aa33304d81b503a6183633369016188a6)
:::

::: {.ttdeci}
InputPin externalClock
:::

::: {.ttdef}
**Definition:** EurorackClock.h:94
:::
:::

::: {#aclassEurorackClock_html_aa44f194d606bc5dd0caf3508bacc6857 .ttc}
::: {.ttname}
[EurorackClock::timeToFlash](classEurorackClock.html#aa44f194d606bc5dd0caf3508bacc6857)
:::

::: {.ttdeci}
bool timeToFlash
:::

::: {.ttdef}
**Definition:** EurorackClock.h:117
:::
:::

::: {#aclassEurorackClock_html_aa6f21a81192926804c417f3937608af0 .ttc}
::: {.ttname}
[EurorackClock::LONG\_LED\_ON\_DURATION](classEurorackClock.html#aa6f21a81192926804c417f3937608af0)
:::

::: {.ttdeci}
static const int LONG\_LED\_ON\_DURATION
:::

::: {.ttdef}
**Definition:** EurorackClock.h:107
:::
:::

::: {#aclassEurorackClock_html_aa911fac3efe50a37cf2355046119461b .ttc}
::: {.ttname}
[EurorackClock::setExternalTempo](classEurorackClock.html#aa911fac3efe50a37cf2355046119461b)
:::

::: {.ttdeci}
void setExternalTempo(bool isExternalTempo)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:156
:::
:::

::: {#aclassEurorackClock_html_aae0d70573973af8a7800dddd0fdaafe8 .ttc}
::: {.ttname}
[EurorackClock::lastExternalTickTime](classEurorackClock.html#aae0d70573973af8a7800dddd0fdaafe8)
:::

::: {.ttdeci}
float lastExternalTickTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:101
:::
:::

::: {#aclassEurorackClock_html_ab4640da7e0f07985916b5ed44a6afbd2 .ttc}
::: {.ttname}
[EurorackClock::EurorackClock](classEurorackClock.html#ab4640da7e0f07985916b5ed44a6afbd2)
:::

::: {.ttdeci}
EurorackClock(int clockPin, int resetPin, int tempoLedPin, Gates &gates,
LEDs &leds)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:18
:::
:::

::: {#aclassEurorackClock_html_ab526a6829f0489eae35811e86e7e80f8 .ttc}
::: {.ttname}
[EurorackClock::handleExternalClock](classEurorackClock.html#ab526a6829f0489eae35811e86e7e80f8)
:::

::: {.ttdeci}
void handleExternalClock()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:120
:::
:::

::: {#aclassEurorackClock_html_abdd7383cccac419acc8fb29ef21c11d0 .ttc}
::: {.ttname}
[EurorackClock::lastClockTime](classEurorackClock.html#abdd7383cccac419acc8fb29ef21c11d0)
:::

::: {.ttdeci}
unsigned long lastClockTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:121
:::
:::

::: {#aclassEurorackClock_html_ac6279fbb8d7396de017252b39b3f266b .ttc}
::: {.ttname}
[EurorackClock::resetInterruptHandler](classEurorackClock.html#ac6279fbb8d7396de017252b39b3f266b)
:::

::: {.ttdeci}
static void resetInterruptHandler()
:::

::: {.ttdef}
**Definition:** EurorackClock.h:43
:::
:::

::: {#aclassEurorackClock_html_ac829929df9b7372bcd3b2c609ecbf9a1 .ttc}
::: {.ttname}
[EurorackClock::ppqn](classEurorackClock.html#ac829929df9b7372bcd3b2c609ecbf9a1)
:::

::: {.ttdeci}
int ppqn
:::

::: {.ttdef}
**Definition:** EurorackClock.h:113
:::
:::

::: {#aclassEurorackClock_html_acb69cc2c53c500576df9c12c025db2d1 .ttc}
::: {.ttname}
[EurorackClock::reset](classEurorackClock.html#acb69cc2c53c500576df9c12c025db2d1)
:::

::: {.ttdeci}
void reset()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:241
:::
:::

::: {#aclassEurorackClock_html_acda15075afacc084a32c3cebbd077914 .ttc}
::: {.ttname}
[EurorackClock::flashTempoLed](classEurorackClock.html#acda15075afacc084a32c3cebbd077914)
:::

::: {.ttdeci}
void flashTempoLed()
:::
:::

::: {#aclassEurorackClock_html_ad3159d70a7ed39e332b6564c2b0e227f .ttc}
::: {.ttname}
[EurorackClock::triggerTempoLed](classEurorackClock.html#ad3159d70a7ed39e332b6564c2b0e227f)
:::

::: {.ttdeci}
void triggerTempoLed(unsigned long currentTime)
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:186
:::
:::

::: {#aclassEurorackClock_html_ad92731fd0b8203b283be37fd83ab9e7b .ttc}
::: {.ttname}
[EurorackClock::stop](classEurorackClock.html#ad92731fd0b8203b283be37fd83ab9e7b)
:::

::: {.ttdeci}
void stop()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:59
:::
:::

::: {#aclassEurorackClock_html_ae0c42a84a524c12c2f01e43682e5e36f .ttc}
::: {.ttname}
[EurorackClock::updateFlashPulseCount](classEurorackClock.html#ae0c42a84a524c12c2f01e43682e5e36f)
:::

::: {.ttdeci}
void updateFlashPulseCount()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:91
:::
:::

::: {#aclassEurorackClock_html_ae2d7164536f7921ac0751875fd67c83b .ttc}
::: {.ttname}
[EurorackClock::resetButton](classEurorackClock.html#ae2d7164536f7921ac0751875fd67c83b)
:::

::: {.ttdeci}
InputPin resetButton
:::

::: {.ttdef}
**Definition:** EurorackClock.h:95
:::
:::

::: {#aclassEurorackClock_html_ae31434bf73c7c86490a70d5fa6dbe3fc .ttc}
::: {.ttname}
[EurorackClock::tempo](classEurorackClock.html#ae31434bf73c7c86490a70d5fa6dbe3fc)
:::

::: {.ttdeci}
float tempo
:::

::: {.ttdef}
**Definition:** EurorackClock.h:98
:::
:::

::: {#aclassEurorackClock_html_ae5b52e0dacc5a2e9a1f53f380f245cb1 .ttc}
::: {.ttname}
[EurorackClock::MIDI\_CLOCK\_TIMEOUT](classEurorackClock.html#ae5b52e0dacc5a2e9a1f53f380f245cb1)
:::

::: {.ttdeci}
static const unsigned long MIDI\_CLOCK\_TIMEOUT
:::

::: {.ttdef}
**Definition:** EurorackClock.h:105
:::
:::

::: {#aclassEurorackClock_html_ae8c82303a099d61cd967306957419d4e .ttc}
::: {.ttname}
[EurorackClock::clockPin](classEurorackClock.html#ae8c82303a099d61cd967306957419d4e)
:::

::: {.ttdeci}
int clockPin
:::

::: {.ttdef}
**Definition:** EurorackClock.h:111
:::
:::

::: {#aclassEurorackClock_html_aec074cdc6187413e42bb4e1cce6c07c8 .ttc}
::: {.ttname}
[EurorackClock::interruptHandler](classEurorackClock.html#aec074cdc6187413e42bb4e1cce6c07c8)
:::

::: {.ttdeci}
static void interruptHandler()
:::

::: {.ttdef}
**Definition:** EurorackClock.h:38
:::
:::

::: {#aclassEurorackClock_html_af1d98ae106104e4a771e42fda5b88d0c .ttc}
::: {.ttname}
[EurorackClock::MIDI\_CLOCK\_PULSE\_COUNT](classEurorackClock.html#af1d98ae106104e4a771e42fda5b88d0c)
:::

::: {.ttdeci}
static const int MIDI\_CLOCK\_PULSE\_COUNT
:::

::: {.ttdef}
**Definition:** EurorackClock.h:108
:::
:::

::: {#aclassEurorackClock_html_af237ef8da045ffc906547346b8e1e20d .ttc}
::: {.ttname}
[EurorackClock::setup](classEurorackClock.html#af237ef8da045ffc906547346b8e1e20d)
:::

::: {.ttdeci}
void setup()
:::

::: {.ttdef}
**Definition:** EurorackClock.cpp:37
:::
:::

::: {#aclassEurorackClock_html_af7e11cb46ab51c58609123ae13c236eb .ttc}
::: {.ttname}
[EurorackClock::gates](classEurorackClock.html#af7e11cb46ab51c58609123ae13c236eb)
:::

::: {.ttdeci}
Gates & gates
:::

::: {.ttdef}
**Definition:** EurorackClock.h:96
:::
:::

::: {#aclassGates_html .ttc}
::: {.ttname}
[Gates](classGates.html)
:::

::: {.ttdef}
**Definition:** Gates.h:10
:::
:::

::: {#aclassInputPin_html .ttc}
::: {.ttname}
[InputPin](classInputPin.html)
:::

::: {.ttdef}
**Definition:** Pin.h:20
:::
:::

::: {#aclassLED_html .ttc}
::: {.ttname}
[LED](classLED.html)
:::

::: {.ttdef}
**Definition:** LED.h:6
:::
:::

::: {#aclassLEDs_html .ttc}
::: {.ttname}
[LEDs](classLEDs.html)
:::

::: {.ttdef}
**Definition:** LEDs.h:7
:::
:::

::: {#astructClockState_html .ttc}
::: {.ttname}
[ClockState](structClockState.html)
:::

::: {.ttdef}
**Definition:** EurorackClock.h:12
:::
:::

::: {#astructClockState_html_a82ae8c87efe27db5487b3241f205f652 .ttc}
::: {.ttname}
[ClockState::tickInterval](structClockState.html#a82ae8c87efe27db5487b3241f205f652)
:::

::: {.ttdeci}
unsigned long tickInterval
:::

::: {.ttdef}
**Definition:** EurorackClock.h:14
:::
:::

::: {#astructClockState_html_a95ea496cd652c244f1b016ae0d4e0299 .ttc}
::: {.ttname}
[ClockState::lastTickTime](structClockState.html#a95ea496cd652c244f1b016ae0d4e0299)
:::

::: {.ttdeci}
unsigned long lastTickTime
:::

::: {.ttdef}
**Definition:** EurorackClock.h:13
:::
:::

::: {#astructClockState_html_aaa69bdf8d4cdfeb9fea0bf2bce02a1e2 .ttc}
::: {.ttname}
[ClockState::ClockState](structClockState.html#aaa69bdf8d4cdfeb9fea0bf2bce02a1e2)
:::

::: {.ttdeci}
ClockState()
:::

::: {.ttdef}
**Definition:** EurorackClock.h:17
:::
:::

::: {#astructClockState_html_ad2352e0588e3fc275e0cf3afa943c293 .ttc}
::: {.ttname}
[ClockState::isRunning](structClockState.html#ad2352e0588e3fc275e0cf3afa943c293)
:::

::: {.ttdeci}
bool isRunning
:::

::: {.ttdef}
**Definition:** EurorackClock.h:15
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
