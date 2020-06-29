/* Copyright 2019 Ross Baquir
 * based of the original layout by Carlos Filoteo
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

#define L3_QUOT LT(3, KC_QUOT)
#define TB_LSFT LSFT_T(KC_TAB)




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer
   * ,-------------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |Bspace |
   * |-------------------------------------------------------------------------+
   * | Ctrl |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | '/L3 |
   * |-------------------------------------------------------------------------+
   * | Tab/Sh|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |Sh/En|
   * |-------------------------------------------------------------------------+
   * | Caps|  L2 | Alt | Gui |  L1  |   Space   |  L1  | Left| Down|  Up |Right|
   * `-------------------------------------------------------------------------'
   */

LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, L3_QUOT,
  TB_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  KC_CAPS, MO(2),   KC_LALT, KC_LGUI, MO(1),      KC_SPC,        MO(1),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

  /* FN Layer 1
   * ,-------------------------------------------------------------------------.
   * |  `  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |   \   |
   * |-------------------------------------------------------------------------+
   * |  ~   |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  |   |
   * |-------------------------------------------------------------------------+
   * |       |  {  |  }  |  [  |  ]  |     |     |  =  |  +  |  -  |  _  |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |     |     |     |     |
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* RAISE */
  KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
  KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE,
  _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______, _______, KC_EQL,  KC_PLUS, KC_MINS, KC_UNDS, _______,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

  /* FN Layer 2
   * ,-------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |BriDn|BriUp|PrtSc|Insrt| Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     | Left| Down|  Up |Right|     |      |
   * |-------------------------------------------------------------------------+
   * |       |Mute |Vol- |Vol+ |     |     | Home| PgDn| PgUp| End |     |     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |MousL|MousD|MousU|MousR|
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Fn */
  _______, _______, _______, _______, _______, _______, _______, KC_BRID, KC_BRIU, KC_PSCR, KC_INS,  KC_DEL,
  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PERC, _______,
  _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_RPRN, _______,
  _______, _______, _______, _______, _______,     _______,      _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
),

  /* FN Layer 3
   * ,-------------------------------------------------------------------------.
   * |     | F1  | F2  | F3  | F4  |     |     |     |     |     |     |       |
   * |-------------------------------------------------------------------------+
   * |      | F5  | F6  | F7  | F8  |     |     |RGBOn|RGBMd|RGBUp|RGBDn|      |
   * |-------------------------------------------------------------------------+
   * |       | F9  | F10 | F11 | F12 |     |     |RGBH+|RGBH-|RGBS+|RGBS-|     |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |     |     |     |     |
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Hyper */
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,    _______, _______, _______, _______, _______, _______, _______,
  _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,    _______, _______, RGB_TOG, RGB_MOD, RGB_VAI, RGB_VAD, _______,
  _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,   _______, _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______,
  _______, _______, _______, _______, _______,     _______,       _______, _______, _______, _______, _______
)
};
