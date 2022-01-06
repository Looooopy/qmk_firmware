// TODO: Deferred Execution
//       https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#deferred-execution-iddeferred-execution

#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H
#include "features/layers/layer-codes.h"
#include "features/oled/oled.h"
#include "features/oled/pages/startup/oled-startup.h"
#include "features/oled/pages/main/oled-main.h"
#include "features/oled/pages/help/oled-help.h"
#include "features/hand_swap/hand_swap.h"
#ifdef LEADER_NO_TIMEOUT
    #include "features/oled/pages/leader/oled-leader-no-timeout.h"
#else
    #include "features/oled/pages/leader/oled-leader.h"
#endif

#ifdef OLED_CUSTOM_TIMER_ENABLE
uint32_t oled_timer;
#endif

bool task_user_main(bool hand_swapped);

bool oled_task_user(void) {
    bool hand_swapped=false;

    #ifdef SWAP_HANDS_ENABLE
        hand_swapped=get_hand_swap();
    #endif

    return task_user_main(hand_swapped);
}

#ifdef OLED_CUSTOM_TIMER_ENABLE
void oled_set_timer(void) {
    oled_timer = timer_read32();
    #ifdef OLED_STARTUP_LOGO_ENABLE
    oled_startup_timer();
    #endif
}
#endif
bool task_user_main(bool hand_swapped) {
    #ifdef OLED_CUSTOM_TIMER_ENABLE
    if (timer_elapsed32(oled_timer) > OLED_TIMEOUT) {
        oled_off();
        return false;
    } else {
        oled_on();
    }
    #else 
     if(!is_oled_on()) {
        return false;
     }
    #endif
    if (is_keyboard_master()) {
        #ifdef OLED_STARTUP_LOGO_ENABLE
        if (!oled_render_startup(false)) {
            return true;
        }
        #endif

        #ifdef LEADER_ENABLE
         if (!oled_render_leader()) {
            return true;
         }
        #endif

        #ifdef OLED_HELP_ENABLE
        if (!oled_render_help(get_highest_layer(layer_state), hand_swapped)) {
            return true;
        }
        #endif

        oled_render_main(hand_swapped);
    } else {
        #ifdef OLED_STARTUP_LOGO_ENABLE
        oled_render_startup(true);
        #endif
    }
    

    return true;
}

#endif
