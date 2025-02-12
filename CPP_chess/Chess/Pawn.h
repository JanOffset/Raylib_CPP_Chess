#ifdef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn: public Piece 
{
    public:
    Pawn(char color, const char* texturePath);
    void Draw(int x, int y, int squareSize) override;

}
#endif