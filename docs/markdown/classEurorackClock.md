::: {#classEurorackClock}
:::

[\[classEurorackClock\]]{#classEurorackClock label="classEurorackClock"}

\#include $<$EurorackClock.h$>$

Collaboration diagram for EurorackClock:

![image](classEurorackClock__coll__graph){height="550pt"}

[EurorackClock](#classEurorackClock_ab4640da7e0f07985916b5ed44a6afbd2)
(int [clockPin](#classEurorackClock_ae8c82303a099d61cd967306957419d4e),
int [resetPin](#classEurorackClock_a013e9fa1f3c6af6fb7517cdca76905ad),
int tempoLedPin, [Gates](#classGates)
&[gates](#classEurorackClock_af7e11cb46ab51c58609123ae13c236eb),
[LEDs](#classLEDs)
&[leds](#classEurorackClock_a808f0d1dc014fd9f8541433bc26ed921))

void [setup](#classEurorackClock_af237ef8da045ffc906547346b8e1e20d) ()

void [start](#classEurorackClock_a85a00dfdd0cd08c0b3a9d90acc5cc66b) ()

void [stop](#classEurorackClock_ad92731fd0b8203b283be37fd83ab9e7b) ()

void [reset](#classEurorackClock_acb69cc2c53c500576df9c12c025db2d1) ()

void [reset](#classEurorackClock_ace2ae0b8ec34653a1186f0e8939c9f0e) (int
selectedGate)

void [tick](#classEurorackClock_a7881b7e717da092e55e7f8b0961b6ae0) ()

void [setTempo](#classEurorackClock_a3abcd345bde222e68cd86464ae1de2ae)
(float newTempo, int
[ppqn](#classEurorackClock_ac829929df9b7372bcd3b2c609ecbf9a1))

int [getTempo](#classEurorackClock_a3ee132275b852260555b9cd5cf9536c1) ()
const

void
[flashTempoLed](#classEurorackClock_acda15075afacc084a32c3cebbd077914)
()

void
[handleExternalClock](#classEurorackClock_ab526a6829f0489eae35811e86e7e80f8)
()

void
[handleMidiClock](#classEurorackClock_aa204c15662e069ecbf1ac4029116365d)
()

void [setPPQN](#classEurorackClock_a6f6b794fde098d908287afb357d30cb6)
(int [ppqn](#classEurorackClock_ac829929df9b7372bcd3b2c609ecbf9a1))

void
[setExternalTempo](#classEurorackClock_aa911fac3efe50a37cf2355046119461b)
(bool
[isExternalTempo](#classEurorackClock_a53f9514598facb1b47a35e2d0cfc5bf6))

void
[toggleLedOnDuration](#classEurorackClock_a45c55e3e1a02a319cf83c60658bff956)
(bool selectingTempo)

static void
[interruptHandler](#classEurorackClock_aec074cdc6187413e42bb4e1cce6c07c8)
()

static void
[resetInterruptHandler](#classEurorackClock_ac6279fbb8d7396de017252b39b3f266b)
()

void
[updateTempoLed](#classEurorackClock_a9cddc56f91761c38a32f850fe4920804)
(unsigned long currentTime)

void
[updateFlashPulseCount](#classEurorackClock_ae0c42a84a524c12c2f01e43682e5e36f)
()

bool
[shouldTriggerClockPulse](#classEurorackClock_a4af4876927901a6cfc1619d2192fbb55)
()

void
[triggerClockPulse](#classEurorackClock_a300b4ab6a0b925f185841a7bca2d80cc)
()

void
[handleResetTrigger](#classEurorackClock_a50a5339b6a232a0e2db5bf7c621bbf9e)
()

void
[decideFlash](#classEurorackClock_a55a6e89f8c69c7ee73392c89f8e155a8) ()

void
[triggerTempoLed](#classEurorackClock_ad3159d70a7ed39e332b6564c2b0e227f)
(unsigned long currentTime)

void
[triggerGates](#classEurorackClock_a708240997f4112f2bcb7f9e25ab186eb)
(unsigned long currentTime)

void
[handleTempoLed](#classEurorackClock_a02c9cd57faf38ecdfec76e6d09d93b7c)
(unsigned long currentTime)

[ClockState](#structClockState)
[clockState](#classEurorackClock_a6582607e7c111bb17bd4656bade25880)

HardwareTimer $\ast$
[timer](#classEurorackClock_a4a47006cfd467d0385bc605ea9157618)

[LED](#classLED)
[tempoLed](#classEurorackClock_a08c566025baec51dfe9528636895dca1)

[InputPin](#classInputPin)
[externalClock](#classEurorackClock_aa33304d81b503a6183633369016188a6)

[InputPin](#classInputPin)
[resetButton](#classEurorackClock_ae2d7164536f7921ac0751875fd67c83b)

[Gates](#classGates) &
[gates](#classEurorackClock_af7e11cb46ab51c58609123ae13c236eb)

[LEDs](#classLEDs) &
[leds](#classEurorackClock_a808f0d1dc014fd9f8541433bc26ed921)

float [tempo](#classEurorackClock_ae31434bf73c7c86490a70d5fa6dbe3fc)

float
[lastTickTime](#classEurorackClock_a2793ecd9e97550228e88fed371ed671d)

float
[tickInterval](#classEurorackClock_aa316235771ee7584bbf198798fa62a09)

float
[lastExternalTickTime](#classEurorackClock_aae0d70573973af8a7800dddd0fdaafe8)

unsigned long
[lastMidiClockTime](#classEurorackClock_a530f570bb7e4615cf304f473ac820133)

int
[ledOnDuration](#classEurorackClock_a49c3ef3023e15397d463026b93229634) =
[LONG\_LED\_ON\_DURATION](#classEurorackClock_aa6f21a81192926804c417f3937608af0)

unsigned long
[ledOnTime](#classEurorackClock_a8f2268e67c1164e5acb449e2ff162892) = 0

int [clockPin](#classEurorackClock_ae8c82303a099d61cd967306957419d4e)

int [resetPin](#classEurorackClock_a013e9fa1f3c6af6fb7517cdca76905ad)

int [ppqn](#classEurorackClock_ac829929df9b7372bcd3b2c609ecbf9a1)

bool [isRunning](#classEurorackClock_a432c6c15fe407d014f6d2c4148346c4a)

bool
[isExternalTempo](#classEurorackClock_a53f9514598facb1b47a35e2d0cfc5bf6)

bool
[isMidiClock](#classEurorackClock_a707c76310f278ac9675d493d356623c1)

bool
[timeToFlash](#classEurorackClock_aa44f194d606bc5dd0caf3508bacc6857)

bool
[resetTriggered](#classEurorackClock_a1534c3851f19a278a70f7d6bad47b98d)

float
[externalTempo](#classEurorackClock_a0622d65ad3d8f7542ecef32415a2bfde)

int
[lastClockState](#classEurorackClock_aa1f32b9296ee482b8cc4a5a5b0246ad4)

unsigned long
[lastClockTime](#classEurorackClock_abdd7383cccac419acc8fb29ef21c11d0)

int [tickCount](#classEurorackClock_a52d17e9dbf5701acca86bee03a16b730)

static [EurorackClock](#classEurorackClock) $\ast$
[instance](#classEurorackClock_a10369405a7858db967411284861e3439) =
nullptr

static float
[lastFlashTime](#classEurorackClock_a9f9bb4fdbf42fea86ba74511dde5285f) =
0

static int
[flashPulseCount](#classEurorackClock_a3c863251f650f36cf05de825a300a7fb)
= 0

static const unsigned long
[MIDI\_CLOCK\_TIMEOUT](#classEurorackClock_ae5b52e0dacc5a2e9a1f53f380f245cb1)
= 1000

static const int
[LED\_ON\_DURATION](#classEurorackClock_aa19d61388803b784928c4ab209f18cab)
= 10

static const int
[LONG\_LED\_ON\_DURATION](#classEurorackClock_aa6f21a81192926804c417f3937608af0)
= 50

static const int
[MIDI\_CLOCK\_PULSE\_COUNT](#classEurorackClock_af1d98ae106104e4a771e42fda5b88d0c)
= 24

[\[classEurorackClock\_ab4640da7e0f07985916b5ed44a6afbd2\]]{#classEurorackClock_ab4640da7e0f07985916b5ed44a6afbd2
label="classEurorackClock_ab4640da7e0f07985916b5ed44a6afbd2"}

EurorackClock::EurorackClock (

clockPin,

resetPin,

tempoLedPin,

gates,

leds

)

[\[classEurorackClock\_a55a6e89f8c69c7ee73392c89f8e155a8\]]{#classEurorackClock_a55a6e89f8c69c7ee73392c89f8e155a8
label="classEurorackClock_a55a6e89f8c69c7ee73392c89f8e155a8"}

void EurorackClock::decideFlash (

)

[\[classEurorackClock\_acda15075afacc084a32c3cebbd077914\]]{#classEurorackClock_acda15075afacc084a32c3cebbd077914
label="classEurorackClock_acda15075afacc084a32c3cebbd077914"}

void EurorackClock::flashTempoLed (

)

[\[classEurorackClock\_a3ee132275b852260555b9cd5cf9536c1\]]{#classEurorackClock_a3ee132275b852260555b9cd5cf9536c1
label="classEurorackClock_a3ee132275b852260555b9cd5cf9536c1"}

int EurorackClock::getTempo (

) const

[\[classEurorackClock\_ab526a6829f0489eae35811e86e7e80f8\]]{#classEurorackClock_ab526a6829f0489eae35811e86e7e80f8
label="classEurorackClock_ab526a6829f0489eae35811e86e7e80f8"}

void EurorackClock::handleExternalClock (

)

[\[classEurorackClock\_aa204c15662e069ecbf1ac4029116365d\]]{#classEurorackClock_aa204c15662e069ecbf1ac4029116365d
label="classEurorackClock_aa204c15662e069ecbf1ac4029116365d"}

void EurorackClock::handleMidiClock (

)

[\[classEurorackClock\_a50a5339b6a232a0e2db5bf7c621bbf9e\]]{#classEurorackClock_a50a5339b6a232a0e2db5bf7c621bbf9e
label="classEurorackClock_a50a5339b6a232a0e2db5bf7c621bbf9e"}

void EurorackClock::handleResetTrigger (

)

[\[classEurorackClock\_a02c9cd57faf38ecdfec76e6d09d93b7c\]]{#classEurorackClock_a02c9cd57faf38ecdfec76e6d09d93b7c
label="classEurorackClock_a02c9cd57faf38ecdfec76e6d09d93b7c"}

void EurorackClock::handleTempoLed (

currentTime

)

[\[classEurorackClock\_aec074cdc6187413e42bb4e1cce6c07c8\]]{#classEurorackClock_aec074cdc6187413e42bb4e1cce6c07c8
label="classEurorackClock_aec074cdc6187413e42bb4e1cce6c07c8"}

static void EurorackClock::interruptHandler (

),

[\[classEurorackClock\_acb69cc2c53c500576df9c12c025db2d1\]]{#classEurorackClock_acb69cc2c53c500576df9c12c025db2d1
label="classEurorackClock_acb69cc2c53c500576df9c12c025db2d1"}

void EurorackClock::reset (

)

[\[classEurorackClock\_ace2ae0b8ec34653a1186f0e8939c9f0e\]]{#classEurorackClock_ace2ae0b8ec34653a1186f0e8939c9f0e
label="classEurorackClock_ace2ae0b8ec34653a1186f0e8939c9f0e"}

void EurorackClock::reset (

selectedGate

)

[\[classEurorackClock\_ac6279fbb8d7396de017252b39b3f266b\]]{#classEurorackClock_ac6279fbb8d7396de017252b39b3f266b
label="classEurorackClock_ac6279fbb8d7396de017252b39b3f266b"}

static void EurorackClock::resetInterruptHandler (

),

[\[classEurorackClock\_aa911fac3efe50a37cf2355046119461b\]]{#classEurorackClock_aa911fac3efe50a37cf2355046119461b
label="classEurorackClock_aa911fac3efe50a37cf2355046119461b"}

void EurorackClock::setExternalTempo (

isExternalTempo

)

[\[classEurorackClock\_a6f6b794fde098d908287afb357d30cb6\]]{#classEurorackClock_a6f6b794fde098d908287afb357d30cb6
label="classEurorackClock_a6f6b794fde098d908287afb357d30cb6"}

void EurorackClock::setPPQN (

ppqn

)

[\[classEurorackClock\_a3abcd345bde222e68cd86464ae1de2ae\]]{#classEurorackClock_a3abcd345bde222e68cd86464ae1de2ae
label="classEurorackClock_a3abcd345bde222e68cd86464ae1de2ae"}

void EurorackClock::setTempo (

newTempo,

ppqn

)

[\[classEurorackClock\_af237ef8da045ffc906547346b8e1e20d\]]{#classEurorackClock_af237ef8da045ffc906547346b8e1e20d
label="classEurorackClock_af237ef8da045ffc906547346b8e1e20d"}

void EurorackClock::setup (

)

[\[classEurorackClock\_a4af4876927901a6cfc1619d2192fbb55\]]{#classEurorackClock_a4af4876927901a6cfc1619d2192fbb55
label="classEurorackClock_a4af4876927901a6cfc1619d2192fbb55"}

bool EurorackClock::shouldTriggerClockPulse (

)

[\[classEurorackClock\_a85a00dfdd0cd08c0b3a9d90acc5cc66b\]]{#classEurorackClock_a85a00dfdd0cd08c0b3a9d90acc5cc66b
label="classEurorackClock_a85a00dfdd0cd08c0b3a9d90acc5cc66b"}

void EurorackClock::start (

)

[\[classEurorackClock\_ad92731fd0b8203b283be37fd83ab9e7b\]]{#classEurorackClock_ad92731fd0b8203b283be37fd83ab9e7b
label="classEurorackClock_ad92731fd0b8203b283be37fd83ab9e7b"}

void EurorackClock::stop (

)

[\[classEurorackClock\_a7881b7e717da092e55e7f8b0961b6ae0\]]{#classEurorackClock_a7881b7e717da092e55e7f8b0961b6ae0
label="classEurorackClock_a7881b7e717da092e55e7f8b0961b6ae0"}

void EurorackClock::tick (

)

[\[classEurorackClock\_a45c55e3e1a02a319cf83c60658bff956\]]{#classEurorackClock_a45c55e3e1a02a319cf83c60658bff956
label="classEurorackClock_a45c55e3e1a02a319cf83c60658bff956"}

void EurorackClock::toggleLedOnDuration (

selectingTempo

)

[\[classEurorackClock\_a300b4ab6a0b925f185841a7bca2d80cc\]]{#classEurorackClock_a300b4ab6a0b925f185841a7bca2d80cc
label="classEurorackClock_a300b4ab6a0b925f185841a7bca2d80cc"}

void EurorackClock::triggerClockPulse (

)

[\[classEurorackClock\_a708240997f4112f2bcb7f9e25ab186eb\]]{#classEurorackClock_a708240997f4112f2bcb7f9e25ab186eb
label="classEurorackClock_a708240997f4112f2bcb7f9e25ab186eb"}

void EurorackClock::triggerGates (

currentTime

)

[\[classEurorackClock\_ad3159d70a7ed39e332b6564c2b0e227f\]]{#classEurorackClock_ad3159d70a7ed39e332b6564c2b0e227f
label="classEurorackClock_ad3159d70a7ed39e332b6564c2b0e227f"}

void EurorackClock::triggerTempoLed (

currentTime

)

[\[classEurorackClock\_ae0c42a84a524c12c2f01e43682e5e36f\]]{#classEurorackClock_ae0c42a84a524c12c2f01e43682e5e36f
label="classEurorackClock_ae0c42a84a524c12c2f01e43682e5e36f"}

void EurorackClock::updateFlashPulseCount (

)

[\[classEurorackClock\_a9cddc56f91761c38a32f850fe4920804\]]{#classEurorackClock_a9cddc56f91761c38a32f850fe4920804
label="classEurorackClock_a9cddc56f91761c38a32f850fe4920804"}

void EurorackClock::updateTempoLed (

currentTime

)

[\[classEurorackClock\_ae8c82303a099d61cd967306957419d4e\]]{#classEurorackClock_ae8c82303a099d61cd967306957419d4e
label="classEurorackClock_ae8c82303a099d61cd967306957419d4e"} int
EurorackClock::clockPin

[\[classEurorackClock\_a6582607e7c111bb17bd4656bade25880\]]{#classEurorackClock_a6582607e7c111bb17bd4656bade25880
label="classEurorackClock_a6582607e7c111bb17bd4656bade25880"}
[ClockState](#structClockState) EurorackClock::clockState

[\[classEurorackClock\_aa33304d81b503a6183633369016188a6\]]{#classEurorackClock_aa33304d81b503a6183633369016188a6
label="classEurorackClock_aa33304d81b503a6183633369016188a6"}
[InputPin](#classInputPin) EurorackClock::externalClock

[\[classEurorackClock\_a0622d65ad3d8f7542ecef32415a2bfde\]]{#classEurorackClock_a0622d65ad3d8f7542ecef32415a2bfde
label="classEurorackClock_a0622d65ad3d8f7542ecef32415a2bfde"} float
EurorackClock::externalTempo

[\[classEurorackClock\_a3c863251f650f36cf05de825a300a7fb\]]{#classEurorackClock_a3c863251f650f36cf05de825a300a7fb
label="classEurorackClock_a3c863251f650f36cf05de825a300a7fb"} int
EurorackClock::flashPulseCount = 0,

[\[classEurorackClock\_af7e11cb46ab51c58609123ae13c236eb\]]{#classEurorackClock_af7e11cb46ab51c58609123ae13c236eb
label="classEurorackClock_af7e11cb46ab51c58609123ae13c236eb"}
[Gates](#classGates)& EurorackClock::gates

[\[classEurorackClock\_a10369405a7858db967411284861e3439\]]{#classEurorackClock_a10369405a7858db967411284861e3439
label="classEurorackClock_a10369405a7858db967411284861e3439"}
[EurorackClock](#classEurorackClock) $\ast$ EurorackClock::instance =
nullptr,

[\[classEurorackClock\_a53f9514598facb1b47a35e2d0cfc5bf6\]]{#classEurorackClock_a53f9514598facb1b47a35e2d0cfc5bf6
label="classEurorackClock_a53f9514598facb1b47a35e2d0cfc5bf6"} bool
EurorackClock::isExternalTempo

[\[classEurorackClock\_a707c76310f278ac9675d493d356623c1\]]{#classEurorackClock_a707c76310f278ac9675d493d356623c1
label="classEurorackClock_a707c76310f278ac9675d493d356623c1"} bool
EurorackClock::isMidiClock

[\[classEurorackClock\_a432c6c15fe407d014f6d2c4148346c4a\]]{#classEurorackClock_a432c6c15fe407d014f6d2c4148346c4a
label="classEurorackClock_a432c6c15fe407d014f6d2c4148346c4a"} bool
EurorackClock::isRunning

[\[classEurorackClock\_aa1f32b9296ee482b8cc4a5a5b0246ad4\]]{#classEurorackClock_aa1f32b9296ee482b8cc4a5a5b0246ad4
label="classEurorackClock_aa1f32b9296ee482b8cc4a5a5b0246ad4"} int
EurorackClock::lastClockState

[\[classEurorackClock\_abdd7383cccac419acc8fb29ef21c11d0\]]{#classEurorackClock_abdd7383cccac419acc8fb29ef21c11d0
label="classEurorackClock_abdd7383cccac419acc8fb29ef21c11d0"} unsigned
long EurorackClock::lastClockTime

[\[classEurorackClock\_aae0d70573973af8a7800dddd0fdaafe8\]]{#classEurorackClock_aae0d70573973af8a7800dddd0fdaafe8
label="classEurorackClock_aae0d70573973af8a7800dddd0fdaafe8"} float
EurorackClock::lastExternalTickTime

[\[classEurorackClock\_a9f9bb4fdbf42fea86ba74511dde5285f\]]{#classEurorackClock_a9f9bb4fdbf42fea86ba74511dde5285f
label="classEurorackClock_a9f9bb4fdbf42fea86ba74511dde5285f"} float
EurorackClock::lastFlashTime = 0,

[\[classEurorackClock\_a530f570bb7e4615cf304f473ac820133\]]{#classEurorackClock_a530f570bb7e4615cf304f473ac820133
label="classEurorackClock_a530f570bb7e4615cf304f473ac820133"} unsigned
long EurorackClock::lastMidiClockTime

[\[classEurorackClock\_a2793ecd9e97550228e88fed371ed671d\]]{#classEurorackClock_a2793ecd9e97550228e88fed371ed671d
label="classEurorackClock_a2793ecd9e97550228e88fed371ed671d"} float
EurorackClock::lastTickTime

[\[classEurorackClock\_aa19d61388803b784928c4ab209f18cab\]]{#classEurorackClock_aa19d61388803b784928c4ab209f18cab
label="classEurorackClock_aa19d61388803b784928c4ab209f18cab"} const int
EurorackClock::LED\_ON\_DURATION = 10,

[\[classEurorackClock\_a49c3ef3023e15397d463026b93229634\]]{#classEurorackClock_a49c3ef3023e15397d463026b93229634
label="classEurorackClock_a49c3ef3023e15397d463026b93229634"} int
EurorackClock::ledOnDuration =
[LONG\_LED\_ON\_DURATION](#classEurorackClock_aa6f21a81192926804c417f3937608af0)

[\[classEurorackClock\_a8f2268e67c1164e5acb449e2ff162892\]]{#classEurorackClock_a8f2268e67c1164e5acb449e2ff162892
label="classEurorackClock_a8f2268e67c1164e5acb449e2ff162892"} unsigned
long EurorackClock::ledOnTime = 0

[\[classEurorackClock\_a808f0d1dc014fd9f8541433bc26ed921\]]{#classEurorackClock_a808f0d1dc014fd9f8541433bc26ed921
label="classEurorackClock_a808f0d1dc014fd9f8541433bc26ed921"}
[LEDs](#classLEDs)& EurorackClock::leds

[\[classEurorackClock\_aa6f21a81192926804c417f3937608af0\]]{#classEurorackClock_aa6f21a81192926804c417f3937608af0
label="classEurorackClock_aa6f21a81192926804c417f3937608af0"} const int
EurorackClock::LONG\_LED\_ON\_DURATION = 50,

[\[classEurorackClock\_af1d98ae106104e4a771e42fda5b88d0c\]]{#classEurorackClock_af1d98ae106104e4a771e42fda5b88d0c
label="classEurorackClock_af1d98ae106104e4a771e42fda5b88d0c"} const int
EurorackClock::MIDI\_CLOCK\_PULSE\_COUNT = 24,

[\[classEurorackClock\_ae5b52e0dacc5a2e9a1f53f380f245cb1\]]{#classEurorackClock_ae5b52e0dacc5a2e9a1f53f380f245cb1
label="classEurorackClock_ae5b52e0dacc5a2e9a1f53f380f245cb1"} const
unsigned long EurorackClock::MIDI\_CLOCK\_TIMEOUT = 1000,

[\[classEurorackClock\_ac829929df9b7372bcd3b2c609ecbf9a1\]]{#classEurorackClock_ac829929df9b7372bcd3b2c609ecbf9a1
label="classEurorackClock_ac829929df9b7372bcd3b2c609ecbf9a1"} int
EurorackClock::ppqn

[\[classEurorackClock\_ae2d7164536f7921ac0751875fd67c83b\]]{#classEurorackClock_ae2d7164536f7921ac0751875fd67c83b
label="classEurorackClock_ae2d7164536f7921ac0751875fd67c83b"}
[InputPin](#classInputPin) EurorackClock::resetButton

[\[classEurorackClock\_a013e9fa1f3c6af6fb7517cdca76905ad\]]{#classEurorackClock_a013e9fa1f3c6af6fb7517cdca76905ad
label="classEurorackClock_a013e9fa1f3c6af6fb7517cdca76905ad"} int
EurorackClock::resetPin

[\[classEurorackClock\_a1534c3851f19a278a70f7d6bad47b98d\]]{#classEurorackClock_a1534c3851f19a278a70f7d6bad47b98d
label="classEurorackClock_a1534c3851f19a278a70f7d6bad47b98d"} bool
EurorackClock::resetTriggered

[\[classEurorackClock\_ae31434bf73c7c86490a70d5fa6dbe3fc\]]{#classEurorackClock_ae31434bf73c7c86490a70d5fa6dbe3fc
label="classEurorackClock_ae31434bf73c7c86490a70d5fa6dbe3fc"} float
EurorackClock::tempo

[\[classEurorackClock\_a08c566025baec51dfe9528636895dca1\]]{#classEurorackClock_a08c566025baec51dfe9528636895dca1
label="classEurorackClock_a08c566025baec51dfe9528636895dca1"}
[LED](#classLED) EurorackClock::tempoLed

[\[classEurorackClock\_a52d17e9dbf5701acca86bee03a16b730\]]{#classEurorackClock_a52d17e9dbf5701acca86bee03a16b730
label="classEurorackClock_a52d17e9dbf5701acca86bee03a16b730"} int
EurorackClock::tickCount

[\[classEurorackClock\_aa316235771ee7584bbf198798fa62a09\]]{#classEurorackClock_aa316235771ee7584bbf198798fa62a09
label="classEurorackClock_aa316235771ee7584bbf198798fa62a09"} float
EurorackClock::tickInterval

[\[classEurorackClock\_a4a47006cfd467d0385bc605ea9157618\]]{#classEurorackClock_a4a47006cfd467d0385bc605ea9157618
label="classEurorackClock_a4a47006cfd467d0385bc605ea9157618"}
HardwareTimer$\ast$ EurorackClock::timer

[\[classEurorackClock\_aa44f194d606bc5dd0caf3508bacc6857\]]{#classEurorackClock_aa44f194d606bc5dd0caf3508bacc6857
label="classEurorackClock_aa44f194d606bc5dd0caf3508bacc6857"} bool
EurorackClock::timeToFlash

The documentation for this class was generated from the following files:

include/[EurorackClock.h](#EurorackClock_8h)

src/[EurorackClock.cpp](#EurorackClock_8cpp)
