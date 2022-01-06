#pragma once

// Game Aliases: Company Of Heroes 3 (COH3)
// Defines standad keymappings inside COH3, Don't change them in game.

// Grid
#define C3_GQ KC_Q                   // Grid Q
#define C3_GW KC_W                   // Grid W
#define C3_GE KC_E                   // Grid E
#define C3_GR KC_R                   // Grid R, Infantery retreat, Vehicle reverse

#define C3_GA KC_A                   // Grid A
#define C3_GS KC_S                   // Grid S
#define C3_GD KC_D                   // Grid D
#define C3_GF KC_F                   // Grid F, Infantery exit building

#define C3_GZ KC_Z                   // Grid Z
#define C3_GX KC_X                   // Grid X
#define C3_GC KC_C                   // Grid C
#define C3_GV KC_V                   // Grid V

#define C3_GT KC_T                   // Grid T
#define C3_GG KC_G                   // Grid G
#define C3_GB KC_B                   // Grid B
#define C3_GY KC_Y                   // Grid Y

// Chat
#define C3_CHT KC_ENT               // Chat [USING]
#define C3_CHTA LSFT(KC_ENT)        // Chat all

// Camera Zooming
#define C3_CDF KC_BSPC              // Default Camera
#define C3_CZI KC_EQUAL             // Zoom In,	=
#define C3_CZO KC_MINS              // Zoom Out, –

// Camera Paning
#define C3_CPL LALT(KC_A)           // Pan Left, ALT + A    [USING]
#define C3_CPU LALT(KC_W)           // Pan Up,	ALT + W     [USING]
#define C3_CPR LALT(KC_D)           // Pan Right, ALT + D   [USING]
#define C3_CPD LALT(KC_S)           // Pan Down, ALT + S    [USING]
#define C3_CPA KC_MS_BTN3           // Pan,	Mouse 3
#define C3_COB KC_LALT              // Orbit,   ALT
#define C3_FHM KC_HOME              // Focus Home

// Select
#define C3_SEL KC_MS_BTN1           // Select
#define C3_SALL LCTRL(KC_A)         // Select all, twice select all on screen


// SELECT Production Building
#define C3_PB1 KC_F1                // Select Production Building (1), F1, twice focus building [USING]
#define C3_PB2 KC_F2                // Select Production Building (2), F2, twice focus building [USING]
#define C3_PB3 KC_F3                // Select Production Building (3), F3, twice focus building [USING]
#define C3_PB4 KC_F4                // Select Production Building (4), F4, twice focus building [USING]
#define C3_PB5 KC_F5                // Select Production Building (5), F5, twice focus building [USING]

#define C3_BG1 LCTL(KC_F1)          // Battlegroup (1), Ctrl + F1
#define C3_BG2 LCTL(KC_F2)          // Battlegroup (2), Ctrl + F2
#define C3_BG3 LCTL(KC_F3)          // Battlegroup (3), Ctrl + F3
#define C3_BG4 LCTL(KC_F4)          // Battlegroup (4), Ctrl + F4
#define C3_BG5 LCTL(KC_F5)          // Battlegroup (5), Ctrl + F5
#define C3_BG6 LCTL(KC_F6)          // Battlegroup (6), Ctrl + F6

#define C3_AA1 LCTL(KC_F7)          // Army Ability (1), Ctrl + F7
#define C3_AA2 LCTL(KC_F8)          // Army Ability (2), Ctrl + F8
#define C3_AA3 LCTL(KC_F9)          // Army Ability (3), Ctrl + F9
#define C3_AA4 LCTL(KC_F10)         // Army Ability (4), Ctrl + F10
#define C3_AA5 LCTL(KC_F11)         // Army Ability (5), Ctrl + F11

#define C3_PAT LCTL(KC_R)           // Ping Attack, Ctrl + R [USING]
#define C3_PDF LCTL(KC_T)           // Ping Defend,	Ctrl + T [USING]
#define C3_PQS LCTL(KC_E)           // Ping Question, Ctrl + E

#define C3_OK                       // Ok, Enter

// Select Control Group
#define C3_CGP1 KC_1                // Control Group Pick (1), 1 [USING]
#define C3_CGP2 KC_2                // Control Group Pick (2), 2 [USING]
#define C3_CGP3 KC_3                // Control Group Pick (3), 3 [USING]
#define C3_CGP4 KC_4                // Control Group Pick (4), 4 [USING]
#define C3_CGP5 KC_5                // Control Group Pick (5), 5 [USING]
#define C3_CGP6 KC_6                // Control Group Pick (6), 6
#define C3_CGP7 KC_7                // Control Group Pick (7), 7
#define C3_CGP8 KC_8                // Control Group Pick (8), 8
#define C3_CGP9 KC_9                // Control Group Pick (9), 9
#define C3_CGP0 KC_0                // Control Group Pick (0), 0

// Set Control Group
#define C3_CGS1 LCTL(KC_1)          // Control Group Set (1), Ctrl + 1 [USING]
#define C3_CGS2 LCTL(KC_2)          // Control Group Set (2), Ctrl + 2 [USING]
#define C3_CGS3 LCTL(KC_3)          // Control Group Set (3), Ctrl + 3 [USING]
#define C3_CGS4 LCTL(KC_4)          // Control Group Set (4), Ctrl + 4 [USING]
#define C3_CGS5 LCTL(KC_5)          // Control Group Set (5), Ctrl + 5 [USING]
#define C3_CGS6 LCTL(KC_6)          // Control Group Set (6), Ctrl + 6
#define C3_CGS7 LCTL(KC_7)          // Control Group Set (7), Ctrl + 7
#define C3_CGS8 LCTL(KC_8)          // Control Group Set (8), Ctrl + 8
#define C3_CGS9 LCTL(KC_9)          // Control Group Set (9), Ctrl + 9
#define C3_CGS0 LCTL(KC_0)          // Control Group Set (0), Ctrl + 0

#define C3_CGA1 LSFT(KC_1)          // Control Group Add (1), Shift + 1
#define C3_CGA2 LSFT(KC_2)          // Control Group Add (2), Shift + 2
#define C3_CGA3 LSFT(KC_3)          // Control Group Add (3), Shift + 3
#define C3_CGA4 LSFT(KC_4)          // Control Group Add (4), Shift + 4
#define C3_CGA5 LSFT(KC_5)          // Control Group Add (5), Shift + 5
#define C3_CGA6 LSFT(KC_6)          // Control Group Add (6), Shift + 6
#define C3_CGA7 LSFT(KC_7)          // Control Group Add (7), Shift + 7
#define C3_CGA8 LSFT(KC_8)          // Control Group Add (8), Shift + 8
#define C3_CGA9 LSFT(KC_9)          // Control Group Add (9), Shift + 9
#define C3_CGA0 LSFT(KC_0)          // Control Group Add (0), Shift + 0

#define C3_CGC1 LCTL(LSFT(KC_1))    // Control Group Clear (1), Ctrl + Shift + 1 [USING]
#define C3_CGC2 LCTL(LSFT(KC_2))    // Control Group Clear (2), Ctrl + Shift + 2 [USING]
#define C3_CGC3 LCTL(LSFT(KC_3))    // Control Group Clear (3), Ctrl + Shift + 3 [USING]
#define C3_CGC4 LCTL(LSFT(KC_4))    // Control Group Clear (4), Ctrl + Shift + 4 [USING]
#define C3_CGC5 LCTL(LSFT(KC_5))    // Control Group Clear (5), Ctrl + Shift + 5
#define C3_CGC6 LCTL(LSFT(KC_6))    // Control Group Clear (6), Ctrl + Shift + 6
#define C3_CGC7 LCTL(LSFT(KC_7))    // Control Group Clear (7), Ctrl + Shift + 7
#define C3_CGC8 LCTL(LSFT(KC_8))    // Control Group Clear (8), Ctrl + Shift + 8
#define C3_CGC9 LCTL(LSFT(KC_9))    // Control Group Clear (9), Ctrl + Shift + 9
#define C3_CGC0 LCTL(LSFT(KC_0))    // Control Group Clear (0), Ctrl + Shift + 0
