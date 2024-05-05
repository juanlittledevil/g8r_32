#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

#include <vector>
#include <EEPROM.h>
#include "LEDController.h"
#include "Encoder.h"
#include "Mode.h"
#include "ResetButton.h"
#include "StateManager.h"

/**
 * @brief Mode Selector Singleton. This class is responsible for managing the different modes of the device. It provides methods to add modes, set the current mode, and handle mode selection.
 * 
 */
class ModeSelector {
public:
    static ModeSelector& getInstance();
    int getMode() const;
    void setMode(int newMode);
    void handleLongPress();
    void handleEncoderRotation();
    void handleModeSelectionPress();
    void handleButtonPress();
    void setLedController(LEDController& ledController);
    void setEncoder(Encoder& encoder);
    void setCurrentMode(Mode*& currentMode);
    void setStateManager(StateManager& stateManager);
    bool isInModeSelection();
    Mode* getCurrentMode();
    void addMode(Mode* mode);
    void update();

private:
    ModeSelector(); ///< Constructor is private
    ModeSelector(ModeSelector const&); // Don't Implement
    void operator=(ModeSelector const&); // Don't implement

    std::vector<Mode*> modes;
    Mode* nullMode = nullptr;
    Mode*& currentMode;
    int mode;
    int inModeSelection = false;
    LEDController* ledController; // Add a pointer to LEDController
    Encoder* encoder; // Add a pointer to Encoder
    StateManager* stateManager;
    ResetButton* resetButton;
    bool isInSelection;
    bool inChannelSelection;
    bool singlePressHandled;
    bool doublePressHandled;
    bool longPressHandled;
    size_t totalModes = modes.size();
    int previousMode = -1;
    int numLeds;
};

#endif // MODE_SELECTOR_H