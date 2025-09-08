#include "tc.hpp"
#include <tc.hpp>
#include <utility>

constexpr int EXIT_SO_RUNNING_ERROR = 1;
static const std::pair<int, int> TERMINAL_MIDDLE = []() {
  std::pair<int, int> MiddleVaule = tc::terminal::getSize();
  MiddleVaule.first /= 2;
  MiddleVaule.second /= 2;
  return MiddleVaule;
}();