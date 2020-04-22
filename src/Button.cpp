#include "Button.h"

Button::Button() { }

void Button::init() {  
  m_r.setChangedHandler(this->rotate);
  m_r.setLeftRotationHandler(this->showDirection);
  m_r.setRightRotationHandler(this->showDirection);

  m_b.setTapHandler(this->click);
  m_b.setLongClickHandler(this->resetPosition);
}

void Button::update() {
  m_r.loop();
  m_b.loop();
}

// on change
void Button::rotate(ESPRotary& r) {
  r.getPosition();
}

// on left or right rotation
void Button::showDirection(ESPRotary& r) {
  r.directionToString(r.getDirection());
}

// single click
void Button::click(Button2& btn) {
  
}

// long click
void Button::resetPosition(Button2& btn) {
  m_r.resetPosition();
}