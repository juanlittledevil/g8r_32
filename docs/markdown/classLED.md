LED OutputPin LED.h unsigned long unsigned long LED::blinkStartTime
blinkStartTime unsigned long unsigned long LED::blinkInterval
blinkInterval int int LED::intensity intensity = 255 bool bool
LED::isBlinking isBlinking int int LED::ledOnDuration ledOnDuration = 25
int int LED::invertedLedOnDuration invertedLedOnDuration = 40 unsigned
long unsigned long LED::triggeredTime triggeredTime = 0 bool bool
LED::inverted inverted = false LED::LED (int pin=-1) LED int pin -1
LED::\~LED () \~LED void void LED::startBlinking (unsigned long
interval) startBlinking unsigned long interval void void
LED::stopBlinking () stopBlinking void void LED::updateBlinking ()
updateBlinking void void LED::setIntensity (int intensity) setIntensity
int intensity void void LED::trigger (unsigned long currentTime, bool
inverted=false) trigger unsigned long currentTime bool inverted false
void void LED::update (unsigned long currentTime) update unsigned long
currentTime void void LED::resetIvernted () resetIvernted void void
LED::setLedOnDuration (int duration) setLedOnDuration int duration
OutputPin Pin LED OutputPin Pin LED LEDbegin LEDblinkInterval
LEDblinkStartTime LEDgetState LEDintensity LEDinverted
LEDinvertedLedOnDuration LEDisBlinking LEDLED LEDledOnDuration
LEDOutputPin LEDPin LEDpin LEDresetIvernted LEDsetIntensity
LEDsetLedOnDuration LEDsetState LEDstartBlinking LEDstate
LEDstopBlinking LEDtrigger LEDtriggeredTime LEDupdate LEDupdateBlinking
LED\~LED LED\~Pin
