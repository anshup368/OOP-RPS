
//Player.cpp
#include "Player.h"

char Player::getMove(){
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
    else{
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
//Person.cpp
#include "Person.h"
string Person::getMoves(){
    return per_moves;
}

void Person::move()
{
    cout << "Enter your move:";
    cin >> rec_move;
    while (rec_move != 'r' && rec_move != 'R' &&
        rec_move != 's' && rec_move != 'S' &&
        rec_move != 'p' && rec_move != 'P')
    {
        cout << "Move unavailable";
        cout << "Enter your move:";
        cin >> rec_move;
   }
    per_moves = per_moves + rec_move;
}
//Computer.cpp
#include "Computer.h"

Computer::Computer(string letter){

    if (letter.at(0) != 'r' && letter.at(0) != 'R' &&

        letter.at(0) != 's' && letter.at(0) != 'S' &&

        letter.at(0) != 'p' && letter.at(0) != 'P')

    {
        rec_move = 'r';
    }
    else{
        rec_move = letter.at(0);
    }
}

void Computer::move()

{
    num_of_moves++;
    comp_moves = comp_moves + rec_move;
}
string Computer::getMoves(){
    return comp_moves;
}
char Computer::getMove(){
    return rec_move;
}

// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Computer.h"
#include "Person.h"
using namespace std;

int main(){
    Computer compPlayer("s");
    Person perPlayer;
    // Prompt for player move
    perPlayer.move();
    // call computer move
    compPlayer.move();
    cout << "Computer move: " << compPlayer.getMove()<<endl;
    // repeat until a winner is determined
    while (!perPlayer.win(&compPlayer)){
        cout << "draw! go again" << endl;
        perPlayer.move();
        compPlayer.move();
        cout << "Computer move: " << compPlayer.getMove() << endl;
    }

    // print the previous moves of both player and computer
    cout<<"Computer previous moves: "<<compPlayer.getMoves() << endl;
    cout<<"Person previous moves: "<<perPlayer.getMoves() << endl;
}