::: {#classModeSelector}
:::

[\[classModeSelector\]]{#classModeSelector label="classModeSelector"}

\#include $<$ModeSelector.h$>$

Collaboration diagram for ModeSelector:

![image](classModeSelector__coll__graph){height="550pt"}

int [getMode](#classModeSelector_a4df062db5ff1caaae1e2d7fc44915bff) ()
const

void [setMode](#classModeSelector_a3951bcc3ea04b712d94850920b7b6031)
(int newMode)

void
[handleLongPress](#classModeSelector_ac85d39879a6059172ca90e57341e3371)
()

void
[handleEncoderRotation](#classModeSelector_aad5e1a078338a35232888ec31d6cc5ee)
()

void
[handleModeSelectionPress](#classModeSelector_a50329d06bde51f77027d6ce9e2444bc1)
()

void
[handleButtonPress](#classModeSelector_a56ce569a1e97e2a0b382d032fabf8dda)
()

void
[setLedController](#classModeSelector_addf7f39b68e55c83b693da4911bd5fa6)
([LEDController](#classLEDController)
&[ledController](#classModeSelector_a2f8c7699b4534f802f75ba51393ba4d2))

void [setEncoder](#classModeSelector_a5b291f549e155bc4f47c35746d966221)
([Encoder](#classEncoder)
&[encoder](#classModeSelector_ab65d65f54eab8ec5335df2206273f0d8))

void
[setCurrentMode](#classModeSelector_a0232058d131a73a98781552b12a3b696)
([Mode](#classMode)
$\ast$&[currentMode](#classModeSelector_adb7ab19bba250819ca90a26c8281bf71))

bool
[isInModeSelection](#classModeSelector_a6da6a3354fe3d5afd3f241324359de03)
()

[Mode](#classMode) $\ast$
[getCurrentMode](#classModeSelector_a5a599c64ffef54ba1dade4fedff23d7a)
()

void [addMode](#classModeSelector_ab3680d5757a1efade5128dad7c7c0ab6)
([Mode](#classMode)
$\ast$[mode](#classModeSelector_aaab9cca1953b1f4797a55ded09638c95))

void [update](#classModeSelector_ac94481813de71f0680ab6c005c0b8e12) ()

static [ModeSelector](#classModeSelector) &
[getInstance](#classModeSelector_a2312f6a56156ab4557baebe6f2d050ea) ()

[ModeSelector](#classModeSelector_af0db492b33c751ccaafa23d9b3880fbc) ()

[ModeSelector](#classModeSelector_a5c89c05801d37b7763369afe0940c7e9)
([ModeSelector](#classModeSelector) const &)

void [operator=](#classModeSelector_a7e4c75c64115ff1628b1338df8d36639)
([ModeSelector](#classModeSelector) const &)

std::vector$<$ [Mode](#classMode) $\ast$ $>$
[modes](#classModeSelector_a4d26cfed61b6573ecaae521b85997b8c)

[Mode](#classMode) $\ast$
[nullMode](#classModeSelector_a28fad2b854f3a9d724c3661d87a94c0e) =
nullptr

[Mode](#classMode) $\ast$&
[currentMode](#classModeSelector_adb7ab19bba250819ca90a26c8281bf71)

int [mode](#classModeSelector_aaab9cca1953b1f4797a55ded09638c95)

int
[inModeSelection](#classModeSelector_ab3ca420fe69c659b5f92b6ae799e5c89)
= false

[LEDController](#classLEDController) $\ast$
[ledController](#classModeSelector_a2f8c7699b4534f802f75ba51393ba4d2)

[Encoder](#classEncoder) $\ast$
[encoder](#classModeSelector_ab65d65f54eab8ec5335df2206273f0d8)

[ResetButton](#classResetButton) $\ast$
[resetButton](#classModeSelector_a6b43ab161008add913652ccea49951e1)

bool
[isInSelection](#classModeSelector_a4dc6fb472a2757e88dde6f35137c08e4)

bool
[inChannelSelection](#classModeSelector_af98d3659251c8bed66b9335cc5c7f9c9)

bool
[singlePressHandled](#classModeSelector_aa101ddd545060ae8f98e58f986f86637)

bool
[doublePressHandled](#classModeSelector_ae886bbd080f44f047682429748c28045)

bool
[longPressHandled](#classModeSelector_ade89353075816ece4e257ded8e888d88)

size\_t
[totalModes](#classModeSelector_aa34005332133e2b5e10a4b904aa3c23e) =
modes.size()

int [previousMode](#classModeSelector_a69c5b741591b66abbf46e64aa295a8f8)
= -1

int [numLeds](#classModeSelector_a9657b40d4e60d82c6e4ac5a2a605c47e)

[\[classModeSelector\_af0db492b33c751ccaafa23d9b3880fbc\]]{#classModeSelector_af0db492b33c751ccaafa23d9b3880fbc
label="classModeSelector_af0db492b33c751ccaafa23d9b3880fbc"}

ModeSelector::ModeSelector (

)

[\[classModeSelector\_a5c89c05801d37b7763369afe0940c7e9\]]{#classModeSelector_a5c89c05801d37b7763369afe0940c7e9
label="classModeSelector_a5c89c05801d37b7763369afe0940c7e9"}

ModeSelector::ModeSelector (

)

[\[classModeSelector\_ab3680d5757a1efade5128dad7c7c0ab6\]]{#classModeSelector_ab3680d5757a1efade5128dad7c7c0ab6
label="classModeSelector_ab3680d5757a1efade5128dad7c7c0ab6"}

void ModeSelector::addMode (

mode

)

[\[classModeSelector\_a5a599c64ffef54ba1dade4fedff23d7a\]]{#classModeSelector_a5a599c64ffef54ba1dade4fedff23d7a
label="classModeSelector_a5a599c64ffef54ba1dade4fedff23d7a"}

[Mode](#classMode) $\ast$ ModeSelector::getCurrentMode (

)

[\[classModeSelector\_a2312f6a56156ab4557baebe6f2d050ea\]]{#classModeSelector_a2312f6a56156ab4557baebe6f2d050ea
label="classModeSelector_a2312f6a56156ab4557baebe6f2d050ea"}

[ModeSelector](#classModeSelector) & ModeSelector::getInstance (

)

[\[classModeSelector\_a4df062db5ff1caaae1e2d7fc44915bff\]]{#classModeSelector_a4df062db5ff1caaae1e2d7fc44915bff
label="classModeSelector_a4df062db5ff1caaae1e2d7fc44915bff"}

int ModeSelector::getMode (

) const

[\[classModeSelector\_a56ce569a1e97e2a0b382d032fabf8dda\]]{#classModeSelector_a56ce569a1e97e2a0b382d032fabf8dda
label="classModeSelector_a56ce569a1e97e2a0b382d032fabf8dda"}

void ModeSelector::handleButtonPress (

)

[\[classModeSelector\_aad5e1a078338a35232888ec31d6cc5ee\]]{#classModeSelector_aad5e1a078338a35232888ec31d6cc5ee
label="classModeSelector_aad5e1a078338a35232888ec31d6cc5ee"}

void ModeSelector::handleEncoderRotation (

)

[\[classModeSelector\_ac85d39879a6059172ca90e57341e3371\]]{#classModeSelector_ac85d39879a6059172ca90e57341e3371
label="classModeSelector_ac85d39879a6059172ca90e57341e3371"}

void ModeSelector::handleLongPress (

)

[\[classModeSelector\_a50329d06bde51f77027d6ce9e2444bc1\]]{#classModeSelector_a50329d06bde51f77027d6ce9e2444bc1
label="classModeSelector_a50329d06bde51f77027d6ce9e2444bc1"}

void ModeSelector::handleModeSelectionPress (

)

[\[classModeSelector\_a6da6a3354fe3d5afd3f241324359de03\]]{#classModeSelector_a6da6a3354fe3d5afd3f241324359de03
label="classModeSelector_a6da6a3354fe3d5afd3f241324359de03"}

bool ModeSelector::isInModeSelection (

)

[\[classModeSelector\_a7e4c75c64115ff1628b1338df8d36639\]]{#classModeSelector_a7e4c75c64115ff1628b1338df8d36639
label="classModeSelector_a7e4c75c64115ff1628b1338df8d36639"}

void ModeSelector::operator= (

)

[\[classModeSelector\_a0232058d131a73a98781552b12a3b696\]]{#classModeSelector_a0232058d131a73a98781552b12a3b696
label="classModeSelector_a0232058d131a73a98781552b12a3b696"}

void ModeSelector::setCurrentMode (

currentMode

)

[\[classModeSelector\_a5b291f549e155bc4f47c35746d966221\]]{#classModeSelector_a5b291f549e155bc4f47c35746d966221
label="classModeSelector_a5b291f549e155bc4f47c35746d966221"}

void ModeSelector::setEncoder (

encoder

)

[\[classModeSelector\_addf7f39b68e55c83b693da4911bd5fa6\]]{#classModeSelector_addf7f39b68e55c83b693da4911bd5fa6
label="classModeSelector_addf7f39b68e55c83b693da4911bd5fa6"}

void ModeSelector::setLedController (

ledController

)

[\[classModeSelector\_a3951bcc3ea04b712d94850920b7b6031\]]{#classModeSelector_a3951bcc3ea04b712d94850920b7b6031
label="classModeSelector_a3951bcc3ea04b712d94850920b7b6031"}

void ModeSelector::setMode (

newMode

)

[\[classModeSelector\_ac94481813de71f0680ab6c005c0b8e12\]]{#classModeSelector_ac94481813de71f0680ab6c005c0b8e12
label="classModeSelector_ac94481813de71f0680ab6c005c0b8e12"}

void ModeSelector::update (

)

[\[classModeSelector\_adb7ab19bba250819ca90a26c8281bf71\]]{#classModeSelector_adb7ab19bba250819ca90a26c8281bf71
label="classModeSelector_adb7ab19bba250819ca90a26c8281bf71"}
[Mode](#classMode)$\ast$& ModeSelector::currentMode

[\[classModeSelector\_ae886bbd080f44f047682429748c28045\]]{#classModeSelector_ae886bbd080f44f047682429748c28045
label="classModeSelector_ae886bbd080f44f047682429748c28045"} bool
ModeSelector::doublePressHandled

[\[classModeSelector\_ab65d65f54eab8ec5335df2206273f0d8\]]{#classModeSelector_ab65d65f54eab8ec5335df2206273f0d8
label="classModeSelector_ab65d65f54eab8ec5335df2206273f0d8"}
[Encoder](#classEncoder)$\ast$ ModeSelector::encoder

[\[classModeSelector\_af98d3659251c8bed66b9335cc5c7f9c9\]]{#classModeSelector_af98d3659251c8bed66b9335cc5c7f9c9
label="classModeSelector_af98d3659251c8bed66b9335cc5c7f9c9"} bool
ModeSelector::inChannelSelection

[\[classModeSelector\_ab3ca420fe69c659b5f92b6ae799e5c89\]]{#classModeSelector_ab3ca420fe69c659b5f92b6ae799e5c89
label="classModeSelector_ab3ca420fe69c659b5f92b6ae799e5c89"} int
ModeSelector::inModeSelection = false

[\[classModeSelector\_a4dc6fb472a2757e88dde6f35137c08e4\]]{#classModeSelector_a4dc6fb472a2757e88dde6f35137c08e4
label="classModeSelector_a4dc6fb472a2757e88dde6f35137c08e4"} bool
ModeSelector::isInSelection

[\[classModeSelector\_a2f8c7699b4534f802f75ba51393ba4d2\]]{#classModeSelector_a2f8c7699b4534f802f75ba51393ba4d2
label="classModeSelector_a2f8c7699b4534f802f75ba51393ba4d2"}
[LEDController](#classLEDController)$\ast$ ModeSelector::ledController

[\[classModeSelector\_ade89353075816ece4e257ded8e888d88\]]{#classModeSelector_ade89353075816ece4e257ded8e888d88
label="classModeSelector_ade89353075816ece4e257ded8e888d88"} bool
ModeSelector::longPressHandled

[\[classModeSelector\_aaab9cca1953b1f4797a55ded09638c95\]]{#classModeSelector_aaab9cca1953b1f4797a55ded09638c95
label="classModeSelector_aaab9cca1953b1f4797a55ded09638c95"} int
ModeSelector::mode

[\[classModeSelector\_a4d26cfed61b6573ecaae521b85997b8c\]]{#classModeSelector_a4d26cfed61b6573ecaae521b85997b8c
label="classModeSelector_a4d26cfed61b6573ecaae521b85997b8c"}
std::vector$<$[Mode](#classMode)$\ast$$>$ ModeSelector::modes

[\[classModeSelector\_a28fad2b854f3a9d724c3661d87a94c0e\]]{#classModeSelector_a28fad2b854f3a9d724c3661d87a94c0e
label="classModeSelector_a28fad2b854f3a9d724c3661d87a94c0e"}
[Mode](#classMode)$\ast$ ModeSelector::nullMode = nullptr

[\[classModeSelector\_a9657b40d4e60d82c6e4ac5a2a605c47e\]]{#classModeSelector_a9657b40d4e60d82c6e4ac5a2a605c47e
label="classModeSelector_a9657b40d4e60d82c6e4ac5a2a605c47e"} int
ModeSelector::numLeds

[\[classModeSelector\_a69c5b741591b66abbf46e64aa295a8f8\]]{#classModeSelector_a69c5b741591b66abbf46e64aa295a8f8
label="classModeSelector_a69c5b741591b66abbf46e64aa295a8f8"} int
ModeSelector::previousMode = -1

[\[classModeSelector\_a6b43ab161008add913652ccea49951e1\]]{#classModeSelector_a6b43ab161008add913652ccea49951e1
label="classModeSelector_a6b43ab161008add913652ccea49951e1"}
[ResetButton](#classResetButton)$\ast$ ModeSelector::resetButton

[\[classModeSelector\_aa101ddd545060ae8f98e58f986f86637\]]{#classModeSelector_aa101ddd545060ae8f98e58f986f86637
label="classModeSelector_aa101ddd545060ae8f98e58f986f86637"} bool
ModeSelector::singlePressHandled

[\[classModeSelector\_aa34005332133e2b5e10a4b904aa3c23e\]]{#classModeSelector_aa34005332133e2b5e10a4b904aa3c23e
label="classModeSelector_aa34005332133e2b5e10a4b904aa3c23e"} size\_t
ModeSelector::totalModes = modes.size()

The documentation for this class was generated from the following files:

include/[ModeSelector.h](#ModeSelector_8h)

src/[ModeSelector.cpp](#ModeSelector_8cpp)
