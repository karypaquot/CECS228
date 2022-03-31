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
