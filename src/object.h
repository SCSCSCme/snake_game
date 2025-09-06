#ifndef OBJECT_H_
#define OBJECT_H_

#include "display.h"
#include <vector>

class Object {
public:
  void draw(display::Renderer display);

protected:
  std::vector<display::RenderObject> output;
};

#endif