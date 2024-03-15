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

ModeSelector::ModeSelector() : mode(0) {} // Initializes mode to 0