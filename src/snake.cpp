#include "snake.h"

void Snake::move() {
  for (unsigned int i = 1; i < SnakeBody.size(); i++) {
    if (i == 1) {
      continue;
    }
    SnakeBody[i] = SnakeBody[i - 1];
  }
}

void Snake::input() {}

void Snake::update() { move(); }