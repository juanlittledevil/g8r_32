/**
 * @file Debug.h
 */
#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

/**
 * @brief Helper class for debugging. This makes it easier to enable/disable debug messages.
 * It is used in conjunction with the DEBUG_PRINT macro. Which adds the file, line, and function name to the debug message
 * so that the developer can easily find where the message is coming from.
 */
class Debug {
public:
    static void print(const char* file, int line, const char* func, const String& message);
    static bool isEnabled;
    static bool resetEEPROM;
};

#endif 