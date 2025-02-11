#include "raylib.h"

int main()
{

    const int screen_width = 840;
    const int screen_height = 840;
    const int square_size = 100;
    const int board_offset = 40;

    InitWindow(screen_width,screen_height, "Chess");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        for (int row = 0; row < 8; row++)
        {
            for (int col = 0; col < 8; col++)
            {
                int x = row * square_size + board_offset;
                int y = col * square_size + board_offset;

                Color squareColor;
                if ((col + row) %2 == 0)
                {
                    squareColor = BEIGE;
                }
                else {squareColor = BROWN;}
                
                DrawRectangle(x,y,square_size,square_size,squareColor);
            }
            
        }
        
        for (int i = 0; i < 8; i++)
        {   
            DrawText(TextFormat("%d", 8 - i),screen_width - 820, i * square_size + board_offset + square_size/3,20,GRAY);
            DrawText(TextFormat("%c", 'A' + i),i * square_size + board_offset + square_size/3, screen_height - 820, 20, GRAY);
        
        }
        
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
    
}