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
    /// Empty constructor - we will initialize the AppState object in the setup() function this way we can print debug messages.
}

/**
 * @brief Initializes the EEPROM memory with the default AppState values if the EEPROM has not been initialized.
 */
void StateManager::initializeEEPROM() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Checking EEPROM");
    }

    readAppState(); /// Read the current state from the EEPROM

    if (isnan(state.mode) || Debug::resetEEPROM) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("State is NaN, initializing EEPROM");
        }
        /// Initialize the EEPROM with the default state
        state.mode = 0; /// Set the mode to 0 by default.
        /// Initialize mode0 gate divisions
        for (int i = 0; i < 8; i++) {
            state.mode0.gateDivisions[i] = GateDivision{i, internalPPQN};
        }
        /// Initialize mode1 MIDI channel
        state.mode1.MIDIChannel = 9; /// Default MIDI channel is 9

        saveAppState(); /// Save the default state to the EEPROM

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
    EEPROM.put(0, state); /// By using put we don't have to write each byte individually
}

/**
 * @brief Reads the AppState object 'state' from the EEPROM memory.
 */
void StateManager::readAppState() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Reading from EEPROM");
    }

    // Read the current state from EEPROM
    EEPROM.get(0, state); /// By using get we don't have to read each byte individually

    if (Debug::isEnabled) {
        DEBUG_PRINT("Updated state from EEPROM");
    }   
}

/**
 * @brief Returns the current mode stored in the AppState object 'state'.
 * 
 * @return int - The current mode
 */
int StateManager::getMode() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Getting mode: " + String(state.mode));
    }
    return state.mode;
}

/**
 * @brief Sets the current mode in the AppState object 'state'.
 * 
 * @param newMode - The new mode to set
 */
void StateManager::setMode(int newMode) {
    state.mode = newMode;
    saveAppState(); /// Save the new mode to the EEPROM
}

/**
 * @brief Sets the gate division for a specific gate in the AppState object 'state'.
 * 
 * @param gate - The gate to set the division for
 * @param division - The division to set
 */
void StateManager::setGateDivision(int gate, int division) {
    if (gate >= 0 && gate < state.mode0.gateDivisions.size()) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Setting gate division for gate " + String(gate) + " to " + String(division));
        }
        state.mode0.gateDivisions[gate].division = division;
        if (Debug::isEnabled) {
            DEBUG_PRINT("Gate division for gate " + String(gate) + " is " + String(state.mode0.gateDivisions[gate].division));
        }
    } else {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Gate index out of bounds: " + String(gate));
        }
    }
}

/**
 * @brief Returns the gate division for a specific gate from the AppState object 'state'.
 * 
 * @param gate - The gate to get the division for
 * @return int - The division for the gate
 */
int StateManager::getGateDivision(int gate) {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Getting gate division for gate " + String(gate));
    }
    return state.mode0.gateDivisions[gate].division;
    if (Debug::isEnabled) {
        DEBUG_PRINT("Gate division for gate " + String(gate) + " is " + String(state.mode0.gateDivisions[gate].division));
    }
}

/**
 * @brief Sets the MIDI channel for Mode1 in the AppState object 'state'.
 * 
 * @param channel - The MIDI channel to set
 */
void StateManager::setMode1MIDIChannel(int channel) {
    if (channel >= 0 && channel < 16) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Setting MIDI channel for Mode1 to " + String(channel));
        }
        state.mode1.MIDIChannel = channel;
        if (Debug::isEnabled) {
            DEBUG_PRINT("MIDI channel for Mode1 is " + String(state.mode1.MIDIChannel));
        }
    } else {
        if (Debug::isEnabled) {
            DEBUG_PRINT("MIDI channel out of bounds: " + String(channel));
        }
    }
}

/**
 * @brief Returns the MIDI channel for Mode1 from the AppState object 'state'.
 * 
 * @return int - The MIDI channel for Mode1
 */
int StateManager::getMode1MIDIChannel() {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Getting MIDI channel for Mode1");
    }
    return state.mode1.MIDIChannel;
    if (Debug::isEnabled) {
        DEBUG_PRINT("MIDI channel for Mode1 is " + String(state.mode1.MIDIChannel));
    }
}