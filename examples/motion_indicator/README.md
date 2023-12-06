# Motion indicator
This example shows the VL53L5CX motion indicator capabilities.

> **Warning**
> Make sure that macro ```VL53L5CX_DISABLE_MOTION_INDICATOR``` is NOT enabled (see file platform.h).

## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

