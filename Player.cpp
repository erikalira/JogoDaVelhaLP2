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
        system("cls");
    }
}
