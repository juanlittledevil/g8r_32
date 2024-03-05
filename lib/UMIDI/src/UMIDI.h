#ifndef UMIDI_h
#define UMIDI_h

#include <Arduino.h>

class UMIDI {
  public:
    UMIDI();
    void begin();
    void end();
    bool available();
    void receiveMIDI(MIDI_message &msg);
    void sendNoteOn(uint8_t channel, uint8_t note, uint8_t velocity);
    void sendNoteOff(uint8_t channel, uint8_t note, uint8_t velocity);
    void sendControlChange(uint8_t channel, uint8_t controller, uint8_t value);
    void sendProgramChange(uint8_t channel, uint8_t program);

  private:
    Stream *serialPort;
};

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

#endif
