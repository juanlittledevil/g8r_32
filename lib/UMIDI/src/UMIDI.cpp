#include "UMIDI.h"
#include "Debug.h"
// Uncomment the line below to enable debugging. Comment it out to disable debugging
// each file has its own DEBUG flag for more granular control.
#define DEBUG 1 // 0 for no debug, 1 for debug
#ifdef DEBUG
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

// Include the Arduino Serial library
#include <Arduino.h>
#endif

// Constructor with serial port initialization
UMIDI::UMIDI(uint8_t rxPin, uint8_t txPin) : serialPort(rxPin, txPin) {
}

// Begin MIDI communication
void UMIDI::begin() {
  serialPort.begin(31250); // MIDI baud rate
}

// End MIDI communication
void UMIDI::end() {
  serialPort.end();
}

// Check if MIDI data is available
bool UMIDI::available() {
  return serialPort.available();
}

// Read MIDI data and handle MIDI messages
void UMIDI::read() {
  if (available()) {
    MIDI_message msg;
    receiveMIDI(msg);
    handleMIDIMessage(msg);
  }
}

// Set callback function for handling Note On messages
void UMIDI::setHandleNoteOn(void (*function)(byte, byte, byte)) {
  noteOnCallback = function;
}

// Set callback function for handling Note Off messages
void UMIDI::setHandleNoteOff(void (*function)(byte, byte, byte)) {
  noteOffCallback = function;
}

// Set callback function for handling Control Change messages
void UMIDI::setHandleControlChange(void (*function)(byte, byte, byte)) {
  controlChangeCallback = function;
}

// Set callback function for handling Program Change messages
void UMIDI::setHandleProgramChange(void (*function)(byte, byte)) {
  programChangeCallback = function;
}

// Set callback function for handling Clock messages
void UMIDI::setHandleClock(void (*function)()) {
  clockCallback = function;
}

// Set callback function for handling Start messages
void UMIDI::setHandleStart(void (*function)()) {
  startCallback = function;
}

// Set callback function for handling Stop messages
void UMIDI::setHandleStop(void (*function)()) {
  stopCallback = function;
}

// Set callback function for handling Continue messages
void UMIDI::setHandleContinue(void (*function)()) {
  continueCallback = function;
}

// Handle incoming MIDI messages
void UMIDI::handleMIDIMessage(MIDI_message &msg) {
  uint8_t messageType = msg.status & 0xF0;
  switch(messageType) {  // Use messageType instead of msg.status
    case NOTE_ON:
      if (noteOnCallback) noteOnCallback(msg.channel, msg.data1, msg.data2);
      break;
    case NOTE_OFF:
      if (noteOffCallback) noteOffCallback(msg.channel, msg.data1, msg.data2);
      break;
    case CONTROL_CHANGE:
      if (controlChangeCallback) controlChangeCallback(msg.channel, msg.data1, msg.data2);
      break;
    case PROGRAM_CHANGE:
      if (programChangeCallback) programChangeCallback(msg.channel, msg.data1);
      break;
    case MIDI_CLOCK:
      if (clockCallback) clockCallback();
      break;
    case MIDI_PLAY:
      if (startCallback) startCallback();
      break;
    case MIDI_STOP:
      if (stopCallback) stopCallback();
      break;
    case MIDI_CONTINUE:
      if (continueCallback) continueCallback();
      break;
    default:
      // Handle other message types
      break;
  }
}

// Receive and parse incoming MIDI messages
void UMIDI::receiveMIDI(MIDI_message &msg) {
  enum State {
    WAITING_FOR_STATUS,
    WAITING_FOR_DATA1,
    WAITING_FOR_DATA2
  };

  static State state = WAITING_FOR_STATUS;
  static uint8_t header = 0;
  static uint8_t data1 = 0;

  while (available()) {
    uint8_t newByte = serialPort.read();

    if (newByte >= 0x80 && newByte < 0xF0) {  // Status byte (not a system real-time message)
      header = newByte;
      state = WAITING_FOR_DATA1;
    } else if (newByte >= 0xF8) {  // System real-time message
      msg.status = newByte;
      // Handle system real-time message here
      switch (newByte) {
        case MIDI_CLOCK:
          if (clockCallback) clockCallback();
          break;
        case MIDI_PLAY:
          if (startCallback) startCallback();
          break;
        case MIDI_STOP:
          if (stopCallback) stopCallback();
          break;
        case MIDI_CONTINUE:
          if (continueCallback) continueCallback();
          break;
      }
    } else {  // Data byte
      switch (state) {
        case WAITING_FOR_DATA1:
          data1 = newByte;
          state = WAITING_FOR_DATA2;
          break;
        case WAITING_FOR_DATA2:
          msg.status = header;
          msg.data1 = data1;
          msg.data2 = newByte;
          msg.channel = header & 0x0F;  // Set channel
          msg.message_type = (header >> 4) & 0x0F;  // Set message type
          state = WAITING_FOR_STATUS;
          break;
        default:
          break;
      }
    }
  }
}

// Send a Note On message
void UMIDI::sendNoteOn(uint8_t channel, uint8_t note, uint8_t velocity) {
  serialPort.write(0x90 | (channel & 0x0F));
  serialPort.write(note & 0x7F);
  serialPort.write(velocity & 0x7F);
}

// Send a Note Off message
void UMIDI::sendNoteOff(uint8_t channel, uint8_t note, uint8_t velocity) {
  serialPort.write(0x80 | (channel & 0x0F));
  serialPort.write(note & 0x7F);
  serialPort.write(velocity & 0x7F);
}

// Send a Control Change message
void UMIDI::sendControlChange(uint8_t channel, uint8_t controller, uint8_t value) {
  serialPort.write(0xB0 | (channel & 0x0F));
  serialPort.write(controller & 0x7F);
  serialPort.write(value & 0x7F);
}

// Send a Program Change message
void UMIDI::sendProgramChange(uint8_t channel, uint8_t program) {
  serialPort.write(0xC0 | (channel & 0x0F));
  serialPort.write(program & 0x7F);
}