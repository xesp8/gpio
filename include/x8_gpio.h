#ifndef __x8_gpio_h__
#define __x8_gpio_h__

#include "esp_err.h"
#include "driver/gpio.h"

esp_err_t set_gpio_pin_in_low(gpio_num_t num, gpio_int_type_t int_type);
esp_err_t set_gpio_pin_output(gpio_num_t num);
esp_err_t gpio_install_isr();

#endif