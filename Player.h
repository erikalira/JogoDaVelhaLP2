#ifndef PLAYER_H
#define PLAYER_H
#include "Keyboard.h"
#include "Board.h"

class Match;
class Board;

class Player
{
    public:
        Player();
        virtual ~Player();
        void play(Board *b, int typePlayer);
    protected:
        friend class Match;
};

#endif // PLAYER_H
