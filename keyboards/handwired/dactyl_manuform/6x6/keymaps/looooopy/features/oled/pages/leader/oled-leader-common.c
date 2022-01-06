#ifdef OLED_ENABLE
#ifdef LEADER_ENABLE

        #include QMK_KEYBOARD_H
        #include "features/oled/pages/leader/oled-leader-common.h"

        void render_leader_status(uint8_t leader_status) {
            oled_write_P(PSTR("\n\n"), false);
            oled_write_ln_P(PSTR("LEADER:"), false);
            switch(leader_status) {
                case L_EXECUTING:
                    oled_write_P(PSTR("Executing"),false);
                    break;
                case L_SUCCESS:
                    oled_write_P(PSTR("** Successful **"),false);
                    break;
                default:
                    oled_write_P(PSTR("Execution Failed"),false);
            }
        }

#endif
#endif
