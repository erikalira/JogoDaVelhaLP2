#include "GameRuleAgent.h"

GameRuleAgent::GameRuleAgent()
{
    //ctor
}

GameRuleAgent::~GameRuleAgent()
{
    //dtor
}

std::pair<int, int> GameRuleAgent::getNextMove(Board *b){
//    for(int i = 0 ; i < 3 ; ++i){
//        //testar se LINHAS tem 2 elementos iguais
//        if(b[i][0] + b[i][1] + b[i][2] == 2)
//            for(int j = 0 ; j < 3 ; ++j){
//                if(b[i][j] == 0)
//                    return std::make_pair(i, j);
//            }
//        if(b[i][0] + b[i][1] + b[i][2] == 9)
//            for(int j = 0 ; j < 3 ; ++j){
//                if(b[i][j] == 0)
//                    return std::make_pair(i, j);
//            }
//        //testar se COLUNAS sao iguais
//        if(b[0][i] + b[1][i] + b[2][i] == 2)
//            for(int j = 0 ; j < 3 ; ++j){
//                if(b[i][j] == 0)
//                    return std::make_pair(i, j);
//            }
//        if(b[0][i] + b[1][i] + b[2][i] == 9)
//            for(int j = 0 ; j < 3 ; ++j){
//                if(b[i][j] == 0)
//                    return std::make_pair(i, j);
//            }
//    }
//
//    //testar se DIAGONAL PRINCIPAL tem valores iguais
//    if(b[0][0] + b[1][1] + b[2][2] == 2){
//        for(int j = 0 ; j < 3 ; ++j){
//            if(b[j][j] == 0)
//                return std::make_pair(j, j);
//        }
//    }
//    if(b[0][0] + b[1][1] + b[2][2] == 9){
//        for(int j = 0 ; j < 3 ; ++j){
//            if(b[j][j] == 0)
//                return std::make_pair(j, j);
//        }
//    }
//    //testar se DIAGONAL SECUNDARIA tem valores iguais
//    if(b[0][2] + b[1][1] + b[2][0] == 3){
//        for(int j = 0 , int k = 2; j < 3 ; ++j , --k){
//            if(b[j][k] == 0)
//                return std::make_pair(j, k);
//        }
//    }
//    if(b[0][2] + b[1][1] + b[2][0] == 9){
//        for(int j = 0 , int k = 2; j < 3 ; ++j , --k){
//            if(b[j][k] == 0)
//                return std::make_pair(j, k);
//        }
//    }

    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            if( b->b[i][j] == 0 ){
                //cout << "marcar b[" << i <<"][" << j << "]";
                //system("pause");
                return std::make_pair(j, i);
            }
        }
    }
    cout << "deu ruim!";
    system("pause");
    return std::make_pair(0, 0);
}
