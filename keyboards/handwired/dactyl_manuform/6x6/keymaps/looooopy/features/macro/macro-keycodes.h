#pragma once

// #include QMK_KEYBOARD_H

enum custom_keycodes {
    // A=Apps
    A_STEAM = SAFE_RANGE,
    A_BNET,
    A_UPLAY,
    A_EPICG,
    A_ROCKG,
    A_SKYPE,
    A_DISCO,
    A_SLACK,
    A_CODE,
    // O=OLED
    O_HELP,
    O_UP,
    O_DOWN,
    O_LEFT,
    O_RIGHT,
    O_ACCPT,
    O_CANCL,
    M_LOCKSC,
    M_COPY,
    M_PASTE,
    S_TOG_HR,
    SAVE_EPR,
    TEST_MODE
};

// SS_LCTL(string) = left Ctrl
// SS_LSFT(string) = left Shift
// SS_LALT(string) = left Alt (Option key ⌥ on Mac)
// SS_LGUI(string) = left GUI (Win key ⊞ on Windows, Cmd key ⌘ on Mac)

// Windows
// May need to tweak on diffrent systems if apps do not start
#define WIN_OS_WAIT 200             // USB pulling 125 micro seconds

// Window handling
#define WIN_CLOSE_WINDOW            SEND_STRING(SS_LALT(X_F4))
#define WIN_MONITORING              SEND_STRING(SS_LCTL(SS_LSFT(X_ESC)))
// Requires install and setup (See README.md)
#define WIN_KEYBOARD_US             SEND_STRING(SS_LALT(SS_LSFT(X_1)))
#define WIN_KEYBOARD_SE             SEND_STRING(SS_LALT(SS_LSFT(X_0)))
#define WIN_LOCK_SCREEN             SEND_STRING(SS_LGUI(SS_TAP(X_L)) "()")
#define WIN_COPY                    SEND_STRING(SS_LCTRL("c"));
#define WIN_PASTE                   SEND_STRING(SS_LCTRL("v"));

// Gaming
#define WIN_START_STEAM             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "steam"                    SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_BATTLE_NET        SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "battle net"               SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_UPLAY             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "uplay"                    SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_EPIC_GAMES        SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "epic games launcher"      SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_ROCKSTAR_GAMES    SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "rockstar games launcher"  SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))

// Communcation
#define WIN_START_SKYPE             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "skype"                    SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_DISCORD           SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "discord"                  SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_SLACK             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "slack"                    SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))

// Coding
#define WIN_START_VSCODE            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "visual studio code"       SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_RIDER             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "rider"                    SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))
#define WIN_START_TERMINAL          SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(WIN_OS_WAIT) "Windows Terminal"         SS_DELAY(WIN_OS_WAIT) SS_TAP(X_ENT))

// MAC OS
// May need to tweak on diffrent systems if apps do not start
#define MAC_OS_WAIT 200             // USB pulling 125 micro seconds

// Window handling
#define MAC_CLOSE_WINDOW            SEND_STRING(SS_LGUI(X_W))
#define MAC_MONITORING              SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(MAC_OS_WAIT) "activity monitor"         SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_LOCK_SCREEN             SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_Q))) "()")

// Gaming
#define MAC_SPOTL_STEAM             SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "rockstar games launcher"    SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_BATTLE_NET        SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "battle net"                 SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_UPLAY             SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "uplay"                      SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_EPIC_GAMES        SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "epic games launcher"        SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_ROCKSTAR_GAMES    SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "rockstar games launcher"    SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))

// Communcation
#define MAC_SPOTL_SKYPE             SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "skype"                      SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_DISCORD           SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "discord"                    SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_SPOTL_SLACK             SEND_STRING(SS_LGUI(" ") SS_DELAY(MAC_OS_WAIT) "slack"                      SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))

// Coding
#define MAC_START_VSCODE            SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(MAC_OS_WAIT) "code"                     SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_START_RIDER             SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(MAC_OS_WAIT) "rider"                    SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))
#define MAC_START_TERMINAL          SEND_STRING(SS_TAP(X_LGUI) SS_DELAY(MAC_OS_WAIT) "iterm2"                   SS_DELAY(MAC_OS_WAIT) SS_TAP(X_ENT))

#define LINUX_LOCK_SCREEN             SEND_STRING(SS_LCTL(SS_LALT(SS_TAP(X_L))) "()")


// General terminal apps
// Terminal commands
#define TERMINAL_NVIM               SEND_STRING("nvim" SS_TAP(X_ENT))
#define TERMINAL_TMUX               SEND_STRING("tmux" SS_TAP(X_ENT))
#define TERMINAL_TMUX_ATTACH        SEND_STRING("tmux a #" SS_TAP(X_ENT))
#define TERMINAL_DOCKER_PS          SEND_STRING("docker ps" SS_TAP(X_ENT))
#define TERMINAL_DOCKER_COMPOSE_PS  SEND_STRING("docker-compose ps" SS_TAP(X_ENT))
