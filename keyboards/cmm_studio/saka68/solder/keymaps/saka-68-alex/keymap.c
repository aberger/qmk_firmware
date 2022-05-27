/* Copyright 2020 CMM.Studio Freather
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_68_ansi(
        KC_GRAVE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,            KC_APPLE_FN,  KC_DEL,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,           KC__MUTE,  MO(1),
        KC_ESC,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,
        KC_LCTL,   KC_LALT,   KC_LGUI,                       KC_SPC,                              KC_RGUI,   KC_RALT,     KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_68_ansi(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,            KC_TRNS, KC_TRNS,
        KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,                       KC_TRNS,                             KC_TRNS,   KC_TRNS,   KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    ),

};


/* [0]
* ,--------------------------------------------------------------------------------------------------------.
* |  `~  |  1!  |  2@  |  3#  |  4$  |  5%  |  6^  |  7&  |  8*  |  9(  |  0)  |  _-  |  +=  |     BSCP    |    ,-------------.
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    |  FN  | DEL  |
* | TAB    |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |  O  |   P   |  [{  |  }]  |    |\     |    |------+------|
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    | MUTE |  MO  |
* | ESC       |   A  |   S  |  D   |  F   |  G   |  H   |  J   |  K   |  L  |   :;  |  "'  |       ENT     |    `-------------'
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|           ,------.
* | SHIFT       |   Z  |  X   |  C   |  V   |  B   |  N   |  M   |  <,  |  >.  |  ?/  |        SHIFT       |           |  UP  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    ,------+------+------.
* | CTRL | ALT | CMD |                              SPC                                 | CMD | ALT | CTRL |    | LEFT | DOWN | RGHT |
* `--------------------------------------------------------------------------------------------------------'    `--------------------'
*/

/* [1]
* ,--------------------------------------------------------------------------------------------------------.
* | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |     BSCP    |    ,-------------.
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    |      |      |
* | TAB    |      |      |      |      |      |      |      |      |      |      |      |      |           |    |------+------|
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    |      |      |
* | ALT       |      |      |      |      |      |      |      |      |     |       |      |       ENT     |    `-------------'
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|           ,------.
* | SHIFT       |      |      |      |      |      |      |      |      |      |      |        SHIFT       |           |  UP  |
* |------+------+------+------+------+------+------+------+------+------+------+------+------+------+------|    ,------+------+------.
* | CTRL | ALT | CMD |                              SPC                                 | CMD |MO(1)| CTRL |    | LEFT | DOWN | RGHT |
* `--------------------------------------------------------------------------------------------------------'    `--------------------'
*/