#include "Screen.h"

Screen::Screen()
  : _screen(0x3c, 4, 5) {}

void Screen::init() {
  _screen.init();
  _screen.setContrast(255);
}

void Screen::clear() {
  _screen.clear();
}

void Screen::display() {
  _screen.display();
}

void Screen::print(uint8_t x, uint8_t y, String text) {
  _screen.drawString(x, y, text);
}

void Screen::drawFigure() {
  _screen.drawXbm(0, 0, icon_wifi_width, icon_wifi_height, icon_wifi_bits);
  _screen.drawXbm(32, 0, icon_conf_width, icon_conf_height, icon_conf_bits);
}

void Screen::drawPixel(uint8_t x, uint8_t y) {
  _screen.setPixel(x,y);
}