#include <Grove_LED_Bar.h>





/*
Grove LED Bar - Brightness Level Example
...
*/

Grove_LED_Bar bar(9, 8, 0);  // Clock pin, Data pin, Orientation
// Sutter_Small_Badge bar(9, 8, 0, LED_CIRCULAR_24);
// Sutter_Small_Badge bar(6, 7, 0); // LED_CIRCULAR_24)

void setup()
{
  // nothing to initialize
  bar.begin();
}

void loop()
{
  for (float i=0; i<12; i+= 1){
    bar.setLed(i, 0.3);
    }
  for (float y=0; y<0.3; y+= 0.001){
      bar.setLed(6, y);
      delay(3);
      }
  bar.setLed(3, 0.2);
  delay(500);
 

    bar.setLed(3, 0);
  delay(500);

/*{
  bar.setGreenToRed(false);
  for (float i = 0; i < 12.1; i += 0.125) {
    bar.setLevel(i);
    delay(1);
    
  };
  */
  
  /*for (float i = 0; i < 10.1; i += 0.125) {
    bar.setLevel(10-i);
    delay(1);
  };
  */
 
}
