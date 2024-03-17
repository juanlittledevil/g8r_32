#include "ModeSelector.h"

ModeSelector& ModeSelector::getInstance() {
    static ModeSelector instance; // Guaranteed to be destroyed, instantiated on first use.
    return instance;
}

int ModeSelector::getMode() const {
    return mode;
}

void ModeSelector::setMode(int newMode) {
    if (newMode >= 0 && newMode < modes.size()) {
        mode = newMode;
        currentMode = modes[newMode];
    }
}

void ModeSelector::handleLongPress() {
    // Exit mode selection state on long press
    if (inModeSelection) {
        inModeSelection = false;
        return;
    }

    // Enter mode selection state on long press
    ledController->clearLEDs();

    // Reset the mode for the LEDs if not in mode 0
    if (getMode() != 0) {
        ledController->resetInverted();
    }

    inModeSelection = true;
    isInSelection = true;
    inChannelSelection = false;
    singlePressHandled = true;
    for (int i = 0; i < totalModes; i++) {
        if (i == getMode()) {
            ledController->blinkSlow(i);
        } else {
            ledController->stopBlinking(i);
        }
    }
    // leds.blinkSlow(getMode());
}

void ModeSelector::handleModeSelectionPress() {
    ledController->clearLEDs();

    // Reset the mode for the LEDs if not in mode 0
    if (getMode() != 0) {
        ledController->resetInverted();
    }

    inModeSelection = false;
    isInSelection = false;
    previousMode = -1; // Reset the previous mode
}

void ModeSelector::handleButtonPress() {
    // Read the encoder and handle button presses
    encoder->readButton();

    if (encoder->isButtonLongPressed()) { // Handle long press
        // ...
        inModeSelection = !inModeSelection;

        if (inModeSelection) {
            // Enter mode selection state
            // ...
        } else {
            // Exit mode selection state
            // ...
        }
    } else if (encoder->readButton() == Encoder::PRESSED) { // Handle single press
        // ...
        // for now do nothing....
        if (!inModeSelection) { return; }
    }
}

void ModeSelector::setLedController(LEDController& ledController) {
    this->ledController = &ledController;
}

void ModeSelector::setEncoder(Encoder& encoder) {
    this->encoder = &encoder;
}

void ModeSelector::setCurrentMode(Mode*& currentMode) {
    this->currentMode = currentMode;
}

void ModeSelector::addMode(Mode* mode) {
    modes.push_back(mode);
    totalModes = modes.size();
}

Mode* ModeSelector::getCurrentMode() {
    return currentMode;
}

ModeSelector::ModeSelector()
    :   mode(0),
        currentMode(nullMode)   {} // Initializes mode to 0