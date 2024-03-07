# pragma G8r
/*
Name: g8r (i.e. Gator)
Author: Juan Segovia
License: Attribution-NonCommercial 3.0 Unported (CC BY-NC 3.0)
         https://creativecommons.org/licenses/by-nc/3.0/

Version: ¯\_(ツ)_/¯  -- check the git tag for that :P
Description: G8R or gater, is a MIDI to Gate eurorack module.
  it runs on 5v and has been configured to run in 3 modes to make it a
  bit more useful even when not using MIDI.

  mode0: In this mode the gates listen to MIDI messages from either USB
    or via the MIDI-in Jack. (NOTE: the MIDI jack uses type-A mini TRS MIDI)
    In this smode only channel mode0Channel (default 10) is observed. Which
    note is assigned to a gate is calculated by modulo for the given note
    number.

  mode1: This mode is similar to mode0 but instead of triggering events on
    MIDI note from a single channel. This mode responds to ANY note from
    channels 9 - 16 where each channel is triggered on a different gate output.
    (NOTE: the MIDI jack uses type-A mini TRS MIDI)

  mode2: In this mode the only MIDI info observed is MIDI Clock. Signals
    are triggered based on clock intervals and divisions. Use the encoder
    to select what interfals are assigned to each gate output.

TODO:
  - Make mode0Channel selectable with the encoder.
  - Make mode1 available either 1 to 8 or 9 to 16, thus allowing for multiple
    of these units to be daisy chained since the midi out simply mirrors the
input.
  - Enable changes to running config to be saved on EEPROM.
    one idea would be to use the switch while in mode2selection 2. if the switch
    is moved to another mode and the button is pressed or someting like that.
    Or, maybe turnig the potentiometer all the way right and clicking or
something.
  - Moar gate division modes!!!!
*/

#include <Arduino.h>
#include <EEPROM.h>
#include <MIDI.h>

// MARK: Debug Mode. and vars ----
// #####################################################################
bool debug = true;  // enable serial console debug.
bool pot_debug = false;   // show analog input.
bool clock_debug = false; // show clock ticks on debug.
// end debug vars. -----

// #####################################################################
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

// #####################################################################

// MARK: Scketch variables.

// #####################################################################
const byte total_gates = 8;  // Number of gates available.
const byte syncPin = 38;
const byte potPin = 39;
const byte modePin1 = 14;
const byte modePin2 = 13;
const byte ledPin = 12;
const byte encButton = 15;
const byte encCLK = 16;
const byte encDT = 17;
const byte gatePin[total_gates] = {4, 5, 6, 7, 8, 9, 10, 11};
const byte gateLedPin[total_gates] = {26, 25, 24, 23, 22, 21, 20, 19};

// NOTE: ENCODER N' BUTTON STUFFS
enum buttonState { PRESSED, OPEN };
buttonState encButtonState = OPEN;
String encDir = "";
int encCounter = 0;
int curStateCLK;
int prevStateCLK;
int syncVal;
int potVal;
int ledCounter =
    0;  // look at the ledBlinker function for tuning the blink rates.
bool ledIsOn = LOW;

// NOTE: MODE STUFFS.
byte mode = 1;  // operation modes.
const byte mode0Channel = 10;
int mode2Selecting = 0;
int mode2GateSelection = 0;
int mode2IntervalSelection = 0;

// NOTE: EEPROM
// TODO: - Preset Selection.
/* 
    the running config will contain the currently loaded preset. When we move
    the encoder without first pressing the encoder button to get into selection
    we will indicate the currenty loaded preset, then either increment or
    decrement a preset slot to be loaded. Pressing the button will load the
    selected preset and replace the value on runningConfig.preset.

    Additionally, when the preset selection is active a timmer will start if
    enough time goes by and we have not selected a preset a timeout value will
    automatically disengage the preset selection process.
*/
static unsigned long select_timer = 0;
bool selectingPreset = false;
struct Settings {
    byte gateSelection[total_gates];
    byte preset;
};
Settings runningConfig = {{6, 12, 14, 1, 2, 3, 4, 5}, 0};
byte selectedPreset = runningConfig.preset;
byte maxPresets = 32;
int encSaveAddress[total_gates] = {1016, 1017, 1018, 1019,
                                   1020, 1021, 1022, 1023};
// gateInterval[gateDivision][gateSkipBeat]
// In order to later know the nubmer of items to cycle through.
// I'm using a items const. If you add more options, make sure to also
// match the gateIntervalItems value to match yoru array values.
const byte gateIntervalItems = 30;
const byte gateInterval[gateIntervalItems][2] = {
    {24, 0},  // quarter note. - non mutating.
    {12, 0},  // eigth note. - non mutating.
    {6, 0},   // 16th note. - non mutating.
    {3, 0},   // 32nd... - non mutating.
    {8, 0},   // tripplet - non mutating.
    {4, 0},   // tripplet - non mutating.

    {24, 1},  // quarter note.
    {12, 1},  // eigth note.
    {6, 1},   // 16th note.
    {3, 1},   // 32nd...
    {8, 1},   // tripplet
    {4, 1},   // tripplet

    {24, 2},  // every other quarter note
    {12, 2},  // eigth notes every other qarter note.
    {6, 2},   // 16th notes every other quearter note.
    {3, 2},   // 32nd every other note.
    {8, 2},   // tripplet every other note.
    {4, 2},   // tripplet every other note.

    {24, 3},  // every other quarter note
    {12, 3},  // eigth notes every other qarter note.
    {6, 3},   // 16th notes every other quearter note.
    {3, 3},   // 32nd every other note.
    {8, 3},   // tripplet every other note.
    {4, 3},   // tripplet every other note.

    {24, 4},  // every other quarter note
    {12, 4},  // eigth notes every other qarter note.
    {6, 4},   // 16th notes every other quearter note.
    {3, 4},   // 32nd every other note.
    {8, 4},   // tripplet every other note.
    {4, 4},   // tripplet every other note.
};

// NOTE: MIDI Metro sync stuffs.
int clockInBuffer = 0;
int currentBeat = 0;
int currentBar = 0;
bool externalClock = false;
static unsigned long clock_timer = 0;
static unsigned long save_timer = 0;
int count;
bool gateState[total_gates];
byte gateCount[total_gates];

// #####################################################################

// MARK: Function Declarations 
// #####################################################################
void noteOnHandler(byte channel, byte note, byte velocity);
void noteOffHandler(byte channel, byte note, byte velocity);
void noteOnMode0(byte channel, byte note, byte velocity);
void noteOffMode0(byte channel, byte note, byte velocity);
void noteOnMode1(byte channel, byte note, byte velocity);
void noteOffMode1(byte channel, byte note, byte velocity);
void printMessage(String message);
void resetOutputs();
void blinkRedLED(byte pin, int onCount, int offCount);
void blinkLED(byte pin, byte blinks);
void resetLED(byte pin);
void ledOn(byte pin);
void ledOff(byte pin);
void gateOn(byte pin);
void gateOff(byte pin);
void flashRedLEDOnBeat();
void resetGateLeds();
void onStart();
void onStop();
void onContinue();
void onClock();
void resetCounters();
bool chance(int threshold, int maximum);
void setupEncoder();
void setupEEPROM();
void readEncoder();
void updateRunningConfig();
void gateClockHandler();
void savePreset();
void onExternalClock();
void loadPreset();

// #####################################################################
# pragma Setup
// #####################################################################
void setup() {
    // Initialize pings for output.
    pinMode(ledPin, OUTPUT);
    pinMode(modePin1, INPUT_PULLUP);
    pinMode(modePin2, INPUT_PULLUP);
    pinMode(syncPin, INPUT);
    for (int i = 0; i < total_gates; i++) {
        pinMode(i + 4, OUTPUT);
        gateState[i] = LOW;
        pinMode(gateLedPin[i], OUTPUT);
    }

    // Setup Encoder
    setupEncoder();

    // Initialize Settings....
    setupEEPROM();

    // Ensures we get a more random random.
    randomSeed(analogRead(A0));
    resetCounters();

    // Setup Midi and listen on all channels.
    MIDI.begin(MIDI_CHANNEL_OMNI);

    usbMIDI.setHandleNoteOn(noteOnHandler);
    usbMIDI.setHandleNoteOff(noteOffHandler);
    usbMIDI.setHandleStart(onStart);
    usbMIDI.setHandleStop(onStop);
    usbMIDI.setHandleClock(onClock);
    usbMIDI.setHandleContinue(onContinue);
    MIDI.setHandleNoteOn(noteOnHandler);
    MIDI.setHandleNoteOff(noteOffHandler);
    MIDI.setHandleStart(onStart);
    MIDI.setHandleStop(onStop);
    MIDI.setHandleClock(onClock);
    MIDI.setHandleContinue(onContinue);

    // Deguging...
    if (debug == true) {
        Serial.begin(57600);
        printMessage("Starting...");
    }
}

// #####################################################################
# pragma Main Loop
// #####################################################################
void loop() {
    // Check for switch position which dictates the mode.
    if (!digitalRead(modePin1) && digitalRead(modePin2)) {
        if (mode != 0) {
            resetOutputs();
            resetLED(ledPin);
            mode = 0;
        }
    } else if (!digitalRead(modePin2) && digitalRead(modePin1)) {
        if (mode != 2) {
            resetLED(ledPin);
            resetOutputs();
            mode = 2;
        }
    } else {
        if (mode != 1) {
            resetLED(ledPin);
            resetOutputs();
            mode = 1;
        }
    }

    //
    if (mode == 0) {
        ledOn(ledPin);
    } else if (mode == 1) {
        blinkRedLED(ledPin, 1000, 100);
    } else {
        ledOff(ledPin);
    }

    // Start Midi
    usbMIDI.read();
    MIDI.read();

    int val = analogRead(potPin);
    potVal = map(val, 1023, 0, 0, 1023);
    if (pot_debug == true) {
        printMessage(String("syncVal_") + syncPin + String(": ") + syncVal +
                     String(" Potval: ") + potVal + String(" mode: ") + mode);
    }

    // Clock timeout...
    if ((clock_timer > 0) && (millis() - clock_timer > 3000)) {
        clock_timer = 0;
        if (externalClock) {
            externalClock = false;
            MIDI.setHandleClock(onClock);
        }
    }

    // Save timer...
    if ((save_timer > 0) && (millis() - save_timer > 4000)) {
        save_timer = 0;
        mode2Selecting = 0;
        savePreset();
    }

    // Select timer...
    if ((select_timer > 0) && (millis() - select_timer > 5000)) {
        select_timer = 0;
        selectingPreset = false;
        mode2Selecting = 0;
    }

    if (selectingPreset) {
        byte blinks = 0;
        if (selectedPreset < 8) {
           blinks = 24;
        } else if (selectedPreset < 16) {
            blinks = 12;
        } else if (selectedPreset < 24) {
            blinks = 5;
        } else {
            blinks = 2;
        }
        blinkLED(gateLedPin[selectedPreset % 8], blinks);
    }

    // Handle Encoder inputs....
    readEncoder();

    // Gate Clock Handler...
    gateClockHandler();
}

// #####################################################################
# pragma Funcktions...
// MARK: Debug Stuff....
// #####################################################################
void printMessage(String message) {
    if (debug == true) {
        Serial.println(message);
    }
}

// MARK: Memory management
// #####################################################################
void setupEEPROM() {
    for (int i = 0; i < total_gates; i++) {
        byte val;
        val = EEPROM.read(encSaveAddress[i]);
        if (isnan(val)) {
            EEPROM.write(encSaveAddress[i], runningConfig.gateSelection[i]);
        }
        loadPreset();
    }
}

// TODO: Update so we can seave a preset out of the 32 possible save locaitons.
// Essentially 8 * selectedPreset since each preset has 8 byte EEPROM locations.
void loadPreset() {
    for (int i = 0; i < total_gates; i++) {
        runningConfig.gateSelection[i] = EEPROM.read(encSaveAddress[i]);
    }
}

void savePreset() {
    for (int i = 0; i < total_gates; i++) {
        EEPROM.write(encSaveAddress[i], runningConfig.gateSelection[i]);
    }
}

// MARK: Encoders
// #####################################################################
void setupEncoder() {
    // Set encoder pins as inputs
    pinMode(encCLK, INPUT_PULLUP);
    pinMode(encDT, INPUT_PULLUP);
    pinMode(encButton, INPUT_PULLUP);

    // Read the initial state of inputCLK
    // Assign to previousStateCLK variable
    prevStateCLK = digitalRead(encCLK);
}

void updateRunningConfig() {
    runningConfig.gateSelection[mode2GateSelection] = mode2IntervalSelection;
}

void readEncoder() {
    // Read the encoder button
    if (digitalRead(encButton) == LOW && encButtonState == OPEN) {
        encButtonState = PRESSED;
        resetGateLeds();

        // start counting when the bbutton is held down.
        if (save_timer == 0) {
            save_timer = millis();
        }

        if (mode == 2) {
            // are we selecting a preset?
            if (selectingPreset) {
                selectingPreset = false;
            } else if (mode2Selecting < 2) {
                mode2Selecting++;
                if (mode2Selecting == 1) {
                    select_timer = millis();
                    ledOn(gateLedPin[mode2GateSelection]);
                } else {
                    select_timer = 0;
                }
            } else {
                mode2Selecting = 0;
            }
        }
        printMessage("encoderButton Pressed. Selecting: " + String(mode2Selecting));
    } else if (digitalRead(encButton) == HIGH && encButtonState == PRESSED) {
        encButtonState = OPEN;
        // reset the counter when the button goes back up.
        save_timer = 0;
    }

    // Read the current state of inputCLK
    curStateCLK = digitalRead(encCLK);

    // If the previous and the current state of the inputCLK are different then
    // a pulse has occured
    if (curStateCLK != prevStateCLK) {
        // -- Encoder direction --
        // If the inputDT state is different than the inputCLK state then
        // the encoder is rotating counterclockwise
        if (digitalRead(encDT) != curStateCLK) {
            encCounter--;
            encDir = "CCW";
        } else {
            encCounter++;
            encDir = "CW";
        }


        // every two encoder pulses check the direction of the last movement.
        if (encCounter % 2 == 0) {
            // preset stuff
            if (encDir == "CW" && mode2Selecting == 0) {
                if (selectingPreset && selectedPreset < (maxPresets - 1)) {
                    selectedPreset++;
                }
                select_timer = millis();
                selectingPreset = true;
            } else if (encDir == "CCW" && mode2Selecting == 0) {
                if (selectingPreset && selectedPreset > 0) {
                    selectedPreset--;
                }
                select_timer = millis();
                selectingPreset = true;
            }

            // on the first button press we select the  gate we will be
            // updating.
            if (encDir == "CW" && mode2Selecting == 1) {
                mode2GateSelection++;
                if (mode2GateSelection == total_gates) {
                    mode2GateSelection = total_gates - 1;
                }
                resetGateLeds();
                ledOn(gateLedPin[mode2GateSelection]);
                select_timer = millis();
            } else if (encDir == "CCW" && mode2Selecting == 1) {
                mode2GateSelection--;
                if (mode2GateSelection == -1) {
                    mode2GateSelection = 0;
                }
                resetGateLeds();
                ledOn(gateLedPin[mode2GateSelection]);
                select_timer = millis();
            }

            // on the second button press we choose the interval for the
            // selected gate.
            if (encDir == "CW" && mode2Selecting == 2) {
                mode2IntervalSelection++;
                if (mode2IntervalSelection == gateIntervalItems) {
                    mode2IntervalSelection = gateIntervalItems - 1;
                }
                updateRunningConfig();
            } else if (encDir == "CCW" && mode2Selecting == 2) {
                mode2IntervalSelection--;
                if (mode2IntervalSelection == -1) {
                    mode2IntervalSelection = 0;
                }
                updateRunningConfig();
            }

            // Here for debugging.
            printMessage("Direction: " + encDir +
                         " -- gateSelection: " + mode2GateSelection +
                         " -- intervalSelection: " + mode2IntervalSelection +
                         " -- presetVal: " + selectedPreset);
        }
    }

    // Update previousStateCLK with the current state
    prevStateCLK = curStateCLK;
}

// MARK: LED Functions
// #####################################################################
void blinkRedLED(byte pin, int onCount, int offCount) {
    // ledCounter = ledCounter + 1;
    if (ledIsOn) {
        if (onCount == ledCounter) {
            ledIsOn = false;
            ledOff(pin);
            resetLED(pin);
        }
    } else {
        if (offCount == ledCounter) {
            ledIsOn = true;
            ledOn(pin);
            resetLED(pin);
        }
    }
    ledCounter = ledCounter + 1;
}

void blinkLED(byte pin, byte blinks) {
    // byte state = 1 - (count / blinks);
    byte state = count % blinks;
    printMessage("STATE: " + String(state));
    if (state == 0) {
        ledOn(pin);
    } else {
        ledOff(pin);
    }
}

void ledOn(byte pin) { digitalWriteFast(pin, HIGH); }

void ledOff(byte pin) { digitalWriteFast(pin, LOW); }

void resetLED(byte pin) {
    if (pin == ledPin) {
        ledCounter = 0;
    }
}

void flashRedLEDOnBeat() {
    byte state = 1 - (count / 12);
    if (state == 0) {
        ledOn(ledPin);
    } else {
        ledOff(ledPin);
    }
}

void resetGateLeds() {
    for (byte i = 0; i < total_gates; i++) {
        ledOff(gateLedPin[i]);
    }
}

// MARK: Gate Functions
// #####################################################################
void gateOn(byte pin) { digitalWriteFast(pin, HIGH); }

void gateOff(byte pin) { digitalWriteFast(pin, LOW); }

void gateClockHandler() {
    int rawValue = analogRead(syncPin);
    int curClockInVal = constrain(rawValue, 0, 10);

    if (curClockInVal != clockInBuffer) {
        if (clock_debug) {
            printMessage("ClockTickValue: " + String(curClockInVal));
        }
        clockInBuffer = curClockInVal;
        // My circuit has jitter 'cos I built the gate in with what I had at the
        // moment. this:
        // https://github.com/little-scale/eurorack/blob/master/USB_MIDI_Host/launchpad_mini.ino#L61
        // looks like a much better approach.
        if (curClockInVal == 10) {
            clock_timer = millis();
            if (externalClock == false) {
                externalClock = true;
                MIDI.setHandleClock(onExternalClock);
            }
            onClock();
        }
    }
}

// MARK: Other Functions
// #####################################################################
bool chance(int threshold, int maximum) { return random(maximum) < threshold; }

void resetCounters() {
    count = 0;
    for (int i = 0; i < total_gates; i++) {
        gateCount[i] = 0;
    }
}

void resetOutputs() {
    for (int i = 0; i < total_gates; i++) {
        digitalWriteFast(i + 4, LOW);
        digitalWriteFast(gateLedPin[i], LOW);
    }
}

// MARK: MIDI Events
// #####################################################################
void onStart() { resetCounters(); }

void onStop() {
    if (mode == 2) {
        ledOff(ledPin);
    }
}

void onContinue() { resetCounters(); }

void onExternalClock() {
    printMessage("Does Nothing, cos external clock is on ;)");
}

void onClock() {
    if (mode == 2) {
        // RED LED
        if (mode2Selecting == 0) {
            flashRedLEDOnBeat();
        } else if (mode2Selecting > 0) {
            blinkRedLED(ledPin, 1, 5);
        }

        for (byte i = 0; i < total_gates; i++) {
            const byte gateDevision =
                gateInterval[runningConfig.gateSelection[i]][0];
            const byte gateSkipBeat =
                gateInterval[runningConfig.gateSelection[i]][1];

            // This part catches events smaller than a quarter note.
            if (count % gateDevision == 0) {
                // This is the logic for skipping quarter notes.
                // if (currentBeat % gateSkipBeat == 0 || gateSkipBeat == 0 ||
                // (gateSkipBeat > 4 && gateCount[i] == gateSkipBeat))
                if (currentBeat % gateSkipBeat == 0 || gateSkipBeat == 0) {
                    if (chance(map(potVal, 0, 1023, 100, 20), 100) ||
                        gateSkipBeat > 0) {
                        // will be executed potVal% of time
                        if ((mode2Selecting == 0 && !selectingPreset) ||
                            (mode2Selecting == 2 && mode2GateSelection == i)) {
                            // If we are selecting a new gateInterval don't show
                            // led feedback.
                            ledOn(gateLedPin[i]);
                        }
                        // TODO: TRY THIS!!!!
                        // using namespace midi;
                        // MIDI.sendRealTime(Clock);

                        gateOn(gatePin[i]);
                    }
                }
            } else {
                // If we are selecting a new gateInterval don't show led
                // feedback.
                if (mode2Selecting == 0 ||
                    (mode2Selecting == 2 && mode2GateSelection == i)) {
                    ledOff(gateLedPin[i]);
                }
                gateOff(gatePin[i]);
            }

            if (gateCount[i] > gateSkipBeat) {
                gateCount[i] = 0;
            }
            gateCount[i]++;
        }

        // clock timer count and reset.
        count++;
        if (count > 23) {
            count = 0;
            currentBeat++;
        }

        // beat timer.
        if (currentBeat > 3) {
            currentBeat = 0;
            currentBar++;
        }

        if (currentBar > 1) {
            currentBar = 0;
        }
    }
}

void noteOnHandler(byte channel, byte note, byte velocity) {
    if (mode == 0) {
        noteOnMode0(channel, note, velocity);
    } else if (mode == 1) {
        noteOnMode1(channel, note, velocity);
    }
    // Midi Thru
    MIDI.sendNoteOn(note, velocity, channel);
}

void noteOffHandler(byte channel, byte note, byte velocity) {
    if (mode == 0) {
        noteOffMode0(channel, note, velocity);
    } else if (mode == 1) {
        noteOffMode1(channel, note, velocity);
    }
    // Midi Thru
    MIDI.sendNoteOff(note, velocity, channel);
}

// MARK: MODE 0
// #####################################################################
void noteOnMode0(byte channel, byte note, byte velocity) {
    // digitalWriteFast(note % 24 , HIGH);
    if (channel == mode0Channel) {
        gateOn((note % total_gates) + 4);
        ledOn(gateLedPin[(note % total_gates)]);
    }
    printMessage(String("on:") + note + String(" pin:") +
                 ((note % total_gates) + 4));
}

void noteOffMode0(byte channel, byte note, byte velocity) {
    // digitalWriteFast(note % 24 , LOW);
    if (channel == mode0Channel) {
        gateOff((note % total_gates) + 4);
        ledOff(gateLedPin[(note % total_gates)]);
    }
    printMessage(String("off:") + note + String(" pin:") +
                 ((note % total_gates) + 4));
}

// MARK: MODE 1
// #####################################################################
void noteOnMode1(byte channel, byte note, byte velocity) {
    for (int i = 0; i < total_gates; i++) {
        if (channel == i + total_gates + 1) {
            gateOn(gatePin[i]);
            ledOn(gateLedPin[i]);
            printMessage(String("on:") + note + String(" chan:") + channel +
                         String(" pin:") + (i + 4));
        }
    }
}

void noteOffMode1(byte channel, byte note, byte velocity) {
    for (int i = 0; i < total_gates; i++) {
        if (channel == i + total_gates + 1) {
            gateOff(gatePin[i]);
            ledOff(gateLedPin[i]);
            printMessage(String("off:") + note + String(" chan:") + channel +
                         String(" pin:") + (i + 4));
        }
    }
}