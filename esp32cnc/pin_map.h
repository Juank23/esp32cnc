// pin_map.h

#ifndef _PIN_MAP_h
#define _PIN_MAP_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif
// control pins
#define RESETPIN 1
#define FEEDHOLDPIN 2
#define CYCLESTARTPIN 3
#define SAFTEYDOORPIN 4
// coolant
#define COOLANTPIN 5
#define MISTPIN 6

// limitswitches
#define XLIMITPIN 7
#define YLIMITPIN 8
#define ZLIMITPIN 9   // we only need one pin here as all pins can be pwm

//probe
#define PROBEPIN 10

#endif

