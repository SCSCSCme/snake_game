#include "game.h"
#include "settings.h"

#include <iostream>
#include <string>

void Game::run() {
  std::cout << "name: " << PlayerName << "\ndiffculty: " << difficulty;
}

Game::Game(std::string name, Diffculty diff) {
  PlayerName = name;
  difficulty = diff;
}