#include "object.h"

void Object::draw() {
  for (auto object : outputs) {
    renderer.AddRenderObject(object);
  }
}