#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H

#include "features/oled/pages/main/oled-main-bottom-status.h"
#include "features/layers/layer-codes.h"
#include "features/oled/pages/main/oled-main-hand-swapped.h"
#include "features/settings/settings.h"

void render_nkro(bool nrok_enable, uint8_t col, uint8_t line) {
    oled_set_cursor(col,line);
    oled_write_P(PSTR(" NKRO"), nrok_enable);
}

void render_main_bottom(uint8_t col, bool hand_swapped) {
    render_nkro(get_nkro(),0,col);
    oled_write_P(PSTR(" HROW"), get_home_row_enabled());
    #ifdef DYNAMIC_TAPPING_TERM_ENABLE
    oled_write_P(PSTR(" DT"),false);
    oled_write(get_u8_str(g_tapping_term, ' '), false);
    oled_write_P(PSTR(" "),false);
    #elif WPM_ENABLE
    oled_write_P(PSTR(" WPM"),false);
    oled_write(get_u8_str(get_current_wpm(), ' '), false);
    #else 
    oled_write_P(PSTR("       "),false);
    #endif
    render_hand_swapped(hand_swapped,17,col);
}

#endif
