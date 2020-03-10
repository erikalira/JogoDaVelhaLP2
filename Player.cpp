#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void Player::play(Board* b, int typePlayer){
    Keyboard *kb = new Keyboard();

    bool mark = false;
    while(!mark){

        b->Draw();
        int comando = kb->getKeyboard();

        switch(comando){
            case Keyboard::ENTER:
                mark = b->mark(typePlayer);
                break;
            case Keyboard::LEFT:
                if(b->X >0)
                    b->X--;
                break;
            case Keyboard::UP:
                if(b->Y >0)
                    b->Y--;
                break;
            case Keyboard::RIGHT:
                if(b->X <2)
                    b->X++;
                break;
            case Keyboard::DOWN:
                if(b->Y <2)
                    b->Y++;
                break;
            default:
                break;
        }
        system("cls");
    }
}
