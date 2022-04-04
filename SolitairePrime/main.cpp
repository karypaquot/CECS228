// Karina Hernandez
// Class (CECS 282-01)
// Project Name (Prog 1 – Solitaire Prime)
// Due Date (9/13/21)
// 
// I certify that this program is my own original work. I did not copy any part of this program from 
//any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include "Card.h"
#include "Deck.h"
#include <string>
using namespace std;

//Checks if the result/sum is prime or not
bool isPrime(int n)
{
  int i = 0;
  int result = 0;
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      result = 1;
      break;
    }
  }
  if (result == 0 && n != 1)
    return true;
  else
    return false;
} 

int main() 
{
  
  bool playing = true; //initilizes playing to true
  int input;
  Deck newDeck; //creates a new deck object
  cout << "Welcome to Solitaire Prime!" << endl;
  //plays game until user exits by making playing = false
  while(playing)
  {
    cout << endl << "1) New Deck" << endl
      << "2) Display Deck" << endl 
      << "3) Shuffle Deck" << endl 
      << "4) Play Solitaire Prime" << endl 
      << "5) Exit" << endl;

    cin >> input;
    //Creates an unshuffled deck
    if (input == 1)
    {
      newDeck.refreshDeck();
      cout << "New deck has been refreshed!";
    }
    // displays all cards in a grid: 13 columns by 4 rows
    else if (input == 2)
    {
      newDeck.showDeck();
    }
    // randomly shuffle all cards in the deck
    else if (input == 3)
    {
      newDeck.shuffle();
      cout << "Deck has been shuffled!";
    }
    // plays the game automically until player wins or looses
    else if (input == 4)
    {
      cout << "Playing Solitaire Prime!!!" << endl ;
      int sum = 0;
      int x = 0;
        bool win = true;
        while (newDeck.cardsLeft() > 0)
        {
          while (newDeck.cardsLeft() > 0)
          {
            win = false;
            Card currentCard = newDeck.deal();
            currentCard.showCard();
            sum += currentCard.getValue();
            if (isPrime(sum))
            {
              cout << "Prime: " << sum;
              x++;
              win = true;
              break;
            }
          }
          cout << endl;
          sum = 0;
        }
      if (win == false)
      {
        cout << "Loser";
      }
      else
      {
        cout << endl << "Winner in " << x << " piles!\n";
        
      }
    }
    //exits the game by setting playing to false 
    else if (input == 5)
    {
      playing = false;
    }
    //checks if the users input is a valid option
    else
    {
      cout << "Enter a valid number.";
    cout << endl;
    }
  }
  return 0;
}
