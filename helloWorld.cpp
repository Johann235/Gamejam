#include <iostream>
#include <cmath> 
#include <raylib.h>
#include "temp.hpp"

int main()
{
    std::cout << "Hello World" << std::endl;
    hello josh;
    josh.print();

    InitWindow(800,800,"Hello");
    SetTargetFPS(60);

    int ballX = 400;
    int ballY = 400;
    while(WindowShouldClose() == false)
    {
        // Evene handling

        //Updating position
        ballX += 3;
        //Drawing
        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircle(ballX,ballY,20,WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
