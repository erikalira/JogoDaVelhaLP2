#include <iostream>
#include <vector>
#include "Board.h"

using namespace std;

int main()
{
    Board *b = new Board();

    while(1){
        b->Draw();
        b->mark();
        system("cls");
    }

    return 0;
}
