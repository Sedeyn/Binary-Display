#ifndef TEST_H
#define TEST_H

#include <Arduino.h>

class Leds {
public:

    Leds(byte pin1, byte pin2 = 100, byte pin3 = 100, byte pin4 = 100, byte pin5 = 100, byte pin6 = 100, byte pin7 = 100, byte pin8 = 100);
    ~Leds();
    void on(int ledpin);
    void off(int ledpin);
    void binairConvert(int waarde);
    void binairCount();
    void binairAdd(int waarde1, int waarde2);
    void pink(int ledpin, int tijd = 100);

private:
    void set(int ledpin);
    byte ledPins[8];

};

#endif


