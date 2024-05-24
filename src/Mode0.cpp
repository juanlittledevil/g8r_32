/**
 * @file Mode0.cpp
 * @brief Implementation file for Mode0, Please see Mode0.h for more information.
 * 
 */
#include "Mode0.h"
#include "Debug.h"

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief This is the instance of the Mode0 class. We need this in order to work with the MIDI library.
 * The library requires a static function to be called when a MIDI message is received.
 */
Mode0* Mode0::instance = nullptr;

/**
 * @brief Construct a new Mode 0:: Mode 0 object
 * 
 * @param stateManager 
 * @param encoder 
 * @param inputHandler 
 * @param gates 
 * @param ledController 
 * @param midi 
 * @param resetButton 
 * @param clock 
 */
Mode0::Mode0(StateManager& stateManager,
    Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton,
    EurorackClock& clock)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
        resetButton(resetButton),
        clock(clock) {
    // Set the instance to this class
    instance = this;

    // Set the default division index
    setDefaultDivisionIndex();
}

/**
 * @brief Setup and teardown methods are meant to be called when Mode selector switches modes.
 * This is where you can put code that should only run once when the mode is switched to.
 * It is configured to run once when the mode is switched to and once when the mode is switched from.
 */
void Mode0::setup() {
    clock.start();
    gates.setALLGates(false);
    ledController.clearAndResetLEDs();
    midi.setHandleClock(Mode0::handleClock); // Set the handleClock function to handle MIDI clock messages using the static function handleClock

    for (int i = 0; i < gates.numGates; i++) {
        int division = stateManager.getGateDivision(i);
        gates.setDivision(i, division);
    }
}

/**
 * @brief This block of code is executed once whenever we switch modes. The code here is intended to be cleanup code.
 * This is where you can put code that should only run once when the mode is switched from.
 */
void Mode0::teardown() {
    clock.stop();
    ledController.clearAndResetLEDs();
    midi.setHandleClock(nullptr);
}

/**
 * @brief This function is used to handle MIDI clock messages.
 * 
 */
void Mode0::handleClock() {
    instance->clock.handleMidiClock();
}

/**
 * @brief Set the default division index based on the internal PPQN value, only used by the constructor to avoid compile errors.
 */
void Mode0::setDefaultDivisionIndex() {
    for (int i = 0; i < musicalIntervalsSize; i++) {
        if (musicalIntervals[i] == internalPPQN) {
            divisionIndex = i;
            break;
        }
    }
}

/**
 * @brief The update method is meant to be called every loop iteration. This is where you can put code that should run every loop iteration.
 * 
 */
void Mode0::update() {
    // Handle MIDI messages
    handleMidiMessage();

    // Handle button presses
    handleButton(encoder.readButton());
    handleResetButton(resetButton.readButton());
    handleCVInput();

    // Handle selection states
    handleSelectionStates();

    // Handle clock tick
    clock.handleExternalClock();
    clock.tick();
}

/**
 * @brief Handle MIDI messages. This function is called by the update method.
 * 
 */
void Mode0::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    ledController.update(currentTime);
}

/** 
 * @brief block of code is here to handle inputs from the CV Input Jacks.
 * It doesn't do anything now but is here for future use.
*/
void Mode0::handleCVInput() {
    // Handle CV input
    int cvA = inputHandler.readCVA();
    int cvB = inputHandler.readCVB();

    // if (Debug::isEnabled) {
    //     DEBUG_PRINT("CV A: " + String(cvA) + " CV B: " + String(cvB));
    // }
}

/**
 * @brief Detects the direction of the encoder and updates the selected gate or division based on the direction.
 * 
 */
void Mode0::handleEncoder() {
    Encoder::Direction direction = encoder.readEncoder();
    if (inDivisionSelection) {
        // Handle division selection
        divisionIndex = encoder.handleEncoderDirection(divisionIndex, musicalIntervalsSize, direction);
        int division = musicalIntervals[divisionIndex];
        gates.setDivision(selectedGate, division);
    } else {
        // Handle gate selection
        selectedGate = encoder.handleEncoderDirection(selectedGate, gates.numGates , direction);
    }
    gates.setSelectedGate(selectedGate);
}

/**
 * @brief This block of code is used to handle button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void Mode0::handleButton(Encoder::ButtonState buttonState) {
    // Read the encoder and handle button presses
    encoder.readButton();

    if (encoder.isButtonLongPressed()) {
        this->handleLongPress();
    } else if (encoder.isButtonDoublePressed()) {
        this->handleDoublePress();
        doublePressHandled = true; 
    } else if (encoder.isButtonSinglePressed() && !singlePressHandled) {
        this->handleSinglePress();
        singlePressHandled = true;
    } else if (encoder.readButton() == Encoder::OPEN) {
        this->handlePressReleased();
        singlePressHandled = false; 
        doublePressHandled = false;
    }
}

/**
 * @brief This block of code is used to handle reset button presses. It is called by the update method.
 * 
 * @param buttonState 
 */
void Mode0::handleResetButton(ResetButton::ButtonState buttonState) {
    resetButton.readButton();

    // Handle reset button presses
    if (resetButton.isButtonLongPressed()) {
        this->handleResetLongPress();
    } else if (resetButton.isButtonDoublePressed()) {
        this->handleResetDoublePress();
        doubleResetPressHandled = true; 
    } else if (resetButton.readButton() == ResetButton::PRESSED && !singleResetPressHandled) {
        this->handleResetSinglePress();
        singleResetPressHandled = true;
    } else if (resetButton.readButton() == ResetButton::OPEN) {
        this->handleResetPressReleased();
        singleResetPressHandled = false; 
        doubleResetPressHandled = false;
    }
}

/**
 * @brief Handle reset single press. Default behavior is to reset the selected gate so it can by synced with the clock.
 * 
 */
void Mode0::handleResetSinglePress() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Reset single press");
    }
    clock.reset(selectedGate);
}

/**
 * @brief Handle reset double press. Default behavior is to reset the clock so it can be synced with an external clock.
 * 
 */
void Mode0::handleResetDoublePress() {
    if (!doubleResetPressHandled) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Reset double press");
        }
        clock.reset();
    }
}

/**
 * @brief This function is used to handle long press of the reset button. However, it doesn't do anything yet.
 * 
 */
void Mode0::handleResetLongPress() {
    /// Does nothing yet but it could. :)
}

/**
 * @brief This function is used to handle reset press released. However, it doesn't do anything yet.
 * 
 */
void Mode0::handleResetPressReleased() {
    /// Does nothing yet but it could. :)
}

/**
 * @brief This function is used to handle long press of the button. However, it doesn't do anything yet.
 * 
 */
void Mode0::handleLongPress() {
    /// Long press is used by modeSelector, so don't use that here.
}

/**
 * @brief Handle double press. Default behavior is to enter or exit tempo selection mode.
 * 
 */
void Mode0::handleDoublePress() {
    // Enter tempo selection mode on double press
    if (!doublePressHandled) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Double press");
        }
        if (selectingTempo) {
            // Exit tempo selection mode on double press
            selectingTempo = false;
        } else {
            // Enter tempo selection mode on double press
            selectingTempo = true;
        }
    }
}

/**
 * @brief Handle single press. Default behavior is to toggle between division selection and gate selection.
 * 
 */
void Mode0::handleSinglePress() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Single press");
    }
    if (inDivisionSelection) {
        /// If in division selection update the division for the selected gate
        int division = musicalIntervals[divisionIndex];
        gates.setDivision(selectedGate, division);
        stateManager.setGateDivision(selectedGate, division);
    }
    /// Toggle between division selection and gate selection
    inDivisionSelection = !inDivisionSelection;
}

/**
 * @brief Handle press released. Default behavior is to do nothing.
 * 
 */
void Mode0::handlePressReleased() {
    /// Mode 0 specific press released handling
}

/**
 * @brief Handle selection states. Default behavior is to handle tempo selection.
 * 
 */
void Mode0::handleSelectionStates() {
    if (selectingTempo) {
        handleTempoSelection();
        clock.toggleLedOnDuration(true);  // if selecting tempo we want the LED to be on for 10ms
    } else {
        handleEncoder();
        clock.toggleLedOnDuration(false); // if not selecting tempo we want the LED to be on for 50ms
    }
}

/**
 * @brief Handle tempo selection. Default behavior is to increase or decrease the tempo based on the encoder direction.
 * 
 */
void Mode0::handleTempoSelection() {
    Encoder::Direction direction = encoder.readEncoder();
    int tempoIncrement = encoder.readSpeed();
    int currentTempo = clock.getTempo();
    if (direction == Encoder::CW) {
        if (externalTempo) {
            /// If externalTempo, exit external tempo mode and increase the tempo
            externalTempo = false;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode disabled");
            }
        } else if (currentTempo + tempoIncrement <= maxTempo) {
            clock.setTempo(currentTempo + tempoIncrement, internalPPQN);
        }
    } else if (direction == Encoder::CCW) {
        if (currentTempo - tempoIncrement < minTempo) {
            /// Enter external tempo mode when the tempo reaches the minimum
            externalTempo = true;
            if (Debug::isEnabled) {
                DEBUG_PRINT("External tempo mode enabled");
            }
        } else {
            clock.setTempo(currentTempo - tempoIncrement, internalPPQN);
        }
    }
    clock.setExternalTempo(externalTempo);
}
