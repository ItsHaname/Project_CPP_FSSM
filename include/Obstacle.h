#pragma once
#include "raylib.h"

class Obstacle {
public:
    float x, y;
    float width, height;
    float speed;

    Obstacle(float startX);
    void Update();
    void Draw();
    Rectangle GetRect();
};

