#include "raylib.h"
#include <iostream>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Raylib C++ in Codespces - Pong Practice");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello from Cloud Raylib! Ready for Pong ", 100, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}