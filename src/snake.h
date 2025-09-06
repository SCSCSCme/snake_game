#ifndef SNAKE_H_
#define SNAKE_H_

#include <string>
#include <utility>
#include <vector>

enum class Direction { up = 0, down = 1, right = 2, left = 3 };

class Snake {
private:
  std::vector<std::pair<int, int>> SnakePos;
  std::string SnakeBody;
  Direction dire = Direction::up;

public:
  Snake() : SnakeBody("Player") {}
  Snake(std::string name) : SnakeBody(name) {}

  void move();
  void input();
  void update();
};

#endif