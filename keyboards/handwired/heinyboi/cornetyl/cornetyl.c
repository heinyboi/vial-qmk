#include "cornetyl.h"
// NOTE: early_hardware_init_user() does not exist as a QMK hook (only
// early_hardware_init_pre/post), so no custom init runs here. Row pull-ups
// for the COL2ROW diode matrix are applied by QMK's matrix driver.
