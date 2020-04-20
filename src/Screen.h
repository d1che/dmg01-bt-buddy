#ifndef __SCREEN__
#define __SCREEN__

#include "SSD1306Wire.h"
#include "images.h"

class Screen {
  private:
    SSD1306Wire m_screen;
  public:
    Screen()
      : m_screen(0x3c, 0, 2) {}

    void init(void);
    void printBuffer(void);
    void drawFigure(void);
};

#endif