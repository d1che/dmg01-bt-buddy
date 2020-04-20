#include <Arduino.h>
#include "Screen.h"

Screen screen;

void setup() {
  delay(500);
  screen.init();
}

void loop() {
  delay(500);
  screen.drawFigure();
}