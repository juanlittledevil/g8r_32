#include "UMIDI.h"

UMIDI::UMIDI(uint8_t rxPin, uint8_t txPin) : serialPort(rxPin, txPin) {
}

void UMIDI::begin() {
  serialPort.begin(31250); // MIDI baud rate
}

void UMIDI::end() {
  serialPort.end();
}

bool UMIDI::available() {
  return serialPort.available();
}

void UMIDI::read() {
  if (available()) {
    MIDI_message msg;
    receiveMIDI(msg);
    handleMIDIMessage(msg);
  }
}

void UMIDI::setHandleNoteOn(void (*function)(byte, byte, byte)) {
  noteOnCallback = function;
}

void UMIDI::setHandleNoteOff(void (*function)(byte, byte, byte)) {
  noteOffCallback = function;
}

void UMIDI::setHandleControlChange(void (*function)(byte, byte, byte)) {
  controlChangeCallback = function;
}

void UMIDI::setHandleProgramChange(void (*function)(byte, byte)) {
  programChangeCallback = function;
}

void UMIDI::setHandleClock(void (*function)()) {
  clockCallback = function;
}

void UMIDI::setHandleStart(void (*function)()) {
  startCallback = function;
}

void UMIDI::setHandleStop(void (*function)()) {
  stopCallback = function;
}

void UMIDI::setHandleContinue(void (*function)()) {
  continueCallback = function;
}

void UMIDI::handleMIDIMessage(MIDI_message msg) {
  switch(msg.status & 0xF0) {
    case 0x90: // Note On
      if (noteOnCallback) noteOnCallback(msg.channel, msg.data1, msg.data2);
      break;
    case 0x80: // Note Off
      if (noteOffCallback) noteOffCallback(msg.channel, msg.data1, msg.data2);
      break;
    case 0xB0: // Control Change
      if (controlChangeCallback) controlChangeCallback(msg.channel, msg.data1, msg.data2);
      break;
    case 0xC0: // Program Change
      if (programChangeCallback) programChangeCallback(msg.channel, msg.data1);
      break;
    case 0xF8: // MIDI Clock
      if (clockCallback) clockCallback();
      break;
    case 0xFA: // Start
      if (startCallback) startCallback();
      break;
    case 0xFC: // Stop
      if (stopCallback) stopCallback();
      break;
    case 0xFB: // Continue
      if (continueCallback) continueCallback();
      break;
    default:
      // Handle other message types
      break;
  }
}

void UMIDI::receiveMIDI(MIDI_message &msg) {
  if (available()) {
    uint8_t newByte = serialPort.read();
    static uint8_t header = 0;
    static uint8_t data1 = 0;
    if (newByte & 0x80) {
      header = newByte;
    } else if (header) {
      if (!data1) {
        data1 = newByte;
      } else {
        msg.status = header;
        msg.data1 = data1;
        msg.data2 = newByte;
        data1 = 0;
      }
    }
  }
}

void UMIDI::sendNoteOn(uint8_t channel, uint8_t note, uint8_t velocity) {
  serialPort.write(0x90 | (channel & 0x0F));
  serialPort.write(note & 0x7F);
  serialPort.write(velocity & 0x7F);
}

void UMIDI::sendNoteOff(uint8_t channel, uint8_t note, uint8_t velocity) {
  serialPort.write(0x80 | (channel & 0x0F));
  serialPort.write(note & 0x7F);
  serialPort.write(velocity & 0x7F);
}

void UMIDI::sendControlChange(uint8_t channel, uint8_t controller, uint8_t value) {
  serialPort.write(0xB0 | (channel & 0x0F));
  serialPort.write(controller & 0x7F);
  serialPort.write(value & 0x7F);
}

void UMIDI::sendProgramChange(uint8_t channel, uint8_t program) {
  serialPort.write(0xC0 | (channel & 0x0F));
  serialPort.write(program & 0x7F);
}
