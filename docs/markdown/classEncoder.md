::: {#classEncoder}
:::

[\[classEncoder\]]{#classEncoder label="classEncoder"}

\#include $<$Encoder.h$>$

Collaboration diagram for Encoder:

![image](classEncoder__coll__graph){height="550pt"}

enum [Direction](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213) {
[NONE](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83)
,
[CW](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5)
,
[CCW](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda)
}

enum [ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9) {
[OPEN](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6)
,
[PRESSED](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c)
}

[Encoder](#classEncoder_a5c9dd4c4121421f3868a6fae683ce201) (int
[encCLK](#classEncoder_a0f1cb342a57e8ed3b9a951563c184ceb), int
[encDT](#classEncoder_ad3c8d007a93ea4eae5decab4b7221a47), int
[encButton](#classEncoder_a07ae142110dd9baafcb60dd140d7f700))

void [begin](#classEncoder_a335f77fa68600c9a348f1cb9dba8ff5b) ()

[Direction](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213)
[readEncoder](#classEncoder_aec7e3503764db573a30979e95570f7c5) ()

[ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
[readButton](#classEncoder_ac2feca5ed5040737fbc9d6282e9b48f7) ()

int
[handleEncoderDirection](#classEncoder_a9fee5b6e9c060faa745a308793b984ab)
(int currentValue, int maxValue,
[Direction](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213) direction)

bool
[isButtonLongPressed](#classEncoder_a26b304caeb9cd561f201d101f62a8964)
()

bool
[isButtonDoublePressed](#classEncoder_a70380dcc135f2e564607ab3401708b84)
()

bool
[isButtonSinglePressed](#classEncoder_a08ba46bfb2eb288a47015d63d11e8077)
()

int [readSpeed](#classEncoder_a2924112ef1f2a7ea617926e86ab13538) ()

[InputPin](#classInputPin)
[encCLK](#classEncoder_a0f1cb342a57e8ed3b9a951563c184ceb)

[InputPin](#classInputPin)
[encDT](#classEncoder_ad3c8d007a93ea4eae5decab4b7221a47)

[InputPin](#classInputPin)
[encButton](#classEncoder_a07ae142110dd9baafcb60dd140d7f700)

int [prevStateCLK](#classEncoder_ade282a3469a7eed777d2212367704624)

[ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
[buttonState](#classEncoder_a43038f2d33e15f334fa70c0dbf740851)

unsigned long
[lastButtonPress](#classEncoder_a8562593d886f1a1ac75e504c5da3a41f)

int [pressCount](#classEncoder_a82d327bad0b2922d2a3d0ddc1e31e815)

unsigned long
[lastTurnTime](#classEncoder_a090819a377bc20c23a6de1bf7f28cfbc)

int [speed](#classEncoder_a7880595a1f5480757dd7125e4f47cb41)

static const unsigned long
[DOUBLE\_PRESS\_INTERVAL](#classEncoder_a3997f1d2b3f4fc9eaf3a2ecc334d98c5)
= 500

static const unsigned long
[LONG\_PRESS\_INTERVAL](#classEncoder_ac602a14a72602e3fa9ce103dd447aa8d)
= 1000

[\[classEncoder\_a8d10c6f5e558cd9235db9375bf980ab9\]]{#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9
label="classEncoder_a8d10c6f5e558cd9235db9375bf980ab9"} enum
[Encoder::ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)

Enumerator
\[0pt\]\[0pt\][\[classEncoder\_a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6\]]{#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6
label="classEncoder_a8d10c6f5e558cd9235db9375bf980ab9aa37f6acf1672fff8b7f8784bfa4600d6"}
OPEN&\

\[0pt\]\[0pt\][\[classEncoder\_a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c\]]{#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c
label="classEncoder_a8d10c6f5e558cd9235db9375bf980ab9a87937597a856f96152bfafd977fd736c"}
PRESSED&\

[\[classEncoder\_aa7c4648a7ebc9e651c25c2d450a58213\]]{#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213
label="classEncoder_aa7c4648a7ebc9e651c25c2d450a58213"} enum
[Encoder::Direction](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213)

Enumerator
\[0pt\]\[0pt\][\[classEncoder\_aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83\]]{#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83
label="classEncoder_aa7c4648a7ebc9e651c25c2d450a58213afe45340881c234841bd49db487f0da83"}
NONE&\

\[0pt\]\[0pt\][\[classEncoder\_aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5\]]{#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5
label="classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a221066b3a00f02b2eb0880d56aeae3c5"}
CW&\

\[0pt\]\[0pt\][\[classEncoder\_aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda\]]{#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda
label="classEncoder_aa7c4648a7ebc9e651c25c2d450a58213a3cb663af1ad33c99b33695e1f9e71dda"}
CCW&\

[\[classEncoder\_a5c9dd4c4121421f3868a6fae683ce201\]]{#classEncoder_a5c9dd4c4121421f3868a6fae683ce201
label="classEncoder_a5c9dd4c4121421f3868a6fae683ce201"}

Encoder::Encoder (

encCLK,

encDT,

encButton

)

[\[classEncoder\_a335f77fa68600c9a348f1cb9dba8ff5b\]]{#classEncoder_a335f77fa68600c9a348f1cb9dba8ff5b
label="classEncoder_a335f77fa68600c9a348f1cb9dba8ff5b"}

void Encoder::begin (

)

[\[classEncoder\_a9fee5b6e9c060faa745a308793b984ab\]]{#classEncoder_a9fee5b6e9c060faa745a308793b984ab
label="classEncoder_a9fee5b6e9c060faa745a308793b984ab"}

int Encoder::handleEncoderDirection (

currentValue,

maxValue,

direction

)

[\[classEncoder\_a70380dcc135f2e564607ab3401708b84\]]{#classEncoder_a70380dcc135f2e564607ab3401708b84
label="classEncoder_a70380dcc135f2e564607ab3401708b84"}

bool Encoder::isButtonDoublePressed (

)

[\[classEncoder\_a26b304caeb9cd561f201d101f62a8964\]]{#classEncoder_a26b304caeb9cd561f201d101f62a8964
label="classEncoder_a26b304caeb9cd561f201d101f62a8964"}

bool Encoder::isButtonLongPressed (

)

[\[classEncoder\_a08ba46bfb2eb288a47015d63d11e8077\]]{#classEncoder_a08ba46bfb2eb288a47015d63d11e8077
label="classEncoder_a08ba46bfb2eb288a47015d63d11e8077"}

bool Encoder::isButtonSinglePressed (

)

[\[classEncoder\_ac2feca5ed5040737fbc9d6282e9b48f7\]]{#classEncoder_ac2feca5ed5040737fbc9d6282e9b48f7
label="classEncoder_ac2feca5ed5040737fbc9d6282e9b48f7"}

[Encoder::ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
Encoder::readButton (

)

[\[classEncoder\_aec7e3503764db573a30979e95570f7c5\]]{#classEncoder_aec7e3503764db573a30979e95570f7c5
label="classEncoder_aec7e3503764db573a30979e95570f7c5"}

[Encoder::Direction](#classEncoder_aa7c4648a7ebc9e651c25c2d450a58213)
Encoder::readEncoder (

)

[\[classEncoder\_a2924112ef1f2a7ea617926e86ab13538\]]{#classEncoder_a2924112ef1f2a7ea617926e86ab13538
label="classEncoder_a2924112ef1f2a7ea617926e86ab13538"}

int Encoder::readSpeed (

)

[\[classEncoder\_a43038f2d33e15f334fa70c0dbf740851\]]{#classEncoder_a43038f2d33e15f334fa70c0dbf740851
label="classEncoder_a43038f2d33e15f334fa70c0dbf740851"}
[ButtonState](#classEncoder_a8d10c6f5e558cd9235db9375bf980ab9)
Encoder::buttonState

[\[classEncoder\_a3997f1d2b3f4fc9eaf3a2ecc334d98c5\]]{#classEncoder_a3997f1d2b3f4fc9eaf3a2ecc334d98c5
label="classEncoder_a3997f1d2b3f4fc9eaf3a2ecc334d98c5"} const unsigned
long Encoder::DOUBLE\_PRESS\_INTERVAL = 500,

[\[classEncoder\_a07ae142110dd9baafcb60dd140d7f700\]]{#classEncoder_a07ae142110dd9baafcb60dd140d7f700
label="classEncoder_a07ae142110dd9baafcb60dd140d7f700"}
[InputPin](#classInputPin) Encoder::encButton

[\[classEncoder\_a0f1cb342a57e8ed3b9a951563c184ceb\]]{#classEncoder_a0f1cb342a57e8ed3b9a951563c184ceb
label="classEncoder_a0f1cb342a57e8ed3b9a951563c184ceb"}
[InputPin](#classInputPin) Encoder::encCLK

[\[classEncoder\_ad3c8d007a93ea4eae5decab4b7221a47\]]{#classEncoder_ad3c8d007a93ea4eae5decab4b7221a47
label="classEncoder_ad3c8d007a93ea4eae5decab4b7221a47"}
[InputPin](#classInputPin) Encoder::encDT

[\[classEncoder\_a8562593d886f1a1ac75e504c5da3a41f\]]{#classEncoder_a8562593d886f1a1ac75e504c5da3a41f
label="classEncoder_a8562593d886f1a1ac75e504c5da3a41f"} unsigned long
Encoder::lastButtonPress

[\[classEncoder\_a090819a377bc20c23a6de1bf7f28cfbc\]]{#classEncoder_a090819a377bc20c23a6de1bf7f28cfbc
label="classEncoder_a090819a377bc20c23a6de1bf7f28cfbc"} unsigned long
Encoder::lastTurnTime

[\[classEncoder\_ac602a14a72602e3fa9ce103dd447aa8d\]]{#classEncoder_ac602a14a72602e3fa9ce103dd447aa8d
label="classEncoder_ac602a14a72602e3fa9ce103dd447aa8d"} const unsigned
long Encoder::LONG\_PRESS\_INTERVAL = 1000,

[\[classEncoder\_a82d327bad0b2922d2a3d0ddc1e31e815\]]{#classEncoder_a82d327bad0b2922d2a3d0ddc1e31e815
label="classEncoder_a82d327bad0b2922d2a3d0ddc1e31e815"} int
Encoder::pressCount

[\[classEncoder\_ade282a3469a7eed777d2212367704624\]]{#classEncoder_ade282a3469a7eed777d2212367704624
label="classEncoder_ade282a3469a7eed777d2212367704624"} int
Encoder::prevStateCLK

[\[classEncoder\_a7880595a1f5480757dd7125e4f47cb41\]]{#classEncoder_a7880595a1f5480757dd7125e4f47cb41
label="classEncoder_a7880595a1f5480757dd7125e4f47cb41"} int
Encoder::speed

The documentation for this class was generated from the following files:

include/[Encoder.h](#Encoder_8h)

src/[Encoder.cpp](#Encoder_8cpp)
