::: {#classPWMPin}
:::

[\[classPWMPin\]]{#classPWMPin label="classPWMPin"}

\#include $<$Pin.h$>$

Inheritance diagram for PWMPin:

![image](classPWMPin__inherit__graph){width="217pt"}

Collaboration diagram for PWMPin:

![image](classPWMPin__coll__graph){width="217pt"}

[PWMPin](#classPWMPin_ac189246b08e89ae948ccee1f4a804617) (int
[pin](#classPin_acf35726490e8ccea7fdeeeb57144bf6d)=-1)

virtual void [begin](#classPWMPin_a5cf9cc1fa8d670f9c594c7d09950f159) ()

void [setDutyCycle](#classPWMPin_af7ef7aa814d7635cb2a1b5716823e7f9) (int
[dutyCycle](#classPWMPin_a622402e0db5330b9909636476ba1a580))

int [getDutyCycle](#classPWMPin_ab2fb4da8e9bed797fc975390b5cfd0f5) ()

int [dutyCycle](#classPWMPin_a622402e0db5330b9909636476ba1a580)

HardwareTimer $\ast$
[timer](#classPWMPin_a7567b351a14c913367d125f63490731e)

[\[classPWMPin\_ac189246b08e89ae948ccee1f4a804617\]]{#classPWMPin_ac189246b08e89ae948ccee1f4a804617
label="classPWMPin_ac189246b08e89ae948ccee1f4a804617"}

PWMPin::PWMPin (

pin = -1

)

[\[classPWMPin\_a5cf9cc1fa8d670f9c594c7d09950f159\]]{#classPWMPin_a5cf9cc1fa8d670f9c594c7d09950f159
label="classPWMPin_a5cf9cc1fa8d670f9c594c7d09950f159"}

void PWMPin::begin (

)

Reimplemented from
[OutputPin](#classOutputPin_a26ba6201d8c71d85eec4696558eea0f4).

[\[classPWMPin\_ab2fb4da8e9bed797fc975390b5cfd0f5\]]{#classPWMPin_ab2fb4da8e9bed797fc975390b5cfd0f5
label="classPWMPin_ab2fb4da8e9bed797fc975390b5cfd0f5"}

int PWMPin::getDutyCycle (

)

[\[classPWMPin\_af7ef7aa814d7635cb2a1b5716823e7f9\]]{#classPWMPin_af7ef7aa814d7635cb2a1b5716823e7f9
label="classPWMPin_af7ef7aa814d7635cb2a1b5716823e7f9"}

void PWMPin::setDutyCycle (

dutyCycle

)

[\[classPWMPin\_a622402e0db5330b9909636476ba1a580\]]{#classPWMPin_a622402e0db5330b9909636476ba1a580
label="classPWMPin_a622402e0db5330b9909636476ba1a580"} int
PWMPin::dutyCycle

[\[classPWMPin\_a7567b351a14c913367d125f63490731e\]]{#classPWMPin_a7567b351a14c913367d125f63490731e
label="classPWMPin_a7567b351a14c913367d125f63490731e"}
HardwareTimer$\ast$ PWMPin::timer

The documentation for this class was generated from the following files:

include/[Pin.h](#Pin_8h)

src/[Pin.cpp](#Pin_8cpp)
