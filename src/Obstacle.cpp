#include "Obstacle.h"

Obstacle::Obstacle(float startX) {
    width  = 20;
    height = 200;
    x      = startX;
    y      = GetRandomValue(0, GetScreenHeight() - (int)height);
    speed  = 6;
}

void Obstacle::Update() {
    x -= speed;
    if (x + width < 0) {
        x = GetScreenWidth();
        y = GetRandomValue(0, GetScreenHeight() - (int)height);
    }
}

void Obstacle::Draw() {
    DrawRectangle(x, y, width, height, RED);
}

Rectangle Obstacle::GetRect() {
    return { x, y, width, height };
}

