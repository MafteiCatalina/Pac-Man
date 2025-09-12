#pragma once
#include "pacman.hpp"
#include "ghost.hpp"
#include "board.hpp"

class GameEngine {
    Pacman _pacman;
    Ghost _ghosts[4]; // Blinky, Pinky, Inky, Clyde
    Board _board;
public:
    GameEngine();
    void Init();
    void Run();
};
