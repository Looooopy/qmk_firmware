#pragma once

// NOTE: Don't forget end of file LINE FEED
#define LOWER_LAYER_6x6 LAYOUT_6x6( \
    KC_F1 , KC_F2 , KC_F3 , KC_F4  , KC_F5 , KC_F6 ,                KC_F7  , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,\
    KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                KC_CIRC, KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PLUS ,\
    _______,_______,_______,_______,_______,KC_LBRC,                KC_PGUP,KC_INS, KC_UP  ,KC_DEL ,KC_HOME,KC_UNDS,\
    _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                KC_PGDN,KC_LEFT,KC_DOWN,KC_RIGHT,KC_END,KC_DQUO,\
    _______,_______,_______,_______,_______,_______,                _______,_______,M_COPY, M_PASTE,_______,KC_PIPE,\
                    _______,KC_PSCR,                                                KC_LPRN,KC_RPRN,\
                                        _______,_______,         _______,_______,\
                                        _______,_______,         _______,_______,\
                                        _______,_______,         _______,_______\
)

#define TG_LOWER TG(_LOWER)
#define OS_LOWER OSL(_LOWER)

#define MLOWER MO(_LOWER)
