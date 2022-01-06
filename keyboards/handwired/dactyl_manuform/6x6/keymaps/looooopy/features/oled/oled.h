#pragma once

#ifdef OLED_ENABLE

bool oled_task_user(void);
#ifdef OLED_CUSTOM_TIMER_ENABLE
void oled_set_timer(void);
#endif

#endif
