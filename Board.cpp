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
                if(b[i][j] == 1){
                    cout << "[O]";
                }else if(b[i][j] == 4){
                    cout << "[X]";
                }else{
                    cout << "[ ]";
                }
            }else{
                if(b[i][j] == 1){
                    cout << " O ";
                }else if(b[i][j] == 4){
                    cout << " X ";
                }else{
                    cout << "   ";
                }
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
