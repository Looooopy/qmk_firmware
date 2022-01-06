#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H
#include "features/oled/pages/main/oled-main-hand-swapped.h"

#define RIGHT_HAND PSTR(" R")
#define LEFT_HAND PSTR(" L")

void render_hand_swapped(bool swapped, uint8_t col, uint8_t line) {
    if (is_keyboard_master()) {
        oled_write_P(LEFT_HAND, !swapped);
        oled_write_P(RIGHT_HAND, swapped);
    } else {
        oled_write_P(RIGHT_HAND, !swapped);
        oled_write_P(LEFT_HAND, swapped);
    }
}

#endif
