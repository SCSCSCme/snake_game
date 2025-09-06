#include "game.h"
#include "settings.h"

#include <iostream>
#include <string>

void Game::run() {
  std::string diff;
  if (difficulty == Diffculty::normal) {
    diff = "normal";
  } else {
    diff = "difficult";
  }

  std::cout << "name: " << PlayerName << "\ndiffculty: " << diff;
}

Game::Game(std::string name, Diffculty diff) {
  PlayerName = name;
  difficulty = diff;
}