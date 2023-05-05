# Blink Example

This project starts a FreeRTOS task to blink an LED.
- The green led is on when #GPIO 3# pin is set to 1<br>
- The blue led on the MCU board is on when I make a debug output to the console by printf(...) function (yep, this architecture let programmers to write to the console and to grab output by the IDE).

#### The project *in vivo*:

![](docs/blink.gif)


#### The ESP32 Microcontroller pinout:

![The device description.](docs/pinout.png)


The next proxect in my MCU way is [ESP32-02-OLed-SSD1366](https://github.com/K-S-K/ESP32-02-OLed-SSD1366).<br>
It's about the connectiong OLED display to the microcontroller.
