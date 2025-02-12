#include "Piece.h"

Piece::Piece(char color, char abbr) : color(color), abbreviation(abbr) {}

Pawn::Pawn(char color) : Piece(color, (color == 'w' ? 'P' : 'p')) {}

void Pawn::Draw(int x, int y, int squareSize) {
    DrawText(TextFormat("%c", abbreviation),x + squareSize/3, y + squareSize/3, 20, (color == 'w' ? BLACK : WHITE));
}