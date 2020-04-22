#include <Arduino.h>
#include "Screen.h"
#include "ConnectionManager.h"
#include "Button.h"

Screen screen;
ConnectionManager connection;
Button button;

void setup() {
  screen.init();
  button.init();
  screen.print(0, 0, connection.getIP());
  screen.drawFigure();
  connection.connect("--------------------W---","diezalikjezometeengeven");
  connection.setHostname("dmg01");
}

void loop() {
  button.update();
}