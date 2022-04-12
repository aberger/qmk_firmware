/* Copyright 2019 mechmerlin
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
#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_WHITE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif

enum unicode_names {
    MF
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
			case MF:
			    SEND_STRING(SS_LALT("0xD83D+0xDD95"));
			    return false;
			default:
				return true;
      }
  }
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	/* [0]
	* ,-----------------------------------------------------------------------------------.
	* | TAB  |   Q  |   W  |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | BSCP |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | ESC  |   A  |   S  |  D   |  F   |  G   |  H   |  J   |  K   |  L   |    ENT      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | SHIFT       |   Z  |  X   |  C   |  V   |  B   |  N   |  M   |  .<  |  UP  |  ,>  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | CTRL |  ALT |  CMD |      MO        |       SPC       |  FN  | LEFT | DWN  | RGHT |
	* `-----------------------------------------------------------------------------------'
	*/
	
	/* [1]
	* ,-----------------------------------------------------------------------------------.
	* |  `~  |  1!  |  2@  |  3#  |  4$  |  5%  |  6^  |  7&  |  8*  |  9(  |  0)  | DEL  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | RESET|  [{  |  }]  |  \|  |  ;:  |  "'  |  /?  |  -_  |  =+  | -NO- |    ENT      |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | SHIFT       |RG_TOG| MUTE | VOL- | VOL+ | BRN- | BRN+ | SLEEP|  .<  |  UP  |  ,>  |
	* |------+------+------+------+------+------+------+------+------+------+------+------|
	* | CTRL |  ALT |  CMD |      MO        |       SPC       |  🖕  | LEFT | DWN  | RGHT |
	* `-----------------------------------------------------------------------------------'
	*/
	
	
[0] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_UP,   KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI,  LT(1, KC_SPC),                 KC_SPC,              KC_APPLE_FN,   KC_LEFT, KC_DOWN, KC_RGHT
),
[1] = LAYOUT(
    KC_GRAVE,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE,
    RESET,   KC_LBRACKET, KC_RBRACKET,  KC_BSLASH,  KC_SCOLON, KC_QUOTE, KC_SLASH, KC_MINUS, KC_EQUAL, XXXXXXX, _______,
    _______,          RGB_TOG, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, KC_SYSTEM_SLEEP, _______, _______, _______,
    _______, _______, _______, _______,                _______,             MF, _______, _______, _______
),

};

