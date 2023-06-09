#include <iostream>

#include "Deck.h"
#include "Card.h"

void printCards(vector<Card> deck)
{
    for(int i = 0; i < deck.size(); i++)
    {
        cout << "(" << deck[i].getRank() << ", " << deck[i].getSuit() << ")" << " ";
    }
}

int main()
{
    // standard deck of cards
    Deck standard = Deck();
    standard.shuffle();

    vector<Card> player; // the players cards
    vector<Card> dealer; // the dealers cards

    // deal two cards to player
    player.push_back(standard.drawCard());
    player.push_back(standard.drawCard());

    // deal two cards to dealer
    dealer.push_back(standard.drawCard());
    dealer.push_back(standard.drawCard());

    cout << "PLAYER: ";
    printCards(player);
    cout << endl;
    return 0;
}

// g++ blackjack.cpp Deck.cpp Card.cpp