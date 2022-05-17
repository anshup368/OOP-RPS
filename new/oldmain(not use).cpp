#include <iostream>
#include <string>
using namespace std;

// class Player {
//     private:
//         char moves;
//         string name;
//     public:
//         Player(){
//             moves = move;
//             name = playerName;
//         }
//         char move( return moves);
//         virtual void string playerName(return name);
//         ~Player;
// }
class Player
{
private:
    string name;
    int p_num_moves;
    int c_num_moves;

public:
    Player()
    {
        name = "";
    }

    void setName(string Name)
    {
        name = Name;
    }

    string getName() { return name; }

    virtual void printWinningMessage() = 0;

    virtual char getMove() { return moves; }

    char moves;

    ~Player();
};

class Human : public Player
{
private:
    string player_name;

public:
    Human()
    {
        cout << "Please enter your name: ";
        cin >> player_name;
        cout << "Hello " << player_name << ", welcome to Rock-Paper-Scissors! \n";
    }

    void userInput()
    {
        cout << "\nWhat will you chose? R(rock), P(paper), or S(scissors)? ";
        cin >> moves;

        while (moves != 'r' && moves != 'R' && moves != 's' && moves != 'S' && moves != 'p' && moves != 'P')
        {

            cout << "Move unavailable";

            cout << "Enter your move:";

            cin >> moves;
        }
    }

    virtual void printWinningMessage()
    {
        cout << player_name << " wins!" << endl;
    }

    ~Human();
};

class Computer : public Player
{
    // private:
    // string hand;

public:
    string hand;
    Computer();
    void play()
    {
        string choices[3]{"rock", "paper", "scissors"};
        hand = choices[rand() % 3]; // select rock, paper, or scissors at random
    }
    virtual void printWinningMessage()
    {
        cout << "Computer wins!" << endl;
    }
    ~Computer();
};

class Win : public Player //public Human, public Computer
{
public:

        bool win()
    {

        // Rock beats Scissors. Scissors beats Paper. Paper beats Rock.

        if ((this->moves == 'r' || this->moves == 'R') && (opponent->getMove() == 's' || opponent->getMove() == 'S')

            || (this->moves == 's' || this->moves == 'S') && (opponent->getMove() == 'p' || opponent->getMove() == 'P')

            || (this->moves == 'p' || this->moves == 'P') && (opponent->getMove() == 'r' || opponent->getMove() == 'R'))

        {

            cout << "You won the game" << endl;

            return true;
        }

        else

        {

            if (this->moves != opponent->getMove())

            {

                cout << "Computer own the game" << endl;

                return true;
            }

            else

                return false;
        }

        return true;
    }

    // bool checkWin()
    // {
    //     if (userInput() == hand())
    //     {
    //         cout << "Draw Game\n";
    //     }
    //     else if ((userInput() == "rock" && hand() == "scissors") ||
    //              (userInput() == "scissors" && hand() == "paper") ||
    //              (userInput() == "paper" && hand() == "rock"))
    //     {
    //         // name.printWinningMessage();
    //         cout << "Player wins!" << endl;
    //     }
    //     else
    //     {
    //         cout << "Computer wins!" << endl;
    //         // player2.printWinningMessage();
    //     }
    // }
};



int main()
{

    Human *h1 = new Human;
    Computer *c1 = new Computer;
    h1->setName("Jack");
}
