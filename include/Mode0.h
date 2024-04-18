#ifndef MODE0_H
#define MODE0_H

#include "Mode.h"
#include "Encoder.h"
#include "Gates.h"
#include "LEDController.h"
#include "EurorackClock.h"
#include "MIDIHandler.h"
#include "Constants.h"
#include <vector>

class Mode0 : public Mode {
public:
    Mode0(Encoder& encoder, Gates& gates, LEDController& ledController, EurorackClock& clock, MIDIHandler& midiHandler);
    void handleSinglePress() override;
    void handleDoublePress() override;
    void handleLongPress() override;
    void handlePressReleased() override;
    void handleSelectionStates() override;
    void setup() override;
    void teardown() override;
    void update() override;
    void setDivisionPPQN(int ppqn);
    void setDefaultDivisionIndex();

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void handleDivisionSelectionPress();
    void handleTempoSelection();
    LEDController& ledController;
    Encoder& encoder;
    Gates& gates;
    EurorackClock& clock;
    MIDIHandler& midiHandler;
    bool inDivisionSelection = false;
    bool externalTempo = false;
    bool singlePressHandled = false;
    int tempoIncrement = 1;
    const int minTempo = 20;
    const int maxTempo = 340;
    int divisionIndex = 24;
    int selectedGate = 0;
    bool selectingTempo = false;
    bool doublePressHandled = false;
};

#endif // MODE0_H