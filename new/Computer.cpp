// Computer.cpp
#include "Computer.h"
#include <ctime>

// Computer::Computer(string letter)
// {
//     if (letter.at(0) != 'r' && letter.at(0) != 'R' &&

//         letter.at(0) != 's' && letter.at(0) != 'S' &&

//         letter.at(0) != 'p' && letter.at(0) != 'P')
//     {
//         rec_move = 'r';
//     }
//     else
//     {
//         rec_move = letter.at(0);
//     }
// }

Computer::Computer(){}
Computer::~Computer(){}

void Computer::move()
{
    // num_of_moves++;
    // comp_moves = comp_moves + rec_move;

    char choice[3] = {'R','P','S'};
    srand(time(NULL));
    comp_moves = choice[rand() % 3];
}

char Computer::getMoves()
{
    return comp_moves;
}

// char Computer::getMove()
// {
//     return rec_move;
// }