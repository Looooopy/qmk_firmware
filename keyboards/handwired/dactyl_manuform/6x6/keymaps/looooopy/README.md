
# Looooopy setup

This dactyl manuform is setup with the following hardware

* Pro micro (hopefully replaced with blackpill)
* OLED Display 128X64 with chip SH1106
* Gateron black switches
* Hotswap sockets

Paintjob:

* Sprayed with 1K steel plastic to fill printing layer lines
* Sprayed with White blank
* Airbrushed predator motive
* Sprayed with clear coat

Custom design and print:

* Wrist rest
* Oled lids

## Leader

### Settings

#### Home row

This leader macro will enable and disable home row modifiers.

Think: Settings Enable Home Row

    <Leader>sehr

Think: Settings Disable Home Row

    <Leader>sdhr

You can always toggle the home row on settings layer.

    key F8 => S_TOG_HR

#### NKRO

Switch between 6KRO and NKRO.

You can always toggle the home row on settings layer.

    key F7 => TOG_NKRO

### TODO

#### MacOS

[Change Layout](https://apple.stackexchange.com/questions/238064/change-shortcut-to-change-input-source-keyboard-language)

#### Windows

Install Layout

- Swedish (Sweden) keyboard
- English (Unitied States) keyboard

##### Shortcuts:
[Registry Description](https://renenyffenegger.ch/notes/Windows/registry/tree/HKEY_CURRENT_USER/Control-Panel/Input-Method/Hot-Keys/index)

###### Swedish (Sweden)
Shortcut: LEFT ALT + SHIFT + 0

[HKEY_CURRENT_USER\Control Panel\Input Method\Hot Keys\00000101]
"Virtual Key"=hex:30,00,00,00
"Key Modifiers"=hex:05,c0,00,00
"Target IME"=hex:1d,04,1d,04


###### English (Unitied States)
Shortcut: LEFT ALT + SHIFT + 1

[HKEY_CURRENT_USER\Control Panel\Input Method\Hot Keys\00000100]
"Virtual Key"=hex:31,00,00,00
"Key Modifiers"=hex:05,c0,00,00
"Target IME"=hex:09,04,09,04