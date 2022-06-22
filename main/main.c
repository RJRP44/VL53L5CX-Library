#include <stdio.h>
#include "esp_log.h"
#include "driver/i2c.h"
#include "sdkconfig.h"
#include "vl53l5cx_api.h"

static const char *TAG = "v53l5cx_lib";

#define I2C_SDA_NUM                      21
#define I2C_SCL_NUM                      22
#define I2C_CLK_SPEED                    1000000
#define I2C_TIMEOUT                      400000
#define I2C_TX_BUF                       0
#define I2C_RX_BUF                       0

static esp_err_t i2c_master_init(void) {

    i2c_config_t conf = {
            .mode = I2C_MODE_MASTER,
            .sda_io_num = I2C_SDA_NUM,
            .scl_io_num = I2C_SCL_NUM,
            .sda_pullup_en = GPIO_PULLUP_ENABLE,
            .scl_pullup_en = GPIO_PULLUP_ENABLE,
            .master.clk_speed = I2C_CLK_SPEED,
    };

    i2c_param_config(I2C_NUM_1, &conf);
    i2c_set_timeout(I2C_NUM_1,I2C_TIMEOUT);

    return i2c_driver_install(I2C_NUM_1, conf.mode, I2C_RX_BUF, I2C_TX_BUF, 0);
}

void app_main(void) {

    ESP_ERROR_CHECK(i2c_master_init());
    ESP_LOGI(TAG, "I2C initialized successfully");

    VL53L5CX_Configuration *configuration = malloc(sizeof *configuration);
    configuration->platform.port = I2C_NUM_1;
    configuration->platform.address = 0x52;

    if(!vl53l5cx_init(configuration)){
        ESP_LOGI(TAG,"Vl53l5cx initialized successfully");
    }
}
