#include "Debug.h"
#include <Arduino.h>

void Debug::print(const char* file, int line, const char* func, const String& message) {
    Serial.print("File: ");
    Serial.print(file);
    Serial.print(", Line: ");
    Serial.print(line);
    Serial.print(", Function: ");
    Serial.print(func);
    Serial.print(", Message: ");
    Serial.println(message);
}