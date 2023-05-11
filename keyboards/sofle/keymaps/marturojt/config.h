#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

 //#define USE_MATRIX_I2C

 /* Select hand configuration */

 // #define MASTER_LEFT
#define MASTER_LEFT
#define SPLIT_USB_DETECT
 // #define EE_HANDS

#define SPLIT_WPM_ENABLE
// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 200

#define RGB_DI_PIN D3

 // #undef RGBLED_NUM
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_TWINKLE
#define RGBLED_NUM 12
#define RGBLED_SPLIT { 6, 6 }
// #define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_HUE_STEP 10
// #define RGBLIGHT_SAT_STEP 17
// #define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_SLEEP