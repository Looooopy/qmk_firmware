#pragma once

#ifndef TAP_DANCE_ENABLE
    #define TD_BSPC_CTLBSPC KC_BSPC
    #define TD_F6_RST KC_F6
    #define TD_F5_SH KC_F5
    #define TD_F4_LEAD KC_F4
    #define TD_F11_SH KC_F11
#endif
#ifdef TAP_DANCE_ENABLE

    #ifndef BOOTMAGIC_ENABLE
      #warning BOOTMAGIC_ENABLE id disabled => Tapdance disabled on keys F4-F6 and F11
    #endif

    enum {
        _TD_BSPC_CTLBSPC,
        _TD_F6_RST,
        _TD_F5_SH,
        _TD_F4_LEAD,
        _TD_F11_SH,
    };

    #define TD_BSPC_CTLBSPC TD(_TD_BSPC_CTLBSPC)

    #ifdef BOOTMAGIC_ENABLE
        #define TD_F6_RST TD(_TD_F6_RST)
    #else
        #define TD_F6_RST KC_F6
    #endif

    #ifdef SWAP_HANDS_ENABLE
        #define TD_F5_SH TD(_TD_F5_SH)
        #define TD_F11_SH TD(_TD_F11_SH)
    #else
        #define TD_F5_SH KC_F5
        #define TD_F11_SH KC_F11
    #endif

    #ifdef LEADER_ENABLE
        #define TD_F4_LEAD TD(_TD_F4_LEAD)
    #else
        #define TD_F4_LEAD KC_F4
    #endif

    typedef enum {
        TD_NONE,
        TD_UNKNOWN,
        TD_SINGLE_TAP,
        TD_SINGLE_HOLD,
        TD_DOUBLE_TAP
    } td_state_t;

    typedef struct {
        bool is_press_action;
        td_state_t state;
    } td_tap_t;

    // Function associated with all tap dances
    td_state_t cur_dance(qk_tap_dance_state_t *state);

    // Functions associated with individual tap dances
    void ql_finished(qk_tap_dance_state_t *state, void *user_data);
    void ql_reset(qk_tap_dance_state_t *state, void *user_data);
#endif