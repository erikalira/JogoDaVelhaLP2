#ifndef SMARTPLAYER_H
#define SMARTPLAYER_H
#include "GameRuleAgent.h"
#include "Player.h"


class SmartPlayer : public Player
{
    public:
        SmartPlayer();
        ~SmartPlayer();
        void play(Board* b, int typePlayer);
    protected:

    private:
};

#endif // SMARTPLAYER_H
