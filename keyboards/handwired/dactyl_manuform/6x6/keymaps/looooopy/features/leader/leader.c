#ifdef LEADER_ENABLE

#include QMK_KEYBOARD_H
#include "leader.h"
#include "features/oled/pages/leader/oled-leader.h"
#include "features/layers/layer-codes.h"
#include "features/settings/settings.h"

//LEADER_EXTERNS();
bool leader_succeed;

void leader_start_user(void) {
  oled_leader_start();
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_T)) {
        // Leader, f => Types the below string
        SEND_STRING(SS_LCTL(SS_LSFT("t")));
    } else if (leader_sequence_four_keys(KC_S, KC_D, KC_H, KC_R)) {
      set_home_row(false);
      layer_off(_HOME_ROW);
      layer_on(_QWERTY);
      // TT(_HOME_ROW);
      //layer_clear();
      // layer_move(_QWERTY);
      leader_succeed=true;
    }  else if (leader_sequence_four_keys(KC_S, KC_E, KC_H, KC_R)) {
      set_home_row(true);
      layer_on(_HOME_ROW);
      // TT(_HOME_ROW);
      //layer_clear();
      // layer_move(_QWERTY);
      leader_succeed=true;
    }
     oled_leader_end(leader_succeed);
}


#endif
