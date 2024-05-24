/**
 * @file Mode2.h
 * @brief This mode listens for MIDI Note from all channels. And plays a trigger based soly on the
 * channel number. I use this with my Electribe 2 Sampler to trigger the gates. Since each pad
 * sends the sname note number on a different channel, this works well.
 * 
 * TODO: This mode is working well, but I think we could combine mode1 and mode2 into one mode. They are very similar
 * and if we implemented a MIDI learn functionality there would be no need for the two modes. This is probably the next thing I will do.
 */
#ifndef MODE2_H
#define MODE2_H

#include "Mode.h"
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
class Mode2 : public Mode {
public:
    static Mode2* instance;
    Mode2(StateManager& stateManager,
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
    int numLeds = 8;
};

#endif // MODE2_H