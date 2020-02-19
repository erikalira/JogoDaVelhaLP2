#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include<iostream>
#include "Keyboard.h"
#include "Player.h"

using namespace std;

class Player;

class Board
{
    public:
        Board();
        ~Board();
        void Draw();
        void mark(int typePlayer);
        //int getWinner();
    protected:

    private:
        vector< vector<int> > b     {   { 0, 0, 0 },
                                        { 0, 0, 0 },
                                        { 0, 0, 0 }
                                    };

    int X = 1;
    int Y = 1;
    friend class Player;
};

#endif // BOARD_H
