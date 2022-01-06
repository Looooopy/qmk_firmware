
// TODO: Not in use

#ifdef MACROS_ENABLE

#include "macro_qmk.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_MAKE_QMK:  // Compiles the firmware, and adds the flash command based on keyboard bootloader
            if (!record->event.pressed) {
            
            uint8_t temp_mod = get_mods();
            uint8_t temp_osm = get_oneshot_mods();
            clear_mods(); clear_oneshot_mods();

            SEND_STRING("make " QMK_KEYBOARD ":" QMK_KEYMAP);

    // TODO: Flashing do not work on Windows WSL
    //       Add some shortcut to
    //          * Check if windows
    //          * start QMK toolbox
    //          * QMK toolbox: set file path to the firmware file that we prevously maked
    //          * QMK toolbox: enable auto flash
    //          * SEND_STRING(SS_TAP(KC_RESET))
    #ifndef FLASH_BOOTLOADER
            if ((temp_mod | temp_osm) & MOD_MASK_SHIFT)
    #endif
            {
                SEND_STRING(":flash");
            }
            if ((temp_mod | temp_osm) & MOD_MASK_CTRL) {
                SEND_STRING(" -j8 --output-sync");
            }
            
            tap_code(KC_ENT);
            set_mods(temp_mod);
        }
        break;

  }
  return process_record_keymap(keycode, record);
}

#endif
