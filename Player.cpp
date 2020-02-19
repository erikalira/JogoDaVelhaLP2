#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}

void play(Board *b, int typePlayer){
    Keyboard *kb = new Keyboard();
    int comando = kb->getKeyboard();

    bool mark = false;
    while(!mark){
        switch(comando){
            case Keyboard::ENTER:
                b->mark(typePlayer);
                mark = true;
                break;
            case Keyboard::LEFT:
                b->X--;
                break;
            case Keyboard::UP:
                b->Y--;
                break;
            case Keyboard::RIGHT:
                b->X++;
                break;
            case Keyboard::DOWN:
                b->Y++;
                break;
            default:
                break;
        }
        b->Draw();
    }
}
