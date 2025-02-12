#include "raylib.h"
#include "Pawn.h"

int main()
{

    const int screen_width = 840;
    const int screen_height = 840;
    const int square_size = 100;
    const int board_offset = 40;

    InitWindow(screen_width,screen_height, "Chess");
    SetTargetFPS(60);

    Texture2D pawnTexture = LoadTexture("Assets/chess_king.png");    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(pawnTexture,200,200,WHITE);
        
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
        
        UnloadTexture(pawnTexture);
      //  int testY = board_offset + 3 * square_size;
     //   int testX = board_offset + 4 * square_size;
     //   whitePawn.Draw(testX,testY,square_size);
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
    
}