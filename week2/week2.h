#ifndef week2_h
#define week2_h

#include "Arduino.h"

class week2{
public:
	week2(int pin);
	void light();
private:
	int _pin;
};
#endif
