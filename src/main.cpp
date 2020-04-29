#include <Arduino.h>
#include "Screen.h"
#include "Button.h"
//#include "Menu.h"
#include "ConnectionManager.h"

// Please create this file in which you define
// your WiFi credentials (see below)
#include "credentials.h" 

Screen screen;
Button button;
//Menu menu;
ConnectionManager connection;

void setup() {
  Serial.begin(9600);
  screen.init();
  screen.print(0, 0, connection.getIP());
  screen.drawFigure();
  
  button.init();

  connection.connect(SSID, PASS); // Defined in "credentials.h"
  connection.setHostname("dmg01");
}

void loop() {
  button.update();
}