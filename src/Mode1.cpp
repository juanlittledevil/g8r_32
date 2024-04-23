// Mode1.cpp
#include "Mode1.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Mode1::Mode1(Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    MIDIHandler& midiHandler,
    ResetButton& resetButton)
    :   encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midiHandler(midiHandler),
        resetButton(resetButton) {
}

// Setup and teardown methods are meant to be called when Mode selector
// switches modes. This is where you can put code that should only run
// once when the mode is switched to.
void Mode1::setup() {
    midiHandler.setMode(1);
    numLeds = ledController.getNumLeds();
}

void Mode1::teardown() {
    // Teardown code goes here...
    ledController.clearAndResetLEDs();
}

// The update method is meant to be called every loop iteration. This is
// where you can put code that should run every loop iteration.
void Mode1::update() {
    // Handle MIDI messages
    midiHandler.handleMidiMessage();

    // Handle button presses
    handleButton(encoder.readButton());

    // Handle selection states
    handleSelectionStates();
}

void Mode1::handleSelectionStates() {
    if (inChannelSelection) {
        handleChannelSelection();
    } else {
        midiHandler.setChannel(confirmedChannel);
    }
}

void Mode1::handleChannelSelectionPress() {
    if (!singlePressHandled) {
        // Exit channel selection state on button press
        if (inChannelSelection) {
            confirmedChannel = selectedChannel;
            previousChannel = -1; // Reset the previous channel

            ledController.clearLEDs();
            gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.

            inChannelSelection = false;
            isInSelection = false;

        // Enter channel selection state on button press
        } else {
            inChannelSelection = true;
            isInSelection = true;
            int led_index = selectedChannel % numLeds;

            // Calculate current page and LED index within the page
            int current_page = selectedChannel / numLeds;

            if (selectedChannel < 8) {
                ledController.blinkFast(led_index); // Blink the LED corresponding to the selected channel
            } else {
                ledController.blinkFaster(led_index); // Blink the LED corresponding to the selected channel
            }
        }
        singlePressHandled = true;
    }
}

void Mode1::handleChannelSelection() {
    Encoder::Direction direction = encoder.readEncoder();
    selectedChannel = encoder.handleEncoderDirection(selectedChannel, NUM_MIDI_CHANNELS, direction);

    // Calculate current page and LED index within the page
    int current_page = selectedChannel / numLeds;
    int led_index = selectedChannel % numLeds;

    if (selectedChannel != previousChannel) {
        for (int i = 0; i < numLeds; i++) { // Loop over LEDs, not channels
            if (i == led_index) {
                if (selectedChannel < 8) {
                    ledController.blinkFast(led_index); // Blink the LED corresponding to the selected channel
                } else {
                    ledController.blinkFaster(led_index); // Blink the LED corresponding to the selected channel
                }
            } else {
                ledController.stopBlinking(i);
                ledController.setState(i, false);
            }
        }
        previousChannel = selectedChannel; // Update the previous mode
    }
}

void Mode1::handleButton(Encoder::ButtonState buttonState) {
    // Read the encoder and handle button presses
    encoder.readButton();

    if (encoder.isButtonLongPressed()) {
        this->handleLongPress();
    } else if (encoder.isButtonDoublePressed()  && !doublePressHandled) {
        this->handleDoublePress();
        doublePressHandled = true; 
    } else if (encoder.readButton() == Encoder::PRESSED && !singlePressHandled) {
        this->handleSinglePress();
        singlePressHandled = true;
    } else if (encoder.readButton() == Encoder::OPEN) {
        this->handlePressReleased();
        doublePressHandled = false;
        singlePressHandled = false; 
    }
}

void Mode1::handleLongPress() {
    // modeSelector.handleLongPress();
}

void Mode1::handleDoublePress() {
    // Mode 1 specific double press handling
}

void Mode1::handleSinglePress() {
    // Mode 1 specific single press handling
    handleChannelSelectionPress();
}

void Mode1::handlePressReleased() {
    // Mode 1 specific press released handling
}

void Mode1::handleResetSinglePress() {
}

void Mode1::handleResetDoublePress() {
}

void Mode1::handleResetLongPress() {
}

void Mode1::handleResetPressReleased() {
}
