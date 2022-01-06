#include QMK_KEYBOARD_H

#include "features/layers/my-layers.h"
#include "features/macro/macro-keycodes.h"
#include "features/rgblight/rgblight.h"
#include "features/oled/oled.h"
#include "features/macro/macro.h"
#include "features/hand_swap/hand_swap.h"
#include "features/leader/leader.h"
#include "features/oled/pages/leader/oled-leader.h"
#include "features/settings/settings.h"
#include "features/tap-dance/tap-dance.h"
#include "features/unicode/unicode.h"
#include "features/settings/settings.h"
#include "features/split_transport/wpm_high_score.h"

//#include "keymap_swedish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY]           = QWERTY_LAYER_6x6,
    // [_DWORAK]           = DWORAK_LAYER_6x6,
    // [_COLEMAK]          = COLEMAK_LAYER_6x6,
    [_HOME_ROW]         = HOME_ROW_LAYER_6x6,
    [_CODING]           = CODING_LAYER_6x6,
    [_L_NUMPAD_R_MOUSE] = NUMPAD_R_MOUSE_LAYER_6x6,
    [_GAME]             = GAME_LAYER_6x6,
    [_GAME_HOTS]        = HOTS_LAYER_6x6,
#ifdef _GAME_FPS_ENABLE
   [_GAME_FPS]         = FPS_LAYER_6x6,
#endif
    [_GAME_VALORANT]    = VALORANT_LAYER_6x6,
    [_SETTING]          = SETTING_LAYER_6x6,
    [_HIGH]            = HIGH_LAYER_6x6,
    [_LOWER]            = LOWER_LAYER_6x6
};

void keyboard_post_init_user(void) {
    // debug_enable=true;
    // debug_matrix=true;
    wps_high_score_register();
    read_settings_from_eeprom();
    rgblight_init_timeout();
    layer_on(_QWERTY);
}

void housekeeping_task_user(void) {
    if (is_keyboard_master()) {
        wps_high_score_sync_slave();
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    oled_clear();

    if( get_highest_layer(state) == _QWERTY && get_home_row_enabled() ) {
        state = ((layer_state_t)1 << _HOME_ROW);
    }

    rgblight_layer_indicator(state);

    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        rgblight_extend_timeout();
        #ifdef OLED_CUSTOM_TIMER_ENABLE
        #ifdef OLED_ENABLE
            oled_set_timer();
        #endif
        #endif
        
        #ifdef MACROS_ENABLE
            check_apply_macro(keycode, record);
        #endif

        #ifdef SWAP_HANDS_ENABLE
            check_apply_swap_hands(keycode, record);
        #endif
    }

    // If function return `true` QMK will process the keycodes as usual.
    // If function return `false` QMK will skip the normal key handling, and it will be up to you to send any key up or down events that are required.
    return true;
}
