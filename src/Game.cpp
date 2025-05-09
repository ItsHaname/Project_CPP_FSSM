#include "Game.h"
#include "raylib.h"

Game::Game() : obstacle(800), menu() {
    gameOver = false;
    timer = 30;
    framesCounter = 0;
}

void Game::Update() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) {
        menu.Update();  // Met à jour le menu
    } else if (!gameOver) {
        bike.Update();
        obstacle.Update();

        if (CheckCollisionRecs(bike.GetRect(), obstacle.GetRect()))
            gameOver = true;

        if ((framesCounter++ % 60) == 0 && timer > 0)
            timer--;

        if (timer == 0)
            gameOver = true;
    } else {
        if (IsKeyPressed(KEY_ENTER)) Reset();
    }
}

void Game::Draw() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) {
        menu.Draw();  // Afficher le menu
    } else {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (!gameOver) {
            bike.Draw();
            obstacle.Draw();
            DrawText(TextFormat("Temps restant: %d", timer), 10, 10, 20, DARKGRAY);
        } else {
            DrawText("💥 Game Over!", 200, 200, 40, RED);
            DrawText("Appuyez sur ENTREE pour recommencer", 120, 300, 20, DARKGRAY);
        }

        EndDrawing();
    }
}

void Game::Reset() {
    bike = Bike();
    obstacle = Obstacle(800);
    gameOver = false;
    timer = 30;
    framesCounter = 0;
}

