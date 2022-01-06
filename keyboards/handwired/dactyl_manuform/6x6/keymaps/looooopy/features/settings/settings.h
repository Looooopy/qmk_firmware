#pragma once

#include "features/settings/os-type.h"

void set_os(os_type type);
void set_home_row(bool enabled);
uint8_t get_os(void);
bool get_nkro(void);
bool get_home_row_enabled(void);
void save_settings_to_eeprom(void);
void read_settings_from_eeprom(void);
