/* Copyright 2017 Wunder
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

// Layer shorthand
enum layer_names {
  _QW,
  _FN,
  _GM,
};

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY */

  [_QW] = LAYOUT_ortho_5x15( /* QWERTY */
    KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,      KC_EQL,   KC_GRV,  KC_BSPACE, 
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,      KC_RBRC,  KC_BSLS,  KC_DEL,   
    KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      KC_INS,   KC_ENT,  KC_HOME,   
    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,      KC_PGDN,  KC_PGUP,  KC_END,  
    KC_LCTL,  KC_LGUI, KC_LGUI, KC_LALT,  MO(_FN),   KC_SPC,  KC_SPC,   MO(_FN), KC_RALT, KC_RGUI, KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RGHT   
  ),

  // Gaming Layouts

  // [_COMP] = LAYOUT_ortho_5x15( /* First Person Shooter Layout */
  //   KC_GESC,  KC_GRV, KC_1,    KC_2,     KC_3, KC_4, KC_5, KC_6,   KC_7, KC_8, KC_9,    KC_0,   KC_MINS, KC_EQL,   KC_BSPACE,
  //   KC_TAB,   KC_5,   KC_4,    KC_Q,     KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,  KC_RBRC, 
  //   KC_CAPS,  KC_3,   KC_2,    KC_A,     KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K,    KC_L,   KC_ENT,  KC_HOME,  KC_ENT,   //@TODO: ENTER -> Momentarily Baselayer 
  //   KC_SCLN,  KC_1,   KC_LSFT, KC_Z,     KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_PGDN,  KC_PGUP, 
  //   KC_LTCL,  KC_LALT,KC_LCTL, KC_LALT,  ____, ____, ____, KC_SPC, ____, ____, ____,    ____,   ____,    ____,     ____ 
  // ),

  /*
   * 
   */
  [_GM] = LAYOUT_ortho_5x15( /* GAMING */
     KC_ESC,   KC_GRV,  KC_1,    KC_2,     KC_3, KC_4, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   ____,   ____,   ____, 
     KC_TAB,   KC_O,    KC_P,    KC_Q,     KC_W, KC_E, KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   ____,   ____, 
     KC_CAPS,  KC_L,    KC_SCLN, KC_A,     KC_S, KC_D, KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   ____,   ____,   TG(_GM), 
     KC_DOT,   KC_COMM, KC_LSFT, KC_Z,     KC_X, KC_C, KC_V,   KC_B,   KC_N,   KC_M,   ____,   ____,   ____,   ____,   ____, 
     KC_LCTL,  KC_LALT, KC_LCTL, KC_LALT,  ____, ____, KC_F1, KC_SPC,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8 
  ),

  

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   | RGB HD | RGB HI | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   | RGB SD | RGB SI | P3     | P5     | P6     | +      |        | RESET  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOL-   | MUTE   | VOL+   | APP    | RGB VD | RGB VI | P1     | P2     | P3     | PENT   |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        | RGB TG | FN     | RGB RMD| RGB MD | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  // [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
  //   ____,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NLCK, KC_ASTR,
  //   KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, RGB_HUD, RGB_HUI,  KC_MINS, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS,  KC_P7,   KC_P8,   KC_P9,  
  //   KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, RGB_SAD, RGB_SAI,  KC_PLUS, _______, RESET,   _______, _______, TG(_GM),  KC_P4,   KC_P5,   KC_P6,  
  //   KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  RGB_VAD, RGB_VAI,  KC_PENT, RGB_RMOD, RGB_MOD, _______, _______, RESET,   KC_P1,   KC_P2,   KC_P3,  
  //   _______, _______, RGB_TOG, _______, MO(_FN), RGB_MOD,  KC_PENT, MO(_FN), _______, _______, _______, _______,  KC_P0,   _______, KC_PDOT
  // )

  [_FN] = LAYOUT_ortho_5x15( /* FUNCTION */
    RESET,    KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_F7,  KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_BSPACE,
    ____,      ____, KC_PSLS,  KC_P7, KC_P8,   KC_P9,   KC_MINS, KC_NLCK,   ____, ____,   ____, ____, ____, ____, ____, 
    ____,      ____, KC_PAST,  KC_P4, KC_P5,   KC_P6,   KC_PLUS, ____,   ____,   ____,    ____, ____, ____, ____, ____, 
    ____, KC_BSPACE, KC_DEL,   KC_P1, KC_P2,   KC_P3,   KC_PENT, ____,   ____,   ____,    ____, TG(_GM), RGB_VAI, RGB_VAD, ____, 
    ____,      ____, KC_PDOT,     KC_P0, KC_PDOT, KC_PENT, TG(_FN), ____,   ____,  MO(_FN),  ____, ____, ____, ____, ____
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _GM:
        rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_setrgb(RGB_RED);
        break;
    case _QW:        
        rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_setrgb(RGB_OFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_setrgb(RGB_OFF);
        break;
  }
  return state;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}


