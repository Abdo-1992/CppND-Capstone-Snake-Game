#ifndef GAME_H
#define GAME_H

#include <random>
#include "SDL.h"
#include "controller.h"
#include "renderer.h"
#include "snake.h"
#include "obstacle.hpp"


/*
This class is controlling the snake, food, and speacial food in the game and 
its position.
*/
class Game {
 public:
  Game(std::size_t grid_width, std::size_t grid_height, Level l , std::string);
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);

  //return the score of the player
  int GetScore() const;

  //return the size of the snake after the game
  int GetSize() const;

  std::string userName ;
  uint8_t chanceOpen{0} ;

 private:

  Snake snake;
  Obstacle obs ;
  SDL_Point food;
  SDL_Point SpecialFood;

  std::random_device dev;
  std::mt19937 engine;
  std::uniform_int_distribution<int> random_w;
  std::uniform_int_distribution<int> random_h;

  int score{0};

  void PlaceFood();
  void PlaceSpecialFood();
  void Update();
};

#endif