#include "gpio_ctrl.h"

static const pin_mapping_t pin_map_list[] = {
    { gpio_ctrl_pin_0, 0 },
    { gpio_ctrl_pin_1, 1 },
    { gpio_ctrl_pin_2, 2 },
    { gpio_ctrl_pin_3, 3 },
    { gpio_ctrl_pin_4, 4 },
    { gpio_ctrl_pin_5, 9 },
    { gpio_ctrl_pin_6, 10 },
    { gpio_ctrl_pin_7, 15 },
    { gpio_ctrl_pin_8, 16 },
    { gpio_ctrl_pin_9, 17 },
    { gpio_ctrl_pin_10, 18 },
    { gpio_ctrl_pin_11, 19 },
    { gpio_ctrl_pin_12, 20 },
    { gpio_ctrl_pin_13, 22 },
    { gpio_ctrl_pin_14, 23 },
    { gpio_ctrl_pin_15, 24 },
    { gpio_ctrl_pin_16, 25 },
    { gpio_ctrl_pin_17, 26 },
    { gpio_ctrl_pin_18, 27 },
    { gpio_ctrl_pin_19, 28 },
    { gpio_ctrl_pin_20, 29 },
    { gpio_ctrl_pin_21, 30 },
    { gpio_ctrl_pin_22, 31 }
};

static gpio_pin_config_t gpio_pin_config_list[] __attribute((unused)) =
{
    { &pin_map_list[0], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[1], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[2], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[3], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[4], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[5], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[6], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[7], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[8], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[9], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[10], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[11], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[12], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[13], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[14], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[15], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[16], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[17], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[18], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[19], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[20], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[21], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
    { &pin_map_list[22], NRF_GPIO_PIN_DIR_INPUT, NRF_GPIO_PIN_NOPULL },
};
