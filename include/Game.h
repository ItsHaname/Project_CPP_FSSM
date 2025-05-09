#pragma once
#include "Bike.h"
#include "Obstacle.h"
#include "Menu.h"
#include "Person.h"
#include "raylib.h"

class Game {
private:
    Bike bike;
    Obstacle obstacle;
    Menu menu;
    Person person; // 👈 Ajouté

    bool gameOver;
    bool win;
    int timer;
    int framesCounter;

    Vector2 moneyPos;
    int moneyWidth;
    int moneyHeight;

public:
    Game();
    void Update();
    void Draw();
    void Reset();
};

