#include <iostream>
#include <vector>
#include "Board.h"
#include "Match.h"
#include "Player.h"

using namespace std;

int main()
{
    Match match;

    SinglePlayer *p1 = new SinglePlayer();
    SinglePlayer *p2 = new SinglePlayer();

    while(1){
        cout<< "tipo jogo"<< endl;
    }

    match.addPlayer1(p1);
    match.addPlayer1(p2);

    match.start();

    return 0;
}
