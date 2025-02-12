#ifndef PIECE_H
#define PIECE_H

#include "raylib.h"
#include <string>

class Piece {
    public:
     Piece(char color, char abbr);
     virtual ~Piece() = default;
     virtual void Draw(int x, int y,int squareSize) = 0;

    char getColor() const {return color;}
    char getAbbreviation() const {return abbreviation;}

    protected:
        char color;
        char abbreviation;

};

class Pawn : public Piece {
    public:
    Pawn(char color);
    void Draw(int x, int y, int squareSize) override;
};

#endif