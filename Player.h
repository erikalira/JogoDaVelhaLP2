#ifndef PLAYER_H
#define PLAYER_H
#include "Keyboard.h"
#include "Board.h"

class Player
{
    public:
        Player();
        virtual ~Player();
        void play(Board* b, int typePlayer);
    protected:
};

#endif // PLAYER_H
