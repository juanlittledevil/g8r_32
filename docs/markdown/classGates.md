::: {#classGates}
:::

[\[classGates\]]{#classGates label="classGates"}

\#include $<$Gates.h$>$

Collaboration diagram for Gates:

![image](classGates__coll__graph){height="550pt"}

[Gates](#classGates_af53ba952e2d91b90884fb38fe1f0fa0d) (std::vector$<$
int $>$ [pins](#main_8cpp_a782432745fd904139737a67cfe18cc45), int
[numGates](#classGates_a8aa11d0f9ea6f809549664f8fd4f7cc2))

[$\sim$Gates](#classGates_a7bc98979e801ceb6e28472af3eb0a78f) ()

void [begin](#classGates_a5a46476bf82868dcfcabb8bb93b14e84) ()

void [setState](#classGates_ac2c1de1f4bd52fbedb24f9aae00af9d9) (int
gateIndex, bool state)

bool [getState](#classGates_a83389338058653f2defddf694a927d56) (int
gateIndex)

void [turnOnGate](#classGates_a4c955fec75ce64b0eb76b2fcdca2b7ce) (int
index)

void [turnOffGate](#classGates_a7ab4510b88636eb970d61282353c1eb9) (int
index)

void [setALLGates](#classGates_a02f76825e2dccc537b4e495b88bbedc4) (bool
state)

void [update](#classGates_a4397cba12ab477b8759ccf846b5a909d) (unsigned
long currentTime)

void [trigger](#classGates_a6ef8dcff0ca40853f6ec07d20afa1b9b) (int
index, unsigned long currentTime)

void [setDivision](#classGates_ad2bc306e44f4f9dc025c57cd37e7c97f) (int
index, int division)

int [getDivision](#classGates_a06f6153e686887048497f965599e6ba4) (int
index)

void [setSelectedGate](#classGates_a4c5925d6eaea3c640d7e23f2219d6991)
(int gate)

int [getSelectedGate](#classGates_a18d0602275e88db59021394b4a377151) ()

void [setGateOnDuration](#classGates_a2450c2bb48ab40c0c81b6a717d2e30ca)
(int index, int duration)

int [numGates](#classGates_a8aa11d0f9ea6f809549664f8fd4f7cc2)

int $\ast$ [gateCounters](#classGates_a283f2d50700fad8bdca29e6227e65045)

[Gate](#classGate) $\ast$
[gateArray](#classGates_a4864124d3f822dbed79aa467f454fd1a)

int [selectedGate](#classGates_aac445c16f01968f9c919815f24f3a0a7)

[\[classGates\_af53ba952e2d91b90884fb38fe1f0fa0d\]]{#classGates_af53ba952e2d91b90884fb38fe1f0fa0d
label="classGates_af53ba952e2d91b90884fb38fe1f0fa0d"}

Gates::Gates (

pins,

numGates

)

[\[classGates\_a7bc98979e801ceb6e28472af3eb0a78f\]]{#classGates_a7bc98979e801ceb6e28472af3eb0a78f
label="classGates_a7bc98979e801ceb6e28472af3eb0a78f"}

Gates::$\sim$Gates (

)

[\[classGates\_a5a46476bf82868dcfcabb8bb93b14e84\]]{#classGates_a5a46476bf82868dcfcabb8bb93b14e84
label="classGates_a5a46476bf82868dcfcabb8bb93b14e84"}

void Gates::begin (

)

[\[classGates\_a06f6153e686887048497f965599e6ba4\]]{#classGates_a06f6153e686887048497f965599e6ba4
label="classGates_a06f6153e686887048497f965599e6ba4"}

int Gates::getDivision (

index

)

[\[classGates\_a18d0602275e88db59021394b4a377151\]]{#classGates_a18d0602275e88db59021394b4a377151
label="classGates_a18d0602275e88db59021394b4a377151"}

int Gates::getSelectedGate (

)

[\[classGates\_a83389338058653f2defddf694a927d56\]]{#classGates_a83389338058653f2defddf694a927d56
label="classGates_a83389338058653f2defddf694a927d56"}

bool Gates::getState (

gateIndex

)

[\[classGates\_a02f76825e2dccc537b4e495b88bbedc4\]]{#classGates_a02f76825e2dccc537b4e495b88bbedc4
label="classGates_a02f76825e2dccc537b4e495b88bbedc4"}

void Gates::setALLGates (

state

)

[\[classGates\_ad2bc306e44f4f9dc025c57cd37e7c97f\]]{#classGates_ad2bc306e44f4f9dc025c57cd37e7c97f
label="classGates_ad2bc306e44f4f9dc025c57cd37e7c97f"}

void Gates::setDivision (

index,

division

)

[\[classGates\_a2450c2bb48ab40c0c81b6a717d2e30ca\]]{#classGates_a2450c2bb48ab40c0c81b6a717d2e30ca
label="classGates_a2450c2bb48ab40c0c81b6a717d2e30ca"}

void Gates::setGateOnDuration (

index,

duration

)

[\[classGates\_a4c5925d6eaea3c640d7e23f2219d6991\]]{#classGates_a4c5925d6eaea3c640d7e23f2219d6991
label="classGates_a4c5925d6eaea3c640d7e23f2219d6991"}

void Gates::setSelectedGate (

gate

)

[\[classGates\_ac2c1de1f4bd52fbedb24f9aae00af9d9\]]{#classGates_ac2c1de1f4bd52fbedb24f9aae00af9d9
label="classGates_ac2c1de1f4bd52fbedb24f9aae00af9d9"}

void Gates::setState (

gateIndex,

state

)

[\[classGates\_a6ef8dcff0ca40853f6ec07d20afa1b9b\]]{#classGates_a6ef8dcff0ca40853f6ec07d20afa1b9b
label="classGates_a6ef8dcff0ca40853f6ec07d20afa1b9b"}

void Gates::trigger (

index,

currentTime

)

[\[classGates\_a7ab4510b88636eb970d61282353c1eb9\]]{#classGates_a7ab4510b88636eb970d61282353c1eb9
label="classGates_a7ab4510b88636eb970d61282353c1eb9"}

void Gates::turnOffGate (

index

)

[\[classGates\_a4c955fec75ce64b0eb76b2fcdca2b7ce\]]{#classGates_a4c955fec75ce64b0eb76b2fcdca2b7ce
label="classGates_a4c955fec75ce64b0eb76b2fcdca2b7ce"}

void Gates::turnOnGate (

index

)

[\[classGates\_a4397cba12ab477b8759ccf846b5a909d\]]{#classGates_a4397cba12ab477b8759ccf846b5a909d
label="classGates_a4397cba12ab477b8759ccf846b5a909d"}

void Gates::update (

currentTime

)

[\[classGates\_a4864124d3f822dbed79aa467f454fd1a\]]{#classGates_a4864124d3f822dbed79aa467f454fd1a
label="classGates_a4864124d3f822dbed79aa467f454fd1a"}
[Gate](#classGate)$\ast$ Gates::gateArray

[\[classGates\_a283f2d50700fad8bdca29e6227e65045\]]{#classGates_a283f2d50700fad8bdca29e6227e65045
label="classGates_a283f2d50700fad8bdca29e6227e65045"} int$\ast$
Gates::gateCounters

[\[classGates\_a8aa11d0f9ea6f809549664f8fd4f7cc2\]]{#classGates_a8aa11d0f9ea6f809549664f8fd4f7cc2
label="classGates_a8aa11d0f9ea6f809549664f8fd4f7cc2"} int
Gates::numGates

[\[classGates\_aac445c16f01968f9c919815f24f3a0a7\]]{#classGates_aac445c16f01968f9c919815f24f3a0a7
label="classGates_aac445c16f01968f9c919815f24f3a0a7"} int
Gates::selectedGate

The documentation for this class was generated from the following files:

include/[Gates.h](#Gates_8h)

src/[Gates.cpp](#Gates_8cpp)
