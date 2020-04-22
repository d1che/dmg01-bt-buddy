#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "Button2.h"
#include "ESPRotary.h"

#define ROTARY_PIN1 1
#define ROTARY_PIN2 3
#define BUTTON_PIN 13

#define CLICKS_PER_STEP   4   // this number depends on your rotary encoder 

class Button {
  private:
    ESPRotary m_r = ESPRotary(ROTARY_PIN1, ROTARY_PIN2, CLICKS_PER_STEP);
    Button2 m_b = Button2(BUTTON_PIN);
  public:
    Button();
    void init();
    void update();
    void rotate(ESPRotary& r);
    void showDirection(ESPRotary& r);
    void click(Button2& btn);
    void resetPosition(Button2& btn);
};

#endif