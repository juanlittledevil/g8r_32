#ifndef UMIDI_h
#define UMIDI_h

#include <Arduino.h>

struct MIDI_message {
  union {
    struct {
      uint8_t channel : 4;
      uint8_t message_type : 4;
    };
    uint8_t status;
  };
  uint8_t data1;
  uint8_t data2;
};

const uint8_t MIDI_CLOCK = 0xF8;
const uint8_t MIDI_PLAY = 0xFA;
const uint8_t MIDI_CONTINUE = 0xFB;
const uint8_t MIDI_STOP = 0xFC;
const uint8_t NOTE_ON = 0x90;
const uint8_t NOTE_OFF = 0x80;
const uint8_t CONTROL_CHANGE = 0xB0;
const uint8_t PROGRAM_CHANGE = 0xC0;

class UMIDI {
  public:
    UMIDI();
    UMIDI(uint8_t rxPin, uint8_t txPin);
    void begin();
    void end();
    bool available();
    void read();
    void setHandleNoteOn(void (*function)(byte, byte, byte));
    void setHandleNoteOff(void (*function)(byte, byte, byte));
    void setHandleControlChange(void (*function)(byte, byte, byte));
    void setHandleProgramChange(void (*function)(byte, byte));
    void setHandleClock(void (*function)());
    void setHandleStart(void (*function)());
    void setHandleStop(void (*function)());
    void setHandleContinue(void (*function)());
    void handleMIDIMessage(MIDI_message msg);
    void receiveMIDI(MIDI_message &msg);
    void sendNoteOn(uint8_t channel, uint8_t note, uint8_t velocity);
    void sendNoteOff(uint8_t channel, uint8_t note, uint8_t velocity);
    void sendControlChange(uint8_t channel, uint8_t controller, uint8_t value);
    void sendProgramChange(uint8_t channel, uint8_t program);

  private:
    // Stream *serialPort;
    HardwareSerial serialPort;
    void (*noteOnCallback)(byte, byte, byte) = nullptr;
    void (*noteOffCallback)(byte, byte, byte) = nullptr;
    void (*controlChangeCallback)(byte, byte, byte) = nullptr;
    void (*programChangeCallback)(byte, byte) = nullptr;
    void (*clockCallback)() = nullptr;
    void (*startCallback)() = nullptr;
    void (*stopCallback)() = nullptr;
    void (*continueCallback)() = nullptr;

};

#endif
