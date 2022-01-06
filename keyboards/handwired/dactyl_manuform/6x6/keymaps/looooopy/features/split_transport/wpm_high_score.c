#include QMK_KEYBOARD_H

#include "features/split_transport/wpm_high_score.h"
#include "transactions.h"
#include "features/words_per_minute/wpm.h"

#if defined(WPM_ENABLE) && defined(SPLIT_WPM_ENABLE)

bool sync = false;

typedef struct _master_to_slave_t {
    int high_score;
} master_to_slave_t;

void sync_high_score(void) {
    sync = true;
}

void reset_high_score_slave_handler(uint8_t in_buflen, const void* in_data, uint8_t out_buflen, void* out_data) {
    reset_high_score();
}

void wps_high_score_register(void) {
    transaction_register_rpc(USER_RESET_HIGH_SCORE, reset_high_score_slave_handler);
}

void wps_high_score_sync_slave(void) {
    static uint32_t last_sync = 0;
    if (timer_elapsed32(last_sync) > 500 && sync) {
        master_to_slave_t m2s = {6};
        m2s.high_score = get_high_score();
        if(transaction_rpc_send(USER_RESET_HIGH_SCORE, sizeof(m2s), &m2s)) {
            last_sync = timer_read32();
            sync = false;
        } else {
            dprint("Slave sync wps high score failed!\n");
        }
    }
}

#endif
