#pragma once

// Game Aliases: Valorant (Riot Game)
// Defines standad keymappings inside Valorant, you only need to add F9-F12 if you wish to use them.

#define V_EXIT KC_ESC               // Exit/Cancel

// Abilities
#define V_ABI_1 KC_C                // Hero Ability 1
#define V_ABI_2 KC_Q                // Hero Ability 2
#define V_ABI_3 KC_E                // Hero Ability 3
#define V_ABI_U KC_X                // Ulti Ability

// Move
#define V_FWD   KC_W                // Forward
#define V_BACK  KC_S                // Backward
#define V_LEFT  KC_A                // Strafe Left
#define V_RIGHT KC_D                // Strafe Right
#define V_WALK  KC_LSFT             // Walk (Move silent)
#define V_JUMP  KC_SPC              // Jump / Fly up
#define V_CRUCH KC_LCTRL            // Crouch / Fly down

// Actions
#define V_RLOAD KC_R                // Reload wepon
#define V_EPRIM KC_1                // Equipt Primary wepon
#define V_ESECO KC_2                // Equipt Secondary wepon
#define V_EMELE KC_3                // Equipt Mele wepon
#define V_ESPIK KC_4                // Equipt Spike (Defuse or Plant)
#define V_DROP  KC_G                // Drop Equipt item
#define V_USE   KC_F                // Use object
#define V_SPRAY KC_T                // Use spray
#define V_BUY   KC_B                // Buy things (armory)

// Show
#define V_TM_EQ KC_LALT             // Show teammate equiptment
#define V_CBT_R KC_N                // Show Combat report
#define V_SCORE KC_TAB              // Show Scoreboard
#define V_TOOLT KC_F1               // Show Agent tooltip
#define V_CHG_C KC_F2               // Change char

// Ping
#define V_PING  KC_Z                // Ping wheel (hold) / ping (tap)
#define V_CAUTN KC_F9               // Ping caution (Need to set the key bind to F9)
#define V_WATCH KC_F10              // Ping watch here (Need to set the key bind to F10)
#define V_SUPRT KC_F11              // Ping support (Need to set the key bind to F11)
#define V_ONMAR KC_F12              // Ping on my mark (Need to set the key bind to F12)

// Vote
#define V_VOTE1 KC_F5               // Vote for 1
#define V_VOTE2 KC_F6               // Vote for 2
#define V_VOTE3 KC_F7               // Vote for 3
#define V_VOTE4 KC_F8               // Vote for 4