#include "obstacle.hpp"

Obstacle::Obstacle(int width, int height, Level l):level{l}, grid_width{width},grid_height{height} {
    switch (l)
    {
    case Level::easy:
        break;
    case Level::medium :
        for(int i = 0 ; i < width ; i++){
            SDL_Point point = {i,0} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < height ; i++){
            SDL_Point point = {0,i} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < width ; i++){
            SDL_Point point = {i,width - 1} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < height ; i++){
            SDL_Point point = {height - 1,i} ;
            obstacles.push_back(point) ;
        }    
        break;
    case Level::hard   :
        for(int i = 0 ; i < width ; i++){
            SDL_Point point = {i,0} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < height ; i++){
            SDL_Point point = {0,i} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < width ; i++){
            SDL_Point point = {i,width - 1} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < height ; i++){
            SDL_Point point = {height - 1,i} ;
            obstacles.push_back(point) ;
        }    
        for(int i = 0 ; i < height/8 ; i++){
            SDL_Point point = {width /2, height/2 + i} ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < width/8 ; i++){
            SDL_Point point = {width /2 + i, height/2 } ;
            obstacles.push_back(point) ;
        }
        
        for(int i = 0 ; i < height/8 ; i++){
            SDL_Point point = {3*width/7 +i , height/2  }; ;
            obstacles.push_back(point) ;
        }
        for(int i = 0 ; i < height/8 ; i++){
            SDL_Point point = {width /2 , 3*height/7 +i  }; ;
            obstacles.push_back(point) ;
        }        
        break;

    default:
        break;
        
    }
}

bool Obstacle::obstacle_cell(int x , int y){
    bool result = false ;
    switch (level)
    {
    case Level::medium:
        if(!x || !y || (x==(grid_width - 1)) || (y==(grid_height -1)))
            result = true;
        break;
    
    case Level::hard:
        for (SDL_Point const &point : obstacles) {
            if(point.x == x && point.y == y){
                result = true;
                break;
            }
        }
        break;
    default:
        break;
    }
    return result ;
}

void Obstacle::setLevel(Level l){
    level = l ;
}

Level Obstacle::getLevel(){
    return level ;
}

