// Player.cpp
#include "Player.h"

Player::Player() {}

char Player::getMove()
{
    return Player::rec_move;
}
 
int Player::win(Player *opponent)
{
    // Rock beats Scissors. Scissors beats Paper. Paper beats Rock.
    // if ((this->rec_move == 'r' || this->rec_move == 'R') && (opponent->getMove() == 's' || opponent->getMove() == 'S')

    //     || (this->rec_move == 's' || this->rec_move == 'S') && (opponent->getMove() == 'p' || opponent->getMove() == 'P')

    //     || (this->rec_move == 'p' || this->rec_move == 'P') && (opponent->getMove() == 'r' || opponent->getMove() == 'R'))
    
    char compMove = opponent->getMoves();
    
    cout << "*** " << compMove << " ***" << this->rec_move << endl;;
    
    if (((this->rec_move == 'r' || this->rec_move == 'R') && (compMove == 'S'))

        || ((this->rec_move == 's' || this->rec_move == 'S') && (compMove == 'P'))

        || ((this->rec_move == 'p' || this->rec_move == 'P') && (compMove == 'R')))

    {
        cout << "TEST WIN" << endl;
        return 1;
    }
    
    if (this->rec_move == compMove)
    {
        cout << "TEST DRAW" << endl;
        return 0;
    } else
    {
        cout << "TEST LOSS" << endl;

        cout << this->rec_move << endl;
        return 2;
        
    }
    
    
}

Player::~Player() {}