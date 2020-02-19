#ifndef MATCH_H
#define MATCH_H
#include "Player.h"
#include "Board.h"

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
        Player *p1;
        Player *p2;
};

#endif // MATCH_H
