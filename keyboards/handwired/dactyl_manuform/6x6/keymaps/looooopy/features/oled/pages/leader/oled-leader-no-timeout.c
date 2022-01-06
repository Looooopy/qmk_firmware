// TODO: Deferred Execution
//       https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#deferred-execution-iddeferred-execution

#ifdef OLED_ENABLE
#ifdef LEADER_ENABLE
#ifdef LEADER_NO_TIMEOUT

        #include QMK_KEYBOARD_H
        #include "features/oled/pages/leader/oled-leader-no-timeout.h"
        #include "features/oled/pages/leader/oled-leader-common.h"

        void render_leader(void);

        bool leader_no_timer_done=true;
        bool leader_render_done=true;
        uint8_t leader_status=L_EXECUTING;
        uint32_t leader_timer=-1;

        void oled_leader_start(void) {
            leader_no_timer_done = false;
            leader_render_done = false;
            leader_status = L_EXECUTING;
        }

        void oled_leader_end(bool success) {
            if(success) {
                leader_status=L_SUCCESS;
            } else {
                leader_status=L_FAILED;
            }
            leader_no_timer_done = true;
        }

        bool oled_render_leader(void) {
            if(!leader_no_timer_done) {
                leader_timer = timer_read32();
            }
 
            if (timer_elapsed32(leader_timer) < OLED_LEADER_DISPLAY_TIME)
            {
                oled_clear();
                render_leader();
            } else if(!leader_render_done) {
                oled_clear();
                leader_render_done = true;
            }

            return leader_render_done;
        }

        void render_leader(void) {
            render_leader_status(leader_status);
        }

#endif
#endif
#endif
