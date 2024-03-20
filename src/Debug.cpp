#include "Debug.h"
#include <Arduino.h>

void Debug::print(const char* file, int line, const char* func, const String& message) {
        if (isEnabled) {
            Serial.print(file);
            Serial.print(":");
            Serial.print(line);
            Serial.print(" ");
            Serial.print(func);
            Serial.print(" - ");
            Serial.println(message);
        }
}

bool Debug::isEnabled = false;