# Vizualize xtalk data
This example shows the possibility of VL53L5CX to visualize Xtalk data. It initializes the VL53L5CX ULD, perform a Xtalk calibration, and starts a ranging to capture 10 frames.

> **Warning**
> This example requires a protective window (cover glass) on the sensor.

## Xtalk
Crosstalk (Xtalk) is defined as the amount of signal received on the SPAD array, which is due to VCSEL light reflection inside the protective window (cover glass) added on top of the module. The VL53L5CX module is self-calibrated, and can be used without any additional calibration.
## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

