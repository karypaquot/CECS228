#include "Card.h"
#include "Deck.h"
#include <iostream>
using namespace std;

Deck::Deck() 
{
 char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  char suit[] = {'S','H','D','C'};
  int size = 0;
  for (int row = 0; row < 4; row++){
    for(int col = 0; col < 13; col++ ){
      deck[size].setCard(rank[col], suit[row]);
      size++;
    }
  }
  topCard = 0;
} 

void Deck::refreshDeck()
{
  char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  char suit[] = {'S','H','D','C'};
  int size = 0;
  for (int row = 0; row < 4; row++){
    for(int col = 0; col < 13; col++ ){
      deck[size].setCard(rank[col], suit[row]);
      size++;
    }
  }
  topCard = 0;
}

Card Deck::deal()
{
  return deck[topCard++];
  
}

void Deck::shuffle()
{
  for(int s = 0; s < 150; s++){
    int random1 = rand() % 52;
    int random2 = rand() % 52;

    Card chosen = deck[random1];
    deck[random1] = deck[random2];
    deck[random2] = chosen;
  }
}

int Deck::cardsLeft()
{
  return 52 - topCard;
}

void Deck::showDeck()
{
  for (int x = 0; x < 52; x++)
  {
    if (x % 4 == 0)
      cout << endl;
    deck[x].showCard();
  }
}
