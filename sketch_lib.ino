#include "test.h"

Leds lampje(10, 11, 12, 13); //8bit lsb -> msb

void setup()
{
  Serial.begin(9600);
  //lampje.set(7); //set as output
  //lampje.set(8);
  //lampje.set(9);
} //end setup

void loop()
{
  //lampje.pink(7, 1000); //call the code that makes the LED blink
  //lampje.pink(7, 500);
  //lampje.pink(7, 250);
  //lampje.pink(7); //time 100
  //lampje.on(7); //led on
  //lampje.off(7); //led off

  
  lampje.binairCount(); // 0 -> 256
  //lampje.binairConvert(128); // Converteert input naar binair
  //lampje.binairAdd(1, 2); // Sommatie
} //end loop

