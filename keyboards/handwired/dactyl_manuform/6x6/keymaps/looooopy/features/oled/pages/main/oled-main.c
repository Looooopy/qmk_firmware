#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H

#include "features/oled/pages/main/oled-main.h"
#include "features/oled/pages/main/oled-main-mods.h"
#include "features/oled/pages/main/oled-main-layers.h"
#include "features/oled/pages/main/oled-main-os-logo.h"

#include "features/oled/pages/main/oled-main-bottom-status.h"
#include "features/settings/settings.h"
#include "features/settings/os-type.h"

// Note: Be careful not to break the oled timer which result in oled not able to turn off (this sets dirty flag and it needs to re-render).
//       1. Don't use 'oled_clear()' on things that draw regularly it should only be done before writing something new.
//       2. Don't use 'oled_set_cursor()' it's easy to write something over something existing.
//       3. Be careful not overflow a line with too many chars when using oled_writeXXX() functions.

#ifdef DYNAMIC_TAPPING_TERM_ENABLE
extern uint16_t g_tapping_term;
#endif

void oled_render_main(bool hand_swapped) {
    render_mods(get_mods() | get_oneshot_mods());
    uint8_t os = get_os();
    render_os_logo(os,19,0);
    render_layers(get_highest_layer(layer_state));
    render_main_bottom(7, hand_swapped);
}

#endif
