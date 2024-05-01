::: {#classGate}
:::

[\[classGate\]]{#classGate label="classGate"}

\#include $<$Gate.h$>$

Inheritance diagram for Gate:

![image](classGate__inherit__graph){width="244pt"}

Collaboration diagram for Gate:

![image](classGate__coll__graph){width="244pt"}

[Gate](#classGate_a9f0a3e04c61f6924c2d2d5bbdfaa8ead) (int
[pin](#classPin_acf35726490e8ccea7fdeeeb57144bf6d)=-1)

[$\sim$Gate](#classGate_aa04556acb1cdc5715e38ced8f28c6b27) ()

void [trigger](#classGate_a6277eacc42d5f84de2a59ea4e062b5bf) (unsigned
long currentTime)

void [update](#classGate_a420659855b83dd5dcd94b9eda11f5824) (unsigned
long currentTime)

void [setDivision](#classGate_a49ac696e28beeb2d158778c5588f872e) (int
divition)

int [getDivision](#classGate_ab99412ef6a005235669a0acc34bc9c9b) ()

void [setGateOnDuration](#classGate_a17f0a9f5f2d7e19367c70d6afd965fa1)
(int duration)

int [gateOnDuration](#classGate_a35f127ccfcc6721cd0fcae3de805815f) = 10

unsigned long
[triggeredTime](#classGate_a16fe5ae275203f6fc24bf34f08033f0f) = 0

int [division](#classGate_a650b1da6da13180bae01219b862ec725) =
[internalPPQN](#Constants_8h_adf636984b70d690edd0c4a32836392e0)

[\[classGate\_a9f0a3e04c61f6924c2d2d5bbdfaa8ead\]]{#classGate_a9f0a3e04c61f6924c2d2d5bbdfaa8ead
label="classGate_a9f0a3e04c61f6924c2d2d5bbdfaa8ead"}

Gate::Gate (

pin = -1

)

[\[classGate\_aa04556acb1cdc5715e38ced8f28c6b27\]]{#classGate_aa04556acb1cdc5715e38ced8f28c6b27
label="classGate_aa04556acb1cdc5715e38ced8f28c6b27"}

Gate::$\sim$Gate (

)

[\[classGate\_ab99412ef6a005235669a0acc34bc9c9b\]]{#classGate_ab99412ef6a005235669a0acc34bc9c9b
label="classGate_ab99412ef6a005235669a0acc34bc9c9b"}

int Gate::getDivision (

)

[\[classGate\_a49ac696e28beeb2d158778c5588f872e\]]{#classGate_a49ac696e28beeb2d158778c5588f872e
label="classGate_a49ac696e28beeb2d158778c5588f872e"}

void Gate::setDivision (

divition

)

[\[classGate\_a17f0a9f5f2d7e19367c70d6afd965fa1\]]{#classGate_a17f0a9f5f2d7e19367c70d6afd965fa1
label="classGate_a17f0a9f5f2d7e19367c70d6afd965fa1"}

void Gate::setGateOnDuration (

duration

)

[\[classGate\_a6277eacc42d5f84de2a59ea4e062b5bf\]]{#classGate_a6277eacc42d5f84de2a59ea4e062b5bf
label="classGate_a6277eacc42d5f84de2a59ea4e062b5bf"}

void Gate::trigger (

currentTime

)

[\[classGate\_a420659855b83dd5dcd94b9eda11f5824\]]{#classGate_a420659855b83dd5dcd94b9eda11f5824
label="classGate_a420659855b83dd5dcd94b9eda11f5824"}

void Gate::update (

currentTime

)

[\[classGate\_a650b1da6da13180bae01219b862ec725\]]{#classGate_a650b1da6da13180bae01219b862ec725
label="classGate_a650b1da6da13180bae01219b862ec725"} int Gate::division
= [internalPPQN](#Constants_8h_adf636984b70d690edd0c4a32836392e0)

[\[classGate\_a35f127ccfcc6721cd0fcae3de805815f\]]{#classGate_a35f127ccfcc6721cd0fcae3de805815f
label="classGate_a35f127ccfcc6721cd0fcae3de805815f"} int
Gate::gateOnDuration = 10

[\[classGate\_a16fe5ae275203f6fc24bf34f08033f0f\]]{#classGate_a16fe5ae275203f6fc24bf34f08033f0f
label="classGate_a16fe5ae275203f6fc24bf34f08033f0f"} unsigned long
Gate::triggeredTime = 0

The documentation for this class was generated from the following files:

include/[Gate.h](#Gate_8h)

src/[Gate.cpp](#Gate_8cpp)
