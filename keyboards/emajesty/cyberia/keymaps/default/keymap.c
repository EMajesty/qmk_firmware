// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   q │   w │   e │   r │   t │  │   y │   u │   i │   o │   p │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │ LGUI│ LALT│ LCTL│ LSFT│     │  │     │ RSFT│ RCTL│ RALT│ RGUI│
     * │   a │   s │   d │   f │   g │  │   h │   j │   k │   l │   ; │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   z │   x │   c │   v │   b │  │   n │   m │   , │   . │   / │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │   M0│  │   M1│     │     │
     *             │  TAB│  SPC│  DEL│  │  ENT│  BSP│ RALT│
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [0] = LAYOUT(
        KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O, KC_P,
        GUI_T(KC_A), ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F),  KC_G,   KC_H, SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN),
        KC_Z, KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                      KC_TAB, KC_SPC, LT(1, KC_DEL),   LT(2, KC_ENT), KC_BSPC, KC_RALT
    ),

    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │     │     │     │     │     │  │     │     │     │     │     │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │     │     │     │     │     │  │     │     │     │     │     │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │     │     │     │     │     │  │     │     │     │     │     │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │     │  │     │     │     │
     *             │     │     │     │  │     │     │     │
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [1] = LAYOUT(
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
                      KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS
    ),

    /*
     * ┌─────┬─────┬─────┬─────┬─────┐  ┌─────┬─────┬─────┬─────┬─────┐
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   1 │   2 │   3 │   4 │   5 │  │   6 │   7 │   8 │   9 │   0 │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   ! │   @ │   # │   $ │   % │  │   ^ │   & │   * │     │     │
     * ├─────┼─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┼─────┤
     * │     │     │     │     │     │  │     │     │     │     │     │
     * │   z │   x │   c │   v │   b │  │   n │   m │   , │   . │   / │
     * └─────┴─────┼─────┼─────┼─────┤  ├─────┼─────┼─────┼─────┴─────┘
     *             │     │     │   M0│  │   M1│     │     │
     *             │  TAB│  SPC│  DEL│  │  ENT│  BSP│ RALT│
     *             └─────┴─────┴─────┘  └─────┴─────┴─────┘
     */
    [2] = LAYOUT(
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
        KC_P7, KC_P8, KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS, KC_P9, KC_PSLS,
                      KC_P9, KC_PSLS, KC_P9,   KC_PSLS, KC_P9, KC_PSLS
    ),
};
