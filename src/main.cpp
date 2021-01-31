#include <iostream>
#include <string>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "obstack.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  /*
  ask the user about his name and the game level
  */
  int level = 0 ;
  std::string userName ;
  std::cout<< "Enter your name: " << std::endl ;
  std::cin>> userName ;
  std::cout<< "choose the number of game level: \n1- Easy \n2- Medium \n3- Hard" << std::endl ;
  std::cin>> level ;

  if(level > 4)
    level = 0 ;

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight, static_cast<Level> (level) , userName );
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}