/**
 * @file Mode1.h
 * @brief Mode one is a MIDI note to trigger app. It works with MIDI notes and the modulo operator to trigger gates.
 * I've configured the so c2 (42) triggers gate 1, d2 (44) triggers gate 2, etc. up to g2 (47) which triggers gate 6.
 * 
 * TODO: This mode is working well, but I think we coudl combine mode1 and mode2 into one mode. They are very similar
 * and if instead of using the modulo operator, we implemented a MIDI learn functionality that took into account the
 * note number as well the MIDI channel, there would be no need for separate apps. This is probably the next thing I will do.
 */
#ifndef MODE1_H
#define MODE1_H

#include "Mode.h"
#include "Encoder.h"
#include "Gates.h"
#include "LEDController.h"
#include "MIDIHandler.h"
#include "Constants.h"
#include "ResetButton.h"
#include "InputHandler.h"
#include "StateManager.h"

/**
 * @brief This is a MIDI to Trigger class for Note On messages. It uses the modulo operator to trigger gates based on the note number.
 * 
 */
class Mode1 : public Mode {
public:
    Mode1(StateManager& stateManager,
        Encoder& encoder,
        InputHandler& inputHandler,
        Gates& gates,
        LEDController& ledController,
        MIDIHandler& midiHandler,
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

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void handleChannelSelection();
    void handleChannelSelectionPress();
    StateManager& stateManager;
    LEDController& ledController;
    InputHandler& inputHandler;
    Encoder& encoder;
    ResetButton& resetButton;
    Gates& gates;
    MIDIHandler& midiHandler;
    bool doublePressHandled = false;
    bool inChannelSelection = false;
    bool isInSelection = false;
    bool singlePressHandled = false;
    int selectedChannel = 9; // MIDI channels are 0-15
    int confirmedChannel = 9; // MIDI channels are 0-15
    int previousChannel = -1; // used with blinking in channel selection
    const int NUM_MIDI_CHANNELS = 16;
    int numLeds = 8;
};

#endif // MODE1_H