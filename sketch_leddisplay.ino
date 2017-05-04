// 04/05/2017
// By Andy and Jiki Sedeyn
//
// 8 Leds as a binary display
//

#include "leddisplay.h"

//Leds light(10, 11, 12, 13); //4bit lsb -> msb
leddisplay light(6, 7, 8, 9,10, 11, 12, 13); //8bit lsb -> msb

void setup()
{
  Serial.begin(9600);
  //light.set(7); //set as output
  //light.set(8);
  //light.set(9);
  
} //end setup

void loop()
{
  light.Blink(7, 1000); //call the code that makes the LED blink with 1000ms
  //light.Blink(7, 500);
  //light.Blink(7, 250);
  //light.Blink(7); //time 100 if not included
  //light.on(7);   //led on
  //light.off(7);  //led off

  
  light.BinaryCount(); // 0 -> 256
  
  //light.BinaryConvert(128); // Convert input to binary
  
  //light.BinaryAdd(1, 2); // Add first input with second input and convert and show sum to binary
  
  
} //end loop

