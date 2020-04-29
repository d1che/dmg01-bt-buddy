#include "Button.h"

Button::Button() { }

void Button::init() {  
  m_r.setChangedHandler(rotate);
  m_r.setLeftRotationHandler(showDirection);
  m_r.setRightRotationHandler(showDirection);
  m_b.setTapHandler(click);
  m_b.setLongClickHandler(longClick);
}

void Button::update() {
  m_r.loop();
  m_b.loop();
}

// on change
void rotate(ESPRotary& r) {
  Serial.println(r.getPosition());
}

// on left or right rotation
void Button::showDirection(ESPRotary& r) {
  Serial.println(r.directionToString(r.getDirection()));
}

// single click
void Button::click(Button2& btn) {
  Serial.println("click!");
}

// long click
void Button::longClick(Button2& btn) {
  Serial.println("Long click!");
}