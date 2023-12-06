# Get set params
This example shows the possibility of VL53L5CX to get/set params. It initializes the VL53L5CX ULD, set a configuration, and starts a ranging to capture 10 frames.

## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

## Parameters ⚙
- [I²C address](#ic-address-)
- [Power mode](#power-mode-)
- [Resolution](#resolution-)
- [Frequency](#frequency-)
- [Integration time](#integration-time-)
- [Sharpener percent](#sharpener-percent-)
- [Target order ](#target-order-)
- [Ranging mode](#ranging-mode-)
- [Synchronization pin](#synchronization-pin-)

This is a list of all the parameters that you can modify :
### I²C address 📫
This function is used to change the I2C address of the sensor. If multiple VL53L5 sensors are connected to the same I2C line, all other LPn pins needs to be set to Low. The default sensor address is 0x52.
```c
vl53l5cx_set_i2c_address(VL53L5CX_Configuration	*p_dev, uint16_t i2c_address);
```
### Power mode 🔋
This function is used to get the current sensor power mode.
```c
vl53l5cx_get_power_mode(VL53L5CX_Configuration	*p_dev, uint8_t	*p_power_mode);
```
This function is used to set the sensor in Low Power mode, for example if the sensor is not used during a long time. The macro ```VL53L5CX_POWER_MODE_SLEEP``` can be used to enable the low power mode. When user want to restart the sensor, he can use macro ```VL53L5CX_POWER_MODE_WAKEUP```. Please ensure that the device is not streaming before calling the function.
```c
vl53l5cx_set_power_mode(VL53L5CX_Configuration	*p_dev, uint8_t	p_power_mode);
```
### Resolution 📸
This function gets the current resolution (4x4 or 8x8).
```c
vl53l5cx_set_resolution(VL53L5CX_Configuration *p_dev, uint8_t p_resolution);
```
This function sets a new resolution (4x4 or 8x8).
```c
vl53l5cx_get_resolution(VL53L5CX_Configuration *p_dev, uint8_t *p_resolution);
```
### Frequency 📡
This function gets the current ranging frequency in Hz. Ranging frequency corresponds to the time between each measurement.
```c
vl53l5cx_get_ranging_frequency_hz(VL53L5CX_Configuration *p_dev,uint8_t *frequency_hz);
```
This function sets a new ranging frequency in Hz. Ranging frequency corresponds to the measurements' frequency. This setting depends of the resolution, so please select your resolution before using this function.
```c
vl53l5cx_set_ranging_frequency_hz(VL53L5CX_Configuration *p_dev,uint8_t frequency_hz);
```
### Integration time ⌚
This function gets the current integration time in ms.
```c
vl53l5cx_get_integration_time_ms(VL53L5CX_Configuration *p_dev, uint32_t *p_time_ms);
```
This function sets a new integration time in ms. Integration time must be computed to be lower than the ranging period, for a selected resolution. Please note that this function has no impact on ranging mode continous.
```c
vl53l5cx_set_integration_time_ms(VL53L5CX_Configuration *p_dev, uint32_t p_time_ms);
```
### Sharpener percent 🔪
This function gets the current sharpener in percent. Sharpener can be changed to blur more or less zones depending of the application.
```c
vl53l5cx_get_sharpener_percent(VL53L5CX_Configuration *p_dev, uint8_t *p_sharpener_percent);
```
This function sets a new sharpener value in percent. Sharpener can be changed to blur more or less zones depending of the application. Min value is 0 (disabled), and max is 99.
```c
vl53l5cx_set_sharpener_percent(VL53L5CX_Configuration *p_dev, uint8_t p_sharpener_percent);
```
### Target order 🧮
This function gets the current target order (closest or strongest).
```c
vl53l5cx_get_target_order(VL53L5CX_Configuration *p_dev, uint8_t *p_target_order);
```
This function sets a new target order. Please use macros ```VL53L5CX_TARGET_ORDER_STRONGEST``` and ```VL53L5CX_TARGET_ORDER_CLOSEST``` to define the new output order. By default, the sensor is configured with the strongest
```c
vl53l5cx_set_target_order(VL53L5CX_Configuration *p_dev, uint8_t p_target_order);
```
### Ranging mode 🔧
This function is used to get the ranging mode. Two modes are available using ULD : Continuous and autonomous. The default mode is Autonomous.
```c
vl53l5cx_get_ranging_mode(VL53L5CX_Configuration *p_dev, uint8_t *p_ranging_mode);
```
This function is used to set the ranging mode. Two modes are available using ULD : Continuous and autonomous. The default mode is Autonomous.
```c
vl53l5cx_set_ranging_mode(VL53L5CX_Configuration *p_dev, uint8_t p_ranging_mode);
```
### Synchronization pin 🔗
This function is used to check if the synchronization pin is enabled or disabled. When it is enabled, the sensor waits an interrupt on B1 pin to start the next measurement. It is useful for multi-devices
```c
vl53l5cx_get_external_sync_pin_enable(VL53L5CX_Configuration *p_dev, uint8_t *enable_sync_pin);
```
This function is used to enable or disable the synchronization pin. When it is enabled, the sensor waits an interrupt on B1 pin to start the next measurement. It is useful for multi-devices synchronization. By default the sync pin is disabled.
```c
vl53l5cx_set_external_sync_pin_enable(VL53L5CX_Configuration *p_dev, uint8_t enable_sync_pin);
```

> All function descriptions come from the vl53l5cx_api.h file.