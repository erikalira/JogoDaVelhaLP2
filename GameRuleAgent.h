#ifndef GAMERULEAGENT_H
#define GAMERULEAGENT_H
#include "Board.h"

class GameRuleAgent
{
    public:
        GameRuleAgent();
        virtual ~GameRuleAgent();
        int getNextMove(Board *b);
    protected:

    private:
};

#endif // GAMERULEAGENT_H
