#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include "SDL.h"

/*
This class is responsible for snake position, snake body, snake speed and snake alive
*/
class Snake {
 public:
  enum class Direction { kUp, kDown, kLeft, kRight };

  Snake(int grid_width, int grid_height)
      : grid_width(grid_width),
        grid_height(grid_height),
        head_x(grid_width / 8),
        head_y(grid_height / 8) {}


  //this function is responsible to updating snake position and snake body
  void Update();

  //this fucntion is used to add a block to the snake body after it hit the food
  void GrowBody();

  //this function return weather a certian cell is a part of the snake or not
  bool SnakeCell(int x, int y);

  Direction direction = Direction::kDown;

  float speed{0.1f};
  int size{1};
  bool alive{true};
  bool stopSnake{false} ;
  float head_x;
  float head_y;
  std::vector<SDL_Point> body;

 private:
  //this fuction updates the snake head position
  void UpdateHead();

  //this fucntion updates the snake budy position
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell);

  bool growing{false};
  int grid_width;
  int grid_height;
};

#endif