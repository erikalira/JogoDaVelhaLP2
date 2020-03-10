#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H
#include "Player.h"
#include "Board.h"

class SinglePlayer : public Player
{
    public:
        SinglePlayer(Board *b, int type);
        void play(Board* b, int typePlayer);
        ~SinglePlayer();
    protected:

    private:
};

#endif // SINGLEPLAYER_H
