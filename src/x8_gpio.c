#include "x8_gpio.h"

esp_err_t set_gpio_pin_output(gpio_num_t num)
{
    gpio_config_t io_conf = {
        .intr_type = GPIO_INTR_DISABLE,
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = 1 << num,
        .pull_down_en = 0,
        .pull_up_en = 0
    };

    return gpio_config(&io_conf);
}

esp_err_t gpio_install_isr()
{
    return gpio_install_isr_service(0);
}

esp_err_t set_gpio_pin_in_low(gpio_num_t num, gpio_int_type_t int_type)
{
    gpio_config_t io_conf = {
        .intr_type = int_type,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1 << num,
        .pull_down_en = 0,
        .pull_up_en = 1
    };

    return gpio_config(&io_conf);
}
