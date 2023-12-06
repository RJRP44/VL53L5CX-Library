# Ranging modes
This example shows the differences between ranging modes of VL53L5CX (mode continuous and autonomous). For both modes, it initializes the VL53L5CX ULD, set the mode, and starts a ranging to capture 10 frames.
## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.

