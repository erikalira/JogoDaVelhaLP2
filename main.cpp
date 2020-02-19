#include <iostream>
#include <vector>
#include "Board.h"
#include "Match.h"
#include "Player.h"

using namespace std;

int main()
{
    Match match;

    Player *p1 = new Player();
    Player *p2 = new Player();

    match.addPlayer1(p1);
    match.addPlayer1(p2);

    match.start();

    return 0;
}
