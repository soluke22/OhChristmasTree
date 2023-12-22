#include "SpawnPerson.h"

        
SpawnPerson::SpawnPerson(int width, int height) {
    spriteHeight = height;
    spriteWidth = width;
    posX = rand() % (800 - spriteWidth);
    posY = rand() % (450 - spriteHeight);
}


