#include <Arduino.h>
#include "Screen.h"
#include "ConnectionManager.h"
//#include "Button.h"
#include "Button2.h"
#include "ESPRotary.h"

#define ROTARY_PIN1 1
#define ROTARY_PIN2 3
#define BUTTON_PIN 13

#define CLICKS_PER_STEP   4   // this number depends on your rotary encoder 

Screen screen;
ConnectionManager connection;
//Button button;

ESPRotary m_r = ESPRotary(ROTARY_PIN1, ROTARY_PIN2, CLICKS_PER_STEP);
Button2 m_b = Button2(BUTTON_PIN);

// on change
void rotate(ESPRotary& r) {
  screen.print(0,0,(String)r.getPosition());
}

// on left or right rotation
void showDirection(ESPRotary& r) {
  r.directionToString(r.getDirection());
}

// single click
void click(Button2& btn) {
  
}

// long click
void resetPosition(Button2& btn) {
  m_r.resetPosition();
}

void setup() {
  screen.init();
  //button.init();

  m_r.setChangedHandler(rotate);
  m_r.setLeftRotationHandler(showDirection);
  m_r.setRightRotationHandler(showDirection);

  m_b.setTapHandler(click);
  m_b.setLongClickHandler(resetPosition);

  screen.print(0, 0, connection.getIP());
  screen.drawFigure();
  connection.connect("--------------------W---","diezalikjezometeengeven");
  connection.setHostname("dmg01");
}

void loop() {
  //button.update();
  m_r.loop();
  m_b.loop();
}