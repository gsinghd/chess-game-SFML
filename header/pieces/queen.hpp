#ifndef __QUEEN_HPP__
#define __QUEEN_HPP__

#include "../../header/pieces/piece.hpp"

class queen : public piece{
    public:
        void updatePossibleMoves(std::pair<int, int> position);
};

#endif
