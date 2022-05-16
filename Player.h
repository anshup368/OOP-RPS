//Player.h

#ifndef PLAYER_H

#define PLAYER_H

#include<iostream>

#include<string>

using namespace std;

class Player

{

public:

    virtual void move() = 0;

    virtual std::string getMoves() = 0;

    virtual char getMove(); //returns the most recent move made

    virtual bool win(Player* opponent); //compares players’ moves to see who wins

    char rec_move;

};

#endif