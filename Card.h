#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card  
{
  private:
    char rank;
    char suit;
  public:
    Card(); // create a “blank” card
    Card(char r, char s); // constructor to create a card, setting the rank and suit
    void setCard(char r, char s); // set an existing blank card to a particular value
    int getValue(); //return the point value of the card. Ace = 1, 2 thru 10, Jack = 10, Queen = 10, King = 10
    void showCard(); // display the card using 2 fields… Ace of Spade:AS, Ten of Diamond:10D, Queen of Heart:QH, Three of Club:3C
};

#endif
