#pragma once

// Unique Vial Handshake Settings
#define VIAL_KEYBOARD_UID {0x83, 0xD5, 0x94, 0xC4, 0xA8, 0x32, 0x8D, 0xFC}

// Hold down Left Top-Left Key (0,0) and Key (0,1) together while plugging in to reset settings
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Dynamic keymap structures for Vial allocation
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// Cap total allocation: 4 layers x 8 rows x 7 cols x 2 bytes = 448 bytes
// for keymaps, plus QMK-settings/tap-dance/combo/key-override sections,
// plus 256 bytes of macros below -- well under the 2048 cap and the
// 4096-byte RP2040 logical EEPROM.
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2048
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 256