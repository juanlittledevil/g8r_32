#include "Pin.h"

class Encoder {
public:
    Encoder(int encCLK, int encDT, int encButton);

    enum Direction { NONE, CW, CCW };
    enum ButtonState { OPEN, PRESSED };

    Direction readEncoder();
    ButtonState readButton();
    bool isButtonLongPressed();
    bool isButtonDoublePressed();
    int readSpeed();
    void begin();

private:
    InputPin encCLK;
    InputPin encDT;
    InputPin encButton;
    int prevStateCLK;
    ButtonState buttonState;
    unsigned long lastButtonPress;
    int pressCount;
    unsigned long lastTurnTime;
    int speed;

    static const unsigned long DOUBLE_PRESS_INTERVAL = 500; // ms
    static const unsigned long LONG_PRESS_INTERVAL = 1000; // ms
};