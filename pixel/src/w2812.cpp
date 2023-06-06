#include "w2812.h"
#include <Adafruit_NeoPixel.h>

#define LED_PIN 13
#define LED_COUNT 64

Adafruit_NeoPixel leds(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void w2812_init()
{
    leds.begin();
    leds.setBrightness(30);
    leds.show();

    Serial.print("WS2812 LED Matrix initialized!");
}

void w2812_drop()
{
    uint32_t color = leds.Color(0, 0, 255); 
#if 1
    int pos = random(8);

    for(int i = 0; i < 8; i++)
    {
        leds.setPixelColor(pos * 8 + i, color);
        leds.show();
        delay(100);
        leds.setPixelColor(pos * 8 + i, 0);

        leds.show();
    }
#endif 
}

