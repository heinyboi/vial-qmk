# cornetyl

![cornetyl](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Heine](https://github.com/heinyboi)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make handwired/heinyboi/cornetyl:default

Flashing example for this keyboard:

    make handwired/heinyboi/cornetyl:default:flash

Vial build:

    make handwired/heinyboi/cornetyl:vial

This board uses EE_HANDS, so set handedness once per half after flashing:

    make handwired/heinyboi/cornetyl:vial:flash-split-left   (left half)
    make handwired/heinyboi/cornetyl:vial:flash-split-right  (right half)

The halves communicate over serial (vendor PIO driver) on GP13, which must
be wired pin-to-pin between halves via the interconnect.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
