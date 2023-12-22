#include "raylib.h"
#include "Spawners.h"

const int screenWidth = 800;
const int screenHeight = 450;

int main()
{
    InitWindow(screenWidth, screenHeight, "Oh Christmas Tree");
    Spawners spawners;
    spawners.InitializeMap();

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(RAYWHITE);
        spawners.Spawner();

        EndDrawing();
    }
    return 0;
}
