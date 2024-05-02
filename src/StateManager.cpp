/**
 * @file StateManager.cpp
 * @brief "This class manages reading and writing state to the EEPROM memory."
 */

#include "StateManager.h"
#include "Debug.h"

/** Debug macro */
#define DEBUG_PRINT(message) Debug::print(__FILE__, __LINE__, __func__, String(message))

/**
 * @brief
 * 
 * @param state - The AppState object to be saved to the EEPROM
 */
StateManager::StateManager() {
    ///< Empty constructor - we will initialize the AppState object in the setup() function this way we can print debug messages.
}

/**
 * @brief Initializes the EEPROM memory with the default AppState values if the EEPROM has not been initialized.
 */
void StateManager::initializeEEPROM() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Checking EEPROM");
    }

    readAppState(); ///< Read the current state from the EEPROM

    if (isnan(state.mode)) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("State is NaN, initializing EEPROM");
        }
        // Initialize the EEPROM with the default state
        state.mode = state.defaults.mode; ///< Set the mode to the default mode
        // Other default values can be set here

        saveAppState(); ///< Save the default state to the EEPROM

        if (Debug::isEnabled) {
            DEBUG_PRINT("Finished initializing EEPROM");
        }
    } else {
        if (Debug::isEnabled) {
            DEBUG_PRINT("EEPROM Already Initialized");
        }
    }
}

/**
 * @brief Saves the current AppState object 'state' to the EEPROM memory.
 */
void StateManager::saveAppState() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Saving to EEPROM");
    }

    // Save the current state to EEPROM
    EEPROM.put(0, state); ///< By using put we don't have to write each byte individually
}

/**
 * @brief Reads the AppState object 'state' from the EEPROM memory.
 */
void StateManager::readAppState() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Reading from EEPROM");
    }

    // Read the current state from EEPROM
    EEPROM.get(0, state); ///< By using get we don't have to read each byte individually
}