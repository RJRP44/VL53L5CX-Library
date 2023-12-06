# Ranging Basic
This example is the most basic. It initializes the VL53L5CX ULD, and starts a ranging to capture 10 frames.

By default, the vl53l5cx is configured to have the following settings :
- Resolution 4x4
- Ranging period 1Hz

## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.