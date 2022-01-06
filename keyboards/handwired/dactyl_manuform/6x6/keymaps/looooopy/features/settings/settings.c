#include QMK_KEYBOARD_H
#include "features/settings/settings.h"

typedef union {
  uint32_t raw;
  struct {
    uint8_t    os_type          :4;
    bool       home_row_enabled :1;
  };
} user_settings_t;

static user_settings_t settings;
extern keymap_config_t keymap_config;

void set_os(os_type type) {
    settings.os_type = type;
}

uint8_t get_os(void) {
    return settings.os_type;
}

bool get_nkro(void) {
    return keymap_config.nkro;
}

void set_home_row(bool enabled) {
    settings.home_row_enabled = enabled;
}

bool get_home_row_enabled(void) {
    return settings.home_row_enabled;
}

void save_settings_to_eeprom(void) {
    #ifdef EEPROM_ENABLE
    eeconfig_update_user(settings.raw);
    #endif
}

//Should be called from void keyboard_post_init_user(void)
void read_settings_from_eeprom(void) {
    #ifdef EEPROM_ENABLE
    settings.raw = eeconfig_read_user();
    keymap_config.raw = eeconfig_read_keymap();
    #endif
}

// Called automatic when EEP_RST keycode is sent
void eeconfig_init_user(void) { 
    settings.raw = 0;

    // Default values
    settings.os_type = WINDOWS;
    settings.home_row_enabled = true;
    save_settings_to_eeprom();
}
