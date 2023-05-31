cmake_minimum_required(VERSION 3.5)

idf_component_register(SRCS "vl53l5cx_api.c" "vl53l5cx_plugin_detection_thresholds.c" "vl53l5cx_plugin_motion_indicator.c" "vl53l5cx_plugin_xtalk.c" "platform.c" INCLUDE_DIRS "include" REQUIRES "driver")