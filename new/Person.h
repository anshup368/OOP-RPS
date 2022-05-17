#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

#include "Player.h"

using namespace std;

class Person : public Player

{

public:
    Person ();
    ~Person();

    //allow user to type in a single character to
    //represent their move. If a move is impossible,
    //“Move unavailable” is outputted and the user is
    //asked to input a character again.
    //Otherwise, their input is stored
    void move();

    //returns all moves stored in a string
    char getMoves();   

protected:

    char per_moves;

};

#endif