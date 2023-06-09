#include "Deck.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

Deck::Deck() // a standard deck of 52 cards
{
    for(int i = 0; i < 4; i++) // suit
    {
        for(int j = 1; j <= 13; j++) // rank
        {
            char s;
            if(i == 0) // clubs
            {
                s = 'C';
            }
            else if(i == 1) // diamonds
            {
                s = 'D';
            }
            else if(i == 2) // hearts
            {
                s = 'H';
            }
            else if(i == 3) // spades
            {
                s = 'S';
            }
            Card temp_card = Card(j, s); // (rank, suit)
            deck_.push_back(temp_card);
        }
    }
}

Deck::Deck(vector<Card> deck)
{
    deck_ = deck; // sets the deck equal to the input deck
}

Card Deck::drawCard()
{
    Card temp_card = deck_.back(); // stores the card on top of the deck
    deck_.pop_back(); // removes the card from the deck
    return temp_card;
}

void Deck::shuffle()
{
    // initialize a vector for the shuffled deck
    vector<Card> shuffled_deck;

    // initialize random seed
    srand((unsigned int) time(0));

    while(deck_.size() != 0)
    {
        // generate random number between 0 and the deck size
        int r = rand() % deck_.size();

        // get the card at the random index and add it to a shuffled deck
        shuffled_deck.push_back(deck_[r]);
        deck_.erase(deck_.begin() + r);
    }

    deck_ = shuffled_deck; // copy the shuffled deck into the origional deck
}

void Deck::perfectShuffle()
{
    int size = deck_.size();
    vector<Card> deck1;
    vector<Card> deck2;

    for(int i = 0; i < size / 2; i++) // first half of the deck
    {
        deck1.push_back(deck_[0]);
        deck_.erase(deck_.begin());
    }
    //deck_.erase(deck_.begin() + (size / 2));

    deck2 = deck_; // copies the remaining cards into deck2
    deck_.clear(); // clears all remaining cards from the deck

    for(int i = 0; i < size / 2; i++)
    {
        deck_.push_back(deck1[i]);
        deck1.pop_back();
        deck_.push_back(deck2[i]);
        deck2.pop_back();
    }
    
    return;
}

void Deck::printDeck()
{
    for(int i = 0; i < deck_.size(); i++)
    {
        cout << "(" << deck_[i].getRank() << ", " << deck_[i].getSuit() << ")" << endl;
    }
}