#include "ModeSelector.h"

ModeSelector& ModeSelector::getInstance() {
    static ModeSelector instance; // Guaranteed to be destroyed, instantiated on first use.
    return instance;
}

int ModeSelector::getMode() const {
    return mode;
}

void ModeSelector::setMode(int newMode) {
    mode = newMode;
}

void ModeSelector::handleLongPress() {
    // Exit mode selection state on long press
    if (inModeSelection) {
        inModeSelection = false;
        return;
    }

    // Enter mode selection state on long press
    leds.stopAllBlinking();
    leds.setAllLeds(false);
    // Reset the mode for the LEDs if not in mode 0
    if (ModeSelector::getInstance().getMode() != 0) {
        for (int i = 0; i < leds.numLeds; i++) {
            leds.resetInverted(i);
        }
    }
    inModeSelection = true;
    isInSelection = true;
    inChannelSelection = false;
    singlePressHandled = true;
    for (int i = 0; i < total_modes; i++) {
        if (i == ModeSelector::getInstance().getMode()) {
            leds.blinkSlow(i);
        } else {
            leds.stopBlinking(i);
        }
    }
    // leds.blinkSlow(ModeSelector::getInstance().getMode());
}

void ModeSelector::handleModeSelectionPress() {
    leds.stopAllBlinking();
    leds.setAllLeds(false);
    // Reset the mode for the LEDs if not in mode 0
    if (ModeSelector::getInstance().getMode() != 0) {
        for (int i = 0; i < leds.numLeds; i++) {
            leds.resetInverted(i);
        }
    }
    inModeSelection = false;
    isInSelection = false;
    previousMode = -1; // Reset the previous mode
}

void ModeSelector::handleButtonPress(Encoder::ButtonState buttonState) {
    // From here we mainly just care for the long press because the rest is handled in the mode classes.
    // Read the encoder and handle long button presses only. If you need more interactions
    // with the encoder specifically for mode selection, do so in the ModeSelector class, but ensure that
    // you protect the other actions a those are handled in the mode classes.
    if (buttonState == Encoder::LONG_PRESSED) {
        // Toggle mode selection state on long press
        inModeSelection = !inModeSelection;

        if (inModeSelection) {
            // Enter mode selection state
            // ...
        } else {
            // Exit mode selection state
            // ...
        }
    } else if (buttonState == Encoder::PRESSED) {
        // Handle single press
        if (!inModeSelection) { return; }
    } else if (buttonState == Encoder::DOUBLE_PRESSED) {
        // Handle double press
        if (!inModeSelection) { return; }
    }
}

void ModeSelector::setLedController(LedController& ledController) {
    leds = ledController;
}

ModeSelector::ModeSelector() : mode(0) {} // Initializes mode to 0