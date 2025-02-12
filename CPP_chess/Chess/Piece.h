#ifndef PIECE_H
#define PIECE_H

#include "raylib.h"
#include <string>

class Piece {
    public:
     Piece(char color, const char* texturePath);
     virtual ~Piece();
     virtual void Draw(int x, int y,int squareSize) = 0;

    char getColor() const {return color;}
    
    protected:
        char color;
        Texture2D texture;

};
#endif