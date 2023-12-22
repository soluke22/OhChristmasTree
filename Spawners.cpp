#include "raylib.h"
#include "Spawners.h"

const int Spawners::mapWidth;
const int Spawners::mapHeight;
const int Spawners::treeSymbol;
const int Spawners::personSymbol;

void Spawners::InitializeMap()
{
    for (int x = 0; x < mapWidth; x++)
    {
        for (int y = 0; y < mapHeight; y++)
        {
            map[x][y] = 0;
        }
    }
}

bool Spawners::SpotChecker(int posX, int posY)
{
    if (posX >= 0 && posX < mapWidth && posY >= 0 && posY < mapHeight)
    {
        // Change logical OR to logical AND
        return map[posX][posY] != 1 && map[posX][posY] != 2 && map[posX][posY] != 3;
    }

    return false;
}

void Spawners::TreeSpawner()
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

void Spawners::PersonSpawner()
{
    int posX, posY;

    do
    {
        posX = GetRandomValue(0, mapWidth - 1);
        posY = GetRandomValue(0, mapHeight - 1);
    } while (!SpotChecker(posX, posY));

    map[posX][posY] = personSymbol;

    DrawCircle(posX, posY, 5, RED);
}

void Spawners::Spawner()
{
    // Spawns a tree and person for that tree every 10 seconds
    if (static_cast<int>(GetTime()) % 10 == 0)
    {
        TreeSpawner();
        PersonSpawner();
    }
}
