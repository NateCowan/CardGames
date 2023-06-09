#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

using namespace std;

class Deck
{
    private:
        vector<Card> deck_; // the deck of cards itself

    public:
        Deck(); // default constructor, creates a defualt 52 card deck
        Deck(vector<Card> deck); // parameterized constructor

        // getters
        int getSize() { return deck_.size(); }
        Card getCardAt(int index) { return deck_[index]; } // returns the card at the given index

        Card drawCard(); // essentially pop_back
        void shuffle(); // shuffles the deck randomly
        void perfectShuffle(); // shuffles the deck perfectly, faro shuffle
        void printDeck(); // prints the contents of the deck
};

#endif