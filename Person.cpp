#include "Person.h"

string Person::getMoves()

{

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