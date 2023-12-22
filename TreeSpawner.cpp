#include "raylib.h"

void TreeSpawner()
{
    int posX, posY;

    do
    {
        posX = GetRandomValue(0, mapWidth - 1);
        posY = GetRandomValue(0, mapHeight - 1);
    } while (!SpotChecker(posX, posY));

    map[posX][posY] = treeSymbol;

    DrawCircle(posX, posY, 5, GREEN);
}

bool SpotChecker(int posX, int posY)
{
    if (posX >= 0 && posX < mapWidth && posY >= 0 && posY < mapHeight)
    {
        return map[posX][posY] == 0;
    }

    return false;
}

/*const int mapWidth = 800;
const int mapHeight = 450;
const int treeSymbol = 1;

int map[mapWidth][mapHeight];

void InitializeMap()
{
    for (int x = 0; x < mapWidth; x++)
    {
        for (int y = 0; y < mapHeight; y++)
        {
            map[x][y] = 0;
        }
    }
}*/