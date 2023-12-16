# VL53L5CX library for ESP32

A vl53l5cx library for esp32 using the **esp-idf framework**. This library is based
on [ST's  Ultra Lite Driver (ULD) for VL53L5CX](https://www.st.com/content/st_com/en/products/embedded-software/imaging-software/stsw-img023.html) v1.3.10
. This library is just an adaptation of the ST's library for esp-32.

> **Warning**
> This Library is **not** compatible with Arduino framework

## Contents 📌

* [Getting started](#Getting-started)
    * [Wiring for the VL53L5CX-SATEL](#wiring-for-the-vl53l5cx-satel- )
    * [Library Installation](#library-installation-)
* [Examples](#examples-)
* [Usual Errors](#usual-errors-)
    * [Stack overflow error](#stack-overflow-error-)

---

## Getting started
### Wiring for the VL53L5CX-SATEL 🔌

For the examples this is the used wiring, but feel free to modify it and adapt it for your needs.

| VL53L5CX-SATEL Pins | ESP32S3 Pins                                  |           
|---------------------|-----------------------------------------------|
| INT                 | NC                                            |
| I2C_RST             | NC                                            |
| SDA                 | GPIO1, 2.2 kΩ pullup resistor required to 3v3 |
| SCL                 | GPIO2, 2.2 kΩ pullup resistor required to 3v3 |
| LPn                 | 3V3                                           |
| PWREN               | NC                                            |
| AVDD                | 3V3                                           |
| IOVDD               | 3V3                                           |
| GND                 | GND                                           |


### Library Installation 📥

The library is available at https://components.espressif.com/components/rjrp44/vl53l5cx.

So, you can use the [IDF Component Manager](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/tools/idf-component-manager.html) to easily import this library into your project.
To add this component to your project, run:

```log
idf.py add-dependency "rjrp44/vl53l5cx^2.0.3" 
```


## Examples 📄

You can find in `📁 ./examples` ST's examples adapted for ESP32 with I²C. For more information about the available features read [UM2884](https://www.st.com/resource/en/user_manual/um2884-a-guide-to-using-the-vl53l5cx-multizone-timeofflight-ranging-sensor-with-wide-field-of-view-ultra-lite-driver-uld-stmicroelectronics.pdf).

## Usual errors 🐛
### Stack overflow error 💽

If by running an example you get a stack overflow error, this means that your main stack size is too small.
```log
***ERROR*** A stack overflow in task main has been detected.
```
**Increase the main stack size :**

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

## 📝 License

Copyright © 2023 [RJRP](https://www.github.com/RJRP44).

This project is [BSD 3-Clause](https://opensource.org/licenses/BSD-3-Clause/)  licensed.

## ✨ Show your support

Give a ⭐️ if this project helped you!

## 👤 Authors

- [@RJRP](https://www.github.com/RJRP44)
