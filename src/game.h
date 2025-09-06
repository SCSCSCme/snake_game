#ifndef GAME_H_
#define GAME_H_

#include <cstdint>
#include <string>

enum class Diffculty { 
	normal = 0,
	difficult = 1 
};

class Game {
private:
  uint8_t score = 0;
  bool GamePause = false;

  std::string PlayerName;
  Diffculty difficulty;

public:
  Game(std::string name, Diffculty diff);

  ~Game();

  void run();

  bool Is_game_pause() { return GamePause; }
};

#endif