#include "Person.h"

Person::Person() {
    texture = LoadTexture("/home/hananeaitbah/Project_CPP_FSSM/class/file_000000005978620aaba046ed841eafe2.png");  // Assure-toi que le chemin est correct
    width = (float)texture.width;
    height = (float)texture.height;
}

Person::~Person() {
    UnloadTexture(texture);
}

void Person::Draw(Vector2 seatPosition) {
    float scale = 0.08f;
    float verticalOffset = 20.0f; // Plus grande valeur pour rapprocher la personne du vélo

    Vector2 position = {
        seatPosition.x - (texture.width * scale) / 2,
        seatPosition.y - (texture.height * scale) + verticalOffset
    };

    DrawTextureEx(texture, position, 0.0f, scale, WHITE);
}

