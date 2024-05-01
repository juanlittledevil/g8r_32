::: {#classLED}
:::

[\[classLED\]]{#classLED label="classLED"}

\#include $<$LED.h$>$

Inheritance diagram for LED:

![image](classLED__inherit__graph){height="550pt"}

Collaboration diagram for LED:

![image](classLED__coll__graph){height="550pt"}

[LED](#classLED_a2f9846058d6c93165846802571e877bf) (int
[pin](#classPin_acf35726490e8ccea7fdeeeb57144bf6d)=-1)

[$\sim$LED](#classLED_a5cb49cf2696615d43952baf8ade06767) ()

void [startBlinking](#classLED_ab8b4d4f8a242125e8bb8f333fea3e1b5)
(unsigned long interval)

void [stopBlinking](#classLED_ab604feac943fb6f98970f08bc5e2cd98) ()

void [updateBlinking](#classLED_a0515347480de786c503951522ed0fae8) ()

void [setIntensity](#classLED_a5ccc3bc84dd08271c2b92e7dc395b042) (int
[intensity](#classLED_a7b29be937c90a166ab379928a89b12a1))

void [trigger](#classLED_afe1cd286a90bdf388757f840b62963b0) (unsigned
long currentTime, bool
[inverted](#classLED_a5371388f81b03dc045091c2492f92b00)=false)

void [update](#classLED_a26deb537b1cbc1f38d0fce57650875f5) (unsigned
long currentTime)

void [resetIvernted](#classLED_a973ce3608ed1449bd6521dd026b300aa) ()

void [setLedOnDuration](#classLED_a447a6142872354a57402efe1b766526c)
(int duration)

unsigned long
[blinkStartTime](#classLED_a41f91d188d162ac0856939f6368b6aeb)

unsigned long
[blinkInterval](#classLED_a6f49207335f293f84ee5fd163fc0538f)

int [intensity](#classLED_a7b29be937c90a166ab379928a89b12a1) = 255

bool [isBlinking](#classLED_ac72ababe221f50a3c02f72051068f1dd)

int [ledOnDuration](#classLED_a26f304de8f30355e99917090877dee78) = 25

int [invertedLedOnDuration](#classLED_aa649a9045bd22e6d4a21bbbf161eff8e)
= 40

unsigned long
[triggeredTime](#classLED_a39dd1bd3424f8daa2a72f53bde7c9c62) = 0

bool [inverted](#classLED_a5371388f81b03dc045091c2492f92b00) = false

[\[classLED\_a2f9846058d6c93165846802571e877bf\]]{#classLED_a2f9846058d6c93165846802571e877bf
label="classLED_a2f9846058d6c93165846802571e877bf"}

LED::LED (

pin = -1

)

[\[classLED\_a5cb49cf2696615d43952baf8ade06767\]]{#classLED_a5cb49cf2696615d43952baf8ade06767
label="classLED_a5cb49cf2696615d43952baf8ade06767"}

LED::$\sim$LED (

)

[\[classLED\_a973ce3608ed1449bd6521dd026b300aa\]]{#classLED_a973ce3608ed1449bd6521dd026b300aa
label="classLED_a973ce3608ed1449bd6521dd026b300aa"}

void LED::resetIvernted (

)

[\[classLED\_a5ccc3bc84dd08271c2b92e7dc395b042\]]{#classLED_a5ccc3bc84dd08271c2b92e7dc395b042
label="classLED_a5ccc3bc84dd08271c2b92e7dc395b042"}

void LED::setIntensity (

intensity

)

[\[classLED\_a447a6142872354a57402efe1b766526c\]]{#classLED_a447a6142872354a57402efe1b766526c
label="classLED_a447a6142872354a57402efe1b766526c"}

void LED::setLedOnDuration (

duration

)

[\[classLED\_ab8b4d4f8a242125e8bb8f333fea3e1b5\]]{#classLED_ab8b4d4f8a242125e8bb8f333fea3e1b5
label="classLED_ab8b4d4f8a242125e8bb8f333fea3e1b5"}

void LED::startBlinking (

interval

)

[\[classLED\_ab604feac943fb6f98970f08bc5e2cd98\]]{#classLED_ab604feac943fb6f98970f08bc5e2cd98
label="classLED_ab604feac943fb6f98970f08bc5e2cd98"}

void LED::stopBlinking (

)

[\[classLED\_afe1cd286a90bdf388757f840b62963b0\]]{#classLED_afe1cd286a90bdf388757f840b62963b0
label="classLED_afe1cd286a90bdf388757f840b62963b0"}

void LED::trigger (

currentTime,

inverted = false

)

[\[classLED\_a26deb537b1cbc1f38d0fce57650875f5\]]{#classLED_a26deb537b1cbc1f38d0fce57650875f5
label="classLED_a26deb537b1cbc1f38d0fce57650875f5"}

void LED::update (

currentTime

)

[\[classLED\_a0515347480de786c503951522ed0fae8\]]{#classLED_a0515347480de786c503951522ed0fae8
label="classLED_a0515347480de786c503951522ed0fae8"}

void LED::updateBlinking (

)

[\[classLED\_a6f49207335f293f84ee5fd163fc0538f\]]{#classLED_a6f49207335f293f84ee5fd163fc0538f
label="classLED_a6f49207335f293f84ee5fd163fc0538f"} unsigned long
LED::blinkInterval

[\[classLED\_a41f91d188d162ac0856939f6368b6aeb\]]{#classLED_a41f91d188d162ac0856939f6368b6aeb
label="classLED_a41f91d188d162ac0856939f6368b6aeb"} unsigned long
LED::blinkStartTime

[\[classLED\_a7b29be937c90a166ab379928a89b12a1\]]{#classLED_a7b29be937c90a166ab379928a89b12a1
label="classLED_a7b29be937c90a166ab379928a89b12a1"} int LED::intensity =
255

[\[classLED\_a5371388f81b03dc045091c2492f92b00\]]{#classLED_a5371388f81b03dc045091c2492f92b00
label="classLED_a5371388f81b03dc045091c2492f92b00"} bool LED::inverted =
false

[\[classLED\_aa649a9045bd22e6d4a21bbbf161eff8e\]]{#classLED_aa649a9045bd22e6d4a21bbbf161eff8e
label="classLED_aa649a9045bd22e6d4a21bbbf161eff8e"} int
LED::invertedLedOnDuration = 40

[\[classLED\_ac72ababe221f50a3c02f72051068f1dd\]]{#classLED_ac72ababe221f50a3c02f72051068f1dd
label="classLED_ac72ababe221f50a3c02f72051068f1dd"} bool LED::isBlinking

[\[classLED\_a26f304de8f30355e99917090877dee78\]]{#classLED_a26f304de8f30355e99917090877dee78
label="classLED_a26f304de8f30355e99917090877dee78"} int
LED::ledOnDuration = 25

[\[classLED\_a39dd1bd3424f8daa2a72f53bde7c9c62\]]{#classLED_a39dd1bd3424f8daa2a72f53bde7c9c62
label="classLED_a39dd1bd3424f8daa2a72f53bde7c9c62"} unsigned long
LED::triggeredTime = 0

The documentation for this class was generated from the following files:

include/[LED.h](#LED_8h)

src/[LED.cpp](#LED_8cpp)
