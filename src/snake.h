#ifndef SNAKE_H_
#define SNAKE_H_

#include <utility>
#include <vector>

enum class Direction { up = 0, down = 1, right = 2, left = 3 };

class Snake {
private:
  std::vector<std::pair<int, int>> SnakeBody; // x and y pos
  Direction dire = Direction::up;

public:
  void move();
  void update();
};

#endif