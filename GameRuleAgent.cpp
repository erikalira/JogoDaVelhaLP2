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

    //AGORA TESTA SE O JOGADOR INTELIGENTE PODE GANHAR

    for(int i = 0 ; i < 3 ; ++i){
        //testar se LINHAS tem 2 elementos iguais
        if(b->b[i][0] + b->b[i][1] + b->b[i][2] == 8){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[i][j] == 0){
                    //cout << "7marcar b[" << i <<"][" << j << "]";
                    //system("pause");
                    return std::make_pair(j, i);
                }
            }
        }
        //testar se COLUNAS sao iguais
        if(b->b[0][i] + b->b[1][i] + b->b[2][i] == 8){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[j][i] == 0){
                    //cout << "8marcar b[" << j <<"][" << i << "]";
                    //system("pause");
                    return std::make_pair(i, j);
                }
            }
        }
    }
    //testar se DIAGONAL PRINCIPAL tem valores iguais
    if(b->b[0][0] + b->b[1][1] + b->b[2][2] == 8){
        for(int j = 0 ; j < 3 ; ++j){
            if(b->b[j][j] == 0){
                //cout << "9marcar b[" << j <<"][" << j << "]";
                //system("pause");
                return std::make_pair(j, j);
            }
        }
    }

    //testar se DIAGONAL SECUNDARIA tem valores iguais
    if(b->b[0][2] + b->b[1][1] + b->b[2][0] == 8){
        int k = 2;
        for(int j = 0; j < 3 ; ++j , --k){
            if(b->b[j][k] == 0){
                //cout << "10marcar b[" << j <<"][" << k << "]";
                //system("pause");
                return std::make_pair(k, j);
            }
        }
    }

    //PRIMEIRO TESTA SE O INIMIGO PODE GANHAR

    for(int i = 0 ; i < 3 ; ++i){
        //testar se LINHAS tem 2 elementos iguais
        if(b->b[i][0] + b->b[i][1] + b->b[i][2] == 2){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[i][j] == 0){
                    //cout << "1marcar b[" << i <<"][" << j << "]";
                    //system("pause");
                    return std::make_pair(j, i);
                }
            }
        }
        //testar se COLUNAS sao iguais
        if(b->b[0][i] + b->b[1][i] + b->b[2][i] == 2){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[j][i] == 0){
                    //cout << "2marcar b[" << j <<"][" << i << "]";
                    //system("pause");
                    return std::make_pair(i, j);
                }
            }
        }
        //testar se LINHAS tem 2 elementos iguais
        if(b->b[i][0] + b->b[i][1] + b->b[i][2] == 9){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[i][j] == 0){
                    //cout << "3marcar b[" << i <<"][" << j << "]";
                    //system("pause");
                    return std::make_pair(j, i);
                }
            }
        }
        //testar se COLUNAS sao iguais
        if(b->b[0][i] + b->b[1][i] + b->b[2][i] == 9){
            for(int j = 0 ; j < 3 ; ++j){
                if(b->b[i][j] == 0){
                    //cout << "4marcar b[" << i <<"][" << j << "]";
                    //system("pause");
                    return std::make_pair(j, i);
                }
            }
        }
    }

    //testar se DIAGONAL PRINCIPAL tem valores iguais
    if(b->b[0][0] + b->b[1][1] + b->b[2][2] == 2){
        for(int j = 0 ; j < 3 ; ++j){
            if(b->b[j][j] == 0){
                //cout << "5marcar b[" << j <<"][" << j << "]";
                //system("pause");
                return std::make_pair(j, j);
            }
        }
    }

    //testar se DIAGONAL SECUNDARIA tem valores iguais
    if(b->b[0][2] + b->b[1][1] + b->b[2][0] == 2){
        int k = 2;
        for(int j = 0; j < 3 ; ++j , --k){
            if(b->b[j][k] == 0){
                //cout << "6marcar b[" << j <<"][" << k << "]";
                //system("pause");
                return std::make_pair(k, j);
            }
        }
    }



    //JOGAR SEM INTELIGENCIA(SO MARCAR O PRIMEIRO QUE ACHAR VAZIO)
    for(int i = 0; i < 3 ; ++i){
        for(int j = 0; j < 3 ; ++j){
            if( b->b[i][j] == 0 ){
                //cout << "11marcar b[" << i <<"][" << j << "]";
                //system("pause");
                return std::make_pair(j, i);
            }
        }
    }

    system("pause");
    return std::make_pair(0, 0);
}
