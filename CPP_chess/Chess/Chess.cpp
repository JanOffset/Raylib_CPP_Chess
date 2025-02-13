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
    Image pawn = LoadImage("Assets/chess_king.png");
    Texture2D pawnTexture = LoadTextureFromImage(pawn);    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawTexture(pawnTexture,200,200,WHITE);
        
        
        for (int row = 0; row < 8; row++)
        { for (int col = 0; col < 8; col++)
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
        
        
         int testY = board_offset + square_size;
         int testX = board_offset + 4 * square_size;
         Rectangle destination{board_offset + column,testY,float{square_size},float{square_size}};
         Rectangle source{0,0,float{pawn.width},float{pawn.height}};
         Vector2 origin{square_size / 2.0f,square_size / 2.0f};
        DrawTexturePro(pawnTexture,source,destination,origin,0.0f,WHITE);
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
    
}