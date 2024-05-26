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
        state.mode = 0; /// Set the mode to 0 by default. This is the first item int he vector.

        /// Initialize Mode Divisions
        for (int i = 0; i < 8; i++) {
            state.modeDivisions.gateDivisions[i] = GateDivision{i, internalPPQN};
        }
        /// Initialize mode1 MIDI channel
        for (int i = 0; i < 8; i++) {
            state.modeMidiLearn.gateChannelNotes[i] = GateChannelNote{i, 0, 0};
        }

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
    if (gate >= 0 && gate < state.modeDivisions.gateDivisions.size()) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Setting gate division for gate " + String(gate) + " to " + String(division));
        }
        state.modeDivisions.gateDivisions[gate].division = division;
        if (Debug::isEnabled) {
            DEBUG_PRINT("Gate division for gate " + String(gate) + " is " + String(state.modeDivisions.gateDivisions[gate].division));
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
    return state.modeDivisions.gateDivisions[gate].division;
    if (Debug::isEnabled) {
        DEBUG_PRINT("Gate division for gate " + String(gate) + " is " + String(state.modeDivisions.gateDivisions[gate].division));
    }
}

/**
 * @brief Sets the MIDI learn note and channel for a specific gate in the AppState object 'state'.
 * 
 * @param gate - The gate to set the note and channel for
 * @param note - The note to set
 * @param channel - The channel to set
 */
void StateManager::setMidiLearnNote(int gate, int note, int channel) {
    if (gate >= 0 && gate < state.modeMidiLearn.gateChannelNotes.size()) {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Setting MIDI learn note for gate " + String(gate) + " to " + String(note) + " on channel " + String(channel));
        }
        state.modeMidiLearn.gateChannelNotes[gate].note = note;
        state.modeMidiLearn.gateChannelNotes[gate].channel = channel;
        if (Debug::isEnabled) {
            DEBUG_PRINT("MIDI learn note for gate " + String(gate) + " is " + String(state.modeMidiLearn.gateChannelNotes[gate].note) + " on channel " + String(state.modeMidiLearn.gateChannelNotes[gate].channel));
        }
    } else {
        if (Debug::isEnabled) {
            DEBUG_PRINT("Gate index out of bounds: " + String(gate));
        }
    }
}

/**
 * @brief Returns the MIDI learn note and channel for a specific gate from the AppState object 'state'.
 * 
 * @param gate - The gate to get the note and channel for
 * @return std::pair<int, int> - The note and channel for the gate
 */
std::pair<int, int> StateManager::getMidiLearnNote(int gate) {
    if (Debug::isEnabled) {
        DEBUG_PRINT("Getting MIDI learn note for gate " + String(gate));
    }
    int note = state.modeMidiLearn.gateChannelNotes[gate].note;
    int channel = state.modeMidiLearn.gateChannelNotes[gate].channel;
    if (Debug::isEnabled) {
        DEBUG_PRINT("MIDI learn note for gate " + String(gate) + " is " + String(note) + " on channel " + String(channel));
    }
    return std::make_pair(note, channel);
}