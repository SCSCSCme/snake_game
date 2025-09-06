#include "game.h"

#include <iostream>
#include <limits>
#include <string>

#define CLEAR_BUFFER                                                           \
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

Diffculty GameDiff;

int main() {
  int input = -1;

  std::cout << "Welcome to snake game" << std::endl;

  while (input != 0 && input != 1) {
    std::cout << "Select diffculty: " << std::endl
              << "0: Normal,\n"
              << "1: Diffcult\n";
    std::cin >> input;

    if (input == 0) {
      GameDiff = Diffculty::NORMAL;
      CLEAR_BUFFER;
      break;
    } else if (input == 1) {
      GameDiff = Diffculty::DIFFICULT;
      CLEAR_BUFFER;
      break;
    } else {
      std::cout << "Bad value, retry\n";
      CLEAR_BUFFER;
      continue;
    }
  }

  std::string name;

  std::cout << "You Name: ";
  std::getline(std::cin, name);

  Game *game = new Game(name.c_str(), GameDiff);
  game->run();
  return 0;
}