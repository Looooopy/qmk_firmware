#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H
#include "features/oled/pages/main/oled-main-mods.h"

#define P_SPACE PSTR(" ")

void render_mods(uint8_t mods) {
    oled_write_P(PSTR("GUI"), mods & MOD_MASK_GUI);
    oled_write_P(P_SPACE, false);
    oled_write_P(PSTR("ALT"), mods & MOD_MASK_ALT);
    oled_write_P(P_SPACE, false);
    oled_write_P(PSTR("CTRL"), mods & MOD_MASK_CTRL);
    oled_write_P(P_SPACE, false);
    oled_write_P(PSTR("SHIFT"), mods & MOD_MASK_SHIFT);
}

#endif
