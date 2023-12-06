# I²C and RAM optimization
This example shows the possibility of VL53L5CX to reduce I2C transactions and RAM footprint. It initializes the VL53L5CX ULD, and starts a ranging to capture 10 frames.
## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

