#pragma once

void reset_high_score(void);
int get_high_score(void);
void update_high_score(int wpm);

void oled_wpm(int wpm);
void oled_wpm_high_score(int high);
