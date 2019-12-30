/*
Sutter_Small_Badge - Random Example
This example will show you how to use setBits() function of this library.
Set any combination of LEDs using 10 bits.
*/

#include <Sutter_Small_Badge.h>

//BE SURE USE CORRESPONDING DEVICE
//Sutter_Small_Badge bar(6, 7, 0, LED_CIRCULAR_24);
//FOR LED_BAR_10
Sutter_Small_Badge bar(7, 6, 0, LED_BAR_10); // Clock pin, Data pin, Orientation

void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{
  // Display a random value between 0 (all LEDs off) and 1023 (all LEDs on)
  bar.setBits(random(1024));
  delay(50);
}
