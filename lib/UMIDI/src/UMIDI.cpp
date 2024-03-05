#include "UMIDI.h"

UMIDI::UMIDI() {
}

void UMIDI::begin(Stream &serial) {
  serialPort = &serial;
}

void UMIDI::end() {
  serialPort = nullptr;
}

bool UMIDI::available() {
  if (serialPort) {
    return serialPort->available();
  }
  return false;
}

void UMIDI::receiveMIDI(MIDI_message &msg) {
  static uint8_t header = 0;
  static uint8_t data1 = 0b10000000;
  if (available()) {
    uint8_t newByte = serialPort->read();
    if (newByte & 0b10000000) {   // Header byte received
      header = newByte;
    } else if (header & 0b10000000) {
      if (data1 == 0b10000000) {  // First data byte received
        data1 = newByte;
      } else {
        msg.status = header;          // Second data byte received
        msg.data1 = data1;
        msg.data2 = newByte;
        data1 = 0b10000000;
      }
    }
  }
}

void UMIDI::sendNoteOn(uint8_t channel, uint8_t note, uint8_t velocity) {
  if (serialPort) {
    serialPort->write(0x90 | (channel & 0x0F)); // Note on command with channel
    serialPort->write(note & 0x7F); // Note number
    serialPort->write(velocity & 0x7F); // Velocity
  }
}

void UMIDI::sendNoteOff(uint8_t channel, uint8_t note, uint8_t velocity) {
  if (serialPort) {
    serialPort->write(0x80 | (channel & 0x0F)); // Note off command with channel
    serialPort->write(note & 0x7F); // Note number
    serialPort->write(velocity & 0x7F); // Velocity
  }
}

void UMIDI::sendControlChange(uint8_t channel, uint8_t controller, uint8_t value) {
  if (serialPort) {
    serialPort->write(0xB0 | (channel & 0x0F)); // Control change command with channel
    serialPort->write(controller & 0x7F); // Controller number
    serialPort->write(value & 0x7F); // Value
  }
}

void UMIDI::sendProgramChange(uint8_t channel, uint8_t program) {
  if (serialPort) {
    serialPort->write(0xC0 | (channel & 0x0F)); // Program change command with channel
    serialPort->write(program & 0x7F); // Program number
  }
}
