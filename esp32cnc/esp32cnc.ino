/*
 Name:		esp32cnc.ino
 Created:	11/27/2017 10:22:26 AM
 Author:	paul
*/

// the setup function runs once when you press reset or power the board

#include "print.h"
#include "probe.h"
#include "jog.h"
#include "coolant_control.h"
#include "pin_map.h"
#include "config.h"
#include "planner.h"
#include "motion_control.h"
#include "defaults.h"
#include "limits.h"
#include "protocol.h"
#include "settings.h"
#include "nuts_bolts.h"
#include "gcode.h"
#include "config.h"
#include "grbl.h"
#include "eeprom.h"
#include <EEPROM.h>
#include <WiFiMulti.h>
#include <WiFi.h>
#include <inttypes.h>
#include <esp32-hal-gpio.h>

void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
