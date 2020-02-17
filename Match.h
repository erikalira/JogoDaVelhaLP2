#ifndef MATCH_H
#define MATCH_H
#include "Player.h"

class Match
{
    public:
        Match();
        ~Match();
        void addPlayer1(Player *p);
        void addPlayer2(Player *p);
        void start();
    protected:

    private:
};

#endif // MATCH_H
