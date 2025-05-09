#pragma once
#include "raylib.h"
#include "Person.h"

class Bike {
public:
    float x, y; // Position du vélo sur l’écran
    float width, height;
    float speed;
    Person person;

    Bike();
    ~Bike();

    void Update();
    void Draw();
    Rectangle GetRect();
    Vector2 GetSeatPosition(); // 👈 Ajout : pour récupérer la position du siège
};

