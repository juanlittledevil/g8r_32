/**
 * @file ModeDivisions.h
 * @brief This mode is the main mode for the Eurorack Clock module.
 * 
 * In this mode, the user can set the tempo, select the division of the clock signal, and select the gate output.
 * It works with the Encoder, Gates, LEDController, MIDIHandler, ResetButton, and EurorackClock classes.
 * 
 * This mode utilizes an internal clock and can be synchronized with an external clock signal as well as MIDI clock.
 * When the mode is active, the user can set the tempo by turning the encoder knob. The tempo can be set between 20 and 340 BPM.
 * This is done by turning the encoder knob to the left to decrease the tempo or to the right to increase the tempo when in tempo selection mode.
 * 
 * Tempo selection mode is activated by pressing the encoder knob twice in quick succession. Then to exit this mode the user can press the encoder knob twice again.
 * 
 * The user can also select the division of the clock signal for each gate output. The division can be set to 1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 64, 96, 128, 192, or 256 PPQN.
 * This is done by first selecting the gate output by rotating the encoder. The selected gate output will be indicated by the LED corresponding to the gate output.
 * Then the user can press the encoder knob to enter the division selection mode. The division can be set by rotating the encoder knob.
 * Pese the encoder knob again to exit the division selection mode.
 *
 * The internal clock is done by using the EurorackClock class. The clock signal is sent to the gate outputs using the Gates class. It's all complicated stuff but I'm working on
 * making it easier to understand. The MIDIHandler class is used to handle MIDI clock signals. The LEDController class is used to control the LEDs on the module.
 * 
 * TODO: The internal clock works with a PPQN of 24 by default. This can be changed by pressing the reset button and rotating the encoder knob to select the desired PPQN.
 */
#ifndef MODE_DIVISIONS_H
#define MODE_DIVISIONS_H

#include "Mode.h"
#include "Encoder.h"
#include "Gates.h"
#include "LEDController.h"
#include "EurorackClock.h"
#include "Constants.h"
#include "ResetButton.h"
#include "InputHandler.h"
#include <vector>
#include <Arduino.h>
#include "StateManager.h"

/**
 * @brief This class uses the eurorack clock to provide us pullses with selectable division. It can be synced to a clock too, internal and external.
 * 
 */
class ModeDivisions : public Mode {
public:
    static ModeDivisions* instance; 
    ModeDivisions(StateManager& stateManager,
        Encoder& encoder,
        InputHandler& inputHandler,
        Gates& gates,
        LEDController& ledController,
        midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi,
        ResetButton& resetButton,
        EurorackClock& clock);
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
    void setDivisionPPQN(int ppqn);
    void setDefaultDivisionIndex();

    // For MIDI Messages
    static void handleClock();
    void handleMidiMessage();

private:
    void handleEncoder();
    void handleButton(Encoder::ButtonState buttonState);
    void handleResetButton(ResetButton::ButtonState buttonState);
    void handleCVInput();
    void handleTempoSelection();
    StateManager& stateManager;
    LEDController& ledController;
    Encoder& encoder;
    ResetButton& resetButton;
    Gates& gates;
    EurorackClock& clock;
    midi::MidiInterface<midi::SerialMIDI<HardwareSerial>>& midi;
    InputHandler& inputHandler;
    bool inDivisionSelection = false;
    bool externalTempo = false;
    bool singlePressHandled = false;
    bool singleResetPressHandled = false;
    int tempoIncrement = 1;
    const int minTempo = 20;
    const int maxTempo = 340;
    int divisionIndex = 24;
    int selectedGate = 0;
    bool selectingTempo = false;
    bool doublePressHandled = false;
    bool doubleResetPressHandled = false;
};

#endif // MODE_DIVISIONS_H