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
    GameRuleAgent *gra = new GameRuleAgent();
    bool mark = false;
    while(!mark){
        b->Draw();
        pair<int, int> p = gra->getNextMove(b);

        b->X = p.first;
        b->Y = p.second;
        mark = b->mark(typePlayer);

        //system("pause");
        system("cls");
    }
}
