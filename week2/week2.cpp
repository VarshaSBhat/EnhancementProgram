#include "Arduino.h"
#include "week2.h"

week2::week2(int pin)
{
pinMode(pin,OUTPUT);
_pin=pin;
}

void week2::light(){
digitalWrite(_pin,HIGH);
delay(500);
digitalWrite(_pin,LOW);
delay(500);
digitalWrite(_pin,HIGH);
delay(500);
digitalWrite(_pin,LOW);
delay(500);
digitalWrite(_pin,HIGH);
delay(500);
digitalWrite(_pin,LOW);
delay(500);
digitalWrite(_pin,HIGH);
delay(500);
digitalWrite(_pin,LOW);
delay(500);
digitalWrite(_pin,HIGH);
delay(2000);
}
