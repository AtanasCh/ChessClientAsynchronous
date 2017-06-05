#ifndef CELL_H
#define CELL_H

#include "pieces/king.h"
#include "pieces/queen.h"
#include "pieces/rook.h"
#include "pieces/bishop.h"
#include "pieces/knight.h"
#include "pieces/pawn.h"

/**
 * @brief The Cell class represents a cell in the board.
 */
class Cell {
private:
    Piece* piece;

public:
    Cell();
    Cell(const Cell& cell);

    void setPiece(Piece* piece);
    Piece* getPiece() const;
};

#endif // CELL_H
