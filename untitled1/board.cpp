#include "board.h"

board* board::instance = nullptr;

board::board() {
    id = 0;
    data.clear();
}
