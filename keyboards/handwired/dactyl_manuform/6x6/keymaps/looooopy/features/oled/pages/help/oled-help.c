// TODO: Deferred Execution
//       https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#deferred-execution-iddeferred-execution

#ifdef OLED_ENABLE
#ifdef OLED_HELP_ENABLE

#include QMK_KEYBOARD_H
#include "features/layers/layer-codes.h"
#include "features/oled/pages/help/oled-help.h"

#ifndef OLED_HELP_DISPLAY_TIME
    #define OLED_HELP_DISPLAY_TIME 3000
#endif

static bool render_help_page(uint8_t layer, bool hand_swapped);

bool help_timer_done=true;
uint32_t help_timer=-1;

void oled_help_start(void) {
    help_timer = timer_read32();
    help_timer_done = false;
}

bool oled_render_help(uint8_t layer, bool hand_swapped) {
    if (!help_timer_done && timer_elapsed32(help_timer) < OLED_HELP_DISPLAY_TIME)
    {
        oled_clear();
        oled_write_P(PSTR("Help "), false );
        render_help_page(layer, hand_swapped);
    } else if(!help_timer_done) {
        oled_clear();
        help_timer_done = true;
    }

    return help_timer_done;
}


// See /featueres/oled/looooopy-font.c
// UP    Arrow \x18
// Down  Arrow \x19
// Left  Arrow \x1A
// Right Arrow \x1B
// Fat Right A \x10
// Fat Left A  \x11
static bool render_help_page(uint8_t layer, bool hand_swapped) {
    switch (layer) {
        case _L_NUMPAD_R_MOUSE:
            if(!hand_swapped) {
                if(is_keyboard_master()) {
                    oled_write_ln_P(PSTR("\nNumpad\n"), false );
                    oled_write_ln_P(PSTR("W= 9 E= 8 R= 7 T= -"), false );
                    oled_write_ln_P(PSTR("S= 4 D= 5 F= 6 G= +"), false );
                    oled_write_ln_P(PSTR("X= 1 C= 2 V= 3 B= Ent"), false );
                    oled_write_ln_P(PSTR("\\/= 0 /\\= ."), false );
                } else {
                    oled_write_ln_P(PSTR("\nMouse\n"), false );
                    oled_write_ln_P(PSTR("U= WhL I= \x18 O= WhR"), false);
                    oled_write_ln_P(PSTR("J= \x1B   K= \x19 L=  \x1A"), false);
                    oled_write_ln_P(PSTR("\x1A= WhU      \x1B= WhD"), false);
                    oled_write_ln_P(PSTR("Thum1=MB1 Thum2=MB2"), false );
                }
            } else {
                if(is_keyboard_master()) {
                    oled_write_ln_P(PSTR("\nMouse\n"), false );
                    oled_write_ln_P(PSTR("E= WhL W= \x18 Q= WhR"), false);
                    oled_write_ln_P(PSTR("A= \x1A   S= \x19 D=  \x1B"), false);
                    oled_write_ln_P(PSTR("\x18= WhU      \x19= WhD"), false);
                    oled_write_ln_P(PSTR("Thum0=MB1 Thum4=MB2"), false );
                } else {
                    oled_write_ln_P(PSTR("\nNumpad\n"), false );
                    oled_write_ln_P(PSTR("T= -   W= 7 E= 8 R= 9"), false );
                    oled_write_ln_P(PSTR("G= +   S= 6 D= 5 F= 4"), false );
                    oled_write_ln_P(PSTR("B= Ent X= 3 C= 2 V= 1"), false );
                    oled_write_ln_P(PSTR("\\/= 0 /\\= ."), false );
                }
            }
            return true;
        break;
    }

    return false;
}

#endif
#endif
