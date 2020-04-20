#include <Arduino.h>
#include "Screen.h"

Screen screen;

void setup() {
  delay(500);
  screen.init();
  screen.drawFigure();
}

void loop() {
    delay(500);
    println("knakworst");
}