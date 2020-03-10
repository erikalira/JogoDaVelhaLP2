#ifndef GAMERULEAGENT_H
#define GAMERULEAGENT_H
#include "Board.h"

class GameRuleAgent
{
    public:
        GameRuleAgent();
        virtual ~GameRuleAgent();
        std::pair<int, int> getNextMove(Board *b);
    protected:

    private:
};

#endif // GAMERULEAGENT_H
