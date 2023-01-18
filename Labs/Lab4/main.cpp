//Karina Hernandez
//Purnima Jain
//Richard Nguyen
// CECS 282 - 03
// Week 4, Lab 1
// 9/13/2021

#include "Airplane.h"
#include <iostream>
using namespace std;


int main() {
  Airplane A1("Lear Jet");
  Airplane A2("Boeing 747");


  int count = 0;
  double totalCrash = 0;
  while (count < 1000 || totalCrash <= 5) {
    A1.setAltitude();
    A2.setAltitude();
    
    if(A1.crash(A2)) {
      totalCrash++;
      A1.display();
      A2.display();
    }
    count++;
  }
  double percentage = totalCrash/1000;

  std::cout << "Crash Percentage: " << percentage << "%" << endl;
}
