#pragma once

#ifdef OLED_ENABLE

void render_nkro(bool nrok_enable, uint8_t col, uint8_t line);
void render_main_bottom(uint8_t col, bool hand_swapped);

#endif
