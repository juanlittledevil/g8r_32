#ifndef MODE_LOGIC_H
#define MODE_LOGIC_H

#include "Mode.h"
#include <Arduino.h>
#include "Constants.h"
#include "Encoder.h"
#include "Gates.h"
#include "InputHandler.h"
#include "LEDController.h"
#include "ResetButton.h"
#include "StateManager.h"

class ModeLogic : public Mode {
public:
    ModeLogic(StateManager& stateManager,
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
    void setup();
    void teardown();
    void update();

private:
    void handleInputs();
    void handleTempoLed();
    void handleButton(Encoder::ButtonState buttonState);
    void handleResetButton(ResetButton::ButtonState buttonState);
    void loadState();
    StateManager& stateManager;
    Encoder& encoder;
    InputHandler& inputHandler;
    LEDController& ledController;
    ResetButton& resetButton;
    Gates& gates;

    // Add your data members here
    bool doublePressHandled = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    bool doubleResetPressHandled = false;
    bool singleResetPressHandled = false;
    bool longResetPressHandled = false;
    unsigned char numLeds = 8;
    unsigned char selectedGate = 0;
    unsigned char previousGate = 0;
    InputGroup inputGroup = GROUP_ALL;
    LogicMode logicMode[8] = {AND, AND, AND, AND, AND, AND, AND, AND};
};

#endif // MODE_LOGIC_H