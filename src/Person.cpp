#include "Person.h"

Person::Person() {
    texture = LoadTexture("/home/kari/Project_CPP_FSSM/class/file_000000005978620aaba046ed841eafe2.png");  // Assure-toi que le chemin est correct
    width = (float)texture.width;
    height = (float)texture.height;
}

Person::~Person() {
    UnloadTexture(texture);
}

void Person::Draw(Vector2 seatPosition) {
//La fonction Draw() fait le lien entre la texture chargée et l'affichage visuel dans la fenêtre du jeu
    float scale = 0.08f; //0.08 signifie que l'image sera redimensionnée à 8 % de sa taille d'origine
    float verticalOffset = 20.0f; // valeur pour rapprocher la personne du vélo

    Vector2 position = {
        seatPosition.x - (texture.width * scale) / 2,
        seatPosition.y - (texture.height * scale) + verticalOffset
    };

    DrawTextureEx(texture, position, 0.0f, scale, WHITE);//dessine la texture de la personne à la position calculée avec l'échelle avec couleur blanche
}

