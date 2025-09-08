#include "display.h"
#include <tc.hpp>

namespace display {
void Renderer::draw() {
  std::lock_guard<std::mutex> lock(renderMutex);
  tc::terminal::clear();
  for (const auto &obj : list) {
    tc::terminal::moveCursor(obj.x + 1, obj.y + 1);
    std::cout << obj.symbol;
  }
  tc::terminal::flush();
  tc::terminal::moveCursor(1, 1);
}
} // namespace display