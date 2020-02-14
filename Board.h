#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include<iostream>
#include "Keyboard.h"

using namespace std;

class Board
{
    public:
        Board();
        ~Board();
        void Draw();
        void mark();
        //int getWinner();
    protected:

    private:
        vector< vector<int> > b     {   { 0, 0, 0 },
                                        { 0, 0, 0 },
                                        { 0, 0, 0 }
                                    };
    int markX = 1;
    int markY = 1;
};

#endif // BOARD_H
