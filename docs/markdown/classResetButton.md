::: {#classResetButton}
:::

[\[classResetButton\]]{#classResetButton label="classResetButton"}

\#include $<$ResetButton.h$>$

Collaboration diagram for ResetButton:

![image](classResetButton__coll__graph){height="550pt"}

enum [ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
{
[OPEN](#classResetButton_a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef)
,
[PRESSED](#classResetButton_a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e)
}

[ResetButton](#classResetButton_a802e419c619c9b60f2adf223b821a00f) (int
[pin](#classResetButton_a7291efc6e33f2939aac77d4e474fbc59))

bool [begin](#classResetButton_aa851afdc17e33c8cd16a5b326058d599) ()

[ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
[readButton](#classResetButton_aee7d2cd933ae28ffa43187582c979a43) ()

bool
[isButtonLongPressed](#classResetButton_a9965e4c38cf275972b825808414188eb)
()

bool
[isButtonDoublePressed](#classResetButton_addc8f5996ea2d13c1c3f2bb858ced414)
()

bool
[isButtonSinglePressed](#classResetButton_a48dd4aadb9e7e86022181bc46db0a6a3)
()

int [pin](#classResetButton_a7291efc6e33f2939aac77d4e474fbc59)

[InputPin](#classInputPin)
[resetButton](#classResetButton_a4aaefe379da6d90cd5499b564a1ea94c)

[ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
[buttonState](#classResetButton_a1e30ec8fd5c460df296362a5bb08b1e3)

unsigned long
[lastButtonPress](#classResetButton_a7bcd854358d590978530fd978aa4b629)

int [pressCount](#classResetButton_a50a64667edd243f01e6b9ebc1fc5bde8)

static const unsigned long
[DOUBLE\_PRESS\_INTERVAL](#classResetButton_ae1ab0b150ca6a11414c1b947da2e9987)
= 500

static const unsigned long
[LONG\_PRESS\_INTERVAL](#classResetButton_a49dd99765dba753371b0b5a475802580)
= 1000

[\[classResetButton\_a57b758360f53e09cd135b0fbc18edabd\]]{#classResetButton_a57b758360f53e09cd135b0fbc18edabd
label="classResetButton_a57b758360f53e09cd135b0fbc18edabd"} enum
[ResetButton::ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)

Enumerator
\[0pt\]\[0pt\][\[classResetButton\_a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef\]]{#classResetButton_a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef
label="classResetButton_a57b758360f53e09cd135b0fbc18edabdac0ca9e12a1b0bcf75eac9c5f00d286ef"}
OPEN&\

\[0pt\]\[0pt\][\[classResetButton\_a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e\]]{#classResetButton_a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e
label="classResetButton_a57b758360f53e09cd135b0fbc18edabdafcc70c9de441b04db47581d7d962e12e"}
PRESSED&\

[\[classResetButton\_a802e419c619c9b60f2adf223b821a00f\]]{#classResetButton_a802e419c619c9b60f2adf223b821a00f
label="classResetButton_a802e419c619c9b60f2adf223b821a00f"}

ResetButton::ResetButton (

pin

)

[\[classResetButton\_aa851afdc17e33c8cd16a5b326058d599\]]{#classResetButton_aa851afdc17e33c8cd16a5b326058d599
label="classResetButton_aa851afdc17e33c8cd16a5b326058d599"}

bool ResetButton::begin (

)

[\[classResetButton\_addc8f5996ea2d13c1c3f2bb858ced414\]]{#classResetButton_addc8f5996ea2d13c1c3f2bb858ced414
label="classResetButton_addc8f5996ea2d13c1c3f2bb858ced414"}

bool ResetButton::isButtonDoublePressed (

)

[\[classResetButton\_a9965e4c38cf275972b825808414188eb\]]{#classResetButton_a9965e4c38cf275972b825808414188eb
label="classResetButton_a9965e4c38cf275972b825808414188eb"}

bool ResetButton::isButtonLongPressed (

)

[\[classResetButton\_a48dd4aadb9e7e86022181bc46db0a6a3\]]{#classResetButton_a48dd4aadb9e7e86022181bc46db0a6a3
label="classResetButton_a48dd4aadb9e7e86022181bc46db0a6a3"}

bool ResetButton::isButtonSinglePressed (

)

[\[classResetButton\_aee7d2cd933ae28ffa43187582c979a43\]]{#classResetButton_aee7d2cd933ae28ffa43187582c979a43
label="classResetButton_aee7d2cd933ae28ffa43187582c979a43"}

[ResetButton::ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
ResetButton::readButton (

)

[\[classResetButton\_a1e30ec8fd5c460df296362a5bb08b1e3\]]{#classResetButton_a1e30ec8fd5c460df296362a5bb08b1e3
label="classResetButton_a1e30ec8fd5c460df296362a5bb08b1e3"}
[ButtonState](#classResetButton_a57b758360f53e09cd135b0fbc18edabd)
ResetButton::buttonState

[\[classResetButton\_ae1ab0b150ca6a11414c1b947da2e9987\]]{#classResetButton_ae1ab0b150ca6a11414c1b947da2e9987
label="classResetButton_ae1ab0b150ca6a11414c1b947da2e9987"} const
unsigned long ResetButton::DOUBLE\_PRESS\_INTERVAL = 500,

[\[classResetButton\_a7bcd854358d590978530fd978aa4b629\]]{#classResetButton_a7bcd854358d590978530fd978aa4b629
label="classResetButton_a7bcd854358d590978530fd978aa4b629"} unsigned
long ResetButton::lastButtonPress

[\[classResetButton\_a49dd99765dba753371b0b5a475802580\]]{#classResetButton_a49dd99765dba753371b0b5a475802580
label="classResetButton_a49dd99765dba753371b0b5a475802580"} const
unsigned long ResetButton::LONG\_PRESS\_INTERVAL = 1000,

[\[classResetButton\_a7291efc6e33f2939aac77d4e474fbc59\]]{#classResetButton_a7291efc6e33f2939aac77d4e474fbc59
label="classResetButton_a7291efc6e33f2939aac77d4e474fbc59"} int
ResetButton::pin

[\[classResetButton\_a50a64667edd243f01e6b9ebc1fc5bde8\]]{#classResetButton_a50a64667edd243f01e6b9ebc1fc5bde8
label="classResetButton_a50a64667edd243f01e6b9ebc1fc5bde8"} int
ResetButton::pressCount

[\[classResetButton\_a4aaefe379da6d90cd5499b564a1ea94c\]]{#classResetButton_a4aaefe379da6d90cd5499b564a1ea94c
label="classResetButton_a4aaefe379da6d90cd5499b564a1ea94c"}
[InputPin](#classInputPin) ResetButton::resetButton

The documentation for this class was generated from the following files:

include/[ResetButton.h](#ResetButton_8h)

src/[ResetButton.cpp](#ResetButton_8cpp)
