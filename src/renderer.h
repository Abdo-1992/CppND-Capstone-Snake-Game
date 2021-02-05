#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <string>
#include "SDL.h"
#include "snake.h"
#include "obstacle.hpp"


/*
This class is used to draw the snake, food, speacial food, and obstacles
*/
class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();

  //this fucntion draw all components of the game
  void Render(Snake const snake, SDL_Point const &food, SDL_Point const &specialFood, uint8_t flag ,Obstacle obs);

  //this function update the title of the game with the score, frame per second and the user name
  void UpdateWindowTitle(int score, int fps , std::string);

 private:
  SDL_Window *sdl_window;
  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif