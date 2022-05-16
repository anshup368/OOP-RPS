//Player.cpp

#include "Player.h"

char Player::getMove()

{

    return Player::rec_move;

}

bool Player::win(Player* opponent)

{

    //Rock beats Scissors. Scissors beats Paper. Paper beats Rock.

    if ((this->rec_move == 'r' || this->rec_move == 'R') && (opponent->getMove() == 's' || opponent->getMove() == 'S')

        || (this->rec_move == 's' || this->rec_move == 'S') && (opponent->getMove() == 'p' || opponent->getMove() == 'P')

        || (this->rec_move == 'p' || this->rec_move == 'P') && (opponent->getMove() == 'r' || opponent->getMove() == 'R'))

    {

        cout << "You won the game" << endl;

        return true;

    }

    else

    {

        if (this->rec_move != opponent->getMove())

        {

            cout << "Computer own the game" << endl;

            return true;

        }

        else

            return false;

    }

    return true;

}