::: {#classMode2}
:::

[\[classMode2\]]{#classMode2 label="classMode2"}

\#include $<$Mode2.h$>$

Inheritance diagram for Mode2:

![image](classMode2__inherit__graph){height="550pt"}

Collaboration diagram for Mode2:

![image](classMode2__coll__graph){height="550pt"}

[Mode2](#classMode2_aa3d0d2137844e8e359d73db4ff991274)
([Encoder](#classEncoder)
&[encoder](#classMode2_a69b706c00f657f336dee43ddd99ac6a7),
[InputHandler](#classInputHandler)
&[inputHandler](#classMode2_a3743f7fa6df1df514bcbec1b031ba9f0),
[Gates](#classGates)
&[gates](#classMode2_a2d0e2cb262c9a1b593d2ca26bce49259),
[LEDController](#classLEDController)
&[ledController](#classMode2_a432820b6e885e9fd7b34f438905bff56),
[MIDIHandler](#classMIDIHandler)
&[midiHandler](#classMode2_a296c6bf60e684f337c11b338e8b545ce),
[ResetButton](#classResetButton)
&[resetButton](#classMode2_a01e9205eb4c0aae549de2ead64413431))

void [handleSinglePress](#classMode2_ad0c3080fefd693164c4091435e3886d3)
() override

void [handleDoublePress](#classMode2_a4a844846f0e3acbf9476c959c4a9328c)
() override

void [handleLongPress](#classMode2_a0a566142bbc28d36a18168256e01e5e2) ()
override

void
[handlePressReleased](#classMode2_aa06056369a76dc1203d4f228a70ad384) ()
override

void
[handleSelectionStates](#classMode2_a00e770966c8f1d3a4c9214d38a127e26)
() override

void
[handleResetSinglePress](#classMode2_a15de3fce5b6874e783f48bb30ac3c8a8)
() override

void
[handleResetDoublePress](#classMode2_a571ea6b512d8fa4bc26d43849561049f)
() override

void
[handleResetLongPress](#classMode2_a39215df4cb9d1e59c04e89ba753978b1) ()
override

void
[handleResetPressReleased](#classMode2_aa25c57375888b02cb609edc73585e376)
() override

void [setup](#classMode2_a0cf31cb7e85618022b870d485679c2b9) () override

void [teardown](#classMode2_ad3bfbb002457e274fd65abd7673e9782) ()
override

void [update](#classMode2_ad053ed624ffa14272894e0ca75b5c2b1) () override

void [handleEncoder](#classMode2_a3cd955fd44bfb07a089b671097a157a5) ()

void [handleButton](#classMode2_a24e78ef9e1816bd462a6c45f72c06fcd)
([Encoder::ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
buttonState)

[LEDController](#classLEDController) &
[ledController](#classMode2_a432820b6e885e9fd7b34f438905bff56)

[InputHandler](#classInputHandler) &
[inputHandler](#classMode2_a3743f7fa6df1df514bcbec1b031ba9f0)

[Encoder](#classEncoder) &
[encoder](#classMode2_a69b706c00f657f336dee43ddd99ac6a7)

[ResetButton](#classResetButton) &
[resetButton](#classMode2_a01e9205eb4c0aae549de2ead64413431)

[Gates](#classGates) &
[gates](#classMode2_a2d0e2cb262c9a1b593d2ca26bce49259)

[MIDIHandler](#classMIDIHandler) &
[midiHandler](#classMode2_a296c6bf60e684f337c11b338e8b545ce)

bool [doublePressHandled](#classMode2_a46d08b4d2045d045e20e19e332db1aa0)
= false

bool [isInSelection](#classMode2_aa8b0804dda5ea06b8e7e1ae02c1e1433) =
false

bool [singlePressHandled](#classMode2_a88ba8e992c81440f88648812f4b93db4)
= false

int [numLeds](#classMode2_ad1eb111869a3753f05915a6f5d60f961) = 8

[\[classMode2\_aa3d0d2137844e8e359d73db4ff991274\]]{#classMode2_aa3d0d2137844e8e359d73db4ff991274
label="classMode2_aa3d0d2137844e8e359d73db4ff991274"}

Mode2::Mode2 (

encoder,

inputHandler,

gates,

ledController,

midiHandler,

resetButton

)

[\[classMode2\_a24e78ef9e1816bd462a6c45f72c06fcd\]]{#classMode2_a24e78ef9e1816bd462a6c45f72c06fcd
label="classMode2_a24e78ef9e1816bd462a6c45f72c06fcd"}

void Mode2::handleButton (

buttonState

)

[\[classMode2\_a4a844846f0e3acbf9476c959c4a9328c\]]{#classMode2_a4a844846f0e3acbf9476c959c4a9328c
label="classMode2_a4a844846f0e3acbf9476c959c4a9328c"}

void Mode2::handleDoublePress (

),

Implements [Mode](#classMode_a2f81571d058f2b1ed1592d2041799202).

[\[classMode2\_a3cd955fd44bfb07a089b671097a157a5\]]{#classMode2_a3cd955fd44bfb07a089b671097a157a5
label="classMode2_a3cd955fd44bfb07a089b671097a157a5"}

void Mode2::handleEncoder (

)

[\[classMode2\_a0a566142bbc28d36a18168256e01e5e2\]]{#classMode2_a0a566142bbc28d36a18168256e01e5e2
label="classMode2_a0a566142bbc28d36a18168256e01e5e2"}

void Mode2::handleLongPress (

),

Implements [Mode](#classMode_a09a52e2df1ef9fa944875cba99fc57fd).

[\[classMode2\_aa06056369a76dc1203d4f228a70ad384\]]{#classMode2_aa06056369a76dc1203d4f228a70ad384
label="classMode2_aa06056369a76dc1203d4f228a70ad384"}

void Mode2::handlePressReleased (

),

Implements [Mode](#classMode_ae6c70842a6e744185300d3b44c06bcaf).

[\[classMode2\_a571ea6b512d8fa4bc26d43849561049f\]]{#classMode2_a571ea6b512d8fa4bc26d43849561049f
label="classMode2_a571ea6b512d8fa4bc26d43849561049f"}

void Mode2::handleResetDoublePress (

),

Implements [Mode](#classMode_aaa9b6958129f7d8e8bed339e790131e0).

[\[classMode2\_a39215df4cb9d1e59c04e89ba753978b1\]]{#classMode2_a39215df4cb9d1e59c04e89ba753978b1
label="classMode2_a39215df4cb9d1e59c04e89ba753978b1"}

void Mode2::handleResetLongPress (

),

Implements [Mode](#classMode_ac153613d96bea9fba3e9775e2861ef0e).

[\[classMode2\_aa25c57375888b02cb609edc73585e376\]]{#classMode2_aa25c57375888b02cb609edc73585e376
label="classMode2_aa25c57375888b02cb609edc73585e376"}

void Mode2::handleResetPressReleased (

),

Implements [Mode](#classMode_a2b12c8d0ae0d884c8168218c4c167d92).

[\[classMode2\_a15de3fce5b6874e783f48bb30ac3c8a8\]]{#classMode2_a15de3fce5b6874e783f48bb30ac3c8a8
label="classMode2_a15de3fce5b6874e783f48bb30ac3c8a8"}

void Mode2::handleResetSinglePress (

),

Implements [Mode](#classMode_a81ad1f477340a92ebf3e5a3ed8427ca1).

[\[classMode2\_a00e770966c8f1d3a4c9214d38a127e26\]]{#classMode2_a00e770966c8f1d3a4c9214d38a127e26
label="classMode2_a00e770966c8f1d3a4c9214d38a127e26"}

void Mode2::handleSelectionStates (

),

Implements [Mode](#classMode_ae272309e82f82d2967c16c80712fed28).

[\[classMode2\_ad0c3080fefd693164c4091435e3886d3\]]{#classMode2_ad0c3080fefd693164c4091435e3886d3
label="classMode2_ad0c3080fefd693164c4091435e3886d3"}

void Mode2::handleSinglePress (

),

Implements [Mode](#classMode_a278db06e9d46fe80d61d577f9f636fa2).

[\[classMode2\_a0cf31cb7e85618022b870d485679c2b9\]]{#classMode2_a0cf31cb7e85618022b870d485679c2b9
label="classMode2_a0cf31cb7e85618022b870d485679c2b9"}

void Mode2::setup (

),

Implements [Mode](#classMode_acded67ff8ef9572e44948971385701ab).

[\[classMode2\_ad3bfbb002457e274fd65abd7673e9782\]]{#classMode2_ad3bfbb002457e274fd65abd7673e9782
label="classMode2_ad3bfbb002457e274fd65abd7673e9782"}

void Mode2::teardown (

),

Implements [Mode](#classMode_a126f69890bd05de9745561a7f592aabd).

[\[classMode2\_ad053ed624ffa14272894e0ca75b5c2b1\]]{#classMode2_ad053ed624ffa14272894e0ca75b5c2b1
label="classMode2_ad053ed624ffa14272894e0ca75b5c2b1"}

void Mode2::update (

),

Implements [Mode](#classMode_aa2c21d9299b9df6912689e4ada8d3102).

[\[classMode2\_a46d08b4d2045d045e20e19e332db1aa0\]]{#classMode2_a46d08b4d2045d045e20e19e332db1aa0
label="classMode2_a46d08b4d2045d045e20e19e332db1aa0"} bool
Mode2::doublePressHandled = false

[\[classMode2\_a69b706c00f657f336dee43ddd99ac6a7\]]{#classMode2_a69b706c00f657f336dee43ddd99ac6a7
label="classMode2_a69b706c00f657f336dee43ddd99ac6a7"}
[Encoder](#classEncoder)& Mode2::encoder

[\[classMode2\_a2d0e2cb262c9a1b593d2ca26bce49259\]]{#classMode2_a2d0e2cb262c9a1b593d2ca26bce49259
label="classMode2_a2d0e2cb262c9a1b593d2ca26bce49259"}
[Gates](#classGates)& Mode2::gates

[\[classMode2\_a3743f7fa6df1df514bcbec1b031ba9f0\]]{#classMode2_a3743f7fa6df1df514bcbec1b031ba9f0
label="classMode2_a3743f7fa6df1df514bcbec1b031ba9f0"}
[InputHandler](#classInputHandler)& Mode2::inputHandler

[\[classMode2\_aa8b0804dda5ea06b8e7e1ae02c1e1433\]]{#classMode2_aa8b0804dda5ea06b8e7e1ae02c1e1433
label="classMode2_aa8b0804dda5ea06b8e7e1ae02c1e1433"} bool
Mode2::isInSelection = false

[\[classMode2\_a432820b6e885e9fd7b34f438905bff56\]]{#classMode2_a432820b6e885e9fd7b34f438905bff56
label="classMode2_a432820b6e885e9fd7b34f438905bff56"}
[LEDController](#classLEDController)& Mode2::ledController

[\[classMode2\_a296c6bf60e684f337c11b338e8b545ce\]]{#classMode2_a296c6bf60e684f337c11b338e8b545ce
label="classMode2_a296c6bf60e684f337c11b338e8b545ce"}
[MIDIHandler](#classMIDIHandler)& Mode2::midiHandler

[\[classMode2\_ad1eb111869a3753f05915a6f5d60f961\]]{#classMode2_ad1eb111869a3753f05915a6f5d60f961
label="classMode2_ad1eb111869a3753f05915a6f5d60f961"} int Mode2::numLeds
= 8

[\[classMode2\_a01e9205eb4c0aae549de2ead64413431\]]{#classMode2_a01e9205eb4c0aae549de2ead64413431
label="classMode2_a01e9205eb4c0aae549de2ead64413431"}
[ResetButton](#classResetButton)& Mode2::resetButton

[\[classMode2\_a88ba8e992c81440f88648812f4b93db4\]]{#classMode2_a88ba8e992c81440f88648812f4b93db4
label="classMode2_a88ba8e992c81440f88648812f4b93db4"} bool
Mode2::singlePressHandled = false

The documentation for this class was generated from the following files:

include/[Mode2.h](#Mode2_8h)

src/[Mode2.cpp](#Mode2_8cpp)
