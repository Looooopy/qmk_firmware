#pragma once

#include "features/macro/macro-keycodes.h"
#include "features/mod-tap/mod-tap.h"
#include "features/tap-dance/tap-dance.h"

// NOTE: Don't forget end of file LINE FEED
#define SETTING_LAYER_6x6 LAYOUT_6x6( \
    QWERTY  ,TEST_MODE,_______,_______ ,_______ ,TD_F6_RST,               TOG_NKRO,S_TOG_HR,TOG_HAND,RGB_TOG ,WPM_RST ,DT_UP   ,\
    KC_ESC  , KC_1    , KC_2  , KC_3   , KC_4   , KC_5   ,                SAVE_EPR,_______ ,_______ ,RGB_MOD ,_______ ,DT_DOWN ,\
    _______ ,_______  ,_______, O_UP   ,_______ ,_______ ,                _______ ,_______ ,_______ ,RGB_HUI ,_______ ,_______ ,\
    _______ ,_______  , O_LEFT, O_DOWN ,O_RIGHT ,_______ ,                _______ ,_______ ,_______ ,RGB_HUD ,RGB_SAI ,_______ ,\
    _______ ,_______  ,_______,_______ ,_______ ,_______ ,                _______ ,_______ ,_______ ,RGB_VAI ,RGB_SAD ,_______ ,\
                       _______,_______,                                                     _______ ,RGB_VAD ,\
                                        O_CANCL, O_ACCPT ,         _______ ,_______ ,\
                                        _______, _______ ,         _______ ,_______ ,\
                                        _______, TO_GAME ,         _______ ,_______\
)

#define TO_SETTING TO(_SETTING)
// #define TOG_HAND OSL(_HOME_ROW)
#define TOG_HROW TT(_HOME_ROW)


#ifdef NKRO_ENABLE
    #define TOG_NKRO NK_TOGG
#else
    #define TOG_NKRO _______
#endif

#ifdef LEADER_ENABLE
    #define TOG_LEAD KC_LEAD
#else
    #define TOG_LEAD _______
#endif

#ifdef SWAP_HANDS_ENABLE
    #define TOG_HAND SH_TG
#else
    #define TOG_HAND  _______
#endif
