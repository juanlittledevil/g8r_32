#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

#include <vector>
#include "LEDController.h" // Include the LEDController header
#include "Encoder.h"
#include "Mode.h"

//Mode Selector Singleton.

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
    bool isInModeSelection();
    Mode* getCurrentMode();
    void addMode(Mode* mode);
    void update();

private:
    ModeSelector(); // Constructor is private
    ModeSelector(ModeSelector const&); // Don't Implement
    void operator=(ModeSelector const&); // Don't implement

    std::vector<Mode*> modes;
    Mode* nullMode = nullptr;
    Mode*& currentMode;
    int mode;
    int inModeSelection = false;
    LEDController* ledController; // Add a pointer to LEDController
    Encoder* encoder; // Add a pointer to Encoder
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