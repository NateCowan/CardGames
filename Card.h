#ifndef CARD_H
#define CARD_H

using namespace std;

class Card
{
    private:
        int rank_; // 1 == Ace, 2 == 2, ... , 11 == jack, 12 == quen, 13 == king
        char suit_; // clubs == 'C', diamonds == 'D', hearts == 'H', spades == 'S'

    public:
        // parameterized constructor
        Card(int rank, char suit);

        // getters
        int getRank() { return rank_; }
        char getSuit() { return suit_; };

        // setters
        void setRank(int rank);
        void setSuit(char suit);
};

#endif