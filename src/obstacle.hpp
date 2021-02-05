#ifndef  OBSTACLE_H
#define  OBSTACLE_H

#include <vector>
#include "SDL.h"

enum class Level{
    easy = 1,
    medium,
    hard,
};


/*
This Class is control the shape of obstacles
*/
class Obstacle{
    public:
        Obstacle(int grid_width, int grid_height ,Level l);

        //to set certian level to the object
        void setLevel(Level);

        //return the level of the game
        Level getLevel();

        //return if a certain cell is an obstacle or not
        bool obstacle_cell(int x , int y);

        //the body of obstacle
        std::vector<SDL_Point> obstacles;

    private:
        Level level ;
        int grid_width;
        int grid_height;
};


#endif