#include "Bike.h"
#include <cmath>

Bike::Bike() {
    width = 80;
    height = 40;
    x = 100;
    y = 300;
    speed = 5;
}

Bike::~Bike() {
    // Rien de spécial ici car Person libère sa propre texture
}

void Bike::Update() {
    if (IsKeyDown(KEY_UP))    y -= speed;
    if (IsKeyDown(KEY_DOWN))  y += speed;
    if (IsKeyDown(KEY_LEFT))  x -= speed;
    if (IsKeyDown(KEY_RIGHT)) x += speed;

    if (x < 0) x = 0;
    if (y < 0) y = 0;
    if (x + width > GetScreenWidth())   x = GetScreenWidth() - width;
    if (y + height > GetScreenHeight()) y = GetScreenHeight() - height;
}

void Bike::Draw() {
    Color color = DARKGRAY;

    Vector2 rearWheel  = { x, y };
    Vector2 frontWheel = { x + width, y };
    float wheelRadius = 15;

    // Roues
    DrawCircleLinesV(rearWheel, wheelRadius, color);
    DrawCircleLinesV(frontWheel, wheelRadius, color);

    for (int i = 0; i < 12; i++) {
        float angle = (float)i * 360.0f / 12.0f;
        Vector2 spokeEndRear = {
            rearWheel.x + wheelRadius * cosf(angle * DEG2RAD),
            rearWheel.y + wheelRadius * sinf(angle * DEG2RAD)
        };
        Vector2 spokeEndFront = {
            frontWheel.x + wheelRadius * cosf(angle * DEG2RAD),
            frontWheel.y + wheelRadius * sinf(angle * DEG2RAD)
        };
        DrawLineEx(rearWheel, spokeEndRear, 2, color);
        DrawLineEx(frontWheel, spokeEndFront, 2, color);
    }

    // Position de la personne sur la selle
    Vector2 seatPosition = { x + width * 0.5f, y - 20 };
    person.Draw(seatPosition);

    // Cadre arrière
    Vector2 pedal = { x + width * 0.5f, y };
    Vector2 saddle = { x + width * 0.4f, y - 60 };
    DrawLineEx(rearWheel, pedal, 2, color);
    DrawLineEx(pedal, saddle, 2, color);
    DrawLineEx(saddle, rearWheel, 2, color);

    // Cadre avant
    Vector2 topBar = { x + width * 0.8f, y - 25 };
    DrawLineEx(pedal, frontWheel, 2, color);
    DrawLineEx(pedal, topBar, 2, color);
    DrawLineEx(topBar, frontWheel, 2, color);

    // Barre horizontale et guidon
    DrawLineEx(saddle, topBar, 2, color);
    DrawLineEx(topBar, { topBar.x + 5, topBar.y - 10 }, 2, color);

    // Selle
    DrawLineEx(saddle, { saddle.x - 10, saddle.y - 5 }, 2, color);
}

Rectangle Bike::GetRect() {
    return Rectangle{ x, y, width, height };
}

