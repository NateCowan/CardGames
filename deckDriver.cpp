#include <iostream>
#include "Deck.h"

using namespace std;

int main()
{
    Deck standard = Deck();
    /*
    cout << "SIZE: " << standard.getSize() << endl; // print the size of the deck
    for(int i = 0; i < standard.getSize(); i++)
    {
        cout << "(" << standard.getCardAt(i).getRank() << ", " << standard.getCardAt(i).getSuit() << ")" << endl;
    }
    */

   /*
    standard.perfectShuffle();
    cout << "PERFECT SHUFFLE" << endl;
    for(int i = 0; i < standard.getSize(); i++)
    {
        cout << "(" << standard.getCardAt(i).getRank() << ", " << standard.getCardAt(i).getSuit() << ")" << endl;
    }
    cout << "SIZE: " << standard.getSize() << endl;
    */

    /*
    // THEORY: 8 PERFECT SHUFFLES RETURNS THE DECK TO ITS ORIGIONAL ORDER
    for(int i = 0; i < 8; i++)
    {
        standard.perfectShuffle();
    }
    for(int i = 0; i < standard.getSize(); i++)
    {
        cout << "(" << standard.getCardAt(i).getRank() << ", " << standard.getCardAt(i).getSuit() << ")" << endl;
    }
    */

   // PERFECT SHUFFLE
   standard.shuffle();
   standard.printDeck();
   cout << "SIZE: " << standard.getSize() << endl;

    return 0;
}

// g++ deckDriver.cpp Card.cpp Deck.cpp