#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main()
{
  gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);  // Built-in LED on GPIO 0

    while(1){
        gpio_set_level(GPIO_NUM_2,0);
        vTaskDelay(100);
        gpio_set_level(GPIO_NUM_2,1);
        vTaskDelay(100);
    }
}
