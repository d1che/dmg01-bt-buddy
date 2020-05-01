#include "Menu.h"

Menu::Menu() {}

void Menu::init(Screen& s, const char* items[], uint8_t size) {
    for(uint8_t i=0; i<size; i++) {
        s.print(i*10, 0, items[i]);
    }
    s.display();
}

void Menu::getValue() {
  
}

void Menu::prevItem() {

}

void Menu::nextItem() {

}

void Menu::select() {

}

void Menu::longSelect() {

}