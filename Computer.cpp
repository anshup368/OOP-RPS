//Computer.cpp

#include "Computer.h"

Computer::Computer(string letter)

{

    if (letter.at(0) != 'r' && letter.at(0) != 'R' &&

        letter.at(0) != 's' && letter.at(0) != 'S' &&

        letter.at(0) != 'p' && letter.at(0) != 'P')

    {

        rec_move = 'r';

    }

    else

    {

        rec_move = letter.at(0);

    }

}

void Computer::move()

{

    num_of_moves++;

    comp_moves = comp_moves + rec_move;

}

string Computer::getMoves()

{

    return comp_moves;

}

char Computer::getMove()

{

    return rec_move;

}