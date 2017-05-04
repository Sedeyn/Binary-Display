#ifndef leddisplay_H
#define leddisplay_H

#include <Arduino.h>

class leddisplay {
public:

    Leds(byte pin1, byte pin2 = 100, byte pin3 = 100, byte pin4 = 100, byte pin5 = 100, byte pin6 = 100, byte pin7 = 100, byte pin8 = 100);
    ~Leds();
    void on(int ledpin);
    void off(int ledpin);
    void BinaryConvert(int waarde);
    void BinaryCount();
    void BinaryAdd(int waarde1, int waarde2);
    void Blink(int ledpin, int tijd = 100);

private:
    void set(int ledpin);
    byte ledPins[8];

};

#endif


