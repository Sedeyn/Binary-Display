#include "LedDisplay.h" //include the declaration for this class

//<<constructor>>

LedDisplay::LedDisplay(byte pin1, byte pin2, byte pin3, byte pin4, byte pin5, byte pin6, byte pin7, byte pin8) {

  ledPins[0] = pin1;
  ledPins[1] = pin2;
  ledPins[2] = pin3;
  ledPins[3] = pin4;
  ledPins[4] = pin5;
  ledPins[5] = pin6;
  ledPins[6] = pin7;
  ledPins[7] = pin8;

  for (int i = 0; i != (sizeof(ledPins) / sizeof(byte)); i++) {

    if (ledPins[i] != 100) {

      this->set(ledPins[i]);
    }
  }
}

//<<destructor>>
LedDisplay::~LedDisplay() {

  /*nothing to destruct*/
}

//setup the LED as output
void LedDisplay::set(int ledpin) {

  pinMode (ledpin, OUTPUT); //set the pin HIGH and thus turn LED on
}

//turn the LED on
void LedDisplay::on(int ledpin) {

  this->set(ledpin);
  digitalWrite(ledpin, HIGH); //set the pin HIGH and thus turn LED on
}

//turn the LED off
void LedDisplay::off(int ledpin) {

  this->set(ledpin);
  digitalWrite(ledpin, LOW); //set the pin LOW and thus turn LED off
}

//blink the LED in a period equal to paramterer -time.
void LedDisplay::blink(int ledpin, int tijd) {

  this->set(ledpin);
  on(ledpin);                   //turn LED on
  delay(tijd);  //wait half of the wanted period
  off(ledpin);                  //turn LED off
  delay(tijd);  //wait the last half of the wanted period
}

// convert decimal number to binary
void LedDisplay::binaryConvert(int waarde) {

  for (int i = 0; i != (sizeof(ledPins) / sizeof(byte)); i++) {

    if (ledPins[i] != 100) {
      byte state = bitRead(waarde, i);
      digitalWrite(ledPins[i], state);
    }
  }
  delay(150);
}

// count from 0 to 256 in binary on the screen
void LedDisplay::binaryCount() {

  int num = 0;
  while (num < 257) {

    binaryConvert(num);
    delay(150);
    num ++;
  }
}

// count 2 decimal numbers to binary and show each one
void LedDisplay::binaryAdd(int waarde1, int waarde2) {

  binaryConvert(waarde1);
  delay(1000);
  binaryConvert(waarde2);
  delay(1000);
  binaryConvert(waarde1 + waarde2);
  delay(1500);
}

