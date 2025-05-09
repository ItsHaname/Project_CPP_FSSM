#pragma once
#include "raylib.h"

class Menu {
public:
    Menu();
    void Update();
    void Draw();
    bool IsPlaying() const;
    bool ShouldQuit() const;

private:
    bool isPlaying;
    bool shouldQuit;
};

