#include "controls.h"

ESPRotary rot = ESPRotary(ROTARY_PIN1, ROTARY_PIN2, CLICKS_PER_STEP);
Button2 but = Button2(BUTTON_PIN);

namespace controls {

  void init() {
    rot.setChangedHandler(rotate);
    rot.setLeftRotationHandler(showDirection);
    rot.setRightRotationHandler(showDirection);
    but.setTapHandler(click);
    but.setLongClickHandler(longClick);
  }

  void update() {
    rot.loop();
    but.loop();
  }

  // on change
  void rotate(ESPRotary& r) {
    Serial.println(r.getPosition());
  }

  // on left or right rotation
  void showDirection(ESPRotary& r) {
    Serial.println(r.directionToString(r.getDirection()));
  }

  // single click
  void click(Button2& b) {
    Serial.println("click!");
  }

  // long click
  void longClick(Button2& b) {
    Serial.println("Long click!");
  }

}