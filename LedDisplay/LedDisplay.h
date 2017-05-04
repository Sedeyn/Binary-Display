#ifndef LEDDISPLAY_H
#define LEDDISPLAY_H

#include <Arduino.h>

class LedDisplay {
public:

    LedDisplay(byte pin1, byte pin2 = 100, byte pin3 = 100, byte pin4 = 100, byte pin5 = 100, byte pin6 = 100, byte pin7 = 100, byte pin8 = 100);
    ~LedDisplay();
    void on(int ledpin);
    void off(int ledpin);
    void binaryConvert(int waarde);
    void binaryCount();
    void binaryAdd(int waarde1, int waarde2);
    void blink(int ledpin, int tijd = 100);

private:
    void set(int ledpin);
    byte ledPins[8];

};

#endif


