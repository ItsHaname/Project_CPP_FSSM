#pragma once
#include "raylib.h"

class Menu {
public:
    Menu();
    void Update();
    void Draw();
    bool IsPlaying() const;//indique si le jeu doit commencer
    bool ShouldQuit() const;//Indique si le joueur veut quitter

private:
    bool isPlaying;
    bool shouldQuit;
};

