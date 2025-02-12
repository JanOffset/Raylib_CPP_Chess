#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn: public Piece 
{
    public:
    Pawn(char color, const char* texturePath);
    ~Pawn();
    void Draw(int x, int y, int squareSize) override;

    private:
    Texture2D texture;
};
#endif