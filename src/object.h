#ifndef OBJECT_H_
#define OBJECT_H_

#include "display.h"
#include <vector>

class Object {
public:
  Object(display::Renderer *renderer) { this->renderer = renderer; }
  void draw();

protected:
  std::vector<display::RenderObject> outputs;
  display::Renderer *renderer;
};

#endif