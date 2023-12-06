# Detection thresholds
This example shows the possibility of VL53L5CX to program detection thresholds. It initializes the VL53L5CX ULD, create 2 thresholds per zone for a 4x4 resolution, and starts a ranging to capture 10 frames.

> **Warning**
> This example requires to connect the INT (GPO) pin of the sensor to the GPIO3 of the esp32

For this example, the thresholds is :
- a signal equaling 150 kcps/spads 
- a distance between 200mm and 400mm

## Get started
In order to run this example you need to increase the main stack size else you will get a stack overflow error.

Run `idf.py menuconfig`. Go to Component Config -> ESP System settings and increase the Main task stack size to at least `7168`.
