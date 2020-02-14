#include "Board.h"

Board::Board()
{

}

Board::~Board()
{
    //dtor
}

void Board::Draw(){
    cout << "b[" <<markY << "]["<< markX<<"]" << endl;
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            if(i == markY && j == markX){
                cout << "["<< b[i][j] <<"]";
            }else{
                cout << " "<< b[i][j] <<" ";
            }

            if(j<2)
                cout << "|";
        }
        if(i<2)
            cout << endl << "-----------" <<endl;
    }
}

void Board::mark(){
    Keyboard *kb = new Keyboard();
    int comando = kb->getKeyboard();

    switch(comando){
        case kb->ENTER:
            b[markY][markX] = 1;
            break;
        case kb->LEFT:
            markX--;
            break;
        case kb->UP:
            markY--;
            break;
        case kb->RIGHT:
            markX++;
            break;
        case kb->DOWN:
            markY++;
            break;
        default:
            break;
    }
}
