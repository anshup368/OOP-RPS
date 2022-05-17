#include <iostream>
#include "Computer.h"
#include "Person.h"
#include "Player.h"

using namespace std;

int main(){
    Computer compPlayer;
    Person perPlayer;
    
    cout << "\nWelcome to a game of RPS" << endl;
    cout << "\nPlease use the 'r', 'p', 's' letter to play the game (uppercase/lowercase doesn't matter)\n"<< endl;

    // Prompt for player move 
    perPlayer.move();

    // call computer move
    compPlayer.move();
    cout << "Computer move: " << compPlayer.getMoves() << endl;
   

    // repeat until a winner is determined
    while (perPlayer.win(&compPlayer) == 0){
        cout << "draw! go again" << endl;
        perPlayer.move();
        //compPlayer.move();
        compPlayer.move();
        //cout << "Computer move: " << compPlayer.getMove() << endl;
        cout << "Computer move: " << compPlayer.getMoves() << endl;
    }

    // print the previous moves of both player and computer
    //cout << "Computer previous moves: "<< compPlayer.getMoves() << endl;
    cout << "\nComputer previous moves: "<< compPlayer.getMoves() << endl;
    cout << "Person previous moves: "<< perPlayer.getMoves() << endl;
}