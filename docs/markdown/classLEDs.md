LEDs LEDs.h int int LEDs::numLeds numLeds LED \* LED\* LEDs::leds leds
LEDs::LEDs (std::vector\< int \> pins, int numLeds) LEDs std::vector\<
int \> pins int numLeds LEDs::\~LEDs () \~LEDs void void LEDs::begin ()
begin void void LEDs::setState (int index, bool state) setState int
index bool state void void LEDs::setState (int index, bool state, int
intensity) setState int index bool state int intensity bool bool
LEDs::getState (int index) getState int index void void LEDs::setAllLeds
(bool state) setAllLeds bool state void void LEDs::startBlinking (int
index, unsigned long interval) startBlinking int index unsigned long
interval void void LEDs::stopBlinking (int index) stopBlinking int index
void void LEDs::stopAllBlinking () stopAllBlinking void void
LEDs::updateBlinking () updateBlinking void void LEDs::setIntensity (int
index, int intensity) setIntensity int index int intensity void void
LEDs::setAllintensity (int intensity) setAllintensity int intensity void
void LEDs::update (unsigned long currentTime) update unsigned long
currentTime void void LEDs::trigger (int index, unsigned long
currentTime, bool inverted=false) trigger int index unsigned long
currentTime bool inverted false void void LEDs::resetInverted (int
index) resetInverted int index OutputPin Pin LEDs -leds LED LEDsbegin
LEDsgetState LEDsleds LEDsLEDs LEDsnumLeds LEDsresetInverted
LEDssetAllintensity LEDssetAllLeds LEDssetIntensity LEDssetState
LEDssetState LEDsstartBlinking LEDsstopAllBlinking LEDsstopBlinking
LEDstrigger LEDsupdate LEDsupdateBlinking LEDs\~LEDs
