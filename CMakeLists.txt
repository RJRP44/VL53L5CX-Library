cmake_minimum_required(VERSION 3.5)

idf_component_register(SRC_DIRS     src
                       INCLUDE_DIRS "include"
                       REQUIRES     "esp_driver_gpio" "esp_driver_i2c")