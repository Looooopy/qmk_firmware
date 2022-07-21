#ifdef TAP_DANCE_ENABLE

#include QMK_KEYBOARD_H
#include "features/tap-dance/tap-dance.h"

// Functions that control what our tap dance key does
void ql_finished(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_F6);
    } else  {
        bootloader_jump();
    }
}

void ql_reset(qk_tap_dance_state_t *state, void *user_data) {
   if (state->count == 1) {
       unregister_code(KC_F6);
    }
}

// Associate our tap dance key with its functionality
qk_tap_dance_action_t tap_dance_actions[] = {
    [_TD_BSPC_CTLBSPC] = ACTION_TAP_DANCE_DOUBLE(KC_BSPC, LCTL(KC_BSPC)),
#ifdef LEADER_ENABLE
    [_TD_F4_LEAD] = ACTION_TAP_DANCE_DOUBLE(KC_F4, KC_LEAD),
#endif
#ifdef SWAP_HANDS_ENABLE
    [_TD_F5_SH] = ACTION_TAP_DANCE_DOUBLE(KC_F5, SH_TG),
    [_TD_F11_SH] = ACTION_TAP_DANCE_DOUBLE(KC_F11, SH_TG),
#endif
#ifdef BOOTMAGIC_ENABLE
    [_TD_F6_RST] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ql_finished, ql_reset),
#endif
};

#endif