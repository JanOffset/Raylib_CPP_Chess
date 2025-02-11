#include "raylib.h"

int main()
{

    const int screen_width = 800;
    const int screen_height = 800;
    const int square_size = 100;
    const int board_offset = 40;

    InitWindow(screen_width,screen_height, "Chess");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        for (int row = 0; row < 8; row++)
        {
            for (int col = 0; col < 8; col++)
            {
                int x = row * square_size;
                int y = col * square_size;

                Color squareColor;
                if ((col + row) %2 == 0)
                {
                    squareColor = BEIGE;
                }
                else {squareColor = BROWN;}
                
                DrawRectangle(x,y,square_size,square_size,squareColor);
            }
            
        }
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
    
}