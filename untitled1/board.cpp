#include "Board.h"

Board* Board::instance = nullptr;

Board::Board() {
    id = 0;
    data.clear();
}
