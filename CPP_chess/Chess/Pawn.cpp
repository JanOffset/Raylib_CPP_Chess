#include "Pawn.h"
#include "raylib.h"

Pawn::Pawn(char color,const char* texturePath) : Piece(color, texturePath) {}

void Pawn::Draw(int x, int y, int squareSize) {
DrawTexturePro(texture, (Rectangle){0,0,(float)texture.width,(float)texture.height},
(Rectangle){x,y,(float)texture.width,(float)texture.height},(Vector2){0,0},0.0f,WHITE);


}