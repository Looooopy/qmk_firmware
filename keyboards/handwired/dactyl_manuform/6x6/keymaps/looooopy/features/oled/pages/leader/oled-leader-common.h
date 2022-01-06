#pragma once

#ifdef OLED_ENABLE
#ifdef LEADER_ENABLE

void render_leader_status(uint8_t leader_status);

enum LEADER_STATUS {
    L_EXECUTING = 0,
    L_FAILED = 1,
    L_SUCCESS = 2
};

#ifndef OLED_LEADER_DISPLAY_TIME
    #define OLED_LEADER_DISPLAY_TIME 2000
#endif

#endif
#endif
