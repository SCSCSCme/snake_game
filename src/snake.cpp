#include "snake.h"
#include <string>
#include <vector>

void Snake::move() {
  for (unsigned int i = 1; i < SnakePos.size(); i++) {
    if (i == 1) {
      continue;
    }
    SnakePos[i] = SnakePos[i - 1];
  }
}

void Snake::update() { move(); }