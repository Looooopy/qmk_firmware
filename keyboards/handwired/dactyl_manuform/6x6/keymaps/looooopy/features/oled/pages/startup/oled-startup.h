#pragma once

#ifdef OLED_ENABLE
#ifdef OLED_STARTUP_LOGO_ENABLE

    bool oled_render_startup(bool always_render_startup);
    void oled_startup_timer(void);

#endif
#endif
