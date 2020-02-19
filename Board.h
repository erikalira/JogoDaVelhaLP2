#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include<iostream>

using namespace std;

class Board
{
    public:
        Board();
        ~Board();
        void Draw();
        void mark(int typePlayer);
        //int getWinner();
        int X = 1;
        int Y = 1;
    protected:

    private:
        vector< vector<int> > b     {   { 0, 0, 0 },
                                        { 0, 0, 0 },
                                        { 0, 0, 0 }
                                    };


    friend class Player;
};

#endif // BOARD_H
