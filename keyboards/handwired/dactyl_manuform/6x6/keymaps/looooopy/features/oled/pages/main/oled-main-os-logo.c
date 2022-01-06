#ifdef OLED_ENABLE

#include QMK_KEYBOARD_H
#include "features/oled/pages/main/oled-main-os-logo.h"

static void render_logo_top(enum os_type osType);
static void render_logo_bottom(enum os_type osType);

#define APPLE_LOGO_TOP PSTR("\x95\x96")
#define APPLE_LOGO_BOTTOM PSTR("\xB5\xB6")

#define WINDOWS_LOGO_TOP PSTR("\x97\x98")
#define WINDOWS_LOGO_BOTTOM PSTR("\xB7\xB8")

#define LINUX_LOGO_TOP PSTR("\x99\x9A")
#define LINUX_LOGO_BOTTOM PSTR("\xB9\xBA")

#define ANDROID_LOGO_TOP PSTR("\x9B\x9C")
#define ANDROID_LOGO_BOTTOM PSTR("\xBB\xBC")

#define LOGO_TAB_TOP  PSTR(" ")
#define LOGO_TAB_BOTTOM  PSTR("                   ")

void render_os_logo(enum os_type osType, uint8_t col, uint8_t line) {
    render_logo_top(osType);
    render_logo_bottom(osType);
}

// See /featueres/oled/looooopy-font.c
static void render_logo_top(enum os_type osType) {
    oled_write_P(LOGO_TAB_TOP,false);
    switch (osType) {
        case APPLE:
            oled_write_P(APPLE_LOGO_TOP, false);
            break;
        case WINDOWS:
            oled_write_P(WINDOWS_LOGO_TOP, false);
            break;
        case LINUX:
            oled_write_P(LINUX_LOGO_TOP, false);
            break;
        case ANDROID:
            oled_write_P(ANDROID_LOGO_TOP, false);
            break;
    }
}

// See /featueres/oled/looooopy-font.c
static void render_logo_bottom(enum os_type osType) {
    oled_write_P(LOGO_TAB_BOTTOM,false);
    switch (osType) {
        case APPLE:
            oled_write_ln_P(APPLE_LOGO_BOTTOM, false);
            break;
        case WINDOWS:
            oled_write_ln_P(WINDOWS_LOGO_BOTTOM, false);
            break;
        case LINUX:
            oled_write_ln_P(LINUX_LOGO_BOTTOM, false);
            break;
        case ANDROID:
            oled_write_ln_P(ANDROID_LOGO_BOTTOM, false);
            break;
    }
}

#endif
