# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.


This Project has extended the Snake Game (https://github.com/udacity/CppND-Capstone-Snake-Game) to have many features. After starting the game you need to write your name and choose the game level first.

## New Features:
1- The Levels of Game:

  you can chooset the game level between these options:

  * **Easy**  : snake game without any obstacles.

  * **Medium**: snake game with a fence as an obstacle.

  * **Hard**  : snake game with a fence and and obstacle in the middle of the window.

2- You can stop the game by pressing **'space'**, and continue playing by pressing **'space'** again.

3- The special food will appear when you hit the normal food for three time. The specail food will gives you more score points. The spcial food will be exist for only  **7 seconds** and will after that it will disappear again. It will also disapear if you hit the normal food instead of it. 

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## CLass Structure:
The source fole contain 5 classes:
1. Game class: is responsible to manage the game and updating the position of the food and the snake
2. Snake class: is manage the head and body of the snake and its position.
3. control class: is manage the user input.
4. Render class: is responsible for drawing the snake, food, and obstacles.
5. Obstacle class: is manage the shape of obstacles.


## rubric points

* ### Loops, Functions, I/O:

  1. The project demonstrates an understanding of C++ functions and control structures.
  2. The project reads infromation from the user to determine user name and game level.
  3. The projcet user input to control the snake and pause the game.

      (Demonestrated all over the project).



* ### Object Oriented Programming:

  1. The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
  2. All class data members are explicitly specified as public, protected, or private.
  3. All class members that are set to argument values are initialized through member initialization lists.
  4. All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
    
     (Demonestrated all over the project).     
