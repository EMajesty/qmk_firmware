// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,       /**/ KC_Y,          KC_U,   KC_I,       KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,       /**/ KC_H,          KC_J,   KC_K,       KC_L,   KC_SCLN,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       /**/ KC_N,          KC_M,   KC_COMMA,   KC_DOT, KC_SLASH,
                                KC_SPC, KC_OSL(1),  /**/ KC_OSL(2),     KC_LSFT
    )
    [1] = LAYOUT_split_3x5_2(
        KC_ESC,                         KC_LCBR,                        KC_LBRC,                        KC_LPRN,                        KC_NO,                /**/ KC_NO,               KC_RPRN,    KC_RBRC,    KC_RCBR,    KC_NO,
        OSM(MOD_LGUI),    OSM(MOD_LALT),    OSM(MOD_LCTL),    OSM(MOD_LSFT),    KC_NO,                /**/ KC_LEFT,           KC_DOWN,    KC_UP,      KC_RIGHT,   KC_NO,
        KC_NO,                            KC_NO,                            KC_NO,                            KC_NO,                            KC_NO,                /**/ KC_NO,               KC_NO,        KC_NO,        KC_NO,        KC_SLASH,
                                                                                                        KC_SPC,                         KC_OSL(1),   /**/ KC_OSL(2),  KC_LSFT
    )
    [2] = LAYOUT_split_3x5_2(
        KC_NO,   KC_7,   KC_8,   KC_9,   KC_NO,       /**/ KC_NO,       KC_NO,   KC_NO,       KC_NO,   KC_NO,
        KC_NO,   KC_4,   KC_5,   KC_6,   KC_NO,       /**/ KC_NO,       OSM(MOD_RSFT),   OSM(MOD_RCTL),    OSM(MOD_RALT),    OSM(MOD_RGUI),
        KC_0,   KC_1,   KC_2,   KC_3,   KC_NO,      /**/ KC_NO,       KC_NO,   KC_NO,   KC_NO, KC_NO,
                                KC_SPC, KC_OSL(1), /**/ KC_OSL(2),  KC_LSFT
    )
    [3] = LAYOUT_split_3x5_2(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,       /**/ KC_Y,       KC_U,   KC_I,       KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,       /**/ KC_H,       KC_J,   KC_K,       KC_L,   KC_SCLN,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       /**/ KC_N,       KC_M,   KC_COMMA,   KC_DOT, KC_SLASH,
                                KC_SPC, KC_OSL(1),  /**/ KC_OSL(2),  KC_LSFT
    )
    [4] = LAYOUT_split_3x5_2(
        KC_NO,   KC_NO,   KC_W,   KC_NO,   KC_NO,       /**/ KC_NO,       KC_NO,   KC_NO,       KC_NO,   KC_NO,
        KC_NO,   KC_A,   KC_S,   KC_D,   KC_NO,       /**/ KC_NO,       KC_NO,   KC_NO,       KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       /**/ KC_NO,       KC_NO,   KC_NO,   KC_NO, KC_NO,
                                KC_SPC, KC_OSL(1), /**/ KC_OSL(2),  KC_LSFT
    )
};
