#pragma once

#ifdef OLED_ENABLE
#ifdef LEADER_ENABLE

    void oled_leader_start(void);
    void oled_leader_end(bool success);
    bool oled_render_leader(void);

#endif
#endif
