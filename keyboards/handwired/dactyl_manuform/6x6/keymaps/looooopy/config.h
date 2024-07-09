/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#include "config_common.h"


#ifdef KEYBOARD_handwired_dactyl_manuform_6x6_promicro
    #undef PRODUCT
    #undef DEVICE_VER
    #define PRODUCT     "Looooopy-Manuform (6x6) ProMicro"
    #define DEVICE_VER 0x0002
    #define LAYER_STATE_16BIT
    #define NO_MUSIC_MODE
    #define USE_SERIAL
    #ifdef SOFT_SERIAL_PIN
        #undef SOFT_SERIAL_PIN
        #define SOFT_SERIAL_PIN D2              // default D0, D2 => RX1
    #endif
    #ifdef BACKLIGHT_ENABLE
        #define BACKLIGHT_PIN F4
    #endif
#elif KEYBOARD_handwired_dactyl_manuform_6x6_blackpill_f411
    #undef PRODUCT
    #undef DEVICE_VER
    #define PRODUCT     "Looooopy-Manuform (6x6) BlackPill"
    #define DEVICE_VER 0x0003
    // #define MATRIX_COL_PINS          { B1, B0, A7, A6, A5, A4}
    // #define MATRIX_ROW_PINS          { B12, B13, B14, B15, A8 , A9, A10}
    // #define SPLIT_HAND_PIN           B10 (low (gnd) => RIGHT side otherwise LEFT)
    // USB dont use these pins for anything if you wish to use USB (A8, A9, A10, A11, A12)

    // Take into account;
    ///    * VIA
    //     * My own settings
    //     * Extra for some other time
    //     * Defualt see `platforms/chibios/drivers/eeprom/eeprom_stm32_L0_L1.h`
    #define STM32_ONBOARD_EEPROM_SIZE 2048
    #define FORCE_NKRO

    // I2C: OLED connection  (5V GRD, B6[SCL] B7[SDA])
    #define I2C_DRIVER I2CD1
    #define I2C1_SCL_PIN B6
    #define I2C1_SDA_PIN B7
    #define I2C1_SCL_PAL_MODE 4
    #define I2C1_SDA_PAL_MODE 4
    #define I2C1_OPMODE    OPMODE_I2C
    #define I2C1_CLOCK_SPEED 400000
    #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

    // UART: Left/Right keyboard serial connection (5V GRD, A2[TX] A3[RX])
    #undef SOFT_SERIAL_PIN
    #undef SERIAL_USART_DRIVER
    #undef SERIAL_USART_RX_PIN
    #undef SERIAL_USART_TX_PIN
    #undef SERIAL_USART_TIMEOUT
    #undef SELECT_SOFT_SERIAL_SPEED

    #define SERIAL_USART_FULL_DUPLEX  // Enable full duplex operation mode.
    #define SERIAL_USART_TX_PIN      A2
    #define SERIAL_USART_RX_PIN      A3
    #define SERIAL_USART_DRIVER      SD2
    #define SERIAL_USART_TX_PAL_MODE 7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
    #define SERIAL_USART_RX_PAL_MODE 7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
    #define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 20
    #define SERIAL_USART_SPEED       921600

    // RGB Underglow
    #define RGBLED_NUM 24
    #define RGBLED_SPLIT {14, 14}
    #define WS2812_DI_PIN B4
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_DRIVER WS2812B
#else
    #pragma message("No a supported platform")
#endif

#define _GAME_FPS_ENABLE

// OLED (Rules.mk requires OLED_ENABLE = yes)
#define SPLIT_TRANSACTION_IDS_USER USER_RESET_HIGH_SCORE
#define SPLIT_MODS_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_WPM_ENABLE
// #define SPLIT_TRANSPORT_MIRROR

#ifdef OLED_ENABLE
    #define SPLIT_OLED_ENABLE
    #define OLED_DISPLAY_128X64             // default: 128x32
    #define OLED_IC OLED_IC_SH1106          // default: OLED_IC_SSD1306
    #define OLED_COLUMN_OFFSET 2            // default: 0
    #define OLED_TIMEOUT 20000              // default: 60000
    // #define OLED_UPDATE_INTERVAL 50         // default: 50
    // #define OLED_CUSTOM_TIMER_ENABLE
    #ifdef OLED_CUSTOM_TIMER_ENABLE
        #define OLED_DISABLE_TIMEOUT            // default: not disabled (already a custom in place)
    #endif
    #define OLED_BRIGHTNESS 200             // default 128
    #define OLED_FONT_H "features/oled/looooopy-font.c"   // default: "glcdfont.c"

    // OLED MY CUSTOM THINGS
    #define OLED_LEADER_DISPLAY_TIME 2000   // default: 2000
    // LEADER KEY (Rules.mk requires LEADER_ENABLE = yes)
    #define LEADER_TIMEOUT 1000
    // #define LEADER_KEY_STRICT_KEY_PROCESSING
    #define LEADER_PER_KEY_TIMING
#endif

// TAP-DANCE
#define TAPPING_TERM 225 // Configure the global tapping term (default: 200ms)

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define TAPPING_FORCE_HOLD

#define USB_POLLING_INTERVAL_MS 1 // Set USB polling rate to 1000 Hz

// Layer switching 'TT(layer)' (default 5)
#define TAPPING_TOGGLE 2
