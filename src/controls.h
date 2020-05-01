#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "Button2.h"
#include "ESPRotary.h"

#define ROTARY_PIN1 13
#define ROTARY_PIN2 12
#define BUTTON_PIN 14

#define CLICKS_PER_STEP 4   // this number depends on your rotary encoder 

extern ESPRotary rot;
extern Button2 but;

namespace controls {
  void init();
  void update();
  void rotate(ESPRotary& r);
  void showDirection(ESPRotary& r);
  void click(Button2& btn);
  void longClick(Button2& btn);
}

#endif