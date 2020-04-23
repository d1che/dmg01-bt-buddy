#include "Button.h"

Button::Button() { }

void Button::init() {  
  m_r.setChangedHandler(changed);
  m_r.setLeftRotationHandler(rotLeft);
  m_r.setRightRotationHandler(rotRight);

  m_b.setTapHandler(click);
  m_b.setLongClickHandler(clickLong);
}

void setCallbacks(void (*changed), void (*rotLeft), void (*rotRight), void (*click), void (*clickLong)) {
  
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
void Button::longClick(Button2& btn) {
  
}