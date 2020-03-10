#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H
#include "Player.h"
#include "Keyboard.h"
#include "Board.h"

class SinglePlayer : public Player
{
    public:
        SinglePlayer();
        void play(Board* b, int typePlayer);
        ~SinglePlayer();
    protected:

    private:
};

#endif // SINGLEPLAYER_H
