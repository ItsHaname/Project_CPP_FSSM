#pragma once
#include "raylib.h"

class Person {
public:
    float width, height;
    Texture2D texture;

    Person();
    ~Person();

    void Draw(Vector2 seatPosition);
};

