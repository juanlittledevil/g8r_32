#ifndef MODE_MIDI_LEARN_H
#define MODE_MIDI_LEARN_H

#include "Mode.h"
#include <Arduino.h>
#include "LEDController.h"
#include "Encoder.h"
#include "Gates.h"
#include "Constants.h"
#include "InputHandler.h"
#include "ResetButton.h"
#include "StateManager.h"

/**
 * @brief This is a MIDI to Trigger class for Note On but it only cares about the channel number.
 * 
 */
class ModeMidiLearn : public Mode {
public:
    static ModeMidiLearn* instance;
    ModeMidiLearn(StateManager& stateManager,
        Encoder& encoder,
        InputHandler& inputHandler,
        Gates& gates,
        LEDController& ledController,
        midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
        ResetButton& resetButton);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void handleResetSinglePress() override;
    void handleResetDoublePress() override;
    void handleResetLongPress() override;
    void handleResetPressReleased() override;
    void setup() override;
    void teardown() override;
    void update() override;

    // For MIDI Messages
    static void handleNoteOn(byte channel, byte pitch, byte velocity);
    void handleMidiMessage();

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void handleResetButton(ResetButton::ButtonState buttonState);
    void loadMidiLearnNotes();
    StateManager& stateManager;
    LEDController& ledController;
    InputHandler& inputHandler;
    Encoder& encoder;
    ResetButton& resetButton;
    Gates& gates;
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi;
    bool doublePressHandled = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    bool doubleResetPressHandled = false;
    bool singleResetPressHandled = false;
    bool longResetPressHandled = false;
    int numLeds = 8;
    bool isInLearningMode = false;
    int currentLearningGate = 0;
    std::vector<std::pair<int, int>> midiLearnNotes;
};

#endif // MODE_MIDI_LEARN_H