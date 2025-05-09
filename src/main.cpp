#include "raylib.h"
#include "Game.h"

int main() {
    const int screenWidth  = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Jeu de course de vélo 🚲 - Raylib C++");
    SetTargetFPS(60);

    Game game;
    while (!WindowShouldClose()) {
        game.Update();
        game.Draw();
    }

    CloseWindow();
    return 0;
}

