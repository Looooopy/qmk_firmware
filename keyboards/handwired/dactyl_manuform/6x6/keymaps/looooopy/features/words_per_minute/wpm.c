#include QMK_KEYBOARD_H
#include "features/words_per_minute/wpm.h"
#include "features/split_transport/wpm_high_score.h"

static int high_score=0;

int get_high_score(void){
    return high_score;
}

void reset_high_score(void) {
    high_score=0;
     if (is_keyboard_master()) {
        sync_high_score();
     }
}

void update_high_score(int wpm){
    #ifdef WPM_ENABLE
    if(wpm > high_score) {
        high_score =  wpm;
        dprintf("update hs; %u", high_score);
    }
    #endif
}

void oled_wpm_high_score(int high){
    #ifdef WPM_ENABLE
    #ifdef OLED_ENABLE
    oled_write_P(PSTR("      HIGH "), false);
    oled_write(get_u8_str(high, ' '), false);
    #endif
    #endif
}

void oled_wpm(int wpm) {
    #ifdef WPM_ENABLE
    #ifdef OLED_ENABLE
    oled_write_ln_P(PSTR("\n"),false);
    oled_write_P(PSTR("WPM "),false);
    oled_write(get_u8_str(wpm, ' '), false);
    #endif
    #endif
}