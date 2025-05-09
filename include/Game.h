#pragma once
#include "Bike.h"
#include "Obstacle.h"
#include "Menu.h"  // Inclure Menu

class Game {
private:
    Bike bike;
    Obstacle obstacle;
    Menu menu;  // Ajouter l'objet Menu
    bool gameOver;
    int timer;
    int framesCounter;

public:
    Game();
    void Update();
    void Draw();
    void Reset();
};

