<h1 align="center"> Vl53l5cx library for ESP32  </h1>
<p align="center">
<img align="center" src="https://seeklogo.com/images/E/espressif-systems-logo-1350B9E771-seeklogo.com.png" alt="espressif logo" width="40">
</p>

A vl53l5cx library for esp32 using the **esp-idf framework**. This library is based
on [ST's  Ultra Lite Driver (ULD) for VL53L5CX](https://www.st.com/content/st_com/en/products/embedded-software/imaging-software/stsw-img023.html)
. This library is just an adaptation of the ST's library for esp-32.

> **Warning**
> This Library is **not** compatible with Arduino framework

## 📌 Contents

* [Installation](#installation)
* [Examples](#examples)
* [Structure](#structure)

---

### Installation

* Download this project.
* Add the folder /vl53l5cx to your components.
* Include `"../components/vl53l5cx/include/vl53l5cx_api.h"` in your files.
* Start your new project 🎉

---

### Examples

ST provide some examples in `/examples`.

This example function is used to initialize the [I2C bus](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/i2c.html) for the sensor :

```c
#define I2C_SDA_NUM                      21
#define I2C_SCL_NUM                      22
#define I2C_CLK_SPEED                    1000000
#define I2C_TIMEOUT                      400000
#define I2C_TX_BUF                       0
#define I2C_RX_BUF                       0

static esp_err_t i2c_master_init(void) {

    i2c_config_t conf = {
            .mode = I2C_MODE_MASTER,
            .sda_io_num = I2C_SDA_NUM,
            .scl_io_num = I2C_SCL_NUM,
            .sda_pullup_en = GPIO_PULLUP_ENABLE,
            .scl_pullup_en = GPIO_PULLUP_ENABLE,
            .master.clk_speed = I2C_CLK_SPEED,
    };

    i2c_param_config(I2C_NUM_1, &conf);
    i2c_set_timeout(I2C_NUM_1, I2C_TIMEOUT);

    return i2c_driver_install(I2C_NUM_1, conf.mode, I2C_RX_BUF, I2C_TX_BUF, 0);
}
```
---

### Structure

```
├── CMakeLists.txt
├── 📁 components /                
│   └── 📁 Vl53l5cx /
│      └── 📁 include /
│          ├── platform.h
│          ├── vl53v5cx_api.h
│          └── vl53v5cx_buffer.h
├── 📁 main /
│   ├── CMakeLists.txt
│   ├── main.c
└── README.md                  
```

---

## 📝 License

Copyright © 2022 [RJRP44](https://www.github.com/RJRP44).

This project is [BSD 3-Clause](https://opensource.org/licenses/BSD-3-Clause/)  licensed.

## ✨ Show your support

Give a ⭐️ if this project helped you!

## 👤 Authors

- [@RJRP44](https://www.github.com/RJRP44)

