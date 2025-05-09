#include "Menu.h"
#include "raylib.h"

Menu::Menu() {
    isPlaying = false;
    shouldQuit = false;
}

void Menu::Update() {
    if (IsKeyPressed(KEY_ENTER)) {
        isPlaying = true;
    }
    if (IsKeyPressed(KEY_ESCAPE) || IsKeyPressed(KEY_SPACE)) {
        shouldQuit = true;
    }
}

void Menu::Draw() {
    // Charger les ressources
    Texture2D background = LoadTexture("/home/hananeaitbah/Project_CPP_FSSM/class/Capture d’écran du 2025-04-29 19-00-29.png");
    Font boldFont = LoadFont("Roboto-Bold.ttf");  // Assure-toi que ce fichier existe

    BeginDrawing();

    // Dessiner l'image de fond
    DrawTexture(background, 0, 0, WHITE);

    // Couleur et taille du texte
    Color textColor = BLACK;
    int fontSize = 40;
    Vector2 pos;

    // Texte "Bienvenue"
    const char* title = "Bienvenue dans le Jeu!";
    pos.x = GetScreenWidth()/2 - MeasureTextEx(boldFont, title, fontSize, 2).x / 2;
    pos.y = 100;
    DrawTextEx(boldFont, title, pos, fontSize, 2, textColor);

    // Texte "Jouer"
    const char* jouerText = "Jouer";
    const char* jouerHint = "(Appuyez sur ENTREE)";
    pos.y = GetScreenHeight()/2 - 20;
    pos.x = GetScreenWidth()/2 - MeasureTextEx(boldFont, jouerText, 30, 2).x / 2;
    DrawTextEx(boldFont, jouerText, pos, 30, 2, textColor);
    pos.x = GetScreenWidth()/2 - MeasureTextEx(boldFont, jouerHint, 20, 2).x / 2;
    pos.y += 35;
    DrawTextEx(boldFont, jouerHint, pos, 20, 2, textColor);

    // Texte "Quitter"
    const char* quitterText = "Quitter";
    const char* quitterHint = "(Appuyez sur ECHAP ou ESPACE)";
    pos.y += 50;
    pos.x = GetScreenWidth()/2 - MeasureTextEx(boldFont, quitterText, 30, 2).x / 2;
    DrawTextEx(boldFont, quitterText, pos, 30, 2, textColor);
    pos.y += 35;
    pos.x = GetScreenWidth()/2 - MeasureTextEx(boldFont, quitterHint, 20, 2).x / 2;
    DrawTextEx(boldFont, quitterHint, pos, 20, 2, textColor);

    EndDrawing();

    // Décharger les ressources
    UnloadTexture(background);
    UnloadFont(boldFont);
}

bool Menu::IsPlaying() const {
    return isPlaying;
}

bool Menu::ShouldQuit() const {
    return shouldQuit;
}

