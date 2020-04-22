#include "Screen.h"

Screen::Screen()
  : m_screen(0x3c, 0, 2) {}

void Screen::init() {
  m_screen.init();
  m_screen.setContrast(255);
}

void Screen::print(uint8_t x, uint8_t y, String text) {
  m_screen.clear();
  m_screen.drawString(x, y, text);
  m_screen.display();
}

void Screen::drawFigure() {
  m_screen.clear();
  m_screen.drawXbm(0, 0, icon_wifi_width, icon_wifi_height, icon_wifi_bits);
  m_screen.display();
}

void Screen::drawPixel(uint8_t x, uint8_t y) {
  m_screen.clear();
  m_screen.setPixel(x,y);
  m_screen.display();
}