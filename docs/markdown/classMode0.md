::: {#classMode0}
:::

[\[classMode0\]]{#classMode0 label="classMode0"}

\#include $<$Mode0.h$>$

Inheritance diagram for Mode0:

![image](classMode0__inherit__graph){height="550pt"}

Collaboration diagram for Mode0:

![image](classMode0__coll__graph){height="550pt"}

[Mode0](#classMode0_ac6c68a326df4139c0ea7cae89f79e923)
([Encoder](#classEncoder)
&[encoder](#classMode0_ab92b642845ecfe37182477b6de246e6f),
[InputHandler](#classInputHandler)
&[inputHandler](#classMode0_a8b44b908b0df280399ed62e46d23453b),
[Gates](#classGates)
&[gates](#classMode0_adc42a2183e9c806749f5a4a6de0fa07e),
[LEDController](#classLEDController)
&[ledController](#classMode0_ad1252cf80f5ab5c7ed8832e333001ecf),
[MIDIHandler](#classMIDIHandler)
&[midiHandler](#classMode0_a8d06cb8c1a9d88d5806dd2e431d1e98f),
[ResetButton](#classResetButton)
&[resetButton](#classMode0_a2e3f6fa1323a1d17620d99e106fd3d2d),
[EurorackClock](#classEurorackClock)
&[clock](#classMode0_ac7c269771d185bfd70c9610aa15d4873))

void [handleSinglePress](#classMode0_afc4ad8cc4c9c59838c774c3c72a05f33)
() override

void [handleDoublePress](#classMode0_ab2e88db8ebc6a5c3bfe60d63715870da)
() override

void [handleLongPress](#classMode0_aa5837e66a7d361a00f8799766ee8441e) ()
override

void
[handlePressReleased](#classMode0_a843a9f1c23e45dc2e6b3023d578402e6) ()
override

void
[handleSelectionStates](#classMode0_a1d2a907c0057865467210bf45f45e9c4)
() override

void
[handleResetSinglePress](#classMode0_ab49600e807fdc67b715aa5844e0008a7)
() override

void
[handleResetDoublePress](#classMode0_a5edace264c12da595e48be504f559d97)
() override

void
[handleResetLongPress](#classMode0_a3f1e02184589f15ce99156b58de814ce) ()
override

void
[handleResetPressReleased](#classMode0_aa3ef073cd777560821c68b82405c9696)
() override

void [setup](#classMode0_a3ddf8efd26e32d22530a1c37630bb341) () override

void [teardown](#classMode0_a898c2e53000955e37ef93983de7c7a54) ()
override

void [update](#classMode0_a0e20f81420b0dcd427f5cd9789cfdd4a) () override

void [setDivisionPPQN](#classMode0_a08f962ccd2bb1a958d8b6816af2af223)
(int ppqn)

void
[setDefaultDivisionIndex](#classMode0_aba40b7f6eb84a6e8b9052081c9346e48)
()

void [handleEncoder](#classMode0_a794e94163599470716ea944754ddd337) ()

void [handleButton](#classMode0_a27a112beb9ebe4648830681deab01ca0)
([Encoder::ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
buttonState)

void [handleResetButton](#classMode0_ae55cb650c7a6ace775a3a796097d603a)
([ResetButton::ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
buttonState)

void [handleCVInput](#classMode0_ab7d9744dbbb6b913d5093a20ba3eba36) ()

void
[handleTempoSelection](#classMode0_a3841d23139d59cdedfe95272724ca71f) ()

[LEDController](#classLEDController) &
[ledController](#classMode0_ad1252cf80f5ab5c7ed8832e333001ecf)

[Encoder](#classEncoder) &
[encoder](#classMode0_ab92b642845ecfe37182477b6de246e6f)

[ResetButton](#classResetButton) &
[resetButton](#classMode0_a2e3f6fa1323a1d17620d99e106fd3d2d)

[Gates](#classGates) &
[gates](#classMode0_adc42a2183e9c806749f5a4a6de0fa07e)

[EurorackClock](#classEurorackClock) &
[clock](#classMode0_ac7c269771d185bfd70c9610aa15d4873)

[MIDIHandler](#classMIDIHandler) &
[midiHandler](#classMode0_a8d06cb8c1a9d88d5806dd2e431d1e98f)

[InputHandler](#classInputHandler) &
[inputHandler](#classMode0_a8b44b908b0df280399ed62e46d23453b)

bool
[inDivisionSelection](#classMode0_af335be379b0fd0883e5797b0e0f398ff) =
false

bool [externalTempo](#classMode0_ae518d870e6feb9faed5463f7e82164a4) =
false

bool [singlePressHandled](#classMode0_a4cf5950c179f5ee11cb79b87af84f5d3)
= false

bool
[singleResetPressHandled](#classMode0_ae773b1cc8d0a7a3d3db4153827b2f1cc)
= false

int [tempoIncrement](#classMode0_a6f0459d85f755de7775f3de610ee74b3) = 1

const int [minTempo](#classMode0_a931032227e5a4553f7eee3210182dba8) = 20

const int [maxTempo](#classMode0_a53b9693eeb9e70d2200fa5fa058ff4b9) =
340

int [divisionIndex](#classMode0_aaf228318b6eb380ab81e0329010d3825) = 24

int [selectedGate](#classMode0_ae791813273bde4c769a69ff84a60f82a) = 0

bool [selectingTempo](#classMode0_a42f5db2d1e74a2cc249ab9af0d303dde) =
false

bool [doublePressHandled](#classMode0_a6687689798d7b32b2b15232c9c29c49d)
= false

bool
[doubleResetPressHandled](#classMode0_a35a6460b24e5f6f9480b8f73dae1d24a)
= false

[\[classMode0\_ac6c68a326df4139c0ea7cae89f79e923\]]{#classMode0_ac6c68a326df4139c0ea7cae89f79e923
label="classMode0_ac6c68a326df4139c0ea7cae89f79e923"}

Mode0::Mode0 (

encoder,

inputHandler,

gates,

ledController,

midiHandler,

resetButton,

clock

)

[\[classMode0\_a27a112beb9ebe4648830681deab01ca0\]]{#classMode0_a27a112beb9ebe4648830681deab01ca0
label="classMode0_a27a112beb9ebe4648830681deab01ca0"}

void Mode0::handleButton (

buttonState

)

[\[classMode0\_ab7d9744dbbb6b913d5093a20ba3eba36\]]{#classMode0_ab7d9744dbbb6b913d5093a20ba3eba36
label="classMode0_ab7d9744dbbb6b913d5093a20ba3eba36"}

void Mode0::handleCVInput (

)

[\[classMode0\_ab2e88db8ebc6a5c3bfe60d63715870da\]]{#classMode0_ab2e88db8ebc6a5c3bfe60d63715870da
label="classMode0_ab2e88db8ebc6a5c3bfe60d63715870da"}

void Mode0::handleDoublePress (

),

Implements [Mode](#classMode_a2f81571d058f2b1ed1592d2041799202).

[\[classMode0\_a794e94163599470716ea944754ddd337\]]{#classMode0_a794e94163599470716ea944754ddd337
label="classMode0_a794e94163599470716ea944754ddd337"}

void Mode0::handleEncoder (

)

[\[classMode0\_aa5837e66a7d361a00f8799766ee8441e\]]{#classMode0_aa5837e66a7d361a00f8799766ee8441e
label="classMode0_aa5837e66a7d361a00f8799766ee8441e"}

void Mode0::handleLongPress (

),

Implements [Mode](#classMode_a09a52e2df1ef9fa944875cba99fc57fd).

[\[classMode0\_a843a9f1c23e45dc2e6b3023d578402e6\]]{#classMode0_a843a9f1c23e45dc2e6b3023d578402e6
label="classMode0_a843a9f1c23e45dc2e6b3023d578402e6"}

void Mode0::handlePressReleased (

),

Implements [Mode](#classMode_ae6c70842a6e744185300d3b44c06bcaf).

[\[classMode0\_ae55cb650c7a6ace775a3a796097d603a\]]{#classMode0_ae55cb650c7a6ace775a3a796097d603a
label="classMode0_ae55cb650c7a6ace775a3a796097d603a"}

void Mode0::handleResetButton (

buttonState

)

[\[classMode0\_a5edace264c12da595e48be504f559d97\]]{#classMode0_a5edace264c12da595e48be504f559d97
label="classMode0_a5edace264c12da595e48be504f559d97"}

void Mode0::handleResetDoublePress (

),

Implements [Mode](#classMode_aaa9b6958129f7d8e8bed339e790131e0).

[\[classMode0\_a3f1e02184589f15ce99156b58de814ce\]]{#classMode0_a3f1e02184589f15ce99156b58de814ce
label="classMode0_a3f1e02184589f15ce99156b58de814ce"}

void Mode0::handleResetLongPress (

),

Implements [Mode](#classMode_ac153613d96bea9fba3e9775e2861ef0e).

[\[classMode0\_aa3ef073cd777560821c68b82405c9696\]]{#classMode0_aa3ef073cd777560821c68b82405c9696
label="classMode0_aa3ef073cd777560821c68b82405c9696"}

void Mode0::handleResetPressReleased (

),

Implements [Mode](#classMode_a2b12c8d0ae0d884c8168218c4c167d92).

[\[classMode0\_ab49600e807fdc67b715aa5844e0008a7\]]{#classMode0_ab49600e807fdc67b715aa5844e0008a7
label="classMode0_ab49600e807fdc67b715aa5844e0008a7"}

void Mode0::handleResetSinglePress (

),

Implements [Mode](#classMode_a81ad1f477340a92ebf3e5a3ed8427ca1).

[\[classMode0\_a1d2a907c0057865467210bf45f45e9c4\]]{#classMode0_a1d2a907c0057865467210bf45f45e9c4
label="classMode0_a1d2a907c0057865467210bf45f45e9c4"}

void Mode0::handleSelectionStates (

),

Implements [Mode](#classMode_ae272309e82f82d2967c16c80712fed28).

[\[classMode0\_afc4ad8cc4c9c59838c774c3c72a05f33\]]{#classMode0_afc4ad8cc4c9c59838c774c3c72a05f33
label="classMode0_afc4ad8cc4c9c59838c774c3c72a05f33"}

void Mode0::handleSinglePress (

),

Implements [Mode](#classMode_a278db06e9d46fe80d61d577f9f636fa2).

[\[classMode0\_a3841d23139d59cdedfe95272724ca71f\]]{#classMode0_a3841d23139d59cdedfe95272724ca71f
label="classMode0_a3841d23139d59cdedfe95272724ca71f"}

void Mode0::handleTempoSelection (

)

[\[classMode0\_aba40b7f6eb84a6e8b9052081c9346e48\]]{#classMode0_aba40b7f6eb84a6e8b9052081c9346e48
label="classMode0_aba40b7f6eb84a6e8b9052081c9346e48"}

void Mode0::setDefaultDivisionIndex (

)

[\[classMode0\_a08f962ccd2bb1a958d8b6816af2af223\]]{#classMode0_a08f962ccd2bb1a958d8b6816af2af223
label="classMode0_a08f962ccd2bb1a958d8b6816af2af223"}

void Mode0::setDivisionPPQN (

ppqn

)

[\[classMode0\_a3ddf8efd26e32d22530a1c37630bb341\]]{#classMode0_a3ddf8efd26e32d22530a1c37630bb341
label="classMode0_a3ddf8efd26e32d22530a1c37630bb341"}

void Mode0::setup (

),

Implements [Mode](#classMode_acded67ff8ef9572e44948971385701ab).

[\[classMode0\_a898c2e53000955e37ef93983de7c7a54\]]{#classMode0_a898c2e53000955e37ef93983de7c7a54
label="classMode0_a898c2e53000955e37ef93983de7c7a54"}

void Mode0::teardown (

),

Implements [Mode](#classMode_a126f69890bd05de9745561a7f592aabd).

[\[classMode0\_a0e20f81420b0dcd427f5cd9789cfdd4a\]]{#classMode0_a0e20f81420b0dcd427f5cd9789cfdd4a
label="classMode0_a0e20f81420b0dcd427f5cd9789cfdd4a"}

void Mode0::update (

),

Implements [Mode](#classMode_aa2c21d9299b9df6912689e4ada8d3102).

[\[classMode0\_ac7c269771d185bfd70c9610aa15d4873\]]{#classMode0_ac7c269771d185bfd70c9610aa15d4873
label="classMode0_ac7c269771d185bfd70c9610aa15d4873"}
[EurorackClock](#classEurorackClock)& Mode0::clock

[\[classMode0\_aaf228318b6eb380ab81e0329010d3825\]]{#classMode0_aaf228318b6eb380ab81e0329010d3825
label="classMode0_aaf228318b6eb380ab81e0329010d3825"} int
Mode0::divisionIndex = 24

[\[classMode0\_a6687689798d7b32b2b15232c9c29c49d\]]{#classMode0_a6687689798d7b32b2b15232c9c29c49d
label="classMode0_a6687689798d7b32b2b15232c9c29c49d"} bool
Mode0::doublePressHandled = false

[\[classMode0\_a35a6460b24e5f6f9480b8f73dae1d24a\]]{#classMode0_a35a6460b24e5f6f9480b8f73dae1d24a
label="classMode0_a35a6460b24e5f6f9480b8f73dae1d24a"} bool
Mode0::doubleResetPressHandled = false

[\[classMode0\_ab92b642845ecfe37182477b6de246e6f\]]{#classMode0_ab92b642845ecfe37182477b6de246e6f
label="classMode0_ab92b642845ecfe37182477b6de246e6f"}
[Encoder](#classEncoder)& Mode0::encoder

[\[classMode0\_ae518d870e6feb9faed5463f7e82164a4\]]{#classMode0_ae518d870e6feb9faed5463f7e82164a4
label="classMode0_ae518d870e6feb9faed5463f7e82164a4"} bool
Mode0::externalTempo = false

[\[classMode0\_adc42a2183e9c806749f5a4a6de0fa07e\]]{#classMode0_adc42a2183e9c806749f5a4a6de0fa07e
label="classMode0_adc42a2183e9c806749f5a4a6de0fa07e"}
[Gates](#classGates)& Mode0::gates

[\[classMode0\_af335be379b0fd0883e5797b0e0f398ff\]]{#classMode0_af335be379b0fd0883e5797b0e0f398ff
label="classMode0_af335be379b0fd0883e5797b0e0f398ff"} bool
Mode0::inDivisionSelection = false

[\[classMode0\_a8b44b908b0df280399ed62e46d23453b\]]{#classMode0_a8b44b908b0df280399ed62e46d23453b
label="classMode0_a8b44b908b0df280399ed62e46d23453b"}
[InputHandler](#classInputHandler)& Mode0::inputHandler

[\[classMode0\_ad1252cf80f5ab5c7ed8832e333001ecf\]]{#classMode0_ad1252cf80f5ab5c7ed8832e333001ecf
label="classMode0_ad1252cf80f5ab5c7ed8832e333001ecf"}
[LEDController](#classLEDController)& Mode0::ledController

[\[classMode0\_a53b9693eeb9e70d2200fa5fa058ff4b9\]]{#classMode0_a53b9693eeb9e70d2200fa5fa058ff4b9
label="classMode0_a53b9693eeb9e70d2200fa5fa058ff4b9"} const int
Mode0::maxTempo = 340

[\[classMode0\_a8d06cb8c1a9d88d5806dd2e431d1e98f\]]{#classMode0_a8d06cb8c1a9d88d5806dd2e431d1e98f
label="classMode0_a8d06cb8c1a9d88d5806dd2e431d1e98f"}
[MIDIHandler](#classMIDIHandler)& Mode0::midiHandler

[\[classMode0\_a931032227e5a4553f7eee3210182dba8\]]{#classMode0_a931032227e5a4553f7eee3210182dba8
label="classMode0_a931032227e5a4553f7eee3210182dba8"} const int
Mode0::minTempo = 20

[\[classMode0\_a2e3f6fa1323a1d17620d99e106fd3d2d\]]{#classMode0_a2e3f6fa1323a1d17620d99e106fd3d2d
label="classMode0_a2e3f6fa1323a1d17620d99e106fd3d2d"}
[ResetButton](#classResetButton)& Mode0::resetButton

[\[classMode0\_ae791813273bde4c769a69ff84a60f82a\]]{#classMode0_ae791813273bde4c769a69ff84a60f82a
label="classMode0_ae791813273bde4c769a69ff84a60f82a"} int
Mode0::selectedGate = 0

[\[classMode0\_a42f5db2d1e74a2cc249ab9af0d303dde\]]{#classMode0_a42f5db2d1e74a2cc249ab9af0d303dde
label="classMode0_a42f5db2d1e74a2cc249ab9af0d303dde"} bool
Mode0::selectingTempo = false

[\[classMode0\_a4cf5950c179f5ee11cb79b87af84f5d3\]]{#classMode0_a4cf5950c179f5ee11cb79b87af84f5d3
label="classMode0_a4cf5950c179f5ee11cb79b87af84f5d3"} bool
Mode0::singlePressHandled = false

[\[classMode0\_ae773b1cc8d0a7a3d3db4153827b2f1cc\]]{#classMode0_ae773b1cc8d0a7a3d3db4153827b2f1cc
label="classMode0_ae773b1cc8d0a7a3d3db4153827b2f1cc"} bool
Mode0::singleResetPressHandled = false

[\[classMode0\_a6f0459d85f755de7775f3de610ee74b3\]]{#classMode0_a6f0459d85f755de7775f3de610ee74b3
label="classMode0_a6f0459d85f755de7775f3de610ee74b3"} int
Mode0::tempoIncrement = 1

The documentation for this class was generated from the following files:

include/[Mode0.h](#Mode0_8h)

src/[Mode0.cpp](#Mode0_8cpp)
