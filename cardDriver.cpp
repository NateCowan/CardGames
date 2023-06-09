#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    Card ace_of_spades = Card(1, 'S');
    cout << ace_of_spades.getRank() << endl; // 1
    cout << ace_of_spades.getSuit() << endl; // S
    return 0;
}