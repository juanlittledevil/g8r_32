::: {#main_8cpp}
:::

[\[main\_8cpp\]]{#main_8cpp label="main_8cpp"} \#include $<$Arduino.h$>$
\#include $<$MIDI.h$>$ \#include '̈Gates.h'̈ \#include '̈ModeSelector.h'̈
\#include '̈LEDs.h'̈ \#include '̈Debug.h'̈ \#include '̈Encoder.h'̈ \#include
'̈MIDIHandler.h'̈ \#include '̈EurorackClock.h'̈ \#include '̈Constants.h'̈
\#include '̈Mode0.h'̈ \#include '̈Mode1.h'̈ \#include '̈Mode2.h'̈ \#include
'̈LEDController.h'̈ \#include '̈ResetButton.h'̈ \#include '̈InputHandler.h'̈
\#include $<$vector$>$ Include dependency graph for main.cpp:

![image](main_8cpp__incl){width="350pt"}

\#define
[DEBUG\_PRINT](#main_8cpp_a24fac9ff5bcc1384e1f99ec350941c9a)(message) [Debug::print](#classDebug_aec89c31d051cd6de448ccf9a8f29a83d)(\_\_FILE\_\_,
\_\_LINE\_\_, \_\_func\_\_, String(message))

\#define [RX\_PIN](#main_8cpp_aa7089c01538b339ae745173c117f95b9) PA3

\#define [TX\_PIN](#main_8cpp_a3bb17f5daa2b1eaef58c8aa2d989e27e) PA2

\#define
[ENCODER\_PINA](#main_8cpp_abe826c409a8a833bfa7532171db34cf0) PB13

\#define
[ENCODER\_PINB](#main_8cpp_abb0ab32273368ab840bf7c43f5309ca5) PB14

\#define
[ENCODER\_BUTTON](#main_8cpp_a13d83485198c96bfc9ab7e0bd91bbc3a) PB12

\#define [CLOCK\_PIN](#main_8cpp_a23b348310475af5d6544794f1a167ee8) PB10

\#define [RESET\_PIN](#main_8cpp_a08bca59db4b190eaaea4d47b7562869c) PB11

\#define
[RESET\_BUTTON](#main_8cpp_ae80f4e50d6756064b8880735a5644881) PB15

\#define [TEMPO\_LED](#main_8cpp_a47ca58cb74e74a56ae5eaf454df47409) PA8

\#define [CV\_A\_PIN](#main_8cpp_a1f63b7e11fd7cdaa5cb5104155d5ddad) PA4

\#define [CV\_B\_PIN](#main_8cpp_aa3104e4ee339881c3a36c9ac65b819a4) PA5

void [setup](#main_8cpp_a4fc01d736fe50cf5b977f755b675f11d) ()

void [loop](#main_8cpp_afe461d27b9c48d5921c00d521181f12f) ()

std::vector$<$ int $>$
[pins](#main_8cpp_a782432745fd904139737a67cfe18cc45) = {PA15, PB3, PB4,
PB5, PB6, PB7, PB8, PB9}

const int [numPins](#main_8cpp_a7e0ec12422847c7eae2e7fe6c5972a48) =
pins.size()

[Gates](#classGates)
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7) =
[Gates](#classGates)([pins](#main_8cpp_a782432745fd904139737a67cfe18cc45),
[numPins](#main_8cpp_a7e0ec12422847c7eae2e7fe6c5972a48))

std::vector$<$ int $>$
[ledPins](#main_8cpp_ab274bd88fcca137c72235967915b9f58) = {PA12, PA11,
PB1, PB0, PA7, PA6, PA1, PA0}

int [numLedPins](#main_8cpp_a42946fc499bc5d1b6da4a7d38a91b347) =
ledPins.size()

[LEDs](#classLEDs) [leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25)
=
[LEDs](#classLEDs)([ledPins](#main_8cpp_ab274bd88fcca137c72235967915b9f58),
[numLedPins](#main_8cpp_a42946fc499bc5d1b6da4a7d38a91b347))

int [encCLKPin](#main_8cpp_a163c71453f25c788b655dd83689eaea0) =
[ENCODER\_PINA](#main_8cpp_abe826c409a8a833bfa7532171db34cf0)

int [encDTPin](#main_8cpp_a808ab567ec354ba030c82614669258bb) =
[ENCODER\_PINB](#main_8cpp_abb0ab32273368ab840bf7c43f5309ca5)

int [encButtonPin](#main_8cpp_a5238625c5c9a4b1ed2f485c3696bef20) =
[ENCODER\_BUTTON](#main_8cpp_a13d83485198c96bfc9ab7e0bd91bbc3a)

bool [inModeSelection](#main_8cpp_a530c93b1821f0134b60d27d445a4a4e3) =
false

int [intensity](#main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210) = 255

bool [isInSelection](#main_8cpp_ae8ce8df8470642a28044a27add2964e4) =
false

unsigned long
[lastFlashTime](#main_8cpp_a6a23ed29bcba26182457398cf3ba0dc4) = 0

unsigned char
[internalPPQN](#main_8cpp_adf636984b70d690edd0c4a32836392e0) = 24

std::vector$<$ int $>$
[musicalIntervals](#main_8cpp_a385d88ba7be4d1867aa11aefaba64f1a) = {1,
2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 72, 96, 128, 144, 192, 288, 384,
576, 768, 1152, 1536}

const int
[musicalIntervalsSize](#main_8cpp_a4b2982d5837258bd50d39acde6f57b80) =
musicalIntervals.size()

int [total\_pages](#main_8cpp_a3359c659dd3104507b620365d1b1d715) = 16 /
leds.numLeds

int [min\_intensity](#main_8cpp_ae26c09cc76954053454ea55a4147b005) = 64

int [intensity\_step](#main_8cpp_a95711a53744764804ef9b98c59664764) =
(255 - [min\_intensity](#main_8cpp_ae26c09cc76954053454ea55a4147b005)) /
([total\_pages](#main_8cpp_a3359c659dd3104507b620365d1b1d715) - 1)

[Encoder](#classEncoder)
[encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c) =
[Encoder](#classEncoder)([encCLKPin](#main_8cpp_a163c71453f25c788b655dd83689eaea0),
[encDTPin](#main_8cpp_a808ab567ec354ba030c82614669258bb),
[encButtonPin](#main_8cpp_a5238625c5c9a4b1ed2f485c3696bef20))

[ResetButton](#classResetButton)
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7) =
[ResetButton](#classResetButton)([RESET\_BUTTON](#main_8cpp_ae80f4e50d6756064b8880735a5644881))

[LEDController](#classLEDController)
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07)
([leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25))

[EurorackClock](#classEurorackClock)
[clock](#main_8cpp_a3486ebc2916c9a757b036be4e303c573)
([CLOCK\_PIN](#main_8cpp_a23b348310475af5d6544794f1a167ee8),
[RESET\_PIN](#main_8cpp_a08bca59db4b190eaaea4d47b7562869c),
[TEMPO\_LED](#main_8cpp_a47ca58cb74e74a56ae5eaf454df47409),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25))

[MIDIHandler](#classMIDIHandler)
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df) (Serial2,
[clock](#main_8cpp_a3486ebc2916c9a757b036be4e303c573),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25))

[InputHandler](#classInputHandler)
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22) =
[InputHandler](#classInputHandler)([CV\_A\_PIN](#main_8cpp_a1f63b7e11fd7cdaa5cb5104155d5ddad),
[CV\_B\_PIN](#main_8cpp_aa3104e4ee339881c3a36c9ac65b819a4))

[ModeSelector](#classModeSelector) &
[modeSelector](#main_8cpp_a42f72ce52094b0a028afddf862ddaa4d) =
[ModeSelector::getInstance](#classModeSelector_a2312f6a56156ab4557baebe6f2d050ea)()

[Mode](#classMode) $\ast$
[currentMode](#main_8cpp_a7a725ed0b89db4bf8461039a479bc143) = nullptr

[Mode0](#classMode0)
[mode0](#main_8cpp_ab97762dda44bd590fbe8c97580106a9e)
([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7),
[clock](#main_8cpp_a3486ebc2916c9a757b036be4e303c573))

[Mode1](#classMode1)
[mode1](#main_8cpp_ac453df32cb30f2f9509c37f37eb30b77)
([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7))

[Mode2](#classMode2)
[mode2](#main_8cpp_aca8126f10bd0d0aac519977996b805f9)
([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7))

[\[main\_8cpp\_a23b348310475af5d6544794f1a167ee8\]]{#main_8cpp_a23b348310475af5d6544794f1a167ee8
label="main_8cpp_a23b348310475af5d6544794f1a167ee8"} \#define
CLOCK\_PIN PB10

[\[main\_8cpp\_a1f63b7e11fd7cdaa5cb5104155d5ddad\]]{#main_8cpp_a1f63b7e11fd7cdaa5cb5104155d5ddad
label="main_8cpp_a1f63b7e11fd7cdaa5cb5104155d5ddad"} \#define
CV\_A\_PIN PA4

[\[main\_8cpp\_aa3104e4ee339881c3a36c9ac65b819a4\]]{#main_8cpp_aa3104e4ee339881c3a36c9ac65b819a4
label="main_8cpp_aa3104e4ee339881c3a36c9ac65b819a4"} \#define
CV\_B\_PIN PA5

[\[main\_8cpp\_a24fac9ff5bcc1384e1f99ec350941c9a\]]{#main_8cpp_a24fac9ff5bcc1384e1f99ec350941c9a
label="main_8cpp_a24fac9ff5bcc1384e1f99ec350941c9a"}

\#define DEBUG\_PRINT(

message

) [Debug::print](#classDebug_aec89c31d051cd6de448ccf9a8f29a83d)(\_\_FILE\_\_,
\_\_LINE\_\_, \_\_func\_\_, String(message))

[\[main\_8cpp\_a13d83485198c96bfc9ab7e0bd91bbc3a\]]{#main_8cpp_a13d83485198c96bfc9ab7e0bd91bbc3a
label="main_8cpp_a13d83485198c96bfc9ab7e0bd91bbc3a"} \#define
ENCODER\_BUTTON PB12

[\[main\_8cpp\_abe826c409a8a833bfa7532171db34cf0\]]{#main_8cpp_abe826c409a8a833bfa7532171db34cf0
label="main_8cpp_abe826c409a8a833bfa7532171db34cf0"} \#define
ENCODER\_PINA PB13

[\[main\_8cpp\_abb0ab32273368ab840bf7c43f5309ca5\]]{#main_8cpp_abb0ab32273368ab840bf7c43f5309ca5
label="main_8cpp_abb0ab32273368ab840bf7c43f5309ca5"} \#define
ENCODER\_PINB PB14

[\[main\_8cpp\_ae80f4e50d6756064b8880735a5644881\]]{#main_8cpp_ae80f4e50d6756064b8880735a5644881
label="main_8cpp_ae80f4e50d6756064b8880735a5644881"} \#define
RESET\_BUTTON PB15

[\[main\_8cpp\_a08bca59db4b190eaaea4d47b7562869c\]]{#main_8cpp_a08bca59db4b190eaaea4d47b7562869c
label="main_8cpp_a08bca59db4b190eaaea4d47b7562869c"} \#define
RESET\_PIN PB11

[\[main\_8cpp\_aa7089c01538b339ae745173c117f95b9\]]{#main_8cpp_aa7089c01538b339ae745173c117f95b9
label="main_8cpp_aa7089c01538b339ae745173c117f95b9"} \#define
RX\_PIN PA3

[\[main\_8cpp\_a47ca58cb74e74a56ae5eaf454df47409\]]{#main_8cpp_a47ca58cb74e74a56ae5eaf454df47409
label="main_8cpp_a47ca58cb74e74a56ae5eaf454df47409"} \#define
TEMPO\_LED PA8

[\[main\_8cpp\_a3bb17f5daa2b1eaef58c8aa2d989e27e\]]{#main_8cpp_a3bb17f5daa2b1eaef58c8aa2d989e27e
label="main_8cpp_a3bb17f5daa2b1eaef58c8aa2d989e27e"} \#define
TX\_PIN PA2

[\[main\_8cpp\_afe461d27b9c48d5921c00d521181f12f\]]{#main_8cpp_afe461d27b9c48d5921c00d521181f12f
label="main_8cpp_afe461d27b9c48d5921c00d521181f12f"}

void loop (

)

[\[main\_8cpp\_a4fc01d736fe50cf5b977f755b675f11d\]]{#main_8cpp_a4fc01d736fe50cf5b977f755b675f11d
label="main_8cpp_a4fc01d736fe50cf5b977f755b675f11d"}

void setup (

)

[\[main\_8cpp\_a3486ebc2916c9a757b036be4e303c573\]]{#main_8cpp_a3486ebc2916c9a757b036be4e303c573
label="main_8cpp_a3486ebc2916c9a757b036be4e303c573"}

[EurorackClock](#classEurorackClock)
clock([CLOCK\_PIN](#main_8cpp_a23b348310475af5d6544794f1a167ee8),
[RESET\_PIN](#main_8cpp_a08bca59db4b190eaaea4d47b7562869c),
[TEMPO\_LED](#main_8cpp_a47ca58cb74e74a56ae5eaf454df47409),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25)) (

,

,

,

,

)

[\[main\_8cpp\_a7a725ed0b89db4bf8461039a479bc143\]]{#main_8cpp_a7a725ed0b89db4bf8461039a479bc143
label="main_8cpp_a7a725ed0b89db4bf8461039a479bc143"}
[Mode](#classMode)$\ast$ currentMode = nullptr

[\[main\_8cpp\_a5238625c5c9a4b1ed2f485c3696bef20\]]{#main_8cpp_a5238625c5c9a4b1ed2f485c3696bef20
label="main_8cpp_a5238625c5c9a4b1ed2f485c3696bef20"} int encButtonPin =
[ENCODER\_BUTTON](#main_8cpp_a13d83485198c96bfc9ab7e0bd91bbc3a)

[\[main\_8cpp\_a163c71453f25c788b655dd83689eaea0\]]{#main_8cpp_a163c71453f25c788b655dd83689eaea0
label="main_8cpp_a163c71453f25c788b655dd83689eaea0"} int encCLKPin =
[ENCODER\_PINA](#main_8cpp_abe826c409a8a833bfa7532171db34cf0)

[\[main\_8cpp\_a808ab567ec354ba030c82614669258bb\]]{#main_8cpp_a808ab567ec354ba030c82614669258bb
label="main_8cpp_a808ab567ec354ba030c82614669258bb"} int encDTPin =
[ENCODER\_PINB](#main_8cpp_abb0ab32273368ab840bf7c43f5309ca5)

[\[main\_8cpp\_a133a3017d675be921d0d7586eec7bb7c\]]{#main_8cpp_a133a3017d675be921d0d7586eec7bb7c
label="main_8cpp_a133a3017d675be921d0d7586eec7bb7c"}
[Encoder](#classEncoder) encoder =
[Encoder](#classEncoder)([encCLKPin](#main_8cpp_a163c71453f25c788b655dd83689eaea0),
[encDTPin](#main_8cpp_a808ab567ec354ba030c82614669258bb),
[encButtonPin](#main_8cpp_a5238625c5c9a4b1ed2f485c3696bef20))

[\[main\_8cpp\_aafa551f375cee7e3faaf9390080592a7\]]{#main_8cpp_aafa551f375cee7e3faaf9390080592a7
label="main_8cpp_aafa551f375cee7e3faaf9390080592a7"}
[Gates](#classGates) gates =
[Gates](#classGates)([pins](#main_8cpp_a782432745fd904139737a67cfe18cc45),
[numPins](#main_8cpp_a7e0ec12422847c7eae2e7fe6c5972a48))

[\[main\_8cpp\_a530c93b1821f0134b60d27d445a4a4e3\]]{#main_8cpp_a530c93b1821f0134b60d27d445a4a4e3
label="main_8cpp_a530c93b1821f0134b60d27d445a4a4e3"} bool
inModeSelection = false

[\[main\_8cpp\_ae8f5410196ad7877ecf0fea76491fb22\]]{#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22
label="main_8cpp_ae8f5410196ad7877ecf0fea76491fb22"}
[InputHandler](#classInputHandler) inputHandler =
[InputHandler](#classInputHandler)([CV\_A\_PIN](#main_8cpp_a1f63b7e11fd7cdaa5cb5104155d5ddad),
[CV\_B\_PIN](#main_8cpp_aa3104e4ee339881c3a36c9ac65b819a4))

[\[main\_8cpp\_a299ec0c42ccc5a2d79d1739428ac3210\]]{#main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210
label="main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210"} int intensity = 255

[\[main\_8cpp\_a95711a53744764804ef9b98c59664764\]]{#main_8cpp_a95711a53744764804ef9b98c59664764
label="main_8cpp_a95711a53744764804ef9b98c59664764"} int intensity\_step
= (255 - [min\_intensity](#main_8cpp_ae26c09cc76954053454ea55a4147b005))
/ ([total\_pages](#main_8cpp_a3359c659dd3104507b620365d1b1d715) - 1)

[\[main\_8cpp\_adf636984b70d690edd0c4a32836392e0\]]{#main_8cpp_adf636984b70d690edd0c4a32836392e0
label="main_8cpp_adf636984b70d690edd0c4a32836392e0"} unsigned char
internalPPQN = 24

[\[main\_8cpp\_ae8ce8df8470642a28044a27add2964e4\]]{#main_8cpp_ae8ce8df8470642a28044a27add2964e4
label="main_8cpp_ae8ce8df8470642a28044a27add2964e4"} bool isInSelection
= false

[\[main\_8cpp\_a6a23ed29bcba26182457398cf3ba0dc4\]]{#main_8cpp_a6a23ed29bcba26182457398cf3ba0dc4
label="main_8cpp_a6a23ed29bcba26182457398cf3ba0dc4"} unsigned long
lastFlashTime = 0

[\[main\_8cpp\_af8afe1fb511986724cafc628d457ee07\]]{#main_8cpp_af8afe1fb511986724cafc628d457ee07
label="main_8cpp_af8afe1fb511986724cafc628d457ee07"}

[LEDController](#classLEDController)
ledController([leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25)) (

)

[\[main\_8cpp\_ab274bd88fcca137c72235967915b9f58\]]{#main_8cpp_ab274bd88fcca137c72235967915b9f58
label="main_8cpp_ab274bd88fcca137c72235967915b9f58"}
std::vector$<$int$>$ ledPins = {PA12, PA11, PB1, PB0, PA7, PA6, PA1,
PA0}

[\[main\_8cpp\_acff5fe5d7a28e483a9ab2f183bb4dc25\]]{#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25
label="main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25"} [LEDs](#classLEDs)
leds =
[LEDs](#classLEDs)([ledPins](#main_8cpp_ab274bd88fcca137c72235967915b9f58),
[numLedPins](#main_8cpp_a42946fc499bc5d1b6da4a7d38a91b347))

[\[main\_8cpp\_af1ad199a35c31bace3d533077689e6df\]]{#main_8cpp_af1ad199a35c31bace3d533077689e6df
label="main_8cpp_af1ad199a35c31bace3d533077689e6df"}

[MIDIHandler](#classMIDIHandler) midiHandler(Serial2,
[clock](#main_8cpp_a3486ebc2916c9a757b036be4e303c573),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[leds](#main_8cpp_acff5fe5d7a28e483a9ab2f183bb4dc25)) (

,

,

,

)

[\[main\_8cpp\_ae26c09cc76954053454ea55a4147b005\]]{#main_8cpp_ae26c09cc76954053454ea55a4147b005
label="main_8cpp_ae26c09cc76954053454ea55a4147b005"} int min\_intensity
= 64

[\[main\_8cpp\_ab97762dda44bd590fbe8c97580106a9e\]]{#main_8cpp_ab97762dda44bd590fbe8c97580106a9e
label="main_8cpp_ab97762dda44bd590fbe8c97580106a9e"}

[Mode0](#classMode0)
mode0([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7),
[clock](#main_8cpp_a3486ebc2916c9a757b036be4e303c573)) (

,

,

,

,

,

,

)

[\[main\_8cpp\_ac453df32cb30f2f9509c37f37eb30b77\]]{#main_8cpp_ac453df32cb30f2f9509c37f37eb30b77
label="main_8cpp_ac453df32cb30f2f9509c37f37eb30b77"}

[Mode1](#classMode1)
mode1([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7)) (

,

,

,

,

,

)

[\[main\_8cpp\_aca8126f10bd0d0aac519977996b805f9\]]{#main_8cpp_aca8126f10bd0d0aac519977996b805f9
label="main_8cpp_aca8126f10bd0d0aac519977996b805f9"}

[Mode2](#classMode2)
mode2([encoder](#main_8cpp_a133a3017d675be921d0d7586eec7bb7c),
[inputHandler](#main_8cpp_ae8f5410196ad7877ecf0fea76491fb22),
[gates](#main_8cpp_aafa551f375cee7e3faaf9390080592a7),
[ledController](#main_8cpp_af8afe1fb511986724cafc628d457ee07),
[midiHandler](#main_8cpp_af1ad199a35c31bace3d533077689e6df),
[resetButton](#main_8cpp_a191753692ee909460b91f43cfd141fa7)) (

,

,

,

,

,

)

[\[main\_8cpp\_a42f72ce52094b0a028afddf862ddaa4d\]]{#main_8cpp_a42f72ce52094b0a028afddf862ddaa4d
label="main_8cpp_a42f72ce52094b0a028afddf862ddaa4d"}
[ModeSelector](#classModeSelector)& modeSelector =
[ModeSelector::getInstance](#classModeSelector_a2312f6a56156ab4557baebe6f2d050ea)()

[\[main\_8cpp\_a385d88ba7be4d1867aa11aefaba64f1a\]]{#main_8cpp_a385d88ba7be4d1867aa11aefaba64f1a
label="main_8cpp_a385d88ba7be4d1867aa11aefaba64f1a"}
std::vector$<$int$>$ musicalIntervals = {1, 2, 3, 4, 6, 8, 12, 16, 24,
32, 48, 64, 72, 96, 128, 144, 192, 288, 384, 576, 768, 1152, 1536}

[\[main\_8cpp\_a4b2982d5837258bd50d39acde6f57b80\]]{#main_8cpp_a4b2982d5837258bd50d39acde6f57b80
label="main_8cpp_a4b2982d5837258bd50d39acde6f57b80"} const int
musicalIntervalsSize = musicalIntervals.size()

[\[main\_8cpp\_a42946fc499bc5d1b6da4a7d38a91b347\]]{#main_8cpp_a42946fc499bc5d1b6da4a7d38a91b347
label="main_8cpp_a42946fc499bc5d1b6da4a7d38a91b347"} int numLedPins =
ledPins.size()

[\[main\_8cpp\_a7e0ec12422847c7eae2e7fe6c5972a48\]]{#main_8cpp_a7e0ec12422847c7eae2e7fe6c5972a48
label="main_8cpp_a7e0ec12422847c7eae2e7fe6c5972a48"} const int numPins =
pins.size()

[\[main\_8cpp\_a782432745fd904139737a67cfe18cc45\]]{#main_8cpp_a782432745fd904139737a67cfe18cc45
label="main_8cpp_a782432745fd904139737a67cfe18cc45"}
std::vector$<$int$>$ pins = {PA15, PB3, PB4, PB5, PB6, PB7, PB8, PB9}

[\[main\_8cpp\_a191753692ee909460b91f43cfd141fa7\]]{#main_8cpp_a191753692ee909460b91f43cfd141fa7
label="main_8cpp_a191753692ee909460b91f43cfd141fa7"}
[ResetButton](#classResetButton) resetButton =
[ResetButton](#classResetButton)([RESET\_BUTTON](#main_8cpp_ae80f4e50d6756064b8880735a5644881))

[\[main\_8cpp\_a3359c659dd3104507b620365d1b1d715\]]{#main_8cpp_a3359c659dd3104507b620365d1b1d715
label="main_8cpp_a3359c659dd3104507b620365d1b1d715"} int total\_pages =
16 / leds.numLeds
