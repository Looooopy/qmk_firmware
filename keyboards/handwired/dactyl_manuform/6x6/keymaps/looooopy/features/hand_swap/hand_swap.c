#ifdef SWAP_HANDS_ENABLE

#include QMK_KEYBOARD_H
#include "hand_swap.h"

static bool hand_swapped=false;

const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
  {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
  {{5, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {0, 8}},
  {{5, 9}, {4, 9}, {3, 9}, {2, 9}, {1, 9}, {0, 9}},
  {{5, 10}, {4, 10}, {3, 10}, {2, 10}, {1, 10}, {0, 10}},
  {{5, 11}, {4, 11}, {3, 11}, {2, 11}, {1, 11}, {0, 11}},
  {{5, 12}, {4, 12}, {3, 12}, {2, 12}, {1, 12}, {0, 12}},
  {{5, 13}, {4, 13}, {3, 13}, {2, 13}, {1, 13}, {0, 13}},

  {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
  {{5, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {0, 1}},
  {{5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}, {0, 2}},
  {{5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3}},
  {{5, 4}, {4, 4}, {3, 4}, {2, 4}, {1, 4}, {0, 4}},
  {{5, 5}, {4, 5}, {3, 5}, {2, 5}, {1, 5}, {0, 5}},
  {{5, 6}, {4, 6}, {3, 6}, {2, 6}, {1, 6}, {0, 6}}
};

bool get_hand_swap(void) {
    return hand_swapped;
}

void check_apply_swap_hands(uint16_t keycode, keyrecord_t *record) {
    if (keycode == SH_TG) {
        if (record->event.pressed) {
            hand_swapped = !hand_swapped;
        }
    }
}

#endif
