#ifndef PLAYER_H
#define PLAYER_H

class Match;

class Player
{
    public:
        Player();
        virtual ~Player();
        void play();
    protected:
        friend class Match;
};

#endif // PLAYER_H
