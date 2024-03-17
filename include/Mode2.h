#ifndef MODE2_H
#define MODE2_H

#include "Mode.h"
#include "LEDController.h"
#include "Encoder.h"
#include "Gates.h"
#include "MIDIHandler.h"
#include "Constants.h"

class Mode2 : public Mode {
public:
    Mode2(Encoder& encoder, Gates& gates, LedController& ledController, MIDIHandler& midiHandler);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void setup() override;
    void teardown() override;
    void update() override;

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void setLEDState(int ledIndex, bool state, bool blinkFast, bool blinkSlow);
    LedController& ledController;
    Encoder& encoder;
    Gates& gates;
    MIDIHandler& midiHandler;
    bool doublePressHandled = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    int numLeds = 8;
};

#endif // MODE2_H