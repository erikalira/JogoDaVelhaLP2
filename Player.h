#ifndef PLAYER_H
#define PLAYER_H
#include "Keyboard.h"
#include "Board.h"

class Player
{
    public:
        virtual void play(Board* b, int typePlayer) = 0;
    protected:
};

#endif // PLAYER_H
