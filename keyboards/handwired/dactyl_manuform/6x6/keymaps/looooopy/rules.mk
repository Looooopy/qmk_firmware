# Bootloader selection

ifeq ($(strip $(MCU)), STM32F411)
    # Pre req: Compile tinyuf2 and flash in DFU mode through qmk toolbox.
    # git clone git@github.com:adafruit/tinyuf2.git && cd tinyuf2/ports/stm32f4 && make BOARD=stm32f411ce_blackpill all && cp _build/stm32f411ce_blackpill/tinyuf2-stm32f411ce_blackpill.bin ../../../
    # DFU enable: hold key 2s then press and hold bootto and NRST
    # after new bootloader you will get back to tinyu2 bu double tapping reset while single tapping reset would go to qmk firmware
    # BOOTLOADER = stm32-dfu # required if i wish to use qmk toolbox
    # Default if commment line above;
    # DFU enable: reset and then double tap NRST
    # Flash: file copy the firmware
    #BOOTLOADER = tinyuf2 
endif

# Build Options
#   change yes to no to disable
#

ifeq ($(strip $(MCU)), STM32F411)
    BOOTMAGIC_ENABLE = yes          # Enable Bootmagic Lite
    MOUSEKEY_ENABLE = yes           # Mouse keys
    EXTRAKEY_ENABLE = yes           # Audio control and System control
    CONSOLE_ENABLE = yes            # Console for debug
    COMMAND_ENABLE = yes            # Commands for debug and configuration
    NKRO_ENABLE = yes               # Enable N-Key Rollover
    BACKLIGHT_ENABLE = no           # Enable keyboard backlight functionality
    RGBLIGHT_ENABLE = yes           # Enable keyboard RGB underglow
    OLED_ENABLE = yes               # OLED Display is present
    OLED_STARTUP_LOGO_ENABLE = yes  # OLED: show start logo
    OLED_HELP_ENABLE = yes          # OLED: enable help macro
    AUDIO_ENABLE = no              # Audio output
    SPLIT_KEYBOARD = yes            # Split keyboard
    MACROS_ENABLE = yes             # Macro (Required to get oled help)
    LEADER_ENABLE = yes             # VIM style leader key
    LEADER_NO_TIMEOUT = yes         #
    SWAP_HANDS_ENABLE = yes         # Swap left with right side of keyboard
    EEPROM_ENABLE = yes             # Store keyboard settings in EEPROM like default layer and what operative system is in use.
    TAP_DANCE_ENABLE = yes          # tap or hold keys
    WPM_ENABLE = yes                # Count words per minute
    UNICODEMAP_ENABLE = yes         # Use unicode to send unicode strings
    #LTO_ENABLE = yes                # Massively reduce the size
    DEBOUNCE_TYPE = sym_eager_pr    # Lower the inputlag
    DYNAMIC_TAPPING_TERM_ENABLE = yes# To dynamicly lower or raise TAPPING_TERM
    WINDOWS_ENABLE = yes            # Macro support for Windows
    APPLE_ENABLE = yes              # Macro support for MacOS
    LINUX_ENABLE = yes              # Macro support for Linux
    MUSIC_ENABLE = no
else
    BOOTMAGIC_ENABLE = yes          # Enable Bootmagic Lite                     (  82 bytes)
    MOUSEKEY_ENABLE = yes           # Mouse keys                                (1444 bytes)
    EXTRAKEY_ENABLE = yes           # Audio control and System control          ( 412 bytes)
    CONSOLE_ENABLE = no             # Console for debug                         (3708 bytes)
    COMMAND_ENABLE = no             # Commands for debug and configuration      ( 880 bytes)
    NKRO_ENABLE = yes               # Enable N-Key Rollover                     ( 342 bytes)
    BACKLIGHT_ENABLE = no           # Enable keyboard backlight functionality   (1208 bytes)
    RGBLIGHT_ENABLE = yes           # Enable keyboard RGB underglow             (1562 bytes)
    OLED_ENABLE = yes               # OLED Display is present                   (5354 bytes)
    OLED_STARTUP_LOGO_ENABLE = yes  # OLED: show start logo                     ( 194 bytes)
    OLED_HELP_ENABLE = no           # OLED: enable help macro                   ( 382 bytes)
    AUDIO_ENABLE = no               # Audio output                              (1516 bytes)
    SPLIT_KEYBOARD = yes            # Split keyboard                            (3476 bytes)
    MACROS_ENABLE = yes             # Macro (Required to get oled help)         ( 470 bytes)
    LEADER_ENABLE = yes             # VIM style leader key                      ( 866 bytes)
    LEADER_NO_TIMEOUT = yes         #                                           (   0 bytes)
    SWAP_HANDS_ENABLE = no          # Swap left with right side of keyboard     ( 764 bytes)
    EEPROM_ENABLE = yes             # Store keyboard settings in EEPROM like default layer and what operative system is in use.
    TAP_DANCE_ENABLE = yes          # tap or hold keys                          (1176 bytes)
    WPM_ENABLE = no                 # Count words per minute                    ( 922 bytes)
    UNICODEMAP_ENABLE = no          # Use unicode to send unicode strings       ( 758 bytes)
    LTO_ENABLE = yes                # Massively reduce the size                (-3300 bytes)
    DEBOUNCE_TYPE = sym_eager_pr    # Lower the inputlag
    DYNAMIC_TAPPING_TERM_ENABLE = no# To dynamicly lower or raise TAPPING_TERM  ( 662 bytes)
    WINDOWS_ENABLE = yes            # Macro support for Windows
    APPLE_ENABLE = yes              # Macro support for MacOS
    LINUX_ENABLE = yes              # Macro support for Linux
    #MUSIC_ENABLE = no
endif


SRC += features/settings/settings.c

ifeq ($(strip $(WINDOWS_ENABLE)), yes)
 OPT_DEFS += -DWINDOWS_ENABLE
endif

ifeq ($(strip $(APPLE_ENABLE)), yes)
    OPT_DEFS += -DAPPLE_ENABLE
endif

ifeq ($(strip $(LINUX_ENABLE)), yes)
    OPT_DEFS += -DLINUX_ENABLE
endif

ifeq ($(strip $(EEPROM_ENABLE)), yes)
    OPT_DEFS += -DEEPROM_ENABLE
endif

ifeq ($(strip $(NKRO_ENABLE)), yes)
    OPT_DEFS += -DNKRO_ENABLE
endif

ifeq ($(strip $(DYNAMIC_TAPPING_TERM_ENABLE)), yes)
    OPT_DEFS += -DDYNAMIC_TAPPING_TERM_ENABLE
endif

ifeq ($(strip $(BOOTMAGIC_ENABLE)), yes)
    OPT_DEFS += -DBOOTMAGIC_ENABLE
endif

# Source to include
ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += features/oled/oled.c \
           features/hand_swap/hand_swap.c \
           features/oled/pages/main/oled-main.c \
           features/oled/pages/main/oled-main-mods.c \
           features/oled/pages/main/oled-main-os-logo.c \
           features/oled/pages/main/oled-main-hand-swapped.c \
           features/oled/pages/main/oled-main-layers.c \
           features/oled/pages/main/oled-main-bottom-status.c

    ifeq ($(strip $(OLED_HELP_ENABLE)), yes)
        OPT_DEFS += -DOLED_HELP_ENABLE
        SRC += features/oled/pages/help/oled-help.c
    endif

    ifeq ($(strip $(OLED_STARTUP_LOGO_ENABLE)), yes)
        SRC += features/oled/pages/startup/oled-startup.c
        OPT_DEFS += -DOLED_STARTUP_LOGO_ENABLE
    endif

    ifeq ($(strip $(LEADER_ENABLE)), yes)
        SRC += features/leader/leader.c features/oled/pages/leader/oled-leader-common.c
        ifeq ($(strip $(LEADER_NO_TIMEOUT)), yes)
            SRC += features/oled/pages/leader/oled-leader-no-timeout.c
            OPT_DEFS += -DLEADER_NO_TIMEOUT
        else
            SRC += features/oled/pages/leader/oled-leader.c
        endif
        
    endif
endif

ifeq ($(strip $(MACROS_ENABLE)), yes)
    OPT_DEFS += -DMACROS_ENABLE
    SRC += features/macro/macro.c
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    OPT_DEFS += -DTAP_DANCE_ENABLE
    SRC += features/tap-dance/tap-dance.c
endif
