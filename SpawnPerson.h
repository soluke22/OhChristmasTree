#ifndef SPAWNPERSON_H_
#define SPAWNPERSON_H_

class SpawnPerson {
    public:
        int spriteWidth;
        int spriteHeight;
        int posX;
        int posY;
        
        SpawnPerson(int width, int height) {
            spriteHeight = height;
            spriteWidth = width;
            posX = rand() % (800 - spriteWidth);
            posY = rand() % (450 - spriteHeight);
        }
        
        void DrawPerson() {
            DrawRectangle(posX, posY, spriteWidth, spriteHeight, RED);
        }
        
        void SpawnConfig(int spawnAmount) {
            SpawnPerson *newPerson = new SpawnPerson(34,50);
            while(spawnAmount > 0){
                
                
                
                newPerson->DrawPerson();
                
                spawnAmount -= 1;
            }
            
        }
};

#endif
