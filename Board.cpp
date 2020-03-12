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
                if(b[i][j] == BOLA){
                    cout << "[O]";
                }else if(b[i][j] == XIS){
                    cout << "[X]";
                }else{
                    cout << "[ ]";
                }
            }else{
                if(b[i][j] == BOLA){
                    cout << " O ";
                }else if(b[i][j] == XIS){
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

bool Board::mark(int typePlayer){
    if(b[Y][X] == 0){
        b[Y][X] = typePlayer;
        return true;
    }
    return false;
}

int Board::getWinner(){
    for(int i = 0 ; i < 3 ; ++i){
        //testar se LINHAS sao iguais
        if(b[i][0] + b[i][1] + b[i][2] == 3)
            return BOLA;
        if(b[i][0] + b[i][1] + b[i][2] == 12)
            return XIS;
        //testar se COLUNAS sao iguais
        if(b[0][i] + b[1][i] + b[2][i] == 3)
            return BOLA;
        if(b[0][i] + b[1][i] + b[2][i] == 12)
            return XIS;
    }

    //testar se DIAGONAL PRINCIPAL tem valores iguais
    if(b[0][0] + b[1][1] + b[2][2] == 3)
        return BOLA;
    if(b[0][0] + b[1][1] + b[2][2] == 12)
        return XIS;

    //testar se DIAGONAL SECUNDARIA tem valores iguais
    if(b[0][2] + b[1][1] + b[2][0] == 3)
        return BOLA;
    if(b[0][2] + b[1][1] + b[2][0] == 12)
        return XIS;

    return 0;
}
