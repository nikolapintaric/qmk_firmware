/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "pok4r.h"

#define TRNS KC_TRNS


enum pok4r_layers {
  _WORKMAN,
	_QWERTY,
  _NUMERIC,
	_FN
};


  /* Trans
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
   * |----------------------------------------------------------------------------------       +
   * |         |     |     |     |  .  |     |     |  .  |     |     |     |     |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |     |     |     |     |                 |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       |       |       |       |
   * `-----------------------------------------------------------------------------------------'
   *
	[_TRNS] = KEYMAP(
			TRNS, TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
			TRNS,  TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,        \
			TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,  \
			TRNS,    TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
			TRNS,   TRNS,     TRNS,             TRNS,                           TRNS,   TRNS,   TRNS,   TRNS),
  */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * | Grv |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |        |
   * |----------------------------------------------------------------------------------  ENT  +
   * | Esc/FN  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |  \  |       |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      Shift      |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  GUI  |  Alt  |              Space              |  Alt  |  GUI  |  L1   | Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
	[_QWERTY] = KEYMAP(
			KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,  KC_EQL, KC_BSPC, \
			KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,      \
			LT(_FN, KC_ESC), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,  \
			KC_LSPO, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, \
			KC_LCPO, KC_LGUI, KC_LALT,          KC_SPC,                     KC_RALT, KC_LEFT, KC_BSPC, KC_PAUSE),

  /* Workman
   * ,-----------------------------------------------------------------------------------------.
   * | Grv |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   |  Q  |  D  |  R  |  W  |  B  |  J  |  F  |  U  |  P  |  ;  |  [  |  ]  |        |
   * |----------------------------------------------------------------------------------  ENT  +
   * | Esc/FN  |  A  |  S  |  H  |  T  |  G  |  Y  |  N  |  E  |  O  |  I  |  '  |  \  |       |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |  Z  |  X  |  M  |  C  |  V  |  K  |  L  |  ,  |  .  |  /  |      Shift      |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  GUI  |  Alt  |              Space              |  Alt  |  GUI  |  L1   | Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
	[_WORKMAN] = KEYMAP(
			KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
			KC_TAB, KC_Q,   KC_D,   KC_R,   KC_W,   KC_B,   KC_J,   KC_F,   KC_U,   KC_P,   KC_SCLN,KC_LBRC,KC_RBRC, \
			LT(_FN, KC_ESC), KC_A,   KC_S,   KC_H,   KC_T,   KC_G,   KC_Y,   KC_N,   KC_E,   KC_O,   KC_I,   KC_QUOT, KC_BSLS, KC_ENT,  \
			KC_LSPO, KC_Z,   KC_X,   KC_M,   KC_C,   KC_V,   KC_K,   KC_L,   KC_COMM,KC_DOT, KC_SLSH,   KC_RSPC, \
			KC_LCPO, KC_LGUI, KC_LALT,          KC_SPC,                     KC_LALT, KC_RGUI, KC_BSPC, KC_RCPC),

  /* Numeric
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |NUMLK|  EQ |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |  /  |  7  |  8  |  9  |  -  |     |     |     |        |
   * |----------------------------------------------------------------------------------       +
   * |         |     |     |     |  .  |  *  |  4  |  5  |  6  |  +  |     |     |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |  0  |  1  |  2  |  3  | DOT |     |                 |
   *
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |  ENT  |       |       |       |
   * `-----------------------------------------------------------------------------------------'
   */
	[_NUMERIC] = KEYMAP(
			TRNS,  TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   KC_NLCK,   KC_PEQL,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, \
			TRNS,   TRNS,   TRNS,   TRNS,   TRNS,KC_PSLS,   KC_P7,   KC_P8,   KC_P9, KC_PMNS,   TRNS,   TRNS,   TRNS,        \
			TRNS,    TRNS,   TRNS,   TRNS,   TRNS,KC_PAST,   KC_P4,   KC_P5,   KC_P6, KC_PPLS,   TRNS,   TRNS,   TRNS,   TRNS,  \
			TRNS,     TRNS,   TRNS,   TRNS,   TRNS,  KC_P0,   KC_P1,   KC_P2,   KC_P3, KC_PDOT,   TRNS,   TRNS, \
			TRNS,    TRNS,     TRNS,             TRNS,                          KC_PENT,   TRNS,   TRNS,   TRNS),
  

  /* Function
   * ,-----------------------------------------------------------------------------------------.
   * |     | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |   Delete  |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     | MPLY| MPRV| VOLD| VOLU| MNXT| MSEL|     |     |        |
   * |----------------------------------------------------------------------------------       +
   * |         |     |     |     |     |     | LEFT| DOWN|  UP |RIGHT|     |     |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |           | PSCR|SLEEP|SYSRQ|     |     | HOME| PGDN| PGUP| END |     |                 |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       |       |       |       |
   * `-----------------------------------------------------------------------------------------'
   */
	[_FN] = KEYMAP(
			KC_CAPS, KC_F1, KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12, KC_DEL, \
			TRNS, TRNS,   TRNS,   TRNS,   TRNS,  KC_MPLY,  KC_MPRV,   KC_VOLD,   KC_VOLU,   KC_MNXT,   KC_MSEL,   TRNS, TRNS,      \
			TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,    KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,   TRNS,TRNS,TRNS,TRNS,  \
			TRNS,KC_PSCR, KC_SLEP, KC_SYSREQ,   TRNS,   TRNS,   KC_HOME,   KC_PGDN,   KC_PGUP,  KC_END, TRNS, TRNS, \
			TRNS,TRNS,TRNS,          KC_LEAD,                     TRNS, TRNS,RESET, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {

};



void matrix_init_user (void) {
  if (!(host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))) {
      register_code(KC_NUMLOCK);
      unregister_code(KC_NUMLOCK);
  }
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
	LEADER_DICTIONARY() {
		leading = false;
		leader_end();

		SEQ_ONE_KEY(KC_W) {
			layer_move(_WORKMAN);
		}
		SEQ_ONE_KEY(KC_Q) {
			layer_move(_QWERTY);
		}
    SEQ_ONE_KEY(KC_N) {
      layer_move(_NUMERIC);
    }
	}
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

}
