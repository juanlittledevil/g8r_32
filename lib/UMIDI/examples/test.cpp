#include <Arduino.h>

const uint8_t CONTROL_CHANGE = 0xB;
const uint8_t NOTE_OFF = 0x8;
const uint8_t NOTE_ON = 0x9;
const uint8_t MIDI_CLOCK = 0xF8;
const uint8_t PROGRAM_CHANGE = 0xC;

HardwareSerial Serial2(PA3,PA2);

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

bool receiveMIDI(Stream &s, MIDI_message &m) {
  static uint8_t header = 0;
  static uint8_t data1 = 0b10000000;
  if (!s.available())
    return false;
  uint8_t newByte = s.read();
  if (newByte == MIDI_CLOCK || newByte == PROGRAM_CHANGE) {  // MIDI clock or program change message
    m.status = newByte;
    return true;
  }
  if (newByte & 0b10000000) {   // Header byte received
    header = newByte;
    return false;
  }
  if (header & 0b10000000) {
    if (data1 == 0b10000000) {  // First data byte received
      data1 = newByte;
      return false;
    }
    m.status = header;          // Second data byte received
    m.data1 = data1;
    m.data2 = newByte;
    data1 = 0b10000000;
    return true;
  }
  return false;                 // Data byte without header received
}

void setup() {
  Serial.begin(9600);  // Serial monitor
  Serial2.begin(31250);  // MIDI communication
  delay(1000);
  Serial.println("STARTING");
}

void loop() {
  MIDI_message midimsg;
  if (receiveMIDI(Serial2, midimsg)) {
    if (midimsg.message_type == CONTROL_CHANGE) {
      Serial.print("Received MIDI Control Change message on channel ");
      Serial.print(midimsg.channel + 1);
      Serial.print(", controller #");
      Serial.print(midimsg.data1);
      Serial.print(", value = ");
      Serial.println(midimsg.data2);
    } else if (midimsg.message_type == NOTE_ON) {
      Serial.print("Received MIDI Note On message on channel ");
      Serial.print(midimsg.channel + 1);
      Serial.print(", note #");
      Serial.print(midimsg.data1);
      Serial.print(", velocity = ");
      Serial.println(midimsg.data2);
    } else if (midimsg.message_type == NOTE_OFF) {
      Serial.print("Received MIDI Note Off message on channel ");
      Serial.print(midimsg.channel + 1);
      Serial.print(", note #");
      Serial.print(midimsg.data1);
      Serial.print(", velocity = ");
      Serial.println(midimsg.data2);
    } else if (midimsg.status == MIDI_CLOCK) {
      Serial.println("Received MIDI Clock message");
    } else if (midimsg.status == PROGRAM_CHANGE) {
      Serial.print("Received MIDI Program Change message on channel ");
      Serial.print(midimsg.channel + 1);
      Serial.print(", program number = ");
      Serial.println(midimsg.data1);
    } else {
      Serial.println("Received unknown MIDI message");
    }
  }
}