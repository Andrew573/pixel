#if 1
#include <Arduino.h>
#include "w2812.h"

void setup()
{
  Serial.begin(9600);
  w2812_init();

}

void loop() {
  w2812_drop();
}
#endif 
