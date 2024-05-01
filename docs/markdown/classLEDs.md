::: {#classLEDs}
:::

[\[classLEDs\]]{#classLEDs label="classLEDs"}

\#include $<$LEDs.h$>$

Collaboration diagram for LEDs:

![image](classLEDs__coll__graph){height="550pt"}

[LEDs](#classLEDs_a1bd8cd6dfe54db1248b5749d532e705a) (std::vector$<$ int
$>$ [pins](#main_8cpp_a782432745fd904139737a67cfe18cc45), int
[numLeds](#classLEDs_a279c7fb7628edf2a73c98313607993d4))

[$\sim$LEDs](#classLEDs_a682bab337039995cc4fc2a7e753a38e5) ()

void [begin](#classLEDs_aa964a9b80d6606286a69f5025f5f857a) ()

void [setState](#classLEDs_a763ea6fd51a29a40ddc0c39a70a4167e) (int
index, bool state)

void [setState](#classLEDs_a3cbae273cb30c1a09c414e2c1c5fd11d) (int
index, bool state, int
[intensity](#main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210))

bool [getState](#classLEDs_a98711a933b0dc69df40c3d9752a61334) (int
index)

void [setAllLeds](#classLEDs_af2bb823ca5af8a88e7f98f5869b4c706) (bool
state)

void [startBlinking](#classLEDs_a5d00178936fca48853813129e26c5dea) (int
index, unsigned long interval)

void [stopBlinking](#classLEDs_a343cdb24ad5b0ceae3fdf3086db765c5) (int
index)

void [stopAllBlinking](#classLEDs_a6cfb124344f67e7246c45e88da7bd47e) ()

void [updateBlinking](#classLEDs_aee969eddac897718c3f75c3c24e23aa6) ()

void [setIntensity](#classLEDs_a6a8449ad97957877f7cfc6ff9776ad21) (int
index, int [intensity](#main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210))

void [setAllintensity](#classLEDs_a8ea9ceb959da8cde5f7c80542a023ac9)
(int [intensity](#main_8cpp_a299ec0c42ccc5a2d79d1739428ac3210))

void [update](#classLEDs_ab689142c4f9a1f6a8d1deb6e5f3e79e6) (unsigned
long currentTime)

void [trigger](#classLEDs_af9c6980e1497fca93a2945698156fbe6) (int index,
unsigned long currentTime, bool inverted=false)

void [resetInverted](#classLEDs_adbb31af7efe7478045f4a260db116af2) (int
index)

int [numLeds](#classLEDs_a279c7fb7628edf2a73c98313607993d4)

[LED](#classLED) $\ast$
[leds](#classLEDs_a1b4516594fe6c345ead0ebe269d15374)

[\[classLEDs\_a1bd8cd6dfe54db1248b5749d532e705a\]]{#classLEDs_a1bd8cd6dfe54db1248b5749d532e705a
label="classLEDs_a1bd8cd6dfe54db1248b5749d532e705a"}

LEDs::LEDs (

pins,

numLeds

)

[\[classLEDs\_a682bab337039995cc4fc2a7e753a38e5\]]{#classLEDs_a682bab337039995cc4fc2a7e753a38e5
label="classLEDs_a682bab337039995cc4fc2a7e753a38e5"}

LEDs::$\sim$LEDs (

)

[\[classLEDs\_aa964a9b80d6606286a69f5025f5f857a\]]{#classLEDs_aa964a9b80d6606286a69f5025f5f857a
label="classLEDs_aa964a9b80d6606286a69f5025f5f857a"}

void LEDs::begin (

)

[\[classLEDs\_a98711a933b0dc69df40c3d9752a61334\]]{#classLEDs_a98711a933b0dc69df40c3d9752a61334
label="classLEDs_a98711a933b0dc69df40c3d9752a61334"}

bool LEDs::getState (

index

)

[\[classLEDs\_adbb31af7efe7478045f4a260db116af2\]]{#classLEDs_adbb31af7efe7478045f4a260db116af2
label="classLEDs_adbb31af7efe7478045f4a260db116af2"}

void LEDs::resetInverted (

index

)

[\[classLEDs\_a8ea9ceb959da8cde5f7c80542a023ac9\]]{#classLEDs_a8ea9ceb959da8cde5f7c80542a023ac9
label="classLEDs_a8ea9ceb959da8cde5f7c80542a023ac9"}

void LEDs::setAllintensity (

intensity

)

[\[classLEDs\_af2bb823ca5af8a88e7f98f5869b4c706\]]{#classLEDs_af2bb823ca5af8a88e7f98f5869b4c706
label="classLEDs_af2bb823ca5af8a88e7f98f5869b4c706"}

void LEDs::setAllLeds (

state

)

[\[classLEDs\_a6a8449ad97957877f7cfc6ff9776ad21\]]{#classLEDs_a6a8449ad97957877f7cfc6ff9776ad21
label="classLEDs_a6a8449ad97957877f7cfc6ff9776ad21"}

void LEDs::setIntensity (

index,

intensity

)

[\[classLEDs\_a763ea6fd51a29a40ddc0c39a70a4167e\]]{#classLEDs_a763ea6fd51a29a40ddc0c39a70a4167e
label="classLEDs_a763ea6fd51a29a40ddc0c39a70a4167e"}

void LEDs::setState (

index,

state

)

[\[classLEDs\_a3cbae273cb30c1a09c414e2c1c5fd11d\]]{#classLEDs_a3cbae273cb30c1a09c414e2c1c5fd11d
label="classLEDs_a3cbae273cb30c1a09c414e2c1c5fd11d"}

void LEDs::setState (

index,

state,

intensity

)

[\[classLEDs\_a5d00178936fca48853813129e26c5dea\]]{#classLEDs_a5d00178936fca48853813129e26c5dea
label="classLEDs_a5d00178936fca48853813129e26c5dea"}

void LEDs::startBlinking (

index,

interval

)

[\[classLEDs\_a6cfb124344f67e7246c45e88da7bd47e\]]{#classLEDs_a6cfb124344f67e7246c45e88da7bd47e
label="classLEDs_a6cfb124344f67e7246c45e88da7bd47e"}

void LEDs::stopAllBlinking (

)

[\[classLEDs\_a343cdb24ad5b0ceae3fdf3086db765c5\]]{#classLEDs_a343cdb24ad5b0ceae3fdf3086db765c5
label="classLEDs_a343cdb24ad5b0ceae3fdf3086db765c5"}

void LEDs::stopBlinking (

index

)

[\[classLEDs\_af9c6980e1497fca93a2945698156fbe6\]]{#classLEDs_af9c6980e1497fca93a2945698156fbe6
label="classLEDs_af9c6980e1497fca93a2945698156fbe6"}

void LEDs::trigger (

index,

currentTime,

inverted = false

)

[\[classLEDs\_ab689142c4f9a1f6a8d1deb6e5f3e79e6\]]{#classLEDs_ab689142c4f9a1f6a8d1deb6e5f3e79e6
label="classLEDs_ab689142c4f9a1f6a8d1deb6e5f3e79e6"}

void LEDs::update (

currentTime

)

[\[classLEDs\_aee969eddac897718c3f75c3c24e23aa6\]]{#classLEDs_aee969eddac897718c3f75c3c24e23aa6
label="classLEDs_aee969eddac897718c3f75c3c24e23aa6"}

void LEDs::updateBlinking (

)

[\[classLEDs\_a1b4516594fe6c345ead0ebe269d15374\]]{#classLEDs_a1b4516594fe6c345ead0ebe269d15374
label="classLEDs_a1b4516594fe6c345ead0ebe269d15374"}
[LED](#classLED)$\ast$ LEDs::leds

[\[classLEDs\_a279c7fb7628edf2a73c98313607993d4\]]{#classLEDs_a279c7fb7628edf2a73c98313607993d4
label="classLEDs_a279c7fb7628edf2a73c98313607993d4"} int LEDs::numLeds

The documentation for this class was generated from the following files:

include/[LEDs.h](#LEDs_8h)

src/[LEDs.cpp](#LEDs_8cpp)
