#include "Piece.h"
#include "raylib.h"

Piece::Piece(char color,const char* texturePath) : color(color) {texture = LoadTexture(texturePath);}

Piece::~Piece() {
    UnloadTexture(texture);
}