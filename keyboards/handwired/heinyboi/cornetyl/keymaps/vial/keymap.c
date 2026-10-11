#include QMK_KEYBOARD_H

// Layer 0 is the factory base. Layers 1-3 mirror it so a factory reset
// never leaves Vial showing uninitialized layers; customize in Vial.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                               KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_MINS,          KC_EQL,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_BSLS,          KC_GRV,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RALT,
                          KC_LALT, KC_LGUI, KC_SPC,  KC_TAB,  KC_BSPC,          KC_DEL,  KC_ENT,  KC_LSFT, KC_RCTL, KC_ENT
    ),
    [1] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                               KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_MINS,          KC_EQL,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_BSLS,          KC_GRV,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RALT,
                          KC_LALT, KC_LGUI, KC_SPC,  KC_TAB,  KC_BSPC,          KC_DEL,  KC_ENT,  KC_LSFT, KC_RCTL, KC_ENT
    ),
    [2] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                               KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_MINS,          KC_EQL,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_BSLS,          KC_GRV,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RALT,
                          KC_LALT, KC_LGUI, KC_SPC,  KC_TAB,  KC_BSPC,          KC_DEL,  KC_ENT,  KC_LSFT, KC_RCTL, KC_ENT
    ),
    [3] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                               KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_MINS,          KC_EQL,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_BSLS,          KC_GRV,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RALT,
                          KC_LALT, KC_LGUI, KC_SPC,  KC_TAB,  KC_BSPC,          KC_DEL,  KC_ENT,  KC_LSFT, KC_RCTL, KC_ENT
    )
};
