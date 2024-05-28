#ifndef MODE_INVERSE_H
#define MODE_INVERSE_H

#include "Mode.h"
#include <Arduino.h>
#include "LEDController.h"
#include "Encoder.h"
#include "Gates.h"
#include "Constants.h"
#include "InputHandler.h"
#include "ResetButton.h"
#include "StateManager.h"

enum PairMode {
    NORMAL,
    INVERT,
    RISE_FALL
};

/**
 * @brief This mode is for inverting the gates. If the gate is high, it will be low and vice versa.
 * The user can select the gate pairs and change the behaviour of the gates. So instead of
 * sending gates, it will send triggers on the separate gates for the rising edge and falling edge of the gate.
 * 
 */
class ModeInverse : public Mode {
public:
    ModeInverse(StateManager& stateManager,
        Encoder& encoder,
        InputHandler& inputHandler,
        Gates& gates,
        LEDController& ledController,
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
    void handleButton(Encoder::ButtonState buttonState);
    void handleResetButton(ResetButton::ButtonState buttonState);
    void loadMidiLearnNotes();
    void handleInputs();
    void handleTempoLed();
    void setPairMode(int input, PairMode mode);
    StateManager& stateManager;
    LEDController& ledController;
    InputHandler& inputHandler;
    Encoder& encoder;
    ResetButton& resetButton;
    Gates& gates;
    bool doublePressHandled = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    bool doubleResetPressHandled = false;
    bool singleResetPressHandled = false;
    bool longResetPressHandled = false;
    int numLeds = 8;
    unsigned char selectedInput = 0;
    unsigned char previousInput = 0;
    bool previousState[4]; // we only have 4 inputs
    PairMode pairModes[4]; // we only have 4 inputs
};

#endif // MODE_INVERSE_H