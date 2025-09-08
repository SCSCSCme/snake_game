#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <vector>
#include <mutex>

namespace display {
struct RenderObject {
  RenderObject(char symbol, int x, int y) : symbol(symbol), x(x), y(y) {}

  char symbol;
  int x, y;
};

class Renderer {
public:
  void draw();
  void AddRenderObject(const RenderObject &o) { list.push_back(o); }
  void AddRenderObject(char symbol, int x, int y) {
    std::lock_guard<std::mutex> lock(renderMutex);
    list.push_back({symbol, x, y});
  }

private:
  std::vector<RenderObject> list;
  std::mutex renderMutex;
};

} // namespace display

#endif