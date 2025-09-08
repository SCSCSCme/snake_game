#include "menu.h"
#include "display.h"
#include "tc_terminal.hpp"
#include <string>

Menu::Menu(std::string name, display::Renderer renderer) {
  int i = 1;
  for (char ch : name) {
    auto o = display::RenderObject(i, i / tc::terminal::getSize().first, ch);
    renderer.AddRenderObject(o);
    i++;
  }
}