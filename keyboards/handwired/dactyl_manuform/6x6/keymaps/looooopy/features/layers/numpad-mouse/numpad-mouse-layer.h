#pragma once

// NOTE: Don't forget end of file LINE FEED
//       _______ = KC_TRANSPARENT => Use the next lowest non-transparent key
#define NUMPAD_R_MOUSE_LAYER_6x6 LAYOUT_6x6( \
    QWERTY ,O_HELP ,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______,\
    KC_ESC ,_______,_______,KC_PSLS,KC_PAST,_______,                _______,_______,_______,_______,_______,_______,\
    KC_TAB ,_______, KC_7  , KC_8  , KC_9  ,KC_PMNS,                _______,KC_MS_WH_LEFT,KC_MS_UP,KC_MS_WH_RIGHT,_______,_______,\
    KC_LSFT,_______, KC_4  , KC_5  , KC_6  ,KC_PPLS,                _______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,_______,_______,\
    KC_LCTL,_______, KC_1  , KC_2  , KC_3  ,KC_PENT,                _______,_______,_______,_______,_______,_______,\
                     KC_0  , KC_PDOT,                                               KC_MS_WH_UP,KC_MS_WH_DOWN,\
                                        _______,_______,         KC_MS_BTN2,KC_MS_BTN1,\
                                        _______,_______,         KC_MS_BTN3,KC_MS_ACCEL0,\
                                        _______,TO_SETTING,      KC_MS_ACCEL2,KC_MS_ACCEL1\
)
