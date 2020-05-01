#ifndef __MENU_H__
#define __MENU_H__

#include "Screen.h"

class Menu {
  private:
    struct {
      bool _active;
      const char* _title;
    } menuItem;
    
  public:
    Menu();

    void init(Screen& s, const char* items[], uint8_t size);
    void getValue();
    void prevItem();
    void nextItem();
    void select();
    void longSelect();
};

#endif