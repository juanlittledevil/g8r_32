::: {#classLEDController}
:::

[\[classLEDController\]]{#classLEDController label="classLEDController"}

\#include $<$LEDController.h$>$

Collaboration diagram for LEDController:

![image](classLEDController__coll__graph){height="550pt"}

[LEDController](#classLEDController_a745e22f2bff89379f1ba931ef3e87af9)
([LEDs](#classLEDs)
&[leds](#classLEDController_a843d7baf6e1d25b971058000c6d14285))

void [turnAllOn](#classLEDController_a7fa2395ec4f58ad835915e427463bec0)
()

void [turnAllOff](#classLEDController_a40b2381a7df13d29cf4f4e654155e7af)
()

void [blinkSlow](#classLEDController_ab2446eb215b833358b8c5a8a8049b879)
(int ledIndex)

void [blinkFast](#classLEDController_a5d08bfa962c8df40e6943de346518bc1)
(int ledIndex)

void
[blinkFaster](#classLEDController_aef59bb9c869f433976d40c268bd7f277)
(int ledIndex)

void
[stopBlinking](#classLEDController_a947daa5c9148f080cb7485613ac5cc60)
(int ledIndex)

void
[stopAllBlinking](#classLEDController_a8e6acb784fdab8b7545d1e602ecc6ea2)
()

void
[resetInverted](#classLEDController_ad5d9dce7bda36149d503cad8c6160fa2)
()

void
[resetInverted](#classLEDController_a916e5ced402d4092d8c42d3f2f4b56f6)
(int ledIndex)

int [getNumLeds](#classLEDController_acd5157d96af56837fd665fd222aba918)
()

void [update](#classLEDController_a34f412383b75a8f5d9e5e369ee7345cf) ()

void
[clearAndResetLEDs](#classLEDController_aca84215ce851c4abdbfbe9340a2b2ffc)
()

void [clearLEDs](#classLEDController_a15ddcd060673c9d39c647fc4f374dcbd)
()

void
[updateBlinking](#classLEDController_affdef62d0508d20124fe590ea6634af6)
()

void [setState](#classLEDController_ab23aa7c21c0b0d98871b13b97ab17520)
(int ledIndex, bool state)

[LEDs](#classLEDs) &
[leds](#classLEDController_a843d7baf6e1d25b971058000c6d14285)

int [numLeds](#classLEDController_ae33cda0ea999854e4855d7964ec59763)

[\[classLEDController\_a745e22f2bff89379f1ba931ef3e87af9\]]{#classLEDController_a745e22f2bff89379f1ba931ef3e87af9
label="classLEDController_a745e22f2bff89379f1ba931ef3e87af9"}

LEDController::LEDController (

leds

)

[\[classLEDController\_a5d08bfa962c8df40e6943de346518bc1\]]{#classLEDController_a5d08bfa962c8df40e6943de346518bc1
label="classLEDController_a5d08bfa962c8df40e6943de346518bc1"}

void LEDController::blinkFast (

ledIndex

)

[\[classLEDController\_aef59bb9c869f433976d40c268bd7f277\]]{#classLEDController_aef59bb9c869f433976d40c268bd7f277
label="classLEDController_aef59bb9c869f433976d40c268bd7f277"}

void LEDController::blinkFaster (

ledIndex

)

[\[classLEDController\_ab2446eb215b833358b8c5a8a8049b879\]]{#classLEDController_ab2446eb215b833358b8c5a8a8049b879
label="classLEDController_ab2446eb215b833358b8c5a8a8049b879"}

void LEDController::blinkSlow (

ledIndex

)

[\[classLEDController\_aca84215ce851c4abdbfbe9340a2b2ffc\]]{#classLEDController_aca84215ce851c4abdbfbe9340a2b2ffc
label="classLEDController_aca84215ce851c4abdbfbe9340a2b2ffc"}

void LEDController::clearAndResetLEDs (

)

[\[classLEDController\_a15ddcd060673c9d39c647fc4f374dcbd\]]{#classLEDController_a15ddcd060673c9d39c647fc4f374dcbd
label="classLEDController_a15ddcd060673c9d39c647fc4f374dcbd"}

void LEDController::clearLEDs (

)

[\[classLEDController\_acd5157d96af56837fd665fd222aba918\]]{#classLEDController_acd5157d96af56837fd665fd222aba918
label="classLEDController_acd5157d96af56837fd665fd222aba918"}

int LEDController::getNumLeds (

)

[\[classLEDController\_ad5d9dce7bda36149d503cad8c6160fa2\]]{#classLEDController_ad5d9dce7bda36149d503cad8c6160fa2
label="classLEDController_ad5d9dce7bda36149d503cad8c6160fa2"}

void LEDController::resetInverted (

)

[\[classLEDController\_a916e5ced402d4092d8c42d3f2f4b56f6\]]{#classLEDController_a916e5ced402d4092d8c42d3f2f4b56f6
label="classLEDController_a916e5ced402d4092d8c42d3f2f4b56f6"}

void LEDController::resetInverted (

ledIndex

)

[\[classLEDController\_ab23aa7c21c0b0d98871b13b97ab17520\]]{#classLEDController_ab23aa7c21c0b0d98871b13b97ab17520
label="classLEDController_ab23aa7c21c0b0d98871b13b97ab17520"}

void LEDController::setState (

ledIndex,

state

)

[\[classLEDController\_a8e6acb784fdab8b7545d1e602ecc6ea2\]]{#classLEDController_a8e6acb784fdab8b7545d1e602ecc6ea2
label="classLEDController_a8e6acb784fdab8b7545d1e602ecc6ea2"}

void LEDController::stopAllBlinking (

)

[\[classLEDController\_a947daa5c9148f080cb7485613ac5cc60\]]{#classLEDController_a947daa5c9148f080cb7485613ac5cc60
label="classLEDController_a947daa5c9148f080cb7485613ac5cc60"}

void LEDController::stopBlinking (

ledIndex

)

[\[classLEDController\_a40b2381a7df13d29cf4f4e654155e7af\]]{#classLEDController_a40b2381a7df13d29cf4f4e654155e7af
label="classLEDController_a40b2381a7df13d29cf4f4e654155e7af"}

void LEDController::turnAllOff (

)

[\[classLEDController\_a7fa2395ec4f58ad835915e427463bec0\]]{#classLEDController_a7fa2395ec4f58ad835915e427463bec0
label="classLEDController_a7fa2395ec4f58ad835915e427463bec0"}

void LEDController::turnAllOn (

)

[\[classLEDController\_a34f412383b75a8f5d9e5e369ee7345cf\]]{#classLEDController_a34f412383b75a8f5d9e5e369ee7345cf
label="classLEDController_a34f412383b75a8f5d9e5e369ee7345cf"}

void LEDController::update (

)

[\[classLEDController\_affdef62d0508d20124fe590ea6634af6\]]{#classLEDController_affdef62d0508d20124fe590ea6634af6
label="classLEDController_affdef62d0508d20124fe590ea6634af6"}

void LEDController::updateBlinking (

)

[\[classLEDController\_a843d7baf6e1d25b971058000c6d14285\]]{#classLEDController_a843d7baf6e1d25b971058000c6d14285
label="classLEDController_a843d7baf6e1d25b971058000c6d14285"}
[LEDs](#classLEDs)& LEDController::leds

[\[classLEDController\_ae33cda0ea999854e4855d7964ec59763\]]{#classLEDController_ae33cda0ea999854e4855d7964ec59763
label="classLEDController_ae33cda0ea999854e4855d7964ec59763"} int
LEDController::numLeds

The documentation for this class was generated from the following files:

include/[LEDController.h](#LEDController_8h)

src/[LEDController.cpp](#LEDController_8cpp)
