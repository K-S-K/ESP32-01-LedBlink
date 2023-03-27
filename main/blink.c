// idf.py build
// idf.py flash -p COM3
#include <stdio.h>
#include "C:/Espressif/frameworks/esp-idf-v5.0.1/components/freertos/FreeRTOS-Kernel/include/freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

// Configure the LED connection
#define BLINK_GPIO 3

void app_main(void)
{
    // Configure the IOMUX register for pad BLINK_GPIO 
    // (some pads are muxed to GPIO on reset already, 
    // but some default to other functions 
    // and need to be switched to GPIO).    
    gpio_reset_pin(BLINK_GPIO);

    // Set the GPIO as a push/pull output
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    // Main applicarion cycle
    while (1)
    {
        printf("Turning the LED off\n");
        gpio_set_level(BLINK_GPIO, 0);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        printf("Turning the LED on\n");
        gpio_set_level(BLINK_GPIO, 1);
        vTaskDelay(250 / portTICK_PERIOD_MS);
    }
}
