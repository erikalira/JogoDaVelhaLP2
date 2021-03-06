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
        bool mark(int typePlayer);
        int getWinner();
        int X = 1;
        int Y = 1;
        static const int XIS = 4;
        static const int BOLA = 1;
    protected:

    private:
        vector< vector<int> > b     {   { 0, 0, 0 },
                                        { 0, 0, 0 },
                                        { 0, 0, 0 }
                                    };
        friend class GameRuleAgent;
};

#endif // BOARD_H
