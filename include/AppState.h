#ifndef APP_STATE_H
#define APP_STATE_H

// NOTE: if you are adding values here make sure you update the initializeEEPROM function in ModeSelector.cpp
// That is where the default values are set for the AppState on first run.
struct AppDefaults {
    int mode = 0;
    // Add other default values here
};

struct AppState {
    int mode;
    AppDefaults defaults;
};
#endif // APP_STATE_H