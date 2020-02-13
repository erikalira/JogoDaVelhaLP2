#include "Board.h"

Board::Board()
{

}

Board::~Board()
{
    //dtor
}

void Board::Draw(){
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            cout << b[i][j];
            if(j<2)
                cout << "|";
        }
        if(i<2)
            cout << endl << "-----" <<endl;
    }
}
