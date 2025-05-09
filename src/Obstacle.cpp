#include "Obstacle.h"

Obstacle::Obstacle(float startX) {
    width  = 20;
    height = 150;
    x      = startX;
    y      = GetRandomValue(0, GetScreenHeight() - (int)height);//Donne une position verticale aléatoire à l’obstacle, et reste à l'interieur de l'ecran
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
    DrawRectangle(x, y, width, height, RED);//Dessine un rectangle rouge représentant l’obstacle
}

Rectangle Obstacle::GetRect() {
    return { x, y, width, height };
}

