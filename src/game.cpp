#include "game.h"
#include "settings.h"
#include "snake.h"

#include <iostream>
#include <string>

void Game::run() {
  std::string diff;
  if (difficulty == Difficulty::normal) {
    diff = "normal";
  } else {
    diff = "difficult";
  }

  std::cout << "name: " << PlayerName << "\ndiffculty: " << diff;
}

Game::~Game() { std::cout << "Game exit;\n"; }