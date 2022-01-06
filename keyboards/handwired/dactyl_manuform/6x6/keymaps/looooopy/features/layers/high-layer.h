#pragma once

// NOTE: Don't forget end of file LINE FEED
#define HIGH_LAYER_6x6 LAYOUT_6x6( \
    KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,                KC_F7  , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,\
    _______,_______,_______,_______,_______,KC_LBRC,                KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,\
    _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,\
    _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                _______,_______,_______,_______,_______,KC_VOLD,\
    _______,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,                _______,_______,_______,_______,_______,_______,\
                    _______,_______,                                                KC_LPRN,KC_RPRN,\
                                        _______,_______,         _______,_______,\
                                        _______,_______,         _______,_______,\
                                        _______,_______,         _______,_______\
)

#define TG_HIGH TG(_HIGH)
#define OS_HIGH OSL(_HIGH)

#define MHIGH MO(_HIGH)
