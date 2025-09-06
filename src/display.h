#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <vector>

namespace display {
struct RenderObject {
  char symbol;
  int x, y;
};

class Renderer {
public:
  void draw();
  void AddRenderObject(RenderObject &o) { list.push_back(o); }
  void AddRenderObject(int x, int y, char symbol) {
    list.push_back({symbol, x, y});
  }

private:
  std::vector<RenderObject> list;
};

} // namespace display

#endif