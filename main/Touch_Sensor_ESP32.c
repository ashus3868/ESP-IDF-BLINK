#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_5, GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_22, GPIO_MODE_INPUT);


    while (1)
    {
        if(gpio_get_level(GPIO_NUM_22)){
            gpio_set_level(GPIO_NUM_5, 1);
        }
        else{
            gpio_set_level(GPIO_NUM_5, 0);
        }
        
        vTaskDelay(10);
    } 
}
