#include "Board.h"

Board::Board()
{

}

Board::~Board()
{
    //dtor
}

void Board::Draw(){
    //cout << "b[" <<markY << "]["<< markX<<"]" << endl;
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){

            if(i == Y && j == X){
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

void Board::mark(int typePlayer){
    b[Y][X] = typePlayer;
}
