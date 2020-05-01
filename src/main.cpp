#include <Arduino.h>

#include "Screen.h"
#include "Menu.h"
#include "ConnectionManager.h"
#include "controls.h"

// Please create this file in which you define
// your WiFi credentials (see below)
#include "credentials.h"

Screen screen;
Menu menu;
ConnectionManager connection;

const char* items[3] = {"i1", "i2", "i3"};

void setup() {
  screen.init();
  screen.drawFigure();
  menu.init(screen, items, 3);
  delay(5000);
  
  controls::init();

  connection.connect(SSID, PASS); // Defined in "credentials.h"
  connection.setHostname("dmg01");
}

void loop() {
  controls::update();
}