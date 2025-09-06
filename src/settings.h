#include "tc_terminal.hpp"
#include <tc.hpp>
#include <utility>

constexpr int EXIT_SO_RUNNING_ERROR = 1;
static const std::pair<int, int> TERMINAL_MIDDLE = []() {
  return tc::terminal::getSize() / 2;
}();