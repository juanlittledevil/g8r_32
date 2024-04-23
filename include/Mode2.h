#ifndef MODE2_H
#define MODE2_H

#include "Mode.h"
#include "LEDController.h"
#include "Encoder.h"
#include "Gates.h"
#include "MIDIHandler.h"
#include "Constants.h"
#include "InputHandler.h"
#include "ResetButton.h"

class Mode2 : public Mode {
public:
    Mode2(Encoder& encoder,
        InputHandler& inputHandler,
        Gates& gates,
        LEDController& ledController,
        MIDIHandler& midiHandler,
        ResetButton& resetButton);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void handleResetSinglePress() override;
    void handleResetDoublePress() override;
    void handleResetLongPress() override;
    void handleResetPressReleased() override;
    void setup() override;
    void teardown() override;
    void update() override;

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    LEDController& ledController;
    InputHandler& inputHandler;
    Encoder& encoder;
    ResetButton& resetButton;
    Gates& gates;
    MIDIHandler& midiHandler;
    bool doublePressHandled = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    int numLeds = 8;
};

#endif // MODE2_H