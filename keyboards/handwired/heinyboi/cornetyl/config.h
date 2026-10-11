#pragma once
// root config.h

// Handedness stored in EEPROM per half (EE_HANDS).
// After flashing, set each half once with:
//   make handwired/heinyboi/cornetyl:vial:flash-split-left   (left half)
//   make handwired/heinyboi/cornetyl:vial:flash-split-right  (right half)
#define EE_HANDS

// Split transport is serial (vendor PIO driver) on GP13,
// configured data-driven in info.json (split.serial / split.transport).
// GP13 must be wired pin-to-pin between halves via the interconnect.

// USB identifiers are canonical in info.json (usb.vid/pid/device_version,
// manufacturer/product); do not duplicate them here.

// Split sync tuning
#define FORCED_SYNC_THROTTLE_MS 10

// Hardware split watchdog: recover instead of hanging if the slave is missing
#define SPLIT_WATCHDOG_ENABLE