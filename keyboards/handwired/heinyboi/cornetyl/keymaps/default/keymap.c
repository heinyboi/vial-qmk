#include QMK_KEYBOARD_H

/* Define layout layer names */
enum custom_layers {
    _BASE = 0,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    /* 
     * LAYER 0: BASE LAYER (QWERTY)
     * Left side missing Top-Right key | Right side missing Top-Left key
     * Bottom rows missing 2 outer keys on each side (5 active per side)
     */
    [_BASE] = LAYOUT(
        // Left Hand (Top Row has 6 keys)
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,                               KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, // Right Hand (6 keys)
        
        // Left Hand (Home Row has 7 keys)                                            // Right Hand (Home Row has 7 keys)
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_LEFT,          KC_RGHT, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        
        // Left Hand (Third Row has 7 keys)                                           // Right Hand (Third Row has 7 keys)
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_UP,            KC_DOWN, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, KC_RSFT,
        
        // Left Hand (Bottom Row has 5 active keys)                                   // Right Hand (Bottom Row has 5 active keys)
                          KC_LCTL, KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC,    KC_BSPC, KC_ENT,  KC_TAB,  KC_RALT, KC_RCTL
    ),

    /* 
     * LAYER 1: LOWER / FUNCTION LAYER
     * Provides numbers, media controls, and utility functions
     */
    [_LOWER] = LAYOUT(
        // Left Hand
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                               KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  // Right Hand
        
        // Left Hand                                                                  // Right Hand
        KC_TAB,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME,         KC_PGUP, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS,
        
        // Left Hand                                                                  // Right Hand
        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END,          KC_PGDN, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS,
        
        // Left Hand                                                                  // Right Hand
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

// Reads the YD-RP2040 physical USR button on GPIO 24 to jump to bootloader.
// Triggers once per press (edge-triggered) instead of every matrix scan.
void keyboard_post_init_user(void) {
    gpio_set_pin_input_high(GP24);
}

static bool boot_btn_held = false;

void matrix_scan_user(void) {
    bool pressed = (gpio_read_pin(GP24) == 0);
    if (pressed && !boot_btn_held) {
        boot_btn_held = true;
        reset_keyboard();
    } else if (!pressed) {
        boot_btn_held = false;
    }
}
