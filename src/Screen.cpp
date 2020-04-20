#include "Screen.h"

void Screen::init() {
  m_screen.init();
  m_screen.setContrast(255);
}

void Screen::printBuffer() {
  // Initialize the log buffer
  // allocate memory to store 8 lines of text and 30 chars per line.
  m_screen.setLogBuffer(5, 30);

  // Some test data
  const char* test[] = {
      "purplenoise"
  };

  for (uint8_t i = 0; i < 11; i++) {
    m_screen.clear();
    // Print to the screen
    m_screen.println(test[i]);
    // Draw it to the internal screen buffer
    m_screen.drawLogBuffer(0, 0);
    // Display it on the screen
    m_screen.display();
  }
}

void Screen::drawFigure() {
  m_screen.clear();
  m_screen.drawRect(0, 0, 32, 32);
  m_screen.display();
}