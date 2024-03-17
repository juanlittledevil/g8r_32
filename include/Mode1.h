#ifndef MODE1_H
#define MODE1_H

#include "Mode.h"
#include "Encoder.h"
#include "Gates.h"
#include "LEDController.h"
#include "MIDIHandler.h"
#include "Constants.h"

class Mode1 : public Mode {
public:
    Mode1(Encoder& encoder, Gates& gates, LedController& ledController, MIDIHandler& midiHandler);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void setup() override;
    void teardown() override;
    void update() override;

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void setLEDState(int ledIndex, bool state, bool blinkFast, bool blinkSlow);
    void handleChannelSelection();
    void handleChannelSelectionPress();
    LedController& ledController;
    Encoder& encoder;
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