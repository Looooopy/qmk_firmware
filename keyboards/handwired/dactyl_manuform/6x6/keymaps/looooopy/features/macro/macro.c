#ifdef MACROS_ENABLE

#include QMK_KEYBOARD_H
#include "features/macro/macro.h"
#include "features/oled/pages/help/oled-help.h"
#include "features/macro/macro-keycodes.h"
#include "features/settings/settings.h"
#include "features/layers/layer-codes.h"
// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://docs.qmk.fm/#/feature_macros?id=using-macros-in-c-keymaps

void check_apply_macro(uint16_t keycode, keyrecord_t *record) {
    os_type os = get_os();
    switch (keycode) {
        case A_STEAM:
            if (record->event.pressed) {
                 WIN_START_STEAM;
            }
            break;
        case A_BNET:
            if (record->event.pressed) {
                 WIN_START_BATTLE_NET;
            }
            break;
        case A_UPLAY:
            if (record->event.pressed) {
                 WIN_START_UPLAY;
            }
            break;
        case A_EPICG:
            if (record->event.pressed) {
                 WIN_START_EPIC_GAMES;
            }
            break;
        case A_ROCKG:
            if (record->event.pressed) {
                 WIN_START_ROCKSTAR_GAMES;
            }
            break;
        case A_SKYPE:
            if (record->event.pressed) {
                 WIN_START_SKYPE;
            }
            break;
        case A_DISCO:
            if (record->event.pressed) {
                 WIN_START_DISCORD;
            }
            break;
        case A_SLACK:
            if (record->event.pressed) {
                 WIN_START_SLACK;
            }
            break;
        case A_CODE:
            if (record->event.pressed) {
                 WIN_START_VSCODE;
            }
            break;
        case O_HELP:
            if (record->event.pressed) {
                #ifdef OLED_HELP_ENABLE
                    oled_help_start();
                #endif
            }
            break;
        case O_UP:
        case O_DOWN:
        case O_LEFT:
        case O_RIGHT:
        case O_ACCPT:
        case O_CANCL:
            break;
        case M_LOCKSC:
             if (record->event.pressed) {
                switch (os)
                {
                    case WINDOWS:
                        WIN_LOCK_SCREEN;
                        break;
                    case APPLE:
                        MAC_LOCK_SCREEN;
                        break;
                    case LINUX:
                        LINUX_LOCK_SCREEN;
                    default:
                        dprint("M_LOCKSC: Not a supported OS");
                        break;
                }
             }
             break;
         case M_COPY:
             if (record->event.pressed) {
                switch (os)
                {
                    case WINDOWS:
                        WIN_COPY;
                        break;
                    default:
                        SEND_STRING(SS_TAP(X_COPY));;
                        break;
                }
             }
             break;
         case M_PASTE:
             if (record->event.pressed) {
                switch (os)
                {
                    case WINDOWS:
                        WIN_PASTE;
                        break;
                    default:
                        SEND_STRING(SS_TAP(X_PASTE));;
                        break;
                }
             }
             break;
        case S_TOG_HR:
            if (record->event.pressed) {
                set_home_row(!get_home_row_enabled());
                layer_invert(_HOME_ROW);
            }
            break;
        case SAVE_EPR:
            if (record->event.pressed) {
                save_settings_to_eeprom();
            }   
            break;
        case TEST_MODE:
            break;
    }
}

#endif
