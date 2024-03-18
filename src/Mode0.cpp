#include "Mode0.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Mode0::Mode0(Encoder& encoder, Gates& gates, LEDController& ledController, EurorackClock& clock, MIDIHandler& midiHandler)
    :   encoder(encoder),
        gates(gates),
        ledController(ledController),
        clock(clock),
        midiHandler(midiHandler) {
}

// Setup and teardown methods are meant to be called when Mode selector
// switches modes. This is where you can put code that should only run
// once when the mode is switched to.
void Mode0::setup() {
    clock.start();
    midiHandler.setMode(0);
}

void Mode0::teardown() {
    clock.stop();
    ledController.clearAndResetLEDs();
}

// The update method is meant to be called every loop iteration. This is
// where you can put code that should run every loop iteration.
void Mode0::update() {
    // Handle MIDI messages
    midiHandler.handleMidiMessage();

    // Handle button presses
    handleButton(encoder.readButton());

    // Handle selection states
    handleSelectionStates();

    // Handle clock tick
    clock.handleExternalClock();
    clock.tick();
}

// Other mode-specific methods
// ...
void Mode0::handleEncoder() {
    Encoder::Direction direction = encoder.readEncoder();
    if (inDivisionSelection) {
        // Handle division selection
        divisionIndex = encoder.handleEncoderDirection(divisionIndex, musicalIntervalsSize, direction);
        int division = musicalIntervals[divisionIndex];
        gates.setDivision(selectedGate, division);
        gates.setSelectedGate(selectedGate);
    } else {
        // Handle gate selection
        selectedGate = encoder.handleEncoderDirection(selectedGate, gates.numGates , direction);
        gates.setSelectedGate(selectedGate);
    }
}

void Mode0::handleButton(Encoder::ButtonState buttonState) {
    // Read the encoder and handle button presses
    encoder.readButton();

    if (encoder.isButtonLongPressed()) {
        this->handleLongPress();
    } else if (encoder.isButtonDoublePressed()) {
        this->handleDoublePress();
        doublePressHandled = true; 
    } else if (encoder.readButton() == Encoder::PRESSED && !singlePressHandled) {
        this->handleSinglePress();
        singlePressHandled = true;
    } else if (encoder.readButton() == Encoder::OPEN) {
        this->handlePressReleased();
        singlePressHandled = false; 
        doublePressHandled = false;
    }
}

void Mode0::handleLongPress() {
    // modeSelector.handleLongPress();
}

void Mode0::handleDoublePress() {
    // Enter tempo selection mode on double press
    if (!doublePressHandled) {
        if (selectingTempo) {
            // Exit tempo selection mode on double press
            selectingTempo = false;
        } else {
            // Enter tempo selection mode on double press
            selectingTempo = true;
        }
    }
}

void Mode0::handleSinglePress() {
    // Mode 0 specific single press handling
    handleDivisionSelectionPress();
}

void Mode0::handlePressReleased() {
    // Mode 0 specific press released handling
}

void Mode0::handleSelectionStates() {
    // Mode 0 specific selection state handling
    if (selectingTempo) {
        handleTempoSelection();
        clock.toggleLedOnDuration(true);  // if selecting tempo we want the LED to be on for 10ms
    } else {
        handleEncoder();
        clock.toggleLedOnDuration(false); // if not selecting tempo we want the LED to be on for 50ms
    }
}

void Mode0::handleTempoSelection() {
    // Handle tempo selection
    Encoder::Direction direction = encoder.readEncoder();
    int tempoIncrement = encoder.readSpeed();
    int currentTempo = clock.getTempo();
    if (direction == Encoder::CW) {
        if (externalTempo) {
            // Exit external tempo mode and increase the tempo
            externalTempo = false;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode disabled");
            }
        } else if (currentTempo + tempoIncrement <= maxTempo) {
            clock.setTempo(currentTempo + tempoIncrement, 4);
        }
    } else if (direction == Encoder::CCW) {
        if (currentTempo - tempoIncrement < minTempo) {
            // Enter external tempo mode when the tempo reaches the minimum
            externalTempo = true;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode enabled");
            }
        } else {
            clock.setTempo(currentTempo - tempoIncrement, 4);
        }
    }
    clock.setExternalTempo(externalTempo);
}

void Mode0::handleDivisionSelectionPress() {
    // Handle division selection press
    if (inDivisionSelection) {
        inDivisionSelection = false;
    } else {
        inDivisionSelection = true;
    }
}