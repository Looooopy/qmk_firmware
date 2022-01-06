#pragma once

#include "features/macro/macro-keycodes.h"
#include "features/mod-tap/mod-tap.h"
#include "features/tap-dance/tap-dance.h"

// KC_MEH: Left Control, Shift and Alt
// KC_HYPR: Left Control, Shift, Alt and GUI
// OSM(*): Sticky button like caps lock but only for the next keypress.
// M_LOCKSC: Lock computer
// KC_LEAD: Activate leader key (vim like)
// OS_*: One shot layers
// TO_*: Activate this layer and deactivates the rest none default layers

// NOTE: Don't forget end of file LINE FEED
#define QWERTY_LAYER_6x6 LAYOUT_6x6( \
    KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                KC_F7 , KC_F8 , KC_F9 ,KC_F10 , KC_F11, KC_F12 ,\
    KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQUAL,\
    KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,\
    KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F,   KC_G  ,                KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,\
    KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,\
                     KC_GRV, KC_EQL,                                               KC_LBRC,KC_RBRC,\
                                        KC_SPC, OS_HIGH,         OS_LOWER, KC_ENT,\
                                        KC_TAB, OSM_MEH,         OSM_HYPE, KC_BSPC,\
                                        KC_LEAD, TO_LNRM,        OSM_LGUI, M_LOCKSC\
)
