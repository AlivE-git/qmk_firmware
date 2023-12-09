// #include QMK_KEYBOARD_H
#include <stdio.h>
// #include "menu.c"

typedef enum
{
  MENU_UNDERGLOW,
  MENU_OLED,
  MENU_KEYS,
  MENU_KEYBOARD,
  MENU_BACK,
  MENU_LENGHT,
} MENU;

const char* menuText[] = {
  [MENU_UNDERGLOW] = " UNDERGLOW SETTINGS  ",
  [MENU_OLED]      = " OLED SETTINGS       ",
  [MENU_KEYS]      = " FN KEYS INFO        ",
  [MENU_KEYBOARD]  = " FIRMWARE SETTINGS   ",
  [MENU_BACK]      = " < BACK              ",
};

typedef enum
{
  UNDERGLOW_SETTINGS_ENABLE,
  // UNDERGLOW_SETTINGS_MODE,
  UNDERGLOW_SETTINGS_HUE,
  UNDERGLOW_SETTINGS_SATURATION,
  UNDERGLOW_SETTINGS_BRIGHTNESS,
  UNDERGLOW_SETTINGS_BACK,
  UNDERGLOW_SETTINGS_LENGHT,
} UNDERGLOW_SETTINGS;

const char* underglowSettingsText[] = {
[UNDERGLOW_SETTINGS_ENABLE]       = " ENABLE              ",
  // [UNDERGLOW_SETTINGS_MODE]       = " 123                 ",
  [UNDERGLOW_SETTINGS_HUE]        = " HUE                 ",
  [UNDERGLOW_SETTINGS_SATURATION] = " SATURATION          ",
  [UNDERGLOW_SETTINGS_BRIGHTNESS] = " BRIGHTNESS          ",
  [UNDERGLOW_SETTINGS_BACK]       = " < BACK              ",
};

typedef enum
{
  OLED_SETTINGS_ENABLE,
  OLED_SETTINGS_BRIGHTNESS,
  OLED_SETTINGS_TIMEOUT,
  // OLED_SETTINGS_CAPSLOCK, //caps status
  // OLED_SETTINGS_CAPSLOCK_always_on, //не выключать дисплей при капслоке
  OLED_SETTINGS_BACK,
  OLED_SETTINGS_LENGHT,
} OLED_SETTINGS;

const char* oledSettingsText[] = {
  [OLED_SETTINGS_ENABLE]      = " BONGO ENABLE        ",
  [OLED_SETTINGS_BRIGHTNESS]  = " BRIGHTNESS          ",
  [OLED_SETTINGS_TIMEOUT]     = " TIMEOUT             ",
  // [OLED_SETTINGS_CAPSLOCK]    = " CAPS LOCK",
  [OLED_SETTINGS_BACK]        = " < BACK              ",
};

const char* keysText[] = {
  [0] = "Q  E   RT  YU  IO DHE",
  [1] = "Ut Um H-+ S-+ B-+ M-+",
  [2] = "A   SD  FG Esc  F5   ",
  [3] = "Ot B-+ T-+ BOOT EECLR",
};

typedef enum
{
  KEYBOARD_SETTINGS_BOOT,
  KEYBOARD_SETTINGS_EECLR,
  KEYBOARD_SETTINGS_RESET,
  KEYBOARD_SETTINGS_BACK,
  KEYBOARD_SETTINGS_LENGHT,
} KEYBOARD_SETTINGS;

const char* keyboardSettingsText[] = {
  [KEYBOARD_SETTINGS_BOOT]  = " BOOTLOADER MODE     ",
  [KEYBOARD_SETTINGS_EECLR] = " WIPING EEPROM       ",
  [KEYBOARD_SETTINGS_RESET] = " SOFT RESET          ",
  [KEYBOARD_SETTINGS_BACK]  = " < BACK              ",
};
