::: {#classMode1}
:::

[\[classMode1\]]{#classMode1 label="classMode1"}

\#include $<$Mode1.h$>$

Inheritance diagram for Mode1:

![image](classMode1__inherit__graph){height="550pt"}

Collaboration diagram for Mode1:

![image](classMode1__coll__graph){height="550pt"}

[Mode1](#classMode1_ac50bac6ef48f13b9f9f23066ee3a14da)
([Encoder](#classEncoder)
&[encoder](#classMode1_a813970d5012b890a2b0d0be7f9a54c72),
[InputHandler](#classInputHandler)
&[inputHandler](#classMode1_ab553243d551d5337b9d11451c257813c),
[Gates](#classGates)
&[gates](#classMode1_abf42339815e644befd936ad85c4b6d87),
[LEDController](#classLEDController)
&[ledController](#classMode1_a05d96fc5e86a390d30ddb724cc7f5d7d),
[MIDIHandler](#classMIDIHandler)
&[midiHandler](#classMode1_a8e5360d6c20dc92f0632bdc4c234e2ac),
[ResetButton](#classResetButton)
&[resetButton](#classMode1_a74a6e31f008c5b03e672ad74022f0cad))

void [handleSinglePress](#classMode1_a01c39504689522af8e908f3a9f629f3d)
() override

void [handleDoublePress](#classMode1_aece3b8dfd8fbe3a049dd50cac7827163)
() override

void [handleLongPress](#classMode1_a3efa76e8f49820d5506a2fddba895d1a) ()
override

void
[handlePressReleased](#classMode1_a27a79d962981799ecb081f6b2116bc4c) ()
override

void
[handleSelectionStates](#classMode1_ad456ee0f626d63c9f96db8a8fbbedae5)
() override

void
[handleResetSinglePress](#classMode1_a130b9bda7ac6c03348c1e0f652f4c40f)
() override

void
[handleResetDoublePress](#classMode1_a3faff5eb1aea3412f05145d5894778be)
() override

void
[handleResetLongPress](#classMode1_ab4c68c413efac263349524806bdb6262) ()
override

void
[handleResetPressReleased](#classMode1_aaf69b8382102d521c89786ab12513748)
() override

void [setup](#classMode1_aa3c75dd038802a4e3ab7381a82cfa0bd) () override

void [teardown](#classMode1_ac71878a012a9adb6adcba2c8338be06e) ()
override

void [update](#classMode1_ab4ed6fb24ddf6f713cbde450496cd16d) () override

void [handleEncoder](#classMode1_a67b35345a3f671799182f48495ba897d) ()

void [handleButton](#classMode1_a38dc924a8193edd4dc649372530f31c2)
([Encoder::ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
buttonState)

void
[handleChannelSelection](#classMode1_acf1ab35c4057e3e8dd1bbd38a4226077)
()

void
[handleChannelSelectionPress](#classMode1_a6ee6933e5dd127f1b7d73cff9e8f1dc4)
()

[LEDController](#classLEDController) &
[ledController](#classMode1_a05d96fc5e86a390d30ddb724cc7f5d7d)

[InputHandler](#classInputHandler) &
[inputHandler](#classMode1_ab553243d551d5337b9d11451c257813c)

[Encoder](#classEncoder) &
[encoder](#classMode1_a813970d5012b890a2b0d0be7f9a54c72)

[ResetButton](#classResetButton) &
[resetButton](#classMode1_a74a6e31f008c5b03e672ad74022f0cad)

[Gates](#classGates) &
[gates](#classMode1_abf42339815e644befd936ad85c4b6d87)

[MIDIHandler](#classMIDIHandler) &
[midiHandler](#classMode1_a8e5360d6c20dc92f0632bdc4c234e2ac)

bool [doublePressHandled](#classMode1_ac572589a3df90e198153c5df4daf221a)
= false

bool [inChannelSelection](#classMode1_afbeca71c5625415fe1850e374f436c61)
= false

bool [isInSelection](#classMode1_a965dcdf8b3fb9e9ec6d9f4e266c9ce3d) =
false

bool [singlePressHandled](#classMode1_aad6bd19e9779c9fa1e134501a3ef03fe)
= false

int [selectedChannel](#classMode1_a43973ea688753e2695ec9daa54774e46) = 9

int [confirmedChannel](#classMode1_a869e723dd397e09dad3f775f2c703720) =
9

int [previousChannel](#classMode1_a111d75d8f9cb54613b50109259a81950) =
-1

const int
[NUM\_MIDI\_CHANNELS](#classMode1_ac510b4ab9f79d4ba2c3c1e129b75c939) =
16

int [numLeds](#classMode1_ae0fc8662aa17fcd2595477bffcf275f9) = 8

[\[classMode1\_ac50bac6ef48f13b9f9f23066ee3a14da\]]{#classMode1_ac50bac6ef48f13b9f9f23066ee3a14da
label="classMode1_ac50bac6ef48f13b9f9f23066ee3a14da"}

Mode1::Mode1 (

encoder,

inputHandler,

gates,

ledController,

midiHandler,

resetButton

)

[\[classMode1\_a38dc924a8193edd4dc649372530f31c2\]]{#classMode1_a38dc924a8193edd4dc649372530f31c2
label="classMode1_a38dc924a8193edd4dc649372530f31c2"}

void Mode1::handleButton (

buttonState

)

[\[classMode1\_acf1ab35c4057e3e8dd1bbd38a4226077\]]{#classMode1_acf1ab35c4057e3e8dd1bbd38a4226077
label="classMode1_acf1ab35c4057e3e8dd1bbd38a4226077"}

void Mode1::handleChannelSelection (

)

[\[classMode1\_a6ee6933e5dd127f1b7d73cff9e8f1dc4\]]{#classMode1_a6ee6933e5dd127f1b7d73cff9e8f1dc4
label="classMode1_a6ee6933e5dd127f1b7d73cff9e8f1dc4"}

void Mode1::handleChannelSelectionPress (

)

[\[classMode1\_aece3b8dfd8fbe3a049dd50cac7827163\]]{#classMode1_aece3b8dfd8fbe3a049dd50cac7827163
label="classMode1_aece3b8dfd8fbe3a049dd50cac7827163"}

void Mode1::handleDoublePress (

),

Implements [Mode](#classMode_a2f81571d058f2b1ed1592d2041799202).

[\[classMode1\_a67b35345a3f671799182f48495ba897d\]]{#classMode1_a67b35345a3f671799182f48495ba897d
label="classMode1_a67b35345a3f671799182f48495ba897d"}

void Mode1::handleEncoder (

)

[\[classMode1\_a3efa76e8f49820d5506a2fddba895d1a\]]{#classMode1_a3efa76e8f49820d5506a2fddba895d1a
label="classMode1_a3efa76e8f49820d5506a2fddba895d1a"}

void Mode1::handleLongPress (

),

Implements [Mode](#classMode_a09a52e2df1ef9fa944875cba99fc57fd).

[\[classMode1\_a27a79d962981799ecb081f6b2116bc4c\]]{#classMode1_a27a79d962981799ecb081f6b2116bc4c
label="classMode1_a27a79d962981799ecb081f6b2116bc4c"}

void Mode1::handlePressReleased (

),

Implements [Mode](#classMode_ae6c70842a6e744185300d3b44c06bcaf).

[\[classMode1\_a3faff5eb1aea3412f05145d5894778be\]]{#classMode1_a3faff5eb1aea3412f05145d5894778be
label="classMode1_a3faff5eb1aea3412f05145d5894778be"}

void Mode1::handleResetDoublePress (

),

Implements [Mode](#classMode_aaa9b6958129f7d8e8bed339e790131e0).

[\[classMode1\_ab4c68c413efac263349524806bdb6262\]]{#classMode1_ab4c68c413efac263349524806bdb6262
label="classMode1_ab4c68c413efac263349524806bdb6262"}

void Mode1::handleResetLongPress (

),

Implements [Mode](#classMode_ac153613d96bea9fba3e9775e2861ef0e).

[\[classMode1\_aaf69b8382102d521c89786ab12513748\]]{#classMode1_aaf69b8382102d521c89786ab12513748
label="classMode1_aaf69b8382102d521c89786ab12513748"}

void Mode1::handleResetPressReleased (

),

Implements [Mode](#classMode_a2b12c8d0ae0d884c8168218c4c167d92).

[\[classMode1\_a130b9bda7ac6c03348c1e0f652f4c40f\]]{#classMode1_a130b9bda7ac6c03348c1e0f652f4c40f
label="classMode1_a130b9bda7ac6c03348c1e0f652f4c40f"}

void Mode1::handleResetSinglePress (

),

Implements [Mode](#classMode_a81ad1f477340a92ebf3e5a3ed8427ca1).

[\[classMode1\_ad456ee0f626d63c9f96db8a8fbbedae5\]]{#classMode1_ad456ee0f626d63c9f96db8a8fbbedae5
label="classMode1_ad456ee0f626d63c9f96db8a8fbbedae5"}

void Mode1::handleSelectionStates (

),

Implements [Mode](#classMode_ae272309e82f82d2967c16c80712fed28).

[\[classMode1\_a01c39504689522af8e908f3a9f629f3d\]]{#classMode1_a01c39504689522af8e908f3a9f629f3d
label="classMode1_a01c39504689522af8e908f3a9f629f3d"}

void Mode1::handleSinglePress (

),

Implements [Mode](#classMode_a278db06e9d46fe80d61d577f9f636fa2).

[\[classMode1\_aa3c75dd038802a4e3ab7381a82cfa0bd\]]{#classMode1_aa3c75dd038802a4e3ab7381a82cfa0bd
label="classMode1_aa3c75dd038802a4e3ab7381a82cfa0bd"}

void Mode1::setup (

),

Implements [Mode](#classMode_acded67ff8ef9572e44948971385701ab).

[\[classMode1\_ac71878a012a9adb6adcba2c8338be06e\]]{#classMode1_ac71878a012a9adb6adcba2c8338be06e
label="classMode1_ac71878a012a9adb6adcba2c8338be06e"}

void Mode1::teardown (

),

Implements [Mode](#classMode_a126f69890bd05de9745561a7f592aabd).

[\[classMode1\_ab4ed6fb24ddf6f713cbde450496cd16d\]]{#classMode1_ab4ed6fb24ddf6f713cbde450496cd16d
label="classMode1_ab4ed6fb24ddf6f713cbde450496cd16d"}

void Mode1::update (

),

Implements [Mode](#classMode_aa2c21d9299b9df6912689e4ada8d3102).

[\[classMode1\_a869e723dd397e09dad3f775f2c703720\]]{#classMode1_a869e723dd397e09dad3f775f2c703720
label="classMode1_a869e723dd397e09dad3f775f2c703720"} int
Mode1::confirmedChannel = 9

[\[classMode1\_ac572589a3df90e198153c5df4daf221a\]]{#classMode1_ac572589a3df90e198153c5df4daf221a
label="classMode1_ac572589a3df90e198153c5df4daf221a"} bool
Mode1::doublePressHandled = false

[\[classMode1\_a813970d5012b890a2b0d0be7f9a54c72\]]{#classMode1_a813970d5012b890a2b0d0be7f9a54c72
label="classMode1_a813970d5012b890a2b0d0be7f9a54c72"}
[Encoder](#classEncoder)& Mode1::encoder

[\[classMode1\_abf42339815e644befd936ad85c4b6d87\]]{#classMode1_abf42339815e644befd936ad85c4b6d87
label="classMode1_abf42339815e644befd936ad85c4b6d87"}
[Gates](#classGates)& Mode1::gates

[\[classMode1\_afbeca71c5625415fe1850e374f436c61\]]{#classMode1_afbeca71c5625415fe1850e374f436c61
label="classMode1_afbeca71c5625415fe1850e374f436c61"} bool
Mode1::inChannelSelection = false

[\[classMode1\_ab553243d551d5337b9d11451c257813c\]]{#classMode1_ab553243d551d5337b9d11451c257813c
label="classMode1_ab553243d551d5337b9d11451c257813c"}
[InputHandler](#classInputHandler)& Mode1::inputHandler

[\[classMode1\_a965dcdf8b3fb9e9ec6d9f4e266c9ce3d\]]{#classMode1_a965dcdf8b3fb9e9ec6d9f4e266c9ce3d
label="classMode1_a965dcdf8b3fb9e9ec6d9f4e266c9ce3d"} bool
Mode1::isInSelection = false

[\[classMode1\_a05d96fc5e86a390d30ddb724cc7f5d7d\]]{#classMode1_a05d96fc5e86a390d30ddb724cc7f5d7d
label="classMode1_a05d96fc5e86a390d30ddb724cc7f5d7d"}
[LEDController](#classLEDController)& Mode1::ledController

[\[classMode1\_a8e5360d6c20dc92f0632bdc4c234e2ac\]]{#classMode1_a8e5360d6c20dc92f0632bdc4c234e2ac
label="classMode1_a8e5360d6c20dc92f0632bdc4c234e2ac"}
[MIDIHandler](#classMIDIHandler)& Mode1::midiHandler

[\[classMode1\_ac510b4ab9f79d4ba2c3c1e129b75c939\]]{#classMode1_ac510b4ab9f79d4ba2c3c1e129b75c939
label="classMode1_ac510b4ab9f79d4ba2c3c1e129b75c939"} const int
Mode1::NUM\_MIDI\_CHANNELS = 16

[\[classMode1\_ae0fc8662aa17fcd2595477bffcf275f9\]]{#classMode1_ae0fc8662aa17fcd2595477bffcf275f9
label="classMode1_ae0fc8662aa17fcd2595477bffcf275f9"} int Mode1::numLeds
= 8

[\[classMode1\_a111d75d8f9cb54613b50109259a81950\]]{#classMode1_a111d75d8f9cb54613b50109259a81950
label="classMode1_a111d75d8f9cb54613b50109259a81950"} int
Mode1::previousChannel = -1

[\[classMode1\_a74a6e31f008c5b03e672ad74022f0cad\]]{#classMode1_a74a6e31f008c5b03e672ad74022f0cad
label="classMode1_a74a6e31f008c5b03e672ad74022f0cad"}
[ResetButton](#classResetButton)& Mode1::resetButton

[\[classMode1\_a43973ea688753e2695ec9daa54774e46\]]{#classMode1_a43973ea688753e2695ec9daa54774e46
label="classMode1_a43973ea688753e2695ec9daa54774e46"} int
Mode1::selectedChannel = 9

[\[classMode1\_aad6bd19e9779c9fa1e134501a3ef03fe\]]{#classMode1_aad6bd19e9779c9fa1e134501a3ef03fe
label="classMode1_aad6bd19e9779c9fa1e134501a3ef03fe"} bool
Mode1::singlePressHandled = false

The documentation for this class was generated from the following files:

include/[Mode1.h](#Mode1_8h)

src/[Mode1.cpp](#Mode1_8cpp)
