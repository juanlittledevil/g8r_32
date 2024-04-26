#include "ModeSelector.h"
#include <Arduino.h>
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

ModeSelector::ModeSelector()
    :   currentMode(nullMode)   {}

ModeSelector& ModeSelector::getInstance() {
    static ModeSelector instance; // Guaranteed to be destroyed, instantiated on first use.
    return instance;
}

void ModeSelector::update() {
    handleButtonPress();
    handleEncoderRotation();
}

int ModeSelector::getMode() const {
    return state->mode;
}

void ModeSelector::setMode(int newMode) {
    if (newMode >= 0 && newMode < modes.size()) {
        state->mode = newMode;
        currentMode = modes[newMode];

        // Save the current state to EEPROM
        saveAppState();
    }
}

void ModeSelector::setAppState(AppState* state) {
    this->state = state;
}

void ModeSelector::saveAppState() {
    // Save the current state to EEPROM before changing modes
    uint8_t* ptr = (uint8_t*)&state;
    for (size_t i = 0; i < sizeof(AppState); i++) {
        EEPROM.write(i, ptr[i]);
    }
}

void ModeSelector::readAppState() {
    // Read the current state from EEPROM
    uint8_t* ptr = (uint8_t*)&state;
    for (size_t i = 0; i < sizeof(AppState); i++) {
        ptr[i] = EEPROM.read(i);
    }
}

void ModeSelector::handleLongPress() {
    // Toggle mode selection state
    inModeSelection = !inModeSelection;
    if (inModeSelection) {
        // Enter mode selection state
        // ...
        ledController->clearAndResetLEDs();
        inModeSelection = true;
        isInSelection = true;
        singlePressHandled = true;
        ledController->clearAndResetLEDs();
        ledController->setState(getMode(), true);

        // Save the current state to EEPROM
        saveAppState();
    } else {
        // Exit mode selection state
        // ...
    }
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
        if (!longPressHandled) {
            handleLongPress();
            longPressHandled = true;
        }
    } else if (encoder->readButton() == Encoder::PRESSED) { // Handle single press
        // ...
        // for now do nothing....
        longPressHandled = false;
        if (!inModeSelection) { return; }
    }
}

void ModeSelector::handleEncoderRotation() {
    if (!inModeSelection) {
        return;
    }

    Encoder::Direction direction = encoder->readEncoder();

    if (direction == Encoder::CW) {
        setMode(getMode() + 1);
    } else if (direction == Encoder::CCW) {
        setMode(getMode() - 1);
    }

    // Light up the LED corresponding to the current mode
    ledController->clearAndResetLEDs();
    ledController->setState(getMode(), true);
}

bool ModeSelector::isInModeSelection() {
    return inModeSelection;
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
