#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

/*
The class is responsible to receiving input from the user
*/
class Controller {
 public:

  //this function used to search in events for a certain event
  void HandleInput(bool &running, Snake &snake) const;

 private:

  //this function used to take a decision according to some events
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;

};

#endif