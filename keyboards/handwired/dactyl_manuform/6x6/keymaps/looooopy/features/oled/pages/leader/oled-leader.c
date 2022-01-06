// TODO: Deferred Execution
//       https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#deferred-execution-iddeferred-execution

#ifdef OLED_ENABLE
#ifdef LEADER_ENABLE

        #include QMK_KEYBOARD_H
        #include "features/oled/pages/leader/oled-leader.h"
        #include "features/oled/pages/leader/oled-leader-common.h"

        bool leader_timer_done=true;
        uint32_t leader_timer=-1;
        uint8_t leader_status=L_EXECUTING;

        #ifndef OLED_LEADER_DISPLAY_TIME
            #define OLED_LEADER_DISPLAY_TIME 2000
        #endif

        void oled_leader_start(void) {
            leader_timer = timer_read32();
            leader_timer_done = false;
            leader_status = L_EXECUTING;
        }

        void oled_leader_end(bool success) {
            if(success) {
                leader_status=L_SUCCESS;
            } else {
                leader_status=L_FAILED;
            }
        }

        bool oled_render_leader(void) {
            if (!leader_timer_done && (timer_elapsed32(leader_timer) < OLED_LEADER_DISPLAY_TIME))
            {
                oled_clear();
                render_leader_status(leader_status);
            } else if(!leader_render_done) {
                oled_clear();
                leader_render_done = true;
            }

            return leader_timer_done;
        }
#endif
#endif