#ifndef COMPUTER_H
#define COMPUTER_H

#include<iostream>
#include<string>

#include "Player.h"

using namespace std;

class Computer : public Player

{
    public:

        Computer ();
        ~Computer();

        //set what move the computer will
        // Computer(string letter); 
        //Computer ();

        //make (rock, paper, or scissors)
        //if the input is not r, R, p, P, s, S or
        //a string starting with one of these letters,
        //set the move to the default ‘r’

        //returns all moves stored in a string
        char getMoves(); 

        //increments number of moves made
        void move(); 

        //char getMove();

    private:

        //int num_of_moves;

        char comp_moves;

};

#endif