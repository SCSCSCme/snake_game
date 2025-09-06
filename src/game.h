#ifndef GAME_H_
#define GAME_H_

#include <cstdint>
#include <string>

enum class Difficulty { normal = 0, difficult = 1 };

class Game {
private:
  uint8_t score = 0;
  bool GamePause = false;

  std::string PlayerName;
  Difficulty difficulty;

public:
  Game(std::string name, Difficulty diff);

  ~Game();

  void run();

  bool Is_game_pause() { return GamePause; }
};

#endif