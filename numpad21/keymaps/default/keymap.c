// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_num21(
		KC_A, KC_B, KC_C, KC_D, 
		KC_NUM_LOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, 
		KC_P7, KC_P8, KC_P9, KC_NO,
		KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS,
		KC_KP_1, KC_KP_2, KC_KP_3, KC_NO, 
		KC_NO, KC_KP_0, KC_KP_DOT, KC_KP_ENTER)

};