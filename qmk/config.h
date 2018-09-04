#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    GeeWizWow
#define PRODUCT         Jalapeno
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { F1, F4, F5, F0 }
#define MATRIX_COL_PINS { B6, B7, C6, C7, D0, D1, D2, D3, D6, D7, F6, F7 }
#define UNUSED_PINS

#define RGB_DI_PIN D5     // The pin the LED strip is connected to
#define RGBLED_NUM 8     // Number of LEDs in your strip
#define RGBLIGHT_SLEEP
#define RGBLIGHT_ANIMATIONS

/* number of backlight levels */
#define BACKLIGHT_PIN B5
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif

/* BATTERY LEVEL */
// #define BATTERY_PIN 9
// #define BATTERY_POLL 5000
// #define MAX_VOLTAGE 4.2
// #define MIN_VOLTAGE 3.2

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif