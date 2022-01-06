#pragma once

// Game Aliases: Heroes Of The Storm (HOTS)
// Defines standad keymappings inside HOTS, Don't change them in game.

// Basic
#define H_TAL_1 KC_1                // Talent 1
#define H_TAL_2 KC_2                // Talent 2
#define H_TAL_3 KC_3                // Talent 3
#define H_ATTAC KC_A                // Attack
#define H_ABI_1 KC_Q                // Hero Ability 1
#define H_ABI_2 KC_W                // Hero Ability 2
#define H_ABI_3 KC_E                // Hero Ability 3
#define H_HEROI KC_R                // Heroic Ability
#define H_TRAIT KC_D                // Hero Trait (Leave dragon/)
#define H_MOUNT KC_Z                // Mount and Dismount
#define H_HEART KC_B                // Heartstone (Recall)
#define H_CANCL KC_ESC              // Cancel
#define H_HOLD  KC_H                // Hold (I do not use)
// #define H_FORCM                  // Force move (NOT BOUND by default)
#define H_MECHA KC_F                // Map Mechanic Ability

// Self cast: Talent
#define H_SCT_1 LALT(H_TAL_1)       // Self cast talent 1 (I do not use)
#define H_SCT_2 LALT(H_TAL_2)       // Self cast talent 2 (I do not use)
#define H_SCT_3 LALT(H_TAL_3)       // Self cast talent 3 (I do not use)
// Self cast: Ability (Good for healers to self heal fast and for Alarac Telekinesis Push self)
#define H_SCA_1 LALT(H_ABI_1)       // Self cast Hero Ability 1
#define H_SCA_2 LALT(H_ABI_2)       // Self cast Hero Ability 2
#define H_SCA_3 LALT(H_ABI_3)       // Self cast Hero Ability 3
// Self cast: Heroic (Good for healers such as Kharazim, Rehgar self heal)
#define H_SCHER LALT(H_HEROI)

// Selecting talent quick when reached a new level
#define H_QTA_1 LCTL(KC_1)          // Select talent 1
#define H_QTA_2 LCTL(KC_2)          // Select talent 2
#define H_QTA_3 LCTL(KC_3)          // Select talent 3
#define H_QTA_4 LCTL(KC_4)          // Select talent 4
#define H_QTA_5 LCTL(KC_5)          // Select talent 5

// Non essenntial
#define H_FPS_T LCTL(LALT(KC_F))    // Display FPS
#define H_SPOTL KC_SPACE            // Spotlight (Center and highlight your hero)
#define H_LEADB KC_TAB              // Leader board

// Dance
#define H_TAUNT KC_J
#define H_DANCE KC_Y
#define H_SPRAY KC_T