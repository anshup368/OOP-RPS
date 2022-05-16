#ifndef PERSON_H

#define PERSON_H

#include<iostream>

#include<string>

#include "Player.h"

using namespace std;

class Person : public Player

{

public:

    void move(); //allow user to type in a single character to

    //represent their move. If a move is impossible,

    //“Move unavailable” is outputted and the user is

    //asked to input a character again.

    //Otherwise, their input is stored

    string getMoves();   //returns all moves stored in a string

protected:

    string per_moves;

};

#endif