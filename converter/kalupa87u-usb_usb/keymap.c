/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* ANSI layout
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|    Bsp| |Ins|Hom|PgU|
     * |-----------------------------------------------------------| |-----------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD|
     * |-----------------------------------------------------------| `-----------'
     * |F18  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|   Return|
     * |-----------------------------------------------------------|     ,---.
     * |Shift [  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift ]  |     |Up |
     * |-----------------------------------------------------------| ,-----------.
     * |Ctl |Alt|Gui|           SpaceFN            |Gui|Alt|App|Ctl| |Lef|Dow|Rig|
     * |    |   |Esc|                              |   |   |   |Esc| |   |   |   |
     * `-----------------------------------------------------------' `-----------'
     */
    [0] = KEYMAP(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,   PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,  INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,  DEL, END, PGDN,    P7,  P8,  P9,
    F18, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     FN5,                      P4,  P5,  P6,  PPLS,
    FN2, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          FN3,        UP,           P1,  P2,  P3,
    LCTL,LALT,FN1,           FN0,                     RGUI,RALT,RCTL,FN4,   LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),

    [1] = KEYMAP(
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS,                     TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,SPC, TRNS,TRNS,TRNS,TRNS,          TRNS,       TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),

    [2] = KEYMAP(
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP  ,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,RGHT,     TRNS,                     TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,          TRNS,       TRNS,         TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,               TRNS,               TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS,    TRNS,     TRNS,TRNS
    ),
};

const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ESC),
    [2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_LBRC),
    [3] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_RBRC),
    [4] = ACTION_LAYER_MOMENTARY(2),
    [5] = ACTION_LAYER_TAP_KEY(2,KC_ENT)

};
