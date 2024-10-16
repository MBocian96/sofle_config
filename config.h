#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
 /* Copyright 2021 Dane Evans
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
  #pragma once


//#define USE_MATRIX_I2C

/* Select hand configuration */

///https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/


#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define CUSTOM_FONT

#define CUSTOM_LAYER_READ //if you remove this it causes issues - needs better guarding


#define TAPPING_FORCE_HOLD
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
#define ENCODER_DIRECTION_FLIP


#define RGBLIGHT_SLEEP
//
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define RGB_DI_PIN D3


#ifdef RGB_MATRIX_ENABLE
#define RGBLED_NUM 35    // Number of LEDs
#define RGBLED_NUM 35    // Number of LEDs
#define DRIVER_LED_TOTAL RGBLED_NUM
#endif

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM

    //#define RGBLIGHT_ANIMATIONS
	#define RGBLIGHT_EFFECT_BREATHING
	// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
	// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	// #define RGBLIGHT_EFFECT_SNAKE
	// #define RGBLIGHT_EFFECT_KNIGHT
	// #define RGBLIGHT_EFFECT_CHRISTMAS
	#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	//#define RGBLIGHT_EFFECT_RGB_TEST
	//#define RGBLIGHT_EFFECT_ALTERNATING
	#define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLED_NUM 70
	//#define RGBLED_SPLIT
	#define RGBLED_SPLIT { 35, 35 } // haven't figured out how to use this yet

	//#define RGBLED_NUM 30
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
// #define TAPPING_TERM_PER_KEY

//backlight
#define BACKLIGHT_PIN B7
// #define BACKLIGHT_LEVELS 7
// #define BACKLIGHT_CAPS_LOCK 
// #define BACKLIGHT_BREATHING
// #define BREATHING_PERIOD 6
// #define BACKLIGHT_ON_STATE 1
// #define BACKLIGHT_LIMIT_VAL 255
// #define BACKLIGHT_DEFAULT_LEVEL BACKLIGHT_LEVELS
// #define BACKLIGHT_DEFAULT_BREATHING 

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
//-------- CONFIGURATION START --------
#ifndef FAST_TYPE_WPM
    #define FAST_TYPE_WPM 45 //Switch to fast animation when over words per minute
#endif
//-------- CONFIGURATION END--------
