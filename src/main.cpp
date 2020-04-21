#include <Arduino.h>
#include "Screen.h"
#include "ConnectionManager.h"

Screen screen;
ConnectionManager connection;

void setup() {
  Serial.begin(9600);
  screen.init();

  connection.connect("--------------------W---","diezalikjezometeengeven");
  connection.setHostname("dmg01");
  screen.print(0, 0, connection.getIP());
}

void loop() {
  delay(500);
  screen.drawFigure();
}