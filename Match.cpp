#include "Match.h"

Match::Match()
{
    //ctor
}

Match::~Match()
{
    //dtor
}

void Match::addPlayer1(Player *p){
    p1 = p;
}

void Match::addPlayer2(Player *p){
    p2 = p;
}

void Match::start(){

    Board *b = new Board();

    while(1){
        p1->play(b, 1);
        system("cls");
        p2->play(b, 1);
        system("cls");

    }
}
