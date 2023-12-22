#include "esp_gpio.h"

esp_err_t set_gpio_pin_output(gpio_num_t num)
{
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = 1 << num;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;

    return gpio_config(&io_conf);
}
