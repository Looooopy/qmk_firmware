#pragma once

// NOTE: Don't forget end of file LINE FEED
#define DWORAK_LAYER_6x6 LAYOUT_6x6( \
    QWERTY ,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______, \
    _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______, \
    _______,KC_Q   ,KC_W   ,KC_F   ,KC_P   ,KC_K   ,                KC_Z   ,KC_L   ,KC_U   ,KC_Y   ,KC_COLN,_______, \
    KC_LCTL,KC_A   ,KC_R   ,KC_S   ,KC_T   ,KC_G   ,                KC_M   ,KC_N   ,KC_E   ,KC_I   ,KC_O   ,_______, \
    KC_LSFT,KC_J   ,KC_B   ,KC_C   ,KC_D   ,KC_V   ,                KC_X   ,KC_H   ,KC_COMM,KC_DOT ,KC_QUES,KC_RSFT, \
                    KC_K   ,KC_V   ,                                                KC_X   ,KC_Z   , \
                                        _______,_______,         _______,_______, \
                                        _______,_______,         _______,_______, \
                                        _______,_______,         _______,_______ \
)

#define DF_DWORAK DF(_DWORAK)
