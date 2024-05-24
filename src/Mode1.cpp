/**
 * @file Mode1.cpp
 * @brief This file contains the implementation of the Mode1 class, which is used to manage the first mode of the Eurorack module.
 * See the header file for more info.
 */
#include "Mode1.h"
#include "Debug.h"
#include <Arduino.h>

#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

Mode1* Mode1::instance = nullptr;

Mode1::Mode1(StateManager& stateManager,
    Encoder& encoder,
    InputHandler& inputHandler,
    Gates& gates,
    LEDController& ledController,
    // MIDIHandler& midiHandler,
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
    ResetButton& resetButton)
    :   stateManager(stateManager),
        encoder(encoder),
        inputHandler(inputHandler),
        gates(gates),
        ledController(ledController),
        midi(midi),
        // midiHandler(midiHandler),
        resetButton(resetButton) {
    instance = this;
}

/**
 * @brief This function is used to setup the current mode object.
 * Setup and teardown methods are meant to be called when Mode selector
 * switches modes. This is where you can put code that should only run
 * once when the mode is switched to.
 * 
 */
void Mode1::setup() {
    gates.setALLGates(false); // Make sure we don't leave an notes on when changing channels.
    ledController.clearAndResetLEDs();
    midi.setHandleNoteOn(handleNoteOn);
    // midiHandler.setMode(1);

    numLeds = ledController.getNumLeds();
    confirmedChannel = stateManager.getMode1MIDIChannel();
    selectedChannel = confirmedChannel;
}

/**
 * @brief Like the setup method, this function is used to teardown the current mode object. 
 * 
 */
void Mode1::teardown() {
    // Teardown code goes here...
    ledController.clearAndResetLEDs();
    midi.setHandleNoteOn(nullptr);
}

void Mode1::handleNoteOn(byte channel, byte pitch, byte velocity) {
    unsigned long currentTime = millis();
    int note = pitch;
    int gate = (note - 3) % instance->gates.numGates;
    if (channel == instance->confirmedChannel) {
        instance->gates.trigger(gate, currentTime);
        if (!instance->isInSelection) {
            instance->ledController.trigger(gate, currentTime);
        } 
    }
}

/**
 * @brief This function is used to update the current mode object. The update method is meant to be called every loop iteration.
 * This is where you can put code that should run every loop iteration.
 * 
 */
void Mode1::update() {
    // Handle MIDI messages
    handleMidiMessage();

    // Handle button presses
    handleButton(encoder.readButton());

    // Handle selection states
    handleSelectionStates();
}

/**
 * @brief Handle MIDI messages. This function is called by the update method.
 * 
 */
void Mode1::handleMidiMessage() {
    unsigned long currentTime = millis();
    midi.read();
    gates.update(currentTime);
    ledController.update(currentTime);
}

/**
 * @brief This function is used to handle the selection states of the mode.
 * 
 */
void Mode1::handleSelectionStates() {
    if (inChannelSelection) {
        handleChannelSelection();
    // } else {
    //     if (midiHandler.getChannel() != confirmedChannel) {
    //         /// The channel is different so lets change it.
    //         midiHandler.setChannel(confirmedChannel);

    //         /// Also write the new channel to the EEPROM
    //         stateManager.setMode1MIDIChannel(confirmedChannel);
    //     }
    }
}

/**
 * @brief This function is used to handle the channel selection press. Single press is used to enter and exit the channel selection state.
 * 
 */
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

            // Also write the new channel to the EEPROM
            stateManager.setMode1MIDIChannel(confirmedChannel);

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

/**
 * @brief This function is used to handle the channel selection. Turn the encoder to select the channel.
 * 
 */
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

/**
 * @brief This function is used to handle the encoder button presses.
 * 
 * @param buttonState 
 */
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

/**
 * @brief This function is used to handle the encoder. However, in Mode 1, the encoder is not used.
 * 
 */
void Mode1::handleLongPress() {
    // modeSelector.handleLongPress();
}

/**
 * @brief This function is used to handle the double press of the encoder button.
 * However, in Mode 1, the double press is not used.
 * 
 */
void Mode1::handleDoublePress() {
    // Mode 1 specific double press handling
}

/**
 * @brief This function is used to handle the single press of the encoder button.
 * In Mode 1, the single press is used to enter and exit the channel selection state.
 * 
 */
void Mode1::handleSinglePress() {
    // Mode 1 specific single press handling
    handleChannelSelectionPress();
}

/**
 * @brief This function is used to handle the release of the encoder button.
 * However, in Mode 1, the release is not used.
 * 
 */
void Mode1::handlePressReleased() {
    // Mode 1 specific press released handling
}

/**
 * @brief This function is used to handle the reset button single press.
 * However, in Mode 1, the reset button is not used.
 * 
 */
void Mode1::handleResetSinglePress() {
}

/**
 * @brief This function is used to handle the reset button double press.
 * However, in Mode 1, the reset button is not used.
 * 
 */
void Mode1::handleResetDoublePress() {
}

/**
 * @brief This function is used to handle the reset button long press.
 * However, in Mode 1, the reset button is not used.
 * 
 */
void Mode1::handleResetLongPress() {
}

/**
 * @brief This function is used to handle the reset button press released.
 * However, in Mode 1, the reset button is not used.
 * 
 */
void Mode1::handleResetPressReleased() {
}
