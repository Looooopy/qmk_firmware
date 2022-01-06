#ifdef LEADER_ENABLE

#include QMK_KEYBOARD_H
#include "leader.h"
#include "features/oled/pages/leader/oled-leader.h"
#include "features/layers/layer-codes.h"
#include "features/settings/settings.h"

LEADER_EXTERNS();
bool leader_succeed;

void leader_start(void) {
  oled_leader_start();
}

void leader_end(void) {
  oled_leader_end(leader_succeed);
}

// SEQ_ONE_KEY SEQ_TWO_KEYS SEQ_THREE_KEYS SEQ_FOUR_KEYS SEQ_FIVE_KEYS
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leader_succeed = leading = false;

    SEQ_ONE_KEY(KC_T) {
      // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
      SEND_STRING(SS_LCTRL(SS_LSFT("t")));
      leader_succeed=true;
    }

    // SEQ_TWO_KEYS(KC_N, KC_T) {
    //   // When I press KC_LEAD and then N followed by T, this sends CTRL + T
    //   SEND_STRING(SS_LCTRL("t"));
    //   leader_succeed=true;
    // }

    SEQ_FOUR_KEYS(KC_S, KC_D, KC_H, KC_R) {
      set_home_row(false);
      layer_off(_HOME_ROW);
      layer_on(_QWERTY);
      // TT(_HOME_ROW);
      //layer_clear();
      // layer_move(_QWERTY);
      leader_succeed=true;
    }

    SEQ_FOUR_KEYS(KC_S, KC_E, KC_H, KC_R) {
      set_home_row(true);
      layer_on(_HOME_ROW);
      // TT(_HOME_ROW);
      //layer_clear();
      // layer_move(_QWERTY);
      leader_succeed=true;
    }

    leader_end();
  }
}

#endif
