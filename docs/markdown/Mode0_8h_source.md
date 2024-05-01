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
Mode0.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Mode0_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MODE0\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MODE0\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ 4]{.lineno} [\#include
\"[Mode.h](Mode_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [\#include
\"[Encoder.h](Encoder_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00006}[ 6]{.lineno} [\#include
\"[Gates.h](Gates_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00007}[ 7]{.lineno} [\#include
\"[LEDController.h](LEDController_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00008}[ 8]{.lineno} [\#include
\"[EurorackClock.h](EurorackClock_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00009}[ 9]{.lineno} [\#include
\"[MIDIHandler.h](MIDIHandler_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00010}[ 10]{.lineno} [\#include
\"[Constants.h](Constants_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00011}[ 11]{.lineno} [\#include
\"[ResetButton.h](ResetButton_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00012}[ 12]{.lineno} [\#include
\"[InputHandler.h](InputHandler_8h.html){.code}\"]{.preprocessor}
:::

::: {.line}
[]{#l00013}[ 13]{.lineno} [\#include \<vector\>]{.preprocessor}
:::

::: {.line}
[]{#l00014}[ 14]{.lineno} 
:::

::: {.line}
[]{#l00015}[ [15](classMode0.html){.line}]{.lineno} [class
]{.keyword}[Mode0](classMode0.html){.code} : [public]{.keyword}
[Mode](classMode.html){.code} {
:::

::: {.line}
[]{#l00016}[ 16]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00017}[ 17]{.lineno} 
[Mode0](classMode0.html#ac6c68a326df4139c0ea7cae89f79e923){.code}([Encoder](classEncoder.html){.code}&
[encoder](classMode0.html#ab92b642845ecfe37182477b6de246e6f){.code},
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode0.html#a8b44b908b0df280399ed62e46d23453b){.code},
:::

::: {.line}
[]{#l00019}[ 19]{.lineno}  [Gates](classGates.html){.code}&
[gates](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e){.code},
:::

::: {.line}
[]{#l00020}[ 20]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf){.code},
:::

::: {.line}
[]{#l00021}[ 21]{.lineno}  [MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f){.code},
:::

::: {.line}
[]{#l00022}[ 22]{.lineno}  [ResetButton](classResetButton.html){.code}&
[resetButton](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d){.code},
:::

::: {.line}
[]{#l00023}[ 23]{.lineno} 
[EurorackClock](classEurorackClock.html){.code}&
[clock](classMode0.html#ac7c269771d185bfd70c9610aa15d4873){.code});
:::

::: {.line}
[]{#l00024}[ 24]{.lineno}  [void]{.keywordtype}
[handleSinglePress](classMode0.html#afc4ad8cc4c9c59838c774c3c72a05f33){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00025}[ 25]{.lineno}  [void]{.keywordtype}
[handleDoublePress](classMode0.html#ab2e88db8ebc6a5c3bfe60d63715870da){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00026}[ 26]{.lineno}  [void]{.keywordtype}
[handleLongPress](classMode0.html#aa5837e66a7d361a00f8799766ee8441e){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00027}[ 27]{.lineno}  [void]{.keywordtype}
[handlePressReleased](classMode0.html#a843a9f1c23e45dc2e6b3023d578402e6){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00028}[ 28]{.lineno}  [void]{.keywordtype}
[handleSelectionStates](classMode0.html#a1d2a907c0057865467210bf45f45e9c4){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00029}[ 29]{.lineno}  [void]{.keywordtype}
[handleResetSinglePress](classMode0.html#ab49600e807fdc67b715aa5844e0008a7){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00030}[ 30]{.lineno}  [void]{.keywordtype}
[handleResetDoublePress](classMode0.html#a5edace264c12da595e48be504f559d97){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00031}[ 31]{.lineno}  [void]{.keywordtype}
[handleResetLongPress](classMode0.html#a3f1e02184589f15ce99156b58de814ce){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00032}[ 32]{.lineno}  [void]{.keywordtype}
[handleResetPressReleased](classMode0.html#aa3ef073cd777560821c68b82405c9696){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00033}[ 33]{.lineno}  [void]{.keywordtype}
[setup](classMode0.html#a3ddf8efd26e32d22530a1c37630bb341){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00034}[ 34]{.lineno}  [void]{.keywordtype}
[teardown](classMode0.html#a898c2e53000955e37ef93983de7c7a54){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00035}[ 35]{.lineno}  [void]{.keywordtype}
[update](classMode0.html#a0e20f81420b0dcd427f5cd9789cfdd4a){.code}()
[override]{.keyword};
:::

::: {.line}
[]{#l00036}[
[36](classMode0.html#a08f962ccd2bb1a958d8b6816af2af223){.line}]{.lineno} 
[void]{.keywordtype}
[setDivisionPPQN](classMode0.html#a08f962ccd2bb1a958d8b6816af2af223){.code}([int]{.keywordtype}
ppqn);
:::

::: {.line}
[]{#l00037}[ 37]{.lineno}  [void]{.keywordtype}
[setDefaultDivisionIndex](classMode0.html#aba40b7f6eb84a6e8b9052081c9346e48){.code}();
:::

::: {.line}
[]{#l00038}[ 38]{.lineno} 
:::

::: {.line}
[]{#l00039}[ 39]{.lineno} [private]{.keyword}:
:::

::: {.line}
[]{#l00040}[ 40]{.lineno}  [void]{.keywordtype}
[handleEncoder](classMode0.html#a794e94163599470716ea944754ddd337){.code}();
:::

::: {.line}
[]{#l00041}[ 41]{.lineno}  [void]{.keywordtype}
[handleButton](classMode0.html#a27a112beb9ebe4648830681deab01ca0){.code}([Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9){.code}
buttonState);
:::

::: {.line}
[]{#l00042}[ 42]{.lineno}  [void]{.keywordtype}
[handleResetButton](classMode0.html#ae55cb650c7a6ace775a3a796097d603a){.code}([ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd){.code}
buttonState);
:::

::: {.line}
[]{#l00043}[ 43]{.lineno}  [void]{.keywordtype}
[handleCVInput](classMode0.html#ab7d9744dbbb6b913d5093a20ba3eba36){.code}();
:::

::: {.line}
[]{#l00044}[ 44]{.lineno}  [void]{.keywordtype}
[handleTempoSelection](classMode0.html#a3841d23139d59cdedfe95272724ca71f){.code}();
:::

::: {.line}
[]{#l00045}[
[45](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf){.line}]{.lineno} 
[LEDController](classLEDController.html){.code}&
[ledController](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf){.code};
:::

::: {.line}
[]{#l00046}[
[46](classMode0.html#ab92b642845ecfe37182477b6de246e6f){.line}]{.lineno} 
[Encoder](classEncoder.html){.code}&
[encoder](classMode0.html#ab92b642845ecfe37182477b6de246e6f){.code};
:::

::: {.line}
[]{#l00047}[
[47](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d){.line}]{.lineno} 
[ResetButton](classResetButton.html){.code}&
[resetButton](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d){.code};
:::

::: {.line}
[]{#l00048}[
[48](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e){.line}]{.lineno} 
[Gates](classGates.html){.code}&
[gates](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e){.code};
:::

::: {.line}
[]{#l00049}[
[49](classMode0.html#ac7c269771d185bfd70c9610aa15d4873){.line}]{.lineno} 
[EurorackClock](classEurorackClock.html){.code}&
[clock](classMode0.html#ac7c269771d185bfd70c9610aa15d4873){.code};
:::

::: {.line}
[]{#l00050}[
[50](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f){.line}]{.lineno} 
[MIDIHandler](classMIDIHandler.html){.code}&
[midiHandler](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f){.code};
:::

::: {.line}
[]{#l00051}[
[51](classMode0.html#a8b44b908b0df280399ed62e46d23453b){.line}]{.lineno} 
[InputHandler](classInputHandler.html){.code}&
[inputHandler](classMode0.html#a8b44b908b0df280399ed62e46d23453b){.code};
:::

::: {.line}
[]{#l00052}[
[52](classMode0.html#af335be379b0fd0883e5797b0e0f398ff){.line}]{.lineno} 
[bool]{.keywordtype}
[inDivisionSelection](classMode0.html#af335be379b0fd0883e5797b0e0f398ff){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00053}[
[53](classMode0.html#ae518d870e6feb9faed5463f7e82164a4){.line}]{.lineno} 
[bool]{.keywordtype}
[externalTempo](classMode0.html#ae518d870e6feb9faed5463f7e82164a4){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00054}[
[54](classMode0.html#a4cf5950c179f5ee11cb79b87af84f5d3){.line}]{.lineno} 
[bool]{.keywordtype}
[singlePressHandled](classMode0.html#a4cf5950c179f5ee11cb79b87af84f5d3){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00055}[
[55](classMode0.html#ae773b1cc8d0a7a3d3db4153827b2f1cc){.line}]{.lineno} 
[bool]{.keywordtype}
[singleResetPressHandled](classMode0.html#ae773b1cc8d0a7a3d3db4153827b2f1cc){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00056}[
[56](classMode0.html#a6f0459d85f755de7775f3de610ee74b3){.line}]{.lineno} 
[int]{.keywordtype}
[tempoIncrement](classMode0.html#a6f0459d85f755de7775f3de610ee74b3){.code}
= 1;
:::

::: {.line}
[]{#l00057}[
[57](classMode0.html#a931032227e5a4553f7eee3210182dba8){.line}]{.lineno} 
[const]{.keyword} [int]{.keywordtype}
[minTempo](classMode0.html#a931032227e5a4553f7eee3210182dba8){.code} =
20;
:::

::: {.line}
[]{#l00058}[
[58](classMode0.html#a53b9693eeb9e70d2200fa5fa058ff4b9){.line}]{.lineno} 
[const]{.keyword} [int]{.keywordtype}
[maxTempo](classMode0.html#a53b9693eeb9e70d2200fa5fa058ff4b9){.code} =
340;
:::

::: {.line}
[]{#l00059}[
[59](classMode0.html#aaf228318b6eb380ab81e0329010d3825){.line}]{.lineno} 
[int]{.keywordtype}
[divisionIndex](classMode0.html#aaf228318b6eb380ab81e0329010d3825){.code}
= 24;
:::

::: {.line}
[]{#l00060}[
[60](classMode0.html#ae791813273bde4c769a69ff84a60f82a){.line}]{.lineno} 
[int]{.keywordtype}
[selectedGate](classMode0.html#ae791813273bde4c769a69ff84a60f82a){.code}
= 0;
:::

::: {.line}
[]{#l00061}[
[61](classMode0.html#a42f5db2d1e74a2cc249ab9af0d303dde){.line}]{.lineno} 
[bool]{.keywordtype}
[selectingTempo](classMode0.html#a42f5db2d1e74a2cc249ab9af0d303dde){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00062}[
[62](classMode0.html#a6687689798d7b32b2b15232c9c29c49d){.line}]{.lineno} 
[bool]{.keywordtype}
[doublePressHandled](classMode0.html#a6687689798d7b32b2b15232c9c29c49d){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00063}[
[63](classMode0.html#a35a6460b24e5f6f9480b8f73dae1d24a){.line}]{.lineno} 
[bool]{.keywordtype}
[doubleResetPressHandled](classMode0.html#a35a6460b24e5f6f9480b8f73dae1d24a){.code}
= [false]{.keyword};
:::

::: {.line}
[]{#l00064}[ 64]{.lineno} };
:::

::: {.line}
[]{#l00065}[ 65]{.lineno} 
:::

::: {.line}
[]{#l00066}[ 66]{.lineno} [\#endif ]{.preprocessor}[//
MODE0\_H]{.comment}
:::

::: {#aConstants_8h_html .ttc}
::: {.ttname}
[Constants.h](Constants_8h.html)
:::
:::

::: {#aEncoder_8h_html .ttc}
::: {.ttname}
[Encoder.h](Encoder_8h.html)
:::
:::

::: {#aEurorackClock_8h_html .ttc}
::: {.ttname}
[EurorackClock.h](EurorackClock_8h.html)
:::
:::

::: {#aGates_8h_html .ttc}
::: {.ttname}
[Gates.h](Gates_8h.html)
:::
:::

::: {#aInputHandler_8h_html .ttc}
::: {.ttname}
[InputHandler.h](InputHandler_8h.html)
:::
:::

::: {#aLEDController_8h_html .ttc}
::: {.ttname}
[LEDController.h](LEDController_8h.html)
:::
:::

::: {#aMIDIHandler_8h_html .ttc}
::: {.ttname}
[MIDIHandler.h](MIDIHandler_8h.html)
:::
:::

::: {#aMode_8h_html .ttc}
::: {.ttname}
[Mode.h](Mode_8h.html)
:::
:::

::: {#aResetButton_8h_html .ttc}
::: {.ttname}
[ResetButton.h](ResetButton_8h.html)
:::
:::

::: {#aclassEncoder_html .ttc}
::: {.ttname}
[Encoder](classEncoder.html)
:::

::: {.ttdef}
**Definition:** Encoder.h:6
:::
:::

::: {#aclassEncoder_html_a8d10c6f5e558cd9235db9375bf980ab9 .ttc}
::: {.ttname}
[Encoder::ButtonState](classEncoder.html#a8d10c6f5e558cd9235db9375bf980ab9)
:::

::: {.ttdeci}
ButtonState
:::

::: {.ttdef}
**Definition:** Encoder.h:11
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

::: {#aclassGates_html .ttc}
::: {.ttname}
[Gates](classGates.html)
:::

::: {.ttdef}
**Definition:** Gates.h:10
:::
:::

::: {#aclassInputHandler_html .ttc}
::: {.ttname}
[InputHandler](classInputHandler.html)
:::

::: {.ttdef}
**Definition:** InputHandler.h:6
:::
:::

::: {#aclassLEDController_html .ttc}
::: {.ttname}
[LEDController](classLEDController.html)
:::

::: {.ttdef}
**Definition:** LEDController.h:6
:::
:::

::: {#aclassMIDIHandler_html .ttc}
::: {.ttname}
[MIDIHandler](classMIDIHandler.html)
:::

::: {.ttdef}
**Definition:** MIDIHandler.h:9
:::
:::

::: {#aclassMode0_html .ttc}
::: {.ttname}
[Mode0](classMode0.html)
:::

::: {.ttdef}
**Definition:** Mode0.h:15
:::
:::

::: {#aclassMode0_html_a08f962ccd2bb1a958d8b6816af2af223 .ttc}
::: {.ttname}
[Mode0::setDivisionPPQN](classMode0.html#a08f962ccd2bb1a958d8b6816af2af223)
:::

::: {.ttdeci}
void setDivisionPPQN(int ppqn)
:::
:::

::: {#aclassMode0_html_a0e20f81420b0dcd427f5cd9789cfdd4a .ttc}
::: {.ttname}
[Mode0::update](classMode0.html#a0e20f81420b0dcd427f5cd9789cfdd4a)
:::

::: {.ttdeci}
void update() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:48
:::
:::

::: {#aclassMode0_html_a1d2a907c0057865467210bf45f45e9c4 .ttc}
::: {.ttname}
[Mode0::handleSelectionStates](classMode0.html#a1d2a907c0057865467210bf45f45e9c4)
:::

::: {.ttdeci}
void handleSelectionStates() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:191
:::
:::

::: {#aclassMode0_html_a27a112beb9ebe4648830681deab01ca0 .ttc}
::: {.ttname}
[Mode0::handleButton](classMode0.html#a27a112beb9ebe4648830681deab01ca0)
:::

::: {.ttdeci}
void handleButton(Encoder::ButtonState buttonState)
:::

::: {.ttdef}
**Definition:** Mode0.cpp:91
:::
:::

::: {#aclassMode0_html_a2e3f6fa1323a1d17620d99e106fd3d2d .ttc}
::: {.ttname}
[Mode0::resetButton](classMode0.html#a2e3f6fa1323a1d17620d99e106fd3d2d)
:::

::: {.ttdeci}
ResetButton & resetButton
:::

::: {.ttdef}
**Definition:** Mode0.h:47
:::
:::

::: {#aclassMode0_html_a35a6460b24e5f6f9480b8f73dae1d24a .ttc}
::: {.ttname}
[Mode0::doubleResetPressHandled](classMode0.html#a35a6460b24e5f6f9480b8f73dae1d24a)
:::

::: {.ttdeci}
bool doubleResetPressHandled
:::

::: {.ttdef}
**Definition:** Mode0.h:63
:::
:::

::: {#aclassMode0_html_a3841d23139d59cdedfe95272724ca71f .ttc}
::: {.ttname}
[Mode0::handleTempoSelection](classMode0.html#a3841d23139d59cdedfe95272724ca71f)
:::

::: {.ttdeci}
void handleTempoSelection()
:::

::: {.ttdef}
**Definition:** Mode0.cpp:202
:::
:::

::: {#aclassMode0_html_a3ddf8efd26e32d22530a1c37630bb341 .ttc}
::: {.ttname}
[Mode0::setup](classMode0.html#a3ddf8efd26e32d22530a1c37630bb341)
:::

::: {.ttdeci}
void setup() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:27
:::
:::

::: {#aclassMode0_html_a3f1e02184589f15ce99156b58de814ce .ttc}
::: {.ttname}
[Mode0::handleResetLongPress](classMode0.html#a3f1e02184589f15ce99156b58de814ce)
:::

::: {.ttdeci}
void handleResetLongPress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:147
:::
:::

::: {#aclassMode0_html_a42f5db2d1e74a2cc249ab9af0d303dde .ttc}
::: {.ttname}
[Mode0::selectingTempo](classMode0.html#a42f5db2d1e74a2cc249ab9af0d303dde)
:::

::: {.ttdeci}
bool selectingTempo
:::

::: {.ttdef}
**Definition:** Mode0.h:61
:::
:::

::: {#aclassMode0_html_a4cf5950c179f5ee11cb79b87af84f5d3 .ttc}
::: {.ttname}
[Mode0::singlePressHandled](classMode0.html#a4cf5950c179f5ee11cb79b87af84f5d3)
:::

::: {.ttdeci}
bool singlePressHandled
:::

::: {.ttdef}
**Definition:** Mode0.h:54
:::
:::

::: {#aclassMode0_html_a53b9693eeb9e70d2200fa5fa058ff4b9 .ttc}
::: {.ttname}
[Mode0::maxTempo](classMode0.html#a53b9693eeb9e70d2200fa5fa058ff4b9)
:::

::: {.ttdeci}
const int maxTempo
:::

::: {.ttdef}
**Definition:** Mode0.h:58
:::
:::

::: {#aclassMode0_html_a5edace264c12da595e48be504f559d97 .ttc}
::: {.ttname}
[Mode0::handleResetDoublePress](classMode0.html#a5edace264c12da595e48be504f559d97)
:::

::: {.ttdeci}
void handleResetDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:138
:::
:::

::: {#aclassMode0_html_a6687689798d7b32b2b15232c9c29c49d .ttc}
::: {.ttname}
[Mode0::doublePressHandled](classMode0.html#a6687689798d7b32b2b15232c9c29c49d)
:::

::: {.ttdeci}
bool doublePressHandled
:::

::: {.ttdef}
**Definition:** Mode0.h:62
:::
:::

::: {#aclassMode0_html_a6f0459d85f755de7775f3de610ee74b3 .ttc}
::: {.ttname}
[Mode0::tempoIncrement](classMode0.html#a6f0459d85f755de7775f3de610ee74b3)
:::

::: {.ttdeci}
int tempoIncrement
:::

::: {.ttdef}
**Definition:** Mode0.h:56
:::
:::

::: {#aclassMode0_html_a794e94163599470716ea944754ddd337 .ttc}
::: {.ttname}
[Mode0::handleEncoder](classMode0.html#a794e94163599470716ea944754ddd337)
:::

::: {.ttdeci}
void handleEncoder()
:::

::: {.ttdef}
**Definition:** Mode0.cpp:77
:::
:::

::: {#aclassMode0_html_a843a9f1c23e45dc2e6b3023d578402e6 .ttc}
::: {.ttname}
[Mode0::handlePressReleased](classMode0.html#a843a9f1c23e45dc2e6b3023d578402e6)
:::

::: {.ttdeci}
void handlePressReleased() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:187
:::
:::

::: {#aclassMode0_html_a898c2e53000955e37ef93983de7c7a54 .ttc}
::: {.ttname}
[Mode0::teardown](classMode0.html#a898c2e53000955e37ef93983de7c7a54)
:::

::: {.ttdeci}
void teardown() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:32
:::
:::

::: {#aclassMode0_html_a8b44b908b0df280399ed62e46d23453b .ttc}
::: {.ttname}
[Mode0::inputHandler](classMode0.html#a8b44b908b0df280399ed62e46d23453b)
:::

::: {.ttdeci}
InputHandler & inputHandler
:::

::: {.ttdef}
**Definition:** Mode0.h:51
:::
:::

::: {#aclassMode0_html_a8d06cb8c1a9d88d5806dd2e431d1e98f .ttc}
::: {.ttname}
[Mode0::midiHandler](classMode0.html#a8d06cb8c1a9d88d5806dd2e431d1e98f)
:::

::: {.ttdeci}
MIDIHandler & midiHandler
:::

::: {.ttdef}
**Definition:** Mode0.h:50
:::
:::

::: {#aclassMode0_html_a931032227e5a4553f7eee3210182dba8 .ttc}
::: {.ttname}
[Mode0::minTempo](classMode0.html#a931032227e5a4553f7eee3210182dba8)
:::

::: {.ttdeci}
const int minTempo
:::

::: {.ttdef}
**Definition:** Mode0.h:57
:::
:::

::: {#aclassMode0_html_aa3ef073cd777560821c68b82405c9696 .ttc}
::: {.ttname}
[Mode0::handleResetPressReleased](classMode0.html#aa3ef073cd777560821c68b82405c9696)
:::

::: {.ttdeci}
void handleResetPressReleased() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:151
:::
:::

::: {#aclassMode0_html_aa5837e66a7d361a00f8799766ee8441e .ttc}
::: {.ttname}
[Mode0::handleLongPress](classMode0.html#aa5837e66a7d361a00f8799766ee8441e)
:::

::: {.ttdeci}
void handleLongPress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:154
:::
:::

::: {#aclassMode0_html_aaf228318b6eb380ab81e0329010d3825 .ttc}
::: {.ttname}
[Mode0::divisionIndex](classMode0.html#aaf228318b6eb380ab81e0329010d3825)
:::

::: {.ttdeci}
int divisionIndex
:::

::: {.ttdef}
**Definition:** Mode0.h:59
:::
:::

::: {#aclassMode0_html_ab2e88db8ebc6a5c3bfe60d63715870da .ttc}
::: {.ttname}
[Mode0::handleDoublePress](classMode0.html#ab2e88db8ebc6a5c3bfe60d63715870da)
:::

::: {.ttdeci}
void handleDoublePress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:158
:::
:::

::: {#aclassMode0_html_ab49600e807fdc67b715aa5844e0008a7 .ttc}
::: {.ttname}
[Mode0::handleResetSinglePress](classMode0.html#ab49600e807fdc67b715aa5844e0008a7)
:::

::: {.ttdeci}
void handleResetSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:131
:::
:::

::: {#aclassMode0_html_ab7d9744dbbb6b913d5093a20ba3eba36 .ttc}
::: {.ttname}
[Mode0::handleCVInput](classMode0.html#ab7d9744dbbb6b913d5093a20ba3eba36)
:::

::: {.ttdeci}
void handleCVInput()
:::

::: {.ttdef}
**Definition:** Mode0.cpp:65
:::
:::

::: {#aclassMode0_html_ab92b642845ecfe37182477b6de246e6f .ttc}
::: {.ttname}
[Mode0::encoder](classMode0.html#ab92b642845ecfe37182477b6de246e6f)
:::

::: {.ttdeci}
Encoder & encoder
:::

::: {.ttdef}
**Definition:** Mode0.h:46
:::
:::

::: {#aclassMode0_html_aba40b7f6eb84a6e8b9052081c9346e48 .ttc}
::: {.ttname}
[Mode0::setDefaultDivisionIndex](classMode0.html#aba40b7f6eb84a6e8b9052081c9346e48)
:::

::: {.ttdeci}
void setDefaultDivisionIndex()
:::

::: {.ttdef}
**Definition:** Mode0.cpp:37
:::
:::

::: {#aclassMode0_html_ac6c68a326df4139c0ea7cae89f79e923 .ttc}
::: {.ttname}
[Mode0::Mode0](classMode0.html#ac6c68a326df4139c0ea7cae89f79e923)
:::

::: {.ttdeci}
Mode0(Encoder &encoder, InputHandler &inputHandler, Gates &gates,
LEDController &ledController, MIDIHandler &midiHandler, ResetButton
&resetButton, EurorackClock &clock)
:::

::: {.ttdef}
**Definition:** Mode0.cpp:7
:::
:::

::: {#aclassMode0_html_ac7c269771d185bfd70c9610aa15d4873 .ttc}
::: {.ttname}
[Mode0::clock](classMode0.html#ac7c269771d185bfd70c9610aa15d4873)
:::

::: {.ttdeci}
EurorackClock & clock
:::

::: {.ttdef}
**Definition:** Mode0.h:49
:::
:::

::: {#aclassMode0_html_ad1252cf80f5ab5c7ed8832e333001ecf .ttc}
::: {.ttname}
[Mode0::ledController](classMode0.html#ad1252cf80f5ab5c7ed8832e333001ecf)
:::

::: {.ttdeci}
LEDController & ledController
:::

::: {.ttdef}
**Definition:** Mode0.h:45
:::
:::

::: {#aclassMode0_html_adc42a2183e9c806749f5a4a6de0fa07e .ttc}
::: {.ttname}
[Mode0::gates](classMode0.html#adc42a2183e9c806749f5a4a6de0fa07e)
:::

::: {.ttdeci}
Gates & gates
:::

::: {.ttdef}
**Definition:** Mode0.h:48
:::
:::

::: {#aclassMode0_html_ae518d870e6feb9faed5463f7e82164a4 .ttc}
::: {.ttname}
[Mode0::externalTempo](classMode0.html#ae518d870e6feb9faed5463f7e82164a4)
:::

::: {.ttdeci}
bool externalTempo
:::

::: {.ttdef}
**Definition:** Mode0.h:53
:::
:::

::: {#aclassMode0_html_ae55cb650c7a6ace775a3a796097d603a .ttc}
::: {.ttname}
[Mode0::handleResetButton](classMode0.html#ae55cb650c7a6ace775a3a796097d603a)
:::

::: {.ttdeci}
void handleResetButton(ResetButton::ButtonState buttonState)
:::

::: {.ttdef}
**Definition:** Mode0.cpp:111
:::
:::

::: {#aclassMode0_html_ae773b1cc8d0a7a3d3db4153827b2f1cc .ttc}
::: {.ttname}
[Mode0::singleResetPressHandled](classMode0.html#ae773b1cc8d0a7a3d3db4153827b2f1cc)
:::

::: {.ttdeci}
bool singleResetPressHandled
:::

::: {.ttdef}
**Definition:** Mode0.h:55
:::
:::

::: {#aclassMode0_html_ae791813273bde4c769a69ff84a60f82a .ttc}
::: {.ttname}
[Mode0::selectedGate](classMode0.html#ae791813273bde4c769a69ff84a60f82a)
:::

::: {.ttdeci}
int selectedGate
:::

::: {.ttdef}
**Definition:** Mode0.h:60
:::
:::

::: {#aclassMode0_html_af335be379b0fd0883e5797b0e0f398ff .ttc}
::: {.ttname}
[Mode0::inDivisionSelection](classMode0.html#af335be379b0fd0883e5797b0e0f398ff)
:::

::: {.ttdeci}
bool inDivisionSelection
:::

::: {.ttdef}
**Definition:** Mode0.h:52
:::
:::

::: {#aclassMode0_html_afc4ad8cc4c9c59838c774c3c72a05f33 .ttc}
::: {.ttname}
[Mode0::handleSinglePress](classMode0.html#afc4ad8cc4c9c59838c774c3c72a05f33)
:::

::: {.ttdeci}
void handleSinglePress() override
:::

::: {.ttdef}
**Definition:** Mode0.cpp:174
:::
:::

::: {#aclassMode_html .ttc}
::: {.ttname}
[Mode](classMode.html)
:::

::: {.ttdef}
**Definition:** Mode.h:4
:::
:::

::: {#aclassResetButton_html .ttc}
::: {.ttname}
[ResetButton](classResetButton.html)
:::

::: {.ttdef}
**Definition:** ResetButton.h:9
:::
:::

::: {#aclassResetButton_html_a57b758360f53e09cd135b0fbc18edabd .ttc}
::: {.ttname}
[ResetButton::ButtonState](classResetButton.html#a57b758360f53e09cd135b0fbc18edabd)
:::

::: {.ttdeci}
ButtonState
:::

::: {.ttdef}
**Definition:** ResetButton.h:14
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
