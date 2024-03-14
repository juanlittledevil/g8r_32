#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

class Debug {
public:
    static void print(const char* file, int line, const char* func, const String& message);
};

#endif 