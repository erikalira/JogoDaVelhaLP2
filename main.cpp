#include <iostream>
#include <vector>
#include "Board.h"
#include "Match.h"
#include "Player.h"
#include "SinglePlayer.h"

using namespace std;

int main()
{
    Match match;

    //Poligono *p;
    //p = new Quadrado(lado);
    int op;

    while(1){
        cout<<  "JOGO DA VELHA\n\n"<<
                "tipo de jogo\n"<<
                "1- PvP\n"<<
                "2- PvE\n"<<
                "3- Sair\n\n"<<

                "Opcao:";

        std::cin >> op;

        switch (op){
            case 1:
                    Player *p1;
                    p1 = new SinglePlayer();
                    Player *p2;
                    p2 = new SinglePlayer();
                    match.addPlayer1(p1);
                    match.addPlayer1(p2);

                    match.start();
                break;

            case 2:
                break;

            case 3:
                return 0;
        }

        system("cls");
    }



    return 0;
}
