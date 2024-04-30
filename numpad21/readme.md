# handwired/numpad21

<img width="1117" alt="numpad21-inprogress" src="https://github.com/skylaryoung/keyboards/assets/30451092/3c5ec90d-e948-4535-b432-d5a22291c5fa">


This is a standard number pad with 4 extra macro keys at the top of the layout and LEDs to indicate which layer is working.

* Keyboard Maintainer: [Skylar Young](https://github.com/skylaryoung)
* Hardware Supported: It's a handwired layout using a ProMicro
* Hardware Availability: 3D models coming soon...

  
Make example for this keyboard (after setting up your build environment):

    make handwired/numpad21:default

Flashing example for this keyboard:

    make handwired/numpad21:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
