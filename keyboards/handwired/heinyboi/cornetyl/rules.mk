# Root rules.mk

# MCU and Bootloader configuration for YD-RP2040
MCU = RP2040
BOOTLOADER = rp2040

# Core Split Parameters
SPLIT_KEYBOARD = yes

# Split interconnect uses the RP2040 PIO serial driver (pin from info.json)
SERIAL_DRIVER = vendor

# Size and Performance Optimization
LTO_ENABLE = yes

# Core Features
BOOTMAGIC_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
