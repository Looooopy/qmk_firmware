#include "quantum.h"
#include "rgblight.h"
#include "features/layers/layer-codes.h"

#define IDLE_TIMEOUT_MS 180000 // 3 minutes

static deferred_token idle_token = INVALID_DEFERRED_TOKEN;

static uint32_t idle_callback(uint32_t trigger_time, void* cb_arg) {
    rgblight_disable_noeeprom();
    return 0;
}

void rgblight_init_timeout(void) {
    idle_token = defer_exec(IDLE_TIMEOUT_MS, idle_callback, NULL);
}

void rgblight_extend_timeout(void) {
    if (!extend_deferred_exec(idle_token, IDLE_TIMEOUT_MS)) {
        rgblight_enable_noeeprom();
        idle_token = defer_exec(IDLE_TIMEOUT_MS, idle_callback, NULL);
    }
}

void rgblight_layer_indicator(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _QWERTY:
        case _HOME_ROW:
            rgblight_sethsv_noeeprom(HSV_GREEN);
            break;
        // case _DWORAK:
        //     rgblight_sethsv_noeeprom(HSV_GREEN);
        //     break;
        // case _COLEMAK:
        //     rgblight_sethsv_noeeprom(HSV_GREEN);
        //     break;
        case _L_NUMPAD_R_MOUSE:
            rgblight_sethsv_noeeprom(HSV_YELLOW);
            break;
        case _SETTING:
            rgblight_sethsv_noeeprom(HSV_RED);
            break;
        case _CODING:
            rgblight_sethsv_noeeprom(HSV_YELLOW);
            break;
        case _GAME:
            rgblight_sethsv_noeeprom(HSV_YELLOW);
            break;
        case _GAME_HOTS:
            rgblight_sethsv_noeeprom(HSV_PURPLE);
            break;
#ifdef _GAME_FPS_ENABLE
        case _GAME_FPS:
            rgblight_sethsv_noeeprom(HSV_MAGENTA);
            break;
#endif
        case _GAME_VALORANT:
            rgblight_sethsv_noeeprom(HSV_MAGENTA);
            break;
        case _LOWER:
            rgblight_sethsv_noeeprom(HSV_CORAL);
            break;
        case _HIGH:
            rgblight_sethsv_noeeprom(HSV_BLUE);
            break;
        default:
            rgblight_sethsv_noeeprom(HSV_ORANGE);
    }
}