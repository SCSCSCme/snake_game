#ifndef GAME_H_
#define GAME_H_

#include <cstdint>
#include <string>

#include "snake.h"

enum class Difficulty { normal = 0, difficult = 1 };

class Game {
private:
  uint8_t score = 0;
  bool GamePause = false;

  std::string PlayerName = "Wokrlie";
  Difficulty difficulty = Difficulty::normal;

  Snake snake{0};

public:
  Game(std::string name, Difficulty diff)
    : PlayerName(name), difficulty(diff), snake(PlayerName) {}

  ~Game();

  void run();

  bool Is_game_pause() { return GamePause; }
};

#endif