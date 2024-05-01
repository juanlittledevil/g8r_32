Encoder Encoder.h Direction NONE CW CCW ButtonState OPEN PRESSED
InputPin InputPin Encoder::encCLK encCLK InputPin InputPin
Encoder::encDT encDT InputPin InputPin Encoder::encButton encButton int
int Encoder::prevStateCLK prevStateCLK ButtonState ButtonState
Encoder::buttonState buttonState unsigned long unsigned long
Encoder::lastButtonPress lastButtonPress int int Encoder::pressCount
pressCount unsigned long unsigned long Encoder::lastTurnTime
lastTurnTime int int Encoder::speed speed const unsigned long const
unsigned long Encoder::DOUBLE\_PRESS\_INTERVAL DOUBLE\_PRESS\_INTERVAL =
500 const unsigned long const unsigned long
Encoder::LONG\_PRESS\_INTERVAL LONG\_PRESS\_INTERVAL = 1000
Encoder::Encoder (int encCLK, int encDT, int encButton) Encoder int
encCLK int encDT int encButton void void Encoder::begin () begin
Direction Encoder::Direction Encoder::readEncoder () readEncoder
ButtonState Encoder::ButtonState Encoder::readButton () readButton int
int Encoder::handleEncoderDirection (int currentValue, int maxValue,
Direction direction) handleEncoderDirection int currentValue int
maxValue Direction direction bool bool Encoder::isButtonLongPressed ()
isButtonLongPressed bool bool Encoder::isButtonDoublePressed ()
isButtonDoublePressed bool bool Encoder::isButtonSinglePressed ()
isButtonSinglePressed int int Encoder::readSpeed () readSpeed Pin
Encoder -encButton -encCLK -encDT InputPin Encoderbegin
EncoderButtonState EncoderbuttonState EncoderCCW EncoderCW
EncoderDirection EncoderDOUBLE\_PRESS\_INTERVAL EncoderencButton
EncoderencCLK EncoderencDT EncoderEncoder EncoderhandleEncoderDirection
EncoderisButtonDoublePressed EncoderisButtonLongPressed
EncoderisButtonSinglePressed EncoderlastButtonPress EncoderlastTurnTime
EncoderLONG\_PRESS\_INTERVAL EncoderNONE EncoderOPEN EncoderpressCount
EncoderPRESSED EncoderprevStateCLK EncoderreadButton EncoderreadEncoder
EncoderreadSpeed Encoderspeed
