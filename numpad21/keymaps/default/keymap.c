// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
	ZM_MUTE = SAFE_RANGE,
	ZM_LEAV, 
	FNDR
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch(keycode){
		case ZM_MUTE:
			if (record->event.pressed) {
				SEND_STRING(SS_LGUI("A"));
			} else {
				// do nothing when released
			}
			break;
		case ZM_LEAV:
			if (record->event.pressed) {
				SEND_STRING(SS_LALT("w"));
			} else {
				// do nothing when released
			}
			break;
		case FNDR:
			if (record->event.pressed) {
				SEND_STRING(SS_LGUI(" "));
			} else {
				// do nothing when released
			}
			break;
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_num21(
		ZM_MUTE, ZM_LEAV, FNDR, QK_BOOT, 
		KC_NUM_LOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, 
		KC_P7, KC_P8, KC_P9, KC_NO,
		KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS,
		KC_KP_1, KC_KP_2, KC_KP_3, KC_NO, 
		KC_NO, KC_KP_0, KC_KP_DOT, KC_KP_ENTER)

};