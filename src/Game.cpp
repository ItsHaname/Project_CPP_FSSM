#include "Game.h"
#include "raylib.h"

Game::Game() : obstacle(800), menu() {
    gameOver = false;
    win = false;
    timer = 20;
    framesCounter = 0;

    moneyPos = {600, 300};  // Position fixe de la photo d'argent
    moneyWidth = 50;
    moneyHeight = 50;
}

void Game::Update() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) {//Si le menu est actif et qu’on n’est pas encore en train de jouer ni en train de quitter
        menu.Update();
    } else if (!gameOver) { //si le jeu est en cours c-à-d pas fini
        bike.Update();
        obstacle.Update();

        // Récupérer les rectangles pour collision
        Rectangle bikeRect = bike.GetRect();
        Rectangle obstacleRect = obstacle.GetRect();

        // Rectangle de la personne sur le vélo
        Rectangle personRect = {
            bike.x + bike.width * 0.5f - (bike.person.width * 0.08f) / 2,
            bike.y - (bike.person.height * 0.08f) + 20,
            bike.person.width * 0.08f,
            bike.person.height * 0.08f
        };

        // Collision vélo ou personne avec l’obstacle 
        if (CheckCollisionRecs(bikeRect, obstacleRect) || CheckCollisionRecs(personRect, obstacleRect)) { //Vérifie si le vélo et l’obstacle se touchent
            gameOver = true;
            win = false;
        }

        // Victoire si touche carré jaune après 15 secondes
        if (timer <= 5) {
            Rectangle moneyRect = {moneyPos.x, moneyPos.y, (float)moneyWidth, (float)moneyHeight};
            if (CheckCollisionRecs(bikeRect, moneyRect) || CheckCollisionRecs(personRect, moneyRect)) {
                win = true;
                gameOver = true;
            }
        }

       //Compte combien de frames sont passées et à chaque 60 frame passés il decremente le compteur
        if ((framesCounter++ % 60) == 0 && timer > 0)
            timer--;

        if (timer == 0 && !win)
            gameOver = true;
    } else {
        if (IsKeyPressed(KEY_ENTER))
            Reset();
    }
}
//C’est la fonction appelée à chaque frame pour dessiner (afficher)les éléments du jeu à l’écran
void Game::Draw() {
    if (!menu.IsPlaying() && !menu.ShouldQuit()) { //si joueur n'est pas comencé et n'est pas quiter ona dans le menu
        menu.Draw();
    } else { // si il a commencé
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (!gameOver) {  // si le joueur n'a pas encore perdu
            bike.Draw();
            obstacle.Draw();

            // Affiche l’argent (carré jaune) seulement après 15 sec
            if (timer <= 5) {
                DrawRectangle(moneyPos.x, moneyPos.y, moneyWidth, moneyHeight, GOLD);
            }

            DrawText(TextFormat("Temps restant: %d", timer), 10, 10, 20, DARKGRAY);// affiche temps restant
        } else {
            if (win) {
                DrawText(" YOU WIN!", 200, 200, 80, GREEN);
            } else {
                DrawText(" Game over!", 200, 200, 80, RED);
            }
        }

        EndDrawing();
    }
}

void Game::Reset() {
    bike = Bike();
    obstacle = Obstacle(800);
    gameOver = false;
    win = false;
    timer = 20;
    framesCounter = 0;
    moneyPos = {600, 300};
}

