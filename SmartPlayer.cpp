#include "SmartPlayer.h"

SmartPlayer::SmartPlayer()
{
    //ctor
}

SmartPlayer::~SmartPlayer()
{
    //dtor
}


void SmartPlayer::play(Board* b, int typePlayer){
    //GameRuleAgent *gra = new GameRuleAgent();
    std::cout << "smart player" << endl;
    bool mark = false;
    while(!mark){
        b->Draw();
        //pair<int, int> p = gra->getNextMove(b);

        //b->X = p.first;
        b->X = 1;
        //b->Y = p.second;
        b->Y = 1;
        mark = b->mark(typePlayer);

        system("cls");
    }
}
