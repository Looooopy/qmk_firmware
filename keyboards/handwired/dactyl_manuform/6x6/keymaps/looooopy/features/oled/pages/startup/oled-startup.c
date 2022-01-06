// TODO: Deferred Execution
//       https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#deferred-execution-iddeferred-execution

#ifdef OLED_ENABLE
#ifdef OLED_STARTUP_LOGO_ENABLE

#include QMK_KEYBOARD_H

#ifndef OLED_LOGO_DISPLAY_TIME
    #define OLED_LOGO_DISPLAY_TIME 3000
#endif

static uint32_t startup_timer;
static bool startup_timer_done = false;

const char PROGMEM looooopy_logo[] = {
    0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
    0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
};

static void render_logo(void) {
    oled_write_ln_P(PSTR(""), false);
    oled_write_P(looooopy_logo, false);
    oled_write_P(PSTR("\n\n Make it a great day!"), false);
}

void oled_startup_timer(void){
    startup_timer = timer_read32();
}

bool oled_render_startup(bool always_render_startup) {

    if(!startup_timer_done) {
        if ( (!startup_timer_done && (timer_elapsed32(startup_timer) < OLED_LOGO_DISPLAY_TIME)) || always_render_startup) {
            render_logo();
        } else {
            if(!always_render_startup) {
                oled_clear();
            }
            startup_timer_done = true;
        }
    }
    return startup_timer_done;
}

#endif
#endif
