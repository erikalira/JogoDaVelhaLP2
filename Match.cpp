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
    int contador = 0;
    while(1){
        contador++;
        p1->play(b, 1);
        if(b->getWinner() == 1){
            b->Draw();
            std::cout << std::endl << std::endl << "jogador O ganhou!" << std::endl;
            system("pause");
            break;
        }
        if(contador == 9){
            b->Draw();
            std::cout << std::endl << std::endl << "empate!" << std::endl;
            system("pause");
            break;
        }
        contador++;
        p2->play(b, 4);
        if(b->getWinner() == 4){
            b->Draw();
            std::cout << std::endl << std::endl << "jogador X ganhou!" << std::endl;
            system("pause");
            break;
        }
    }

}
