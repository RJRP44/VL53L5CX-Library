# Motion indicator with detection thresholds
This example shows how to use the motion indicator with detection threshold. This kind of configuration might be used for user detection applications.

> **Warning**
> This example requires to connect the INT (GPO) pin of the sensor to the GPIO3 of the esp32
> Make sure that macro ```VL53L5CX_DISABLE_MOTION_INDICATOR``` is NOT enabled (see file platform.h).

For this example, motion above 44 will be considered as a movement.

## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.