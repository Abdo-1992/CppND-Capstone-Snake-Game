#ifndef  OBSTACLE_H
#define  OBSTACLE_H

#include <vector>
#include "SDL.h"

enum class Level{
    easy = 1,
    medium,
    hard,
};


class Obstacle{
    public:
        Obstacle(int grid_width, int grid_height ,Level l);
        void setLevel(Level);
        Level getLevel();
        bool obstacle_cell(int x , int y);
        std::vector<SDL_Point> obstacles;

    private:
        Level level ;
        int grid_width;
        int grid_height;
};


#endif