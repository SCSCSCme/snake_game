#ifndef MENU_H_
#define MENU_H_

#include <functional>
#include <string>
#include <vector>

#include "display.h"
#include "object.h"

struct Choice {
  std::string name;
  std::function<void()> func;
};

class Menu : public Object {
public:
  Menu(std::string name, display::Renderer* renderer);
  void add_choice(Choice &c);

private:
  std::vector<Choice> choices;
};

#endif