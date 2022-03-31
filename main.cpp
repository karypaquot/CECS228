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

