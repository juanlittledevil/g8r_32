#ifndef MODE0_H
#define MODE0_H

#include "Mode.h"
#include "Encoder.h"
#include "Gates.h"
#include "LEDController.h"
#include "EurorackClock.h"
#include "MIDIHandler.h"
#include "Constants.h"

class Mode0 : public Mode0 {
public:
    Mode0(Encoder& encoder, Gates& gates, LedController& ledController, EurorackClock& clock, MIDIHandler& midiHandler);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void setup() override;
    void update() override;
    void tick();

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void setLEDState(int ledIndex, bool state, bool blinkFast, bool blinkSlow);
    void handleTempoSelection();
    void handleDivisionSelectionPress();
    LedController& ledController;
    Encoder& encoder;
    Gates& gates;
    EurorackClock& clock;
    MIDIHandler& midiHandler;
    bool inDivisionSelection = false;
    bool externalTempo = false;
    int clockDivisions[] = {1, 2, 4, 12, 24, 48};
    int numClockDivisions = arraySize(clockDivisions);
    int tempoIncrement = 1;
    const int minTempo = 20;
    const int maxTempo = 340;
    int divisionIndex = 4;
    int selectedGate = 0;
    bool selectingTempo = false;
    bool doublePressHandled = false;
};

#endif // MODE0_H