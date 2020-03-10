#ifndef PLAYER_H
#define PLAYER_H
#include "Keyboard.h"
#include "Board.h"
#include "SinglePlayer.h"

class Player
{
    public:
        Player();
        virtual ~Player();
        void play();
    protected:
};

#endif // PLAYER_H
