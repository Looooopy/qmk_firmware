#pragma once

#ifdef OLED_ENABLE

#include "features/settings/os-type.h"

void render_os_logo(os_type osType, uint8_t col, uint8_t line);

#endif