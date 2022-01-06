#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H
#include "features/oled/pages/main/oled-main-layers.h"
#include "features/layers/layer-codes.h"

void render_layers(uint8_t layer_state) {
    oled_write_P(PSTR("\nLayer: "), false);

    switch (layer_state) {
        case _QWERTY:
        case _HOME_ROW:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
        // case _DWORAK:
        //     oled_write_ln_P(PSTR("DWORAK"), false);
        //     break;
        // case _COLEMAK:
        //     oled_write_ln_P(PSTR("COLEMAK DH"), false);
        //     break;
        case _L_NUMPAD_R_MOUSE:
            oled_write_ln_P(PSTR("Num/Mouse"), false);
            break;
        case _SETTING:
            oled_write_ln_P(PSTR("Settings"), false);
            break;
        case _CODING:
            oled_write_ln_P(PSTR("Coding"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("GAME Apps"), false);
            break;
        case _GAME_HOTS:
            oled_write_ln_P(PSTR("HOTS"), false);
            break;
#ifdef _GAME_FPS_ENABLE
        case _GAME_FPS:
            oled_write_ln_P(PSTR("FPS GAME"), false);
            break;
#endif
        case _GAME_VALORANT:
            oled_write_ln_P(PSTR("VALORANT"), false);
            break;
        case _LOWER:
            oled_write_ln_P(PSTR("LOWER"), false);
            break;
        case _HIGH:
            oled_write_ln_P(PSTR("HIGH"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
}

#endif
