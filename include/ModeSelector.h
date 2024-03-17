#ifndef MODE_SELECTOR_H
#define MODE_SELECTOR_H

#include "LedController.h" // Include the LedController header

//Mode Selector Singleton.

class ModeSelector {
public:
    static ModeSelector& getInstance();

    int getMode() const;
    void setMode(int newMode);
    void handleLongPress();
    void handleModeSelectionPress();
    void handleButtonPress(Encoder::ButtonState buttonState);
    void setLedController(LedController& ledController);

private:
    ModeSelector(); // Constructor is private
    ModeSelector(ModeSelector const&); // Don't Implement
    void operator=(ModeSelector const&); // Don't implement

    int mode;
    int inModeSelection = false;
    LedController* ledController; // Add a pointer to LedController
};

#endif // MODE_SELECTOR_H