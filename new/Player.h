// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player
{
    public:
        Player ();
        ~Player();
        virtual void move() = 0;

        virtual char getMoves() = 0;

        virtual char getMove(); // returns the most recent move made

        virtual int win(Player *opponent); // compares players’ moves to see who wins

        char rec_move;

        char comp_moves;
};

#endif