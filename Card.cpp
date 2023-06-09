#include <iostream>
#include "Card.h"

Card::Card(int rank, char suit) // parameterized constructor
{
    setRank(rank);
    setSuit(suit);
}

// sets rank_ to new value, unless it is invalid, in which case it prints an error and keeps the old rank
void Card::setRank(int rank)
{
    if(rank >= 1 && rank <= 13) // bounded by 1 (ace) and 13 (king)
    {
        rank_ = rank;
    }
    else
    {
        cout << "ERROR: invalid rank" << endl;
    }
}

// sets suit_ to new value, unless it is invalid, in which case it prints an error and keeps the old suit
void Card::setSuit(char suit)
{
    if(suit == 'C' || suit == 'D' || suit == 'H' || suit == 'S')
    {
        suit_ = suit;
    }
    else
    {
        cout << "ERROR: invalid rank" << endl;
    }
}