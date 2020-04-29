#ifndef __SCREEN_H__
#define __SCREEN_H__

#include "SSD1306Wire.h"
#include "images.h"

class Screen {
  private:
    SSD1306Wire m_screen;
  public:
    Screen();
    void init();
    void print(uint8_t x, uint8_t y, String text);
    void drawFigure();
    void drawPixel(uint8_t x, uint8_t y);
};

#endif